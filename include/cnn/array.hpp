#pragma once

namespace cnn
{

template<typename Dtype>
class Array
{
 public:
    Array();
    ~Array();
    Array(const Array<Dtype>&) = delete;
    Array& operator=(const Array<Dtype>&) = delete;

    void init(int n, int c, int h, int w);

    /**
     * Return the element at n*c_*h_*w_ + c*h_*w_ + h*w_ + w,
     * i.e., (n*c_ + c)*h_*w_ + h*w_ + w,
     * i.e., ((n*c_ + c)*h_ + h)*w_ + w
     */
    Dtype at(int n, int c, int h, int w) const;
    Dtype& at(int n, int c, int h, int w);

    // no range check
    Dtype operator()(int n, int c, int h, int w) const;
    Dtype& operator()(int n, int c, int h, int w);

    Dtype operator[](int i) const;
    Dtype& operator[](int i);

    int n_;      //!< number of batches
    int c_;      //!< number of channels
    int h_;      //!< image height, i.e., number of rows
    int w_;      //!< image width, number of columns
    int total_;  //!< n_*c_*h_*w_, number of elements

    Dtype* d_;  //!< pointer to the data
};


}  // namespace cnn


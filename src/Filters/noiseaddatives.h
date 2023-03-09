#ifndef NOISEADDATIVES_H
#define NOISEADDATIVES_H
#include<opencv2/core/core.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace cv;
class NoiseAddatives
{
public:
    NoiseAddatives();
   ~NoiseAddatives();
    Mat GaussianNoise(const Mat SrcImg, Mat &DstImg,double Mean, double StdDev);
    Mat SaltAndPepperNoise();
    inline unsigned char Clamp(int n);
};

#endif // NOISEADDATIVES_H
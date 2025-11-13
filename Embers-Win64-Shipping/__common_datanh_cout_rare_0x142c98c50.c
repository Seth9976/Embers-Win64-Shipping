// 函数: __common_datanh_cout_rare
// 地址: 0x142c98c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double* r8 = arg2
double zmm1 = *arg1
arg2.b = *(arg1 + 7)
arg2.b &= 0x7f

if ((zx.d(*(arg1 + 6)) & 0x7ff0) != 0x7ff0)
    return 0

if (zmm1.d == 0)
    double var_8
    var_8:7.b = arg2.b
    
    if (var_8:4.d == 0x7ff00000)
        *r8 = zmm1 * 0.0
        return 1

*r8 = zmm1 * zmm1
return 0

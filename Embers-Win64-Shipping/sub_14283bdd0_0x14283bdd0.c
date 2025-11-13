// 函数: sub_14283bdd0
// 地址: 0x14283bdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = arg1
arg1 = 13500f

if (not(zmm1 >= 13500f))
    arg1 = _mm_max_ss(0x44bb8000, zmm1)

return sub_14283bdf4(arg1) __tailcall

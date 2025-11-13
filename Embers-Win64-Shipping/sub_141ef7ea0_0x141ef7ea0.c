// 函数: sub_141ef7ea0
// 地址: 0x141ef7ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *arg2

if ((rax & 1) != 0 && (rax & 2) == 0 && not(_mm_max_ss(*(arg1 + 0x1dc), 0) f<= 0.150000006f))
    bool cond:0_1
    
    if (arg3 != 0)
        int128_t zmm6
        zmm6.d = (*(arg2 + 0x1c)).d f- *(arg2 + 0x10)
        int128_t zmm7
        zmm7.d = (*(arg2 + 0x20)).d f- *(arg2 + 0x14)
        float zmm0_1 = sub_141ee6630(arg1)
        zmm7.d = zmm7.d f* zmm7.d
        zmm6.d = zmm6.d f* zmm6.d
        zmm7.d = zmm7.d f+ zmm6.d
        cond:0_1 = zmm7.d f<= zmm0_1 * zmm0_1
    
    if (arg3 == 0 || not(cond:0_1))
        return 1

return 0

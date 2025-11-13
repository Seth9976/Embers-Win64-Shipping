// 函数: sub_140d9f540
// 地址: 0x140d9f540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x5c)

if ((rax & 4) == 0)
    float zmm1[0x2]
    
    if ((rax & 2) == 0)
        int64_t* rcx = data_143e20d08
        (*(*rcx + 0x50))(rcx)
        arg2 = arg2 f- *(arg1 + 0x48)
        zmm1 = _mm_cvtps_pd(*(arg1 + 0x58))
    
    if ((rax & 2) != 0 || not(arg2 f> zmm1))
        return 1

return 0

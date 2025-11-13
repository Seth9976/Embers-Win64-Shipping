// 函数: sub_141ffbbd0
// 地址: 0x141ffbbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 8)
float zmm0

for (void* rdx_2 = &i[sx.q(*(arg1 + 0x10)) * 2]; i != rdx_2; i = &i[2])
    void* rcx = *i
    
    if (rcx != 0)
        zmm0 = *(rcx + 0x20)
        
        if (not(zmm0 == -3.39999995e+38f))
            *(rcx + 0x20) = zmm0 - arg2

void** i_1 = *(arg1 + 0x18)

for (void* rdx_5 = &i_1[sx.q(*(arg1 + 0x20)) * 2]; i_1 != rdx_5; i_1 = &i_1[2])
    void* rcx_1 = *i_1
    
    if (rcx_1 != 0)
        zmm0 = *(rcx_1 + 0x20)
        
        if (not(zmm0 == -3.39999995e+38f))
            *(rcx_1 + 0x20) = zmm0 - arg2

return i_1

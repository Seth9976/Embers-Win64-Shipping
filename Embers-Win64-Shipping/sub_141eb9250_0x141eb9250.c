// 函数: sub_141eb9250
// 地址: 0x141eb9250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = 0
int32_t i = 0
int64_t rdi = sx.q(arg1[1].d)
int32_t i_2 = -1

if (rdi.d s> 0)
    float* r10_1 = nullptr
    int32_t i_1
    
    do
        i_1 = i
        
        if (r8 != 0)
            return zx.q(i_2)
        
        int64_t rax_1 = *arg1
        float zmm2 = arg2[1] f- *(r10_1 + rax_1 + 4)
        float zmm1 = *arg2 f- *(r10_1 + rax_1)
        int64_t zmm0
        zmm0.d = arg2[2].d f- *(r10_1 + rax_1 + 8)
        zmm0.d = zmm0.d f* zmm0.d
        zmm2 = zmm2 * zmm2 + zmm1 * zmm1 f+ zmm0.d
        
        if (zmm2 < 0.0100000007f)
            r8 = 1
        
        i += 1
        r10_1 = &r10_1[3]
        
        if (zmm2 >= 0.0100000007f)
            i_1 = i_2
        
        i_2 = i_1
    while (i s< rdi.d)
    
    if (r8 != 0)
        return zx.q(i_1)

int32_t rax_4 = (rdi + 1).d
arg1[1].d = rax_4

if (rax_4 s> *(arg1 + 0xc))
    sub_140638a00(arg1)

int64_t rcx_1 = *arg1
int64_t rdx_1 = rdi * 3
*(rcx_1 + (rdx_1 << 2)) = *arg2
*(rcx_1 + (rdx_1 << 2) + 8) = arg2[2]
return zx.q(arg1[1].d - 1)

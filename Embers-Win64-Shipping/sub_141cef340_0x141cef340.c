// 函数: sub_141cef340
// 地址: 0x141cef340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 8)
int32_t zmm1 = arg2[1]
int32_t var_28 = *arg2
int32_t var_24 = zmm1
int32_t var_20 = arg2[2]
int64_t rdi = sx.q(*(*(*(r10 + 0xe0) + sx.q(arg4) * 0x28) + (sx.q(arg5) << 2)))
sub_141ce8da0(r10 + 0x1a8, rdi.d, data_143f36100, 0, &var_28)
int64_t rbx = data_143f36108
int128_t zmm6 = arg3 ^ data_142d3f780
void* const rcx_5

if (*(r10 + 0x1b0) == *(r10 + 0x1dc))
label_141cef430:
    rcx_5 = nullptr
else
    int32_t rax_5 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_2 = r10 + 0x1e0
    void* rcx_3 = *(r8_2 + 8)
    
    if (rcx_3 != 0)
        r8_2 = rcx_3
    
    int32_t rax_7 = *(r8_2 + (((sx.q(*(r10 + 0x1f0)) - 1) & sx.q(rax_5)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_141cef430_1:
        rcx_5 = nullptr
    else
        int64_t r8_3 = *(r10 + 0x1a8)
        
        while (true)
            int64_t rdx_4 = sx.q(rax_7) * 3
            rcx_5 = r8_3 + (rdx_4 << 3)
            
            if (*(r8_3 + (rdx_4 << 3)) == rbx)
                break
            
            rax_7 = *(rcx_5 + 0x10)
            
            if (rax_7 == 0xffffffff)
                goto label_141cef430_2
        
        if (rax_7 == 0xffffffff)
        label_141cef430_2:
            rcx_5 = nullptr

int64_t result = **(*(rcx_5 + 8) + 0x18)
*(result + (rdi << 2)) = zmm6.d
return result

// 函数: sub_141cef1c0
// 地址: 0x141cef1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 8)
int64_t rbx = data_143f35cc8
int64_t rdi = sx.q(
    *(*(rsi + 0x38) + sx.q(*(*(*(rsi + 0xe0) + sx.q(arg3) * 0x28) + (sx.q(arg4) << 2))) * 0x18))
void* const rcx_5

if (*(rsi + 0x158) == *(rsi + 0x184))
label_141cef280:
    rcx_5 = nullptr
else
    int32_t rax_6 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_2 = rsi + 0x188
    void* rcx_3 = *(r8_2 + 8)
    
    if (rcx_3 != 0)
        r8_2 = rcx_3
    
    int32_t rax_8 = *(r8_2 + (((sx.q(*(rsi + 0x198)) - 1) & sx.q(rax_6)) << 2))
    
    if (rax_8 == 0xffffffff)
    label_141cef280_1:
        rcx_5 = nullptr
    else
        int64_t r8_3 = *(rsi + 0x150)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_8) * 3
            rcx_5 = r8_3 + (rdx_3 << 3)
            
            if (*(r8_3 + (rdx_3 << 3)) == rbx)
                break
            
            rax_8 = *(rcx_5 + 0x10)
            
            if (rax_8 == 0xffffffff)
                goto label_141cef280_2
        
        if (rax_8 == 0xffffffff)
        label_141cef280_2:
            rcx_5 = nullptr

int64_t rdx_4 = rdi * 3
int64_t rax_10 = **(*(rcx_5 + 8) + 0x18)
uint128_t zmm1 = zx.o(*(rax_10 + (rdx_4 << 2)))
int32_t result = *(rax_10 + (rdx_4 << 2) + 8)
arg2[1] = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
arg2[2] = result.d
*arg2 = zmm1.d
return result

// 函数: sub_141cef050
// 地址: 0x141cef050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 8)
int64_t rbx = data_143f360f8
int64_t rdi = sx.q(*(*(*(rsi + 0xe0) + sx.q(arg3) * 0x28) + (sx.q(arg4) << 2)))
void* const rcx_4

if (*(rsi + 0x1b0) == *(rsi + 0x1dc))
label_141cef100:
    rcx_4 = nullptr
else
    int32_t rax_5 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = rsi + 0x1e0
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_7 = *(r8_1 + (((sx.q(*(rsi + 0x1f0)) - 1) & sx.q(rax_5)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_141cef100_1:
        rcx_4 = nullptr
    else
        int64_t r8_2 = *(rsi + 0x1a8)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_7) * 3
            rcx_4 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == rbx)
                break
            
            rax_7 = *(rcx_4 + 0x10)
            
            if (rax_7 == 0xffffffff)
                goto label_141cef100_2
        
        if (rax_7 == 0xffffffff)
        label_141cef100_2:
            rcx_4 = nullptr

int64_t rdx_4 = rdi * 3
int64_t rax_9 = **(*(rcx_4 + 8) + 0x18)
uint128_t zmm1 = zx.o(*(rax_9 + (rdx_4 << 2)))
int32_t result = *(rax_9 + (rdx_4 << 2) + 8)
arg2[1] = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
arg2[2] = result.d
*arg2 = zmm1.d
return result

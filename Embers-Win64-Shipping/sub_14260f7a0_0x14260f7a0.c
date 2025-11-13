// 函数: sub_14260f7a0
// 地址: 0x14260f7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi_3
int32_t rdi_1
uint32_t r13_1
int64_t r14_1
int64_t r15_1

if (arg1 != 0 && arg2 s>= 0 && arg2 s< *(*(arg1 + 8) + 0x24))
    r15_1 = *(arg1 + 0x28)
    rdi_1 = 0
    int64_t rsi_1 = sx.q(arg2)
    r14_1 = rsi_1 * 3
    rsi_3 = (rsi_1 << 5) + *(arg1 + 0x10)
    r13_1 = zx.d(*(r15_1 + (r14_1 << 2) + 9))

int512_t result

if (arg1 == 0 || arg2 s< 0 || arg2 s>= *(*(arg1 + 8) + 0x24) || r13_1 == 0)
label_14260f8eb:
    result.o = zx.o(0)
else
    uint32_t rbp_1 = zx.d(*(rsi_3 + 0x1e))
    int32_t rax_2 = *(r15_1 + (r14_1 << 2) + 4)
    
    while (true)
        char* r8_1 = zx.q((rax_2 + rdi_1) << 2) + *(arg1 + 0x38)
        char rax_5 = *r8_1
        int32_t* r11_1
        
        if (rax_5 u>= rbp_1.b)
            r11_1 =
                *(arg1 + 0x30) + (zx.q((zx.d(rax_5) - rbp_1 + *(r15_1 + (r14_1 << 2))) * 3) << 2)
        else
            r11_1 = *(arg1 + 0x18) + zx.q(*(rsi_3 + (zx.q(rax_5) << 1) + 4)) * 0xc
        
        char rax_12 = r8_1[1]
        int128_t* r10_1
        
        if (rax_12 u>= rbp_1.b)
            r10_1 =
                *(arg1 + 0x30) + (zx.q((zx.d(rax_12) - rbp_1 + *(r15_1 + (r14_1 << 2))) * 3) << 2)
        else
            r10_1 = *(arg1 + 0x18) + zx.q(*(rsi_3 + (zx.q(rax_12) << 1) + 4)) * 0xc
        
        char rax_19 = r8_1[2]
        int32_t* r9_1
        
        if (rax_19 u>= rbp_1.b)
            r9_1 =
                *(arg1 + 0x30) + (zx.q((zx.d(rax_19) - rbp_1 + *(r15_1 + (r14_1 << 2))) * 3) << 2)
        else
            r9_1 = *(arg1 + 0x18) + zx.q(*(rsi_3 + (zx.q(rax_19) << 1) + 4)) * 0xc
        
        int32_t arg_8
        char rax_26
        rax_26, result = sub_1426076f0(arg3, r11_1, r10_1, r9_1, &arg_8)
        
        if (rax_26 != 0)
            result.o = arg_8
            break
        
        rax_2 = *(r15_1 + (r14_1 << 2) + 4)
        rdi_1 += 1
        
        if (rdi_1 s>= r13_1)
            goto label_14260f8eb

return result

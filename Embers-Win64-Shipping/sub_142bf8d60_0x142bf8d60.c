// 函数: sub_142bf8d60
// 地址: 0x142bf8d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_1 = arg2 u>> 0x18
uint8_t rdi_1 = (arg2 u>> 0x10).b
int32_t r10_2 = (zx.d(*(arg1 + 4)) << 8) - 1
uint8_t arg_12 = (arg2 u>> 8).b
int32_t r11 = 0
uint32_t result = zx.d(*(arg1 + 5))
int32_t r10_3 = r10_2 + result

if (r10_2 + result s>= 0)
    do
        uint64_t rax_3 = zx.q((r11 + r10_3) u>> 1)
        int32_t r9_1 = rax_3.d
        uint32_t r8_6 = (zx.d((r8_1.b.d u>> 0x10).b) << 8) + zx.d(arg2.b) + (r8_1 << 0x18)
            + (zx.d(rdi_1) << 0x10)
        int32_t rax_5 = *(arg1 + 0xc + rax_3 * 0x10)
        char arg_10
        arg_10.d = rax_5
        uint32_t rcx_7 = (zx.d(rax_5.b) << 0x18) + (zx.d((rax_5 u>> 0x10).b) << 8)
            + (zx.d(rdi_1) << 0x10) + zx.d(arg2.b)
        int32_t rax_7
        
        if (rcx_7 u>= r8_6)
            rax_7.b = rcx_7 != r8_6
        else
            rax_7 = -1
        
        result = neg.d(rax_7)
        
        if (result s>= 0)
            if (result s<= 0)
                if (arg3 != 0)
                    *arg3 = r9_1
                
                result.b = 1
                goto label_142bf8e65
            
            r11 = r9_1 + 1
        else
            r10_3 = r9_1 - 1
    while (r11 s<= r10_3)

if (arg3 != 0)
    *arg3 = 0xffff

result.b = 0
label_142bf8e65:
return result

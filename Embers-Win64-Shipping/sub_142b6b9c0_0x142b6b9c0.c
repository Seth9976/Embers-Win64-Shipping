// 函数: sub_142b6b9c0
// 地址: 0x142b6b9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int64_t r11 = sx.q(arg9)
int32_t r8 = arg4
void* r10_1 = sx.q(*(arg2 + 0x14)) + arg2
uint64_t i_2 = zx.q(*(r10_1 + (r11 << 1)))
void* r10_3 = sx.q(*(arg2 + 0x18)) + arg2
int32_t r10_4 = *(r10_3 + (r11 << 2))
bool cond:0

if (arg4 != 0)
    cond:0 = (r10_4 & 0x20000000) != 0
else
    result = r10_4 & 0xa0000000
    cond:0 = result != 0x80000000

int32_t r11_1

if (cond:0)
    r11_1 = arg5
else
    r11_1 = arg5
    
    if ((r10_4 u>> 0x18 & 0x1f) s>= r11_1)
        int32_t rax_1
        rax_1.b = arg6 u> 0xffff
        
        if (arg8 != rax_1 + 1)
            result = arg3[3](*arg3, arg7, arg8)
        else
            result = arg3[1](*arg3, zx.q(arg6), arg8)
        
        r8 = arg4
        r11_1 = arg5

uint64_t i_1 = i_2

if (i_2.d != 0)
    int64_t rdx_2 = sx.q(arg8)
    void* rbx = r10_3 + (r11 << 2) + 4
    int64_t r9 = arg7
    void* rdi_1 = r10_1 + (r11 << 1) + 2
    int16_t* r10_7 = r9 + (rdx_2 << 1)
    int16_t* var_28_1 = r10_7
    uint64_t i
    
    do
        *r10_7 = *rdi_1
        result = *rbx
        
        if (result != 0)
            if (result u>= 0x1000000)
                bool cond:1_1
                
                if (r8 != 0)
                    cond:1_1 = (result & 0x20000000) != 0
                else
                    cond:1_1 = (result & 0xa0000000) != 0x80000000
                
                if (not(cond:1_1))
                    result = result u>> 0x18 & 0x1f
                    
                    if (result s>= r11_1)
                        result = arg3[3](*arg3, r9, zx.q((rdx_2 + 1).d))
                        goto label_142b6bb56
            else
                result = sub_142b6b9c0(arg1, arg2, arg3, zx.q(r8), r11_1, arg6, r9, (rdx_2 + 1).d, 
                    result, arg10, var_28_1)
            label_142b6bb56:
                r10_7 = var_28_1
                r9 = arg7
                rdx_2 = zx.q(arg8)
        
        r8 = arg4
        rdi_1 += 2
        r11_1 = arg5
        rbx += 4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

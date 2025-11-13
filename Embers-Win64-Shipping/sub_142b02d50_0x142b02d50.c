// 函数: sub_142b02d50
// 地址: 0x142b02d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_10 = arg2
char* result_2 = *(arg1 + 0x10)
int16_t* r14 = *(arg1 + 0x20)
uint64_t r15 = arg2
int64_t r12 = *(arg1 + 0x18)
void* rcx = *(arg1 + 8)
uint64_t result_1 = result_2
void* rsi = *(rcx + 0x10)

if (*(rsi + 0x6c) == 1)
    return sub_142b04870(arg1, arg2)

uint64_t result = *(rsi + 0x50)
char r9 = *(rcx + 0x3f)
void* r13 = *(result + 0x30)
char arg_8 = r9

if (*(rsi + 0x68) != 0)
    goto label_142b02ded

uint32_t rbx_1

if (*(rcx + 0x40) != 1)
label_142b02e34:
    
    while (result_2 u< r12)
        if (r14 u>= *(arg1 + 0x28))
            *arg_10 = 0xf
            break
        
        rbx_1 = zx.d(*result_2)
        result_2 = &result_2[1]
        
        if (rbx_1 == 0xf)
            bool cond:1_1 = *(rsi + 0x70) == 0
            *(rsi + 0x60) = 0
            
            if (not(cond:1_1))
                *(rsi + 0x70) = 0
                *arg_10 = 0x12
                *(*(arg1 + 8) + 0x11c) = 2
                *(*(arg1 + 8) + 0x41) = rbx_1.b
                result = *(arg1 + 8)
                *(result + 0x40) = 1
                *(arg1 + 0x10) = result_2
                goto label_142b03058
        else if (rbx_1 != 0xe)
            if (rbx_1 == 0x1b)
                r15 = arg_10
                result_1 = result_2 - 1
            label_142b02ded:
                *(rsi + 0x70) = 0
                result = sub_142b04a80(*(arg1 + 8), &result_1, r12, 2, r15)
                
                if (*r15 s> 0)
                    result = result_1
                    *(arg1 + 0x10) = result
                    goto label_142b03058
                
                result_2 = result_1
            else
                bool cond:2_1 = *(rsi + 0x60) != 1
                *(rsi + 0x70) = 0
                int32_t rdx_1
                
                if (cond:2_1)
                    if (rbx_1 u<= 0x7f)
                        result = sub_142afc870(r13, &result_2[-1], 1, r9)
                        goto label_142b02f3a
                    
                    rdx_1 = 0xffff
                label_142b02fde:
                    void* rcx_12 = *(arg1 + 8)
                    uint32_t r8_4 = zx.d(rbx_1.w)
                    
                    if (r8_4 u<= 0xff)
                        *(rcx_12 + 0x41) = r8_4.b
                        *(rcx_12 + 0x40) = 1
                    else
                        *(rcx_12 + 0x42) = r8_4.b
                        *(rcx_12 + 0x41) = (r8_4 u>> 8).b
                        *(rcx_12 + 0x40) = 2
                    
                    result = 0xc
                    
                    if (rdx_1 == 0xfffe)
                        result = 0xa
                    
                    *arg_10 = result.d
                    *(arg1 + 0x10) = result_2
                    goto label_142b03058
                
                if (result_2 u>= r12)
                    *(*(arg1 + 8) + 0x41) = rbx_1.b
                    result = *(arg1 + 8)
                    *(result + 0x40) = 1
                    *(arg1 + 0x10) = result_2
                    goto label_142b03058
                
            label_142b02ebc:
                char r15_1 = *result_2
                rdx_1 = 0xffff
                int32_t r8_2
                r8_2.b = r15_1 - 0x21 u<= 0x5d
                
                if (rbx_1.b - 0x21 u> 0x5d || r15_1 - 0x21 u> 0x5d)
                    if (r8_2 != 0)
                        goto label_142b02fde
                    
                    if (r15_1 u>= 0x20 || (1 << r15_1 & 0x800c000) == 0)
                        result_2 = &result_2[1]
                        rbx_1.w <<= 8
                        rbx_1.w |= zx.w(r15_1)
                    
                    goto label_142b02fde
                
                char arg_18 = rbx_1.b - 0x80
                char arg_19 = r15_1 - 0x80
                result_2 = &result_2[1]
                result = sub_142afc870(r13, &arg_18, 2, r9)
                rbx_1.w <<= 8
                rbx_1.w |= zx.w(r15_1)
            label_142b02f3a:
                rdx_1 = result.d
                
                if (result.d s>= 0xfffe)
                    goto label_142b02fde
                
                int64_t r8_3 = *(arg1 + 0x30)
                
                if (r8_3 != 0)
                    int32_t rax_6
                    rax_6.b = rbx_1.w u> 0xff
                    result = (r14 - *(arg1 + 0x20)) s>> 1
                    *(r8_3 + (result << 2)) = result_2.d - (rax_6 + 1) - *(arg1 + 0x10)
                
                *r14 = rdx_1.w
                r14 = &r14[1]
            
            r9 = arg_8
        else
            *(rsi + 0x60) = 1
            *(rsi + 0x70) = 1
else if (result_2 u< r12)
    if (r14 u>= *(arg1 + 0x28))
        goto label_142b02e34
    
    rbx_1 = zx.d(*(rcx + 0x41))
    *(rcx + 0x40) = 0
    goto label_142b02ebc
*(arg1 + 0x10) = result_2
label_142b03058:
*(arg1 + 0x20) = r14
return result

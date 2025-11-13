// 函数: sub_142afbee0
// 地址: 0x142afbee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 8)
int16_t* result_2 = *(arg1 + 0x20)
char* r9 = *(arg1 + 0x10)
int32_t* r8 = *(arg1 + 0x30)
int64_t r12 = *(arg1 + 0x18)
int64_t r15 = *(arg1 + 0x28)
char* arg_20 = r9
int16_t* result_1 = result_2
int32_t* arg_8 = r8
void* rax = *(r14 + 0x30)
int64_t r13

if ((*(r14 + 0x38) & 0x10) == 0)
    r13 = *(rax + 0x38)
else
    r13 = *(rax + 0x40)

int32_t rbx = 0

if (r9 u< r12)
    while (true)
        int16_t* result_4 = result_1
        
        if (result_4 u< r15)
            uint64_t rax_1 = zx.q(*r9)
            r9 = &r9[1]
            int32_t rdx = *(r13 + (rax_1 << 2))
            arg_20 = r9
            
            if (rdx s>= 0x80100000)
                uint8_t rcx_1 = (rdx u>> 0x14).b & 0xf
                int16_t* result_3
                
                if (((rcx_1 - 1) & 0xfd) != 0)
                    if (rcx_1 == 2)
                        result_3 = result_1
                    label_142afc09e:
                        *result_3 = rdx.w
                        goto label_142afc0a1
                    
                    if (rcx_1 == 6)
                        if (*arg2 s> 0)
                            break
                        
                        *(arg1 + 0x10) = r9
                        *(r14 + 0x41) = r9[-1]
                        void* rdx_1 = *(*(r14 + 0x30) + 0x120)
                        void* rax_4
                        
                        if (rdx_1 != 0)
                            rax_4 = sub_142b6ca00(r14, rdx_1, 1, &arg_20, r12.d, &result_1, r15, 
                                &arg_8, rbx, *(arg1 + 2), arg2)
                        
                        if (rdx_1 == 0 || rax_4.b == 0)
                            *arg2 = 0xa
                            rax_4.b = 1
                        else
                            rax_4.b = 0
                        
                        *(r14 + 0x40) = rax_4.b
                        r9 = arg_20
                        r8 = arg_8
                        rbx += r9.d - *(arg1 + 0x10)
                        
                        if (*arg2 s> 0)
                            break
                    else if (rcx_1 == 7)
                        *arg2 = 0xc
                        break
                    
                    goto label_142afc0c2
                
                rdx &= 0xfffff
                *result_1 = (rdx s>> 0xa).w | 0xd800
                int32_t* rcx_6 = arg_8
                result_3 = &result_1[1]
                result_1 = result_3
                
                if (rcx_6 != 0)
                    *rcx_6 = rbx
                    arg_8 = &arg_8[1]
                    result_3 = result_1
                
                rdx.w &= 0x3ff
                rdx.w |= 0xdc00
                
                if (result_3 u< r15)
                    goto label_142afc09e
                
                *(r14 + 0x90) = rdx.w
                *(r14 + 0x5d) = 1
                r9 = arg_20
                r8 = arg_8
            else
                *result_4 = rdx.w
            label_142afc0a1:
                result_1 = &result_1[1]
                r8 = arg_8
                
                if (r8 != 0)
                    *r8 = rbx
                    r8 = &arg_8[1]
                    arg_8 = r8
                
                r9 = arg_20
            label_142afc0c2:
                rbx += 1
                
                if (r9 u>= r12)
                    break
                
                continue
        
        *arg2 = 0xf
        break

int16_t* result = result_1
*(arg1 + 0x20) = result
*(arg1 + 0x10) = r9
*(arg1 + 0x30) = r8
return result

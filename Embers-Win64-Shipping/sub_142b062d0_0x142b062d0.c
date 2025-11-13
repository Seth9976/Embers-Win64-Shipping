// 函数: sub_142b062d0
// 地址: 0x142b062d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg1 + 0x18)
int64_t result = *(arg1 + 8)
char* rbp = *(arg1 + 0x10)
int16_t* r14 = *(arg1 + 0x20)
int64_t arg_18 = r9
int64_t* r15 = *(result + 0x10)
int16_t arg_8 = 0

while (rbp u< r9)
    if (r14 u>= *(arg1 + 0x28))
        *arg2 = 0xf
        break
    
    void* rdx = *(arg1 + 8)
    uint32_t rbx_1 = zx.d(*rbp)
    rbp = &rbp[1]
    
    if (*(rdx + 0x4c) == 0x7e)
        *(rdx + 0x4c) = 0
        
        if (rbx_1 != 0xa)
            if (rbx_1 == 0x7b || rbx_1 == 0x7d)
                result.b = rbx_1 == 0x7b
                *(r15 + 0x11) = result.b
                
                if (*(r15 + 0x13) != 0)
                    *(r15 + 0x13) = 0
                    *arg2 = 0x12
                    *(*(arg1 + 8) + 0x11c) = 2
                    *(*(arg1 + 8) + 0x41) = 0x7e
                    *(*(arg1 + 8) + 0x42) = rbx_1.b
                    result = *(arg1 + 8)
                    *(result + 0x40) = 2
                    break
                
                *(r15 + 0x13) = 1
            else
                if (rbx_1 != 0x7e)
                    *(r15 + 0x13) = 0
                    *arg2 = 0x12
                    *(*(arg1 + 8) + 0x41) = 0x7e
                    
                    if (*(r15 + 0x11) != 0)
                        if (rbx_1 - 0x21 u<= 0x5d)
                            goto label_142b06501
                        
                        *(*(arg1 + 8) + 0x42) = rbx_1.b
                        result = *(arg1 + 8)
                        *(result + 0x40) = 2
                        break
                    
                    int32_t r12_1
                    r12_1.b = rbx_1 s<= 0x7f
                    
                    if (r12_1 != 0)
                    label_142b06501:
                        result = *(arg1 + 8)
                        rbp -= 1
                        *(result + 0x40) = 1
                        break
                    
                label_142b06570:
                    *(*(arg1 + 8) + 0x42) = rbx_1.b
                    result = *(arg1 + 8)
                    *(result + 0x40) = 2
                    break
                
                int64_t rdx_1 = *(arg1 + 0x30)
                
                if (rdx_1 != 0)
                    result = (r14 - *(arg1 + 0x20)) s>> 1
                    *(rdx_1 + (result << 2)) = rbp.d - *(arg1 + 0x10) - 2
                
                *r14 = 0x7e
                *(r15 + 0x13) = 0
                r14 = &r14[1]
    else
        uint32_t r8_1
        
        if (*(r15 + 0x11) != 0)
            result = zx.q(*(rdx + 0x48))
            
            if (result.d != 0)
                uint32_t rsi_1 = zx.d(result.b)
                r8_1 = 0xffff
                int32_t r9_1
                r9_1.b = rbx_1.b - 0x21 u<= 0x5d
                
                if (rsi_1.b - 0x21 u> 0x5c || rbx_1.b - 0x21 u> 0x5d)
                    if (r9_1 == 0)
                        rsi_1 |= 0x100
                        goto label_142b06443
                    
                    result = *(arg1 + 8)
                    rbp -= 1
                    r9 = arg_18
                    rbx_1 = rsi_1
                    *(result + 0x48) = 0
                else
                    arg_8.b = rsi_1.b - 0x80
                    arg_8:1.b = rbx_1.b - 0x80
                    r8_1 = sub_142afc870(*(*r15 + 0x30), &arg_8, 2, *(rdx + 0x3f))
                label_142b06443:
                    result = *(arg1 + 8)
                    r9 = arg_18
                    rbx_1 |= rsi_1 << 8
                    *(result + 0x48) = 0
                
                goto label_142b06472
            
            if (rbx_1 != 0x7e)
                *(rdx + 0x48) = rbx_1 | 0x100
                *(r15 + 0x13) = 0
            else
                *(rdx + 0x4c) = 0x7e
        else if (rbx_1 != 0x7e)
            *(r15 + 0x13) = 0
            
            if (rbx_1 s> 0x7f)
            label_142b06550:
                *arg2 = 0xc
            label_142b06558:
                void* rax_15 = *(arg1 + 8)
                
                if (rbx_1 s> 0xff)
                    *(rax_15 + 0x41) = (rbx_1 s>> 8).b
                    goto label_142b06570
                
                *(rax_15 + 0x41) = rbx_1.b
                result = *(arg1 + 8)
                *(result + 0x40) = 1
                break
            
            r8_1 = rbx_1
        label_142b06472:
            
            if (r8_1 s>= 0xfffe)
                if (r8_1 != 0xfffe)
                    goto label_142b06550
                
                *arg2 = 0xa
                goto label_142b06558
            
            int64_t rdx_3 = *(arg1 + 0x30)
            
            if (rdx_3 != 0)
                result = (r14 - *(arg1 + 0x20)) s>> 1
                *(rdx_3 + (result << 2)) = rbp.d - sx.d(*(r15 + 0x11)) - *(arg1 + 0x10) - 1
            
            *r14 = r8_1.w
            r14 = &r14[1]
        else
            *(rdx + 0x4c) = 0x7e

*(arg1 + 0x20) = r14
*(arg1 + 0x10) = rbp
return result

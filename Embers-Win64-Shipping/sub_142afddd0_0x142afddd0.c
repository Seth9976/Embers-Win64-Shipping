// 函数: sub_142afddd0
// 地址: 0x142afddd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)
int16_t* rbp = *(arg1 + 0x10)
int64_t rdx = *(arg1 + 0x18)
int32_t* r10 = *(arg1 + 0x30)
int64_t r8 = *(rdi + 0x30)
uint64_t result = zx.q(*(rdi + 0x54))
char* r9 = *(arg1 + 0x20)
int64_t r14 = *(arg1 + 0x28)
int64_t arg_20 = r8
int64_t arg_18 = rdx
int32_t rbx

if (result.d == 0 || r9 u>= r14)
    rbx = 0
    goto label_142afde33

*(rdi + 0x54) = 0
rbx = -1
int32_t r12_1 = 0
label_142afdec2:

if (rbp u>= rdx)
    *(rdi + 0x54) = result.d
else if (test_bit(result.d, 0xa))
    *(rdi + 0x54) = result.d
    *arg2 = 0xc
else
    uint32_t rdx_1 = zx.d(*rbp)
    
    if ((rdx_1 & 0xfffffc00) != 0xdc00)
        rdx = arg_18
        *(rdi + 0x54) = result.d
        *arg2 = 0xc
    else
        rbp = &rbp[1]
        result = zx.q(((result.d - 0xd7f7) << 0xa) + rdx_1)
        r12_1 += 1
        
        while (true)
            void arg_8
            char* r11_1 = &arg_8
            int32_t rcx_7 = result.d
            
            if (r14 - r9 s>= 4)
                r11_1 = r9
            
            int32_t rsi_1
            
            if (result.d s> 0xffff)
                rsi_1 = 3
                *r11_1 = (rcx_7 s>> 0x12).b | 0xf0
                r11_1[1] = ((result.d s>> 0xc).b & 0x3f) | 0x80
            else
                rsi_1 = 2
                *r11_1 = (rcx_7 s>> 0xc).b | 0xe0
            
            char r8_2 = (result.d s>> 6).b
            result.b &= 0x3f
            char* rcx_13 = zx.q(rsi_1)
            result.b |= 0x80
            *(sx.q(rsi_1 - 1) + r11_1) = (r8_2 & 0x3f) | 0x80
            *(rcx_13 + r11_1) = result.b
            
            if (r11_1 != r9)
                int64_t rdx_3 = 1
                int64_t rax_2 = &arg_8 + rcx_13
                void* r8_5 = rax_2 - r11_1 + 1
                result = 0
                
                if (r11_1 u> rax_2)
                    r8_5 = nullptr
                
                if (1 u<= r8_5)
                    do
                        if (r9 u>= r14)
                            result = zx.q(*r11_1)
                            *(sx.q(*(rdi + 0x5b)) + rdi + 0x68) = result.b
                            *(rdi + 0x5b) += 1
                            *arg2 = 0xf
                        else
                            *r10 = rbx
                            r10 = &r10[1]
                            result = zx.q(*r11_1)
                            *r9 = result.b
                            r9 = &r9[1]
                        
                        r11_1 = &r11_1[1]
                        rdx_3 += 1
                    while (rdx_3 u<= r8_5)
            else
                result = zx.q(rsi_1 + 1)
                *r10 = rbx
                r9 = &r9[zx.q(result.d)]
                r10[1] = rbx
                r10[2] = rbx
                
                if (rsi_1 u>= 3)
                    r10[3] = rbx
                
                r10 = &r10[result]
            
            rdx = arg_18
            r8 = arg_20
            rbx = r12_1
        label_142afde33:
            
            if (rbp u>= rdx)
                goto label_142afe03b
            
            if (r9 u>= r14)
                break
            
            result = zx.q(*rbp)
            rbp = &rbp[1]
            
            if (result.d s< 0x80)
                *r10 = rbx
                r10 = &r10[1]
                rbx += 1
                *r9 = result.b
                r9 = &r9[1]
                goto label_142afde33
            
            int32_t rcx = result.d
            
            if (result.d s< 0x800)
                result.b &= 0x3f
                *r10 = rbx
                *r9 = (rcx s>> 6).b | 0xc0
                r10 = &r10[1]
                r9 = &r9[1]
                result.b |= 0x80
                
                if (r9 u>= r14)
                    *(rdi + 0x68) = result.b
                    *(rdi + 0x5b) = 1
                    *arg2 = 0xf
                    goto label_142afde33
                
                *r10 = rbx
                r10 = &r10[1]
                rbx += 1
                *r9 = result.b
                r9 = &r9[1]
                goto label_142afde33
            
            r12_1 = rbx + 1
            
            if ((rcx & 0xfffff800) == 0xd800)
                if (r8 != &data_1436646f0)
                    goto label_142afdec2

if (rbp u< rdx && r9 u>= r14 && *arg2 s<= 0)
    *arg2 = 0xf

label_142afe03b:
*(arg1 + 0x20) = r9
*(arg1 + 0x10) = rbp
*(arg1 + 0x30) = r10
return result

// 函数: sub_142b62570
// 地址: 0x142b62570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg5

if (*rdi s> 0)
    int64_t rax
    rax.b = 0
    return rax

int16_t rax_1 = *(arg2 + 8)
uint64_t rbx = 0
void* rsi

if ((rax_1.b & 0x11) == 0)
    rsi = arg2 + 0xa
    
    if ((rax_1.b & 2) == 0)
        rsi = *(arg2 + 0x18)
else
    rsi = nullptr

int32_t r15_1

if (rax_1 s< 0)
    r15_1 = *(arg2 + 0xc)
else
    r15_1 = sx.d(rax_1) s>> 5

int16_t var_48 = 0
sub_142a4afe0(arg1)
int16_t rax_2 = *(arg1 + 8)
int32_t r8_1

if (rax_2 s< 0)
    r8_1 = *(arg1 + 0xc)
else
    r8_1 = sx.d(rax_2) s>> 5

sub_142a49390(arg1, 0, r8_1, &var_48, 0, 1)
int32_t r13 = -1
int64_t r12
r12.b = 0
int32_t r14 = 0

if (r15_1 s> 0)
    while (true)
        int64_t rax_3 = sx.q(rbx.d)
        rbx = zx.q(rbx.d + 1)
        int16_t rdi_1 = *(rsi + (rax_3 << 1))
        
        if (rdi_1 != 0x27)
            if (r12.b != 0 || rdi_1 != 0x7b)
                goto label_142b62682
            
            if (r14 s> 0)
                int16_t rax_7 = *(arg1 + 8)
                int32_t rdx_5
                
                if (rax_7 s< 0)
                    rdx_5 = *(arg1 + 0xc)
                else
                    rdx_5 = sx.d(rax_7) s>> 5
                
                sub_142a4a800(arg1, rdx_5 - r14 - 1, 0x100 + r14.w)
                r14 = 0
            
            int32_t rdx_8 = (rbx + 1).d
            uint64_t rcx_5
            
            if (rdx_8 s< r15_1)
                rcx_5 = zx.q(zx.d(*(rsi + (sx.q(rbx.d) << 1))) - 0x30)
            
            if (rdx_8 s>= r15_1 || rcx_5.d u> 9 || *(rsi + (sx.q(rdx_8) << 1)) != 0x7d)
                if (rbx.d s>= r15_1)
                    *arg5 = 1
                    goto label_142b62887
                
                int64_t rax_10 = sx.q(rbx.d)
                rbx = sx.q(rdx_8)
                int16_t r8_3 = *(rsi + (rax_10 << 1))
                
                if (r8_3 - 0x31 u> 8)
                    *arg5 = 1
                    goto label_142b62887
                
                uint64_t rdx_9 = rbx
                rcx_5 = zx.q(zx.d(r8_3) - 0x30)
                int64_t r9_2 = sx.q(r15_1)
                
                if (rbx s< r9_2)
                    do
                        r8_3 = *(rsi + (rdx_9 << 1))
                        rbx = zx.q(rbx.d + 1)
                        rdx_9 += 1
                        
                        if (r8_3 - 0x30 u> 9)
                            break
                        
                        rcx_5 = zx.q(zx.d(r8_3) + (((rcx_5 * 5).d - 0x18) << 1))
                        
                        if (rcx_5.d s>= 0x100)
                            break
                    while (rdx_9 s< r9_2)
                
                if (rcx_5.d s< 0 || r8_3 != 0x7d)
                    *arg5 = 1
                    goto label_142b62887
            else
                rbx = zx.q(rbx.d + 2)
            
            var_48 = rcx_5.w
            
            if (rcx_5.d s> r13)
                r13 = rcx_5.d
            
            sub_142a48d70(arg1, &var_48, 0, 1)
        else
            if (rbx.d s< r15_1)
                rdi_1 = *(rsi + (sx.q(rbx.d) << 1))
            
            if (rbx.d s>= r15_1 || rdi_1 != 0x27)
                if (r12.b == 0)
                    if ((0xfffd & (rdi_1 - 0x7b)) == 0)
                        rbx = zx.q(rbx.d + 1)
                        r12.b = 1
                    else
                        rdi_1 = 0x27
                    
                    goto label_142b62682
                
                r12.b = 0
            else
                rbx = zx.q(rbx.d + 1)
            label_142b62682:
                
                if (r14 == 0)
                    var_48 = 0xffff
                    sub_142a48d70(arg1, &var_48, 0, r14 + 1)
                
                var_48 = rdi_1
                sub_142a48d70(arg1, &var_48, 0, 1)
                r14 += 1
                
                if (r14 == 0xfeff)
                    r14 = 0
        
        if (rbx.d s>= r15_1)
            if (r14 s> 0)
                int16_t rax_5 = *(arg1 + 8)
                int32_t rdx_3
                
                if (rax_5 s< 0)
                    rdx_3 = *(arg1 + 0xc)
                else
                    rdx_3 = sx.d(rax_5) s>> 5
                
                sub_142a4a800(arg1, rdx_3 - r14 - 1, 0x100 + r14.w)
            
            rdi = arg5
            break

int32_t* rax_14 = zx.q(r13 + 1)

if (rax_14.d s< arg3 || arg4 s< rax_14.d)
    *rdi = 1
label_142b62887:
    rax_14.b = 0
else
    sub_142a4a800(arg1, 0, rax_14.w)
    rax_14.b = 1

return rax_14

// 函数: sub_1418042f0
// 地址: 0x1418042f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int64_t var_10 = 0
sub_140596d10(arg1, arg2)
int64_t var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 4)
int32_t rax = var_20 + 4
var_20 = rax

if (rax s> 0)
    sub_140594770(&var_28)

int64_t rbx = var_28
UnDecorator::getReferenceType(rbx, &data_142d62df8, 8)
sub_14060a620(arg2, &var_28, &var_18, arg1, 1, 0)

if (rbx != 0)
    sub_140a74f90(rbx)

int16_t* r10 = *arg1
uint64_t rdx_2 = sx.q(arg1[1].d)
int16_t* rcx_5 = r10
void* r8_1 = &r10[rdx_2]

if (r10 != r8_1)
    do
        int16_t rax_2 = *rcx_5
        
        if (rax_2 u<= 0x3f && test_bit(-0x7bff800000000000, zx.q(rax_2)))
            int32_t rcx_7 = ((rcx_5 - r10) s>> 1).d
            
            if (rcx_7 != 0xffffffff)
                int32_t temp0_1 = rdx_2.d
                int32_t rax_4 = (rdx_2 - 1).d
                int32_t rbx_1 = (rdx_2 - 1).d
                
                if (temp0_1 == 0)
                    rax_4 = -1
                
                if (temp0_1 == 0)
                    rbx_1 = -1
                
                if (temp0_1 == 0)
                    rax_4 = 0
                
                int32_t r9_1
                
                if (rcx_7 s>= 0)
                    r9_1 = rax_4
                    
                    if (rcx_7 s< rax_4)
                        r9_1 = rcx_7
                else
                    r9_1 = 0
                
                if (rdx_2.d == 0)
                    rbx_1 = 0
                
                int32_t rbx_2 = rbx_1 - r9_1
                int32_t rax_5 = rax_4 - r9_1
                
                if (rax_4 - r9_1 s>= 0)
                    if (rax_5 s< rbx_2)
                        rbx_2 = rax_5
                    
                    if (rbx_2 != 0)
                        int32_t rax_7 = rdx_2.d - rbx_2
                        
                        if (rax_7 != r9_1)
                            memmove(&r10[sx.q(r9_1)], &r10[sx.q(rbx_2 + r9_1)], (rax_7 - r9_1) * 2)
                            rdx_2 = zx.q(arg1[1].d)
                        
                        arg1[1].d = rdx_2.d - rbx_2
            
            break
        
        rcx_5 = &rcx_5[1]
    while (rcx_5 != r8_1)

int64_t rcx_10 = var_18

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return arg1

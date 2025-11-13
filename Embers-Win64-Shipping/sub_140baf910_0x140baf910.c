// 函数: sub_140baf910
// 地址: 0x140baf910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 2)
int32_t rax = var_10 + 2
var_10 = rax

if (rax s> 0)
    sub_140594770(&var_18)

int64_t rdi = var_18
UnDecorator::getReferenceType(rdi, &data_142e51e18, 4)
char rsi_1 = sub_14060a620(arg1, &var_18, arg2, arg3, 0, 0).b

if (rdi != 0)
    sub_140a74f90(rdi)

int32_t result

if (rsi_1 == 0)
    result.b = 0
else
    if (arg3 != 0 && sub_140a237d0(arg3, &data_142e51e18, 0).b != 0)
        int32_t rcx_6 = arg3[1].d
        int32_t r10_1 = 0
        int32_t rax_1 = rcx_6 - 1
        
        if (rcx_6 == 0)
            rax_1 = -1
        
        int32_t rdi_1 = rcx_6 - 1
        
        if (rcx_6 == 0)
            rax_1 = 0
        
        if (rax_1 - 1 s>= 0)
            r10_1 = rax_1 - 1
        
        if (rcx_6 == 0)
            rdi_1 = -1
        
        if (rcx_6 == 0)
            rdi_1 = 0
        
        int32_t rdi_2 = rdi_1 - r10_1
        
        if (rdi_2 s> 1)
            rdi_2 = 1
        
        if (rdi_2 != 0)
            int32_t rax_4 = rcx_6 - rdi_2
            
            if (rax_4 != r10_1)
                int64_t r9_1 = *arg3
                memmove(r9_1 + (sx.q(r10_1) << 1), r9_1 + (sx.q(rdi_2 + r10_1) << 1), 
                    (rax_4 - r10_1) * 2)
                rcx_6 = arg3[1].d
            
            arg3[1].d = rcx_6 - rdi_2
    
    result.b = 1

return result

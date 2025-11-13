// 函数: sub_140948870
// 地址: 0x140948870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140948320(arg1)
*arg1 = &data_142e32690
int64_t rax = sub_140985e70()
arg1[0x46] = rax
void* const rdx_1

if (rax == 0)
    rdx_1 = nullptr
else
    void* rax_1 = sub_140986520()
    
    if (rax_1 == 0)
        rdx_1 = nullptr
    else
        rdx_1 = arg1[0x46]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdx_1 = nullptr

int64_t arg_8 = *(rdx_1 + 0x18)
int64_t var_18
sub_140b63b70(&arg_8, &var_18)

if (&arg1[0x44] == &var_18)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    return arg1

int64_t rcx_2 = arg1[0x44]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x44] = var_18
int32_t var_10
arg1[0x45].d = var_10
int32_t var_c
*(arg1 + 0x22c) = var_c
return arg1

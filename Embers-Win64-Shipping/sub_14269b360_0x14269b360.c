// 函数: sub_14269b360
// 地址: 0x14269b360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x28) == 0 || *(arg1 + 8) == 0)
    return 

int64_t rax = sub_14269ce80()

if (rax == 0)
    return 

void* rdx = *(arg1 + 8)
int64_t r8_1 = rax + 0x30
rax = sx.q(*(rax + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != r8_1 || rdx == 0)
    return 

void* rax_1 = sub_14269ce80()
int64_t rax_2
void* const rdi_1

if (rax_1 != 0)
    rdi_1 = *(arg1 + 8)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rax_1 == 0 || rax_2.d s> *(rdi_1 + 0x38) || *(*(rdi_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rdi_1 = nullptr

void arg_8
rax = sub_141debaa0(&arg_8)
int64_t rsi_1 = rax
void* const rdx_2

if (*rax == 0)
    rdx_2 = nullptr
else
    rax = sub_1425492f0()
    
    if (rax == 0)
        rdx_2 = nullptr
    else
        rdx_2 = *rsi_1
        int64_t r8_2 = rax + 0x30
        rax = sx.q(*(rax + 0x38))
        
        if (rax.d s> *(rdx_2 + 0x38))
            rdx_2 = nullptr
        else if (*(*(rdx_2 + 0x30) + (rax << 3)) != r8_2)
            rdx_2 = nullptr

if (rdi_1 == rdx_2)
    return 

void* r8_3

if (*(arg1 + 8) == 0)
    r8_3 = nullptr
else
    void* rax_4 = sub_14269ce80()
    
    if (rax_4 == 0)
        r8_3 = nullptr
    else
        r8_3 = *(arg1 + 8)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(r8_3 + 0x38) || *(*(r8_3 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            r8_3 = nullptr

void var_58
sub_141db7080(&var_58, *(arg1 - 0x20), r8_3)
sub_141db9ae0(arg2 + 0x70, &var_58)
int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

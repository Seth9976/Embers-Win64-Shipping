// 函数: sub_14238cd90
// 地址: 0x14238cd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14238c6f0(arg1 + 0x10, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rax_2 = *(arg1 + 0x10) + rax * 0x28
    
    if (rax_2 != 0)
        int64_t rax_3 = *(rax_2 + 0x18)
        
        if (rax_3 != 0)
            return rax_3

sub_14238c8c0(arg1 + 0x60, &arg_8, arg2)
int64_t rax_4 = sx.q(arg_8)
int64_t rbx_1 = 0
void* const rcx_4

if (rax_4.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = (rax_4 << 6) + *(arg1 + 0x60)

int64_t* rdx_2 = rcx_4 + 0x18

if (rcx_4 == 0)
    rdx_2 = nullptr

int64_t rax_5

if (rdx_2 == 0)
    rax_5 = *arg2
    rdx_2 = arg2
else
    rax_5 = *rdx_2

int64_t var_28 = rax_5
int64_t var_20
sub_140596d10(&var_20, &rdx_2[1])
sub_14238c6f0(arg1 + 0x10, &arg_8, &var_28)
int64_t rax_6 = sx.q(arg_8)

if (rax_6.d != 0xffffffff)
    void* rcx_7 = *(arg1 + 0x10) + rax_6 * 0x28
    
    if (rcx_7 != 0)
        rbx_1 = *(rcx_7 + 0x18)

int64_t rcx_8 = var_20

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return rbx_1

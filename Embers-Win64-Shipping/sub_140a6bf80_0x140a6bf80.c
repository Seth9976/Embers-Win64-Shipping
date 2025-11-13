// 函数: sub_140a6bf80
// 地址: 0x140a6bf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t arg_8
sub_140926e00(arg1 + 0x290, &arg_8, arg2)
int64_t rax_1 = sx.q(arg_8)
void* const rcx_1

if (rax_1.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x290) + rax_1 * 0x28

int32_t* rax_3 = rcx_1 + 0x10

if (rcx_1 == 0)
    rax_3 = nullptr

int32_t temp0_1 = *rax_3
*rax_3 -= 1

if (temp0_1 == 1)
    sub_140a873a0(arg1 + 0x290, arg2)

int64_t rdi_2 = *arg2

if (rdi_2 != 0)
    int64_t* rcx_3 = data_143ddb3f0
    
    if (rcx_3 == 0)
        sub_140a750a0()
        rcx_3 = data_143ddb3f0
    
    (*(*rcx_3 + 0x30))(rcx_3, rdi_2)

j_sub_140a74f90(arg2)

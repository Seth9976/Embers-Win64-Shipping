// 函数: sub_140664b30
// 地址: 0x140664b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    *rax = &data_142d86230
    sub_140d3a3a0(&rax[1], arg3)
    rax[2] = arg4
    rax[4] = sub_140a387b0()
    *rax = &data_142d86288

void*** rdi_1 = nullptr
*arg2 = 0
int32_t rcx_4

if (rax == 0)
    rcx_4 = 3
    rdi_1 = rax
else
    sub_140599630(arg1, 1)
    void arg_10
    int64_t* rax_3 = (*rax)[6](rax, &arg_10)
    int64_t r15_1 = sx.q(arg1[1].d)
    int64_t rbx_1 = *rax_3
    int32_t rax_4 = (r15_1 + 1).d
    arg1[1].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    *arg2 = rbx_1
    void**** rax_7 = (r15_1 << 4) + *arg1
    *rax_7 = rax
    rax_7[1].d = 3
    rcx_4 = 0

if (rcx_4 == 0)
    goto label_140664c38

if (rdi_1 != 0)
    (*rdi_1)[7](rdi_1, 0)
    rdi_1 = sub_140a84c80(rdi_1, 0, 0)
label_140664c38:
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)

return arg2

// 函数: sub_14066b4a0
// 地址: 0x14066b4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d s<= 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t var_18
int64_t* rax_1 = sub_140aef360(&var_18, arg1)

if (arg2 != rax_1)
    int64_t rcx_1 = *arg2
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg2 = *rax_1
    *rax_1 = 0
    arg2[1].d = rax_1[1].d
    *(arg2 + 0xc) = *(rax_1 + 0xc)
    rax_1[1] = 0

int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

rax_1.b = 1
return rax_1

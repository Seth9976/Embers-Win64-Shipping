// 函数: sub_1426ae190
// 地址: 0x1426ae190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg2[1].d s<= 0)
    return 

int64_t** rdi_1 = nullptr

do
    int64_t* rdx = *(rdi_1 + *arg2)
    int64_t var_38
    int64_t* rax_2 = sub_1426adee0(&var_38, rdx, sx.q(*(rdx + 0x4c)) + arg1)
    int64_t r14_1 = sx.q(arg3[1].d)
    int32_t rcx_1 = (r14_1 + 1).d
    arg3[1].d = rcx_1
    
    if (rcx_1 s> *(arg3 + 0xc))
        sub_1405a4f90(arg3)
    
    int64_t* rcx_5 = (r14_1 << 4) + *arg3
    *rcx_5 = 0
    *rcx_5 = *rax_2
    *rax_2 = 0
    rcx_5[1].d = rax_2[1].d
    *(rcx_5 + 0xc) = *(rax_2 + 0xc)
    rax_2[1] = 0
    int64_t rcx_6 = var_38
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< arg2[1].d)

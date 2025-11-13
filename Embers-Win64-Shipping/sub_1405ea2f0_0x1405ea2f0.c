// 函数: sub_1405ea2f0
// 地址: 0x1405ea2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
int32_t arg_10

if (arg2 == 0 || *arg2 == 0)
    arg_10 = arg1.d
    *arg1 = 0
    *arg1 = *arg3
    *arg3 = 0
    arg1[1].d = arg3[1].d
    *(arg1 + 0xc) = *(arg3 + 0xc)
    arg3[1] = 0
else
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    int32_t rax = arg3[1].d
    int32_t rdi_1 = rax - 1
    
    if (rax == 0)
        rdi_1 = 0
    
    int64_t var_40 = 0
    int32_t rdx = 0
    int32_t var_38_1 = 0
    int32_t r13_1 = 0
    int32_t var_34_1 = 0
    int32_t rax_2 = rdi_1 + 1 + rbx_1.d
    
    if (rax_2 s> 0)
        sub_1405947f0(&var_40, rax_2)
        r13_1 = var_34_1
        rdx = var_38_1
    
    int32_t rax_5 = rdi_1 + 1 + rdx + rbx_1.d
    
    if (rax_5 s> r13_1)
        sub_140594770(&var_40)
        r13_1 = var_34_1
    
    int64_t rsi_1 = sx.q(rbx_1.d)
    int64_t rdi_2 = rsi_1 * 2
    int64_t rbp_1 = var_40
    memcpy(rbp_1, arg2, rdi_2.d)
    int64_t rbx_2 = sx.q(rdi_1)
    memcpy(rdi_2 + rbp_1, *arg3, rbx_2.d * 2)
    *(rbp_1 + ((rbx_2 + rsi_1) << 1)) = 0
    arg_10 = arg1.d
    *arg1 = rbp_1
    arg1[1].d = rax_5
    *(arg1 + 0xc) = r13_1
return arg1

// 函数: sub_1406c91f0
// 地址: 0x1406c91f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10

if (arg2 == 0 || *arg2 == 0)
    arg_10 = arg1.d
    *arg1 = 0
    int32_t rbx_2 = arg3[1].d
    int64_t rdi_2 = *arg3
    arg1[1].d = rbx_2
    
    if (rbx_2 != 0)
        sub_1405a4c70(arg1, rbx_2, 0)
        memcpy(*arg1, rdi_2, rbx_2 * 2)
    else
        *(arg1 + 0xc) = 0
else
    int64_t rbx = -1
    
    do
        rbx += 1
    while (arg2[rbx] != 0)
    
    int32_t rax_1 = arg3[1].d
    int32_t rdi = rax_1 - 1
    
    if (rax_1 == 0)
        rdi = 0
    
    int64_t var_38 = 0
    int32_t rdx = 0
    int32_t var_30_1 = 0
    int32_t r13_1 = 0
    int32_t var_2c_1 = 0
    int32_t rax_3 = rdi + 1 + rbx.d
    
    if (rax_3 s> 0)
        sub_1405947f0(&var_38, rax_3)
        r13_1 = var_2c_1
        rdx = var_30_1
    
    int32_t rax_6 = rdi + 1 + rdx + rbx.d
    
    if (rax_6 s> r13_1)
        sub_140594770(&var_38)
        r13_1 = var_2c_1
    
    int64_t rsi_1 = sx.q(rbx.d)
    int64_t rdi_1 = rsi_1 * 2
    int64_t rbp_1 = var_38
    memcpy(rbp_1, arg2, rdi_1.d)
    int64_t rbx_1 = sx.q(rdi)
    memcpy(rdi_1 + rbp_1, *arg3, rbx_1.d * 2)
    *(rbp_1 + ((rbx_1 + rsi_1) << 1)) = 0
    arg_10 = arg1.d
    *arg1 = rbp_1
    arg1[1].d = rax_6
    *(arg1 + 0xc) = r13_1
return arg1

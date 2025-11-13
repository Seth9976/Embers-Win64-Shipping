// 函数: sub_140af5a00
// 地址: 0x140af5a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_30 = 0
int32_t var_28 = 0
char rax_1 = sub_140af5b90(arg1, arg2, arg3, &var_30, arg5)
int16_t* const rcx = &data_142d40450
uint64_t var_40 = 0

if (var_28 != 0)
    rcx = var_30

int16_t* const var_48 = rcx
int32_t var_38 = 0

if (sub_140b295a0(&var_48, &var_40, 0) != 0)
    char i
    
    do
        int64_t rbx_1 = sx.q(arg4[1].d)
        int32_t rax_3 = (rbx_1 + 1).d
        arg4[1].d = rax_3
        
        if (rax_3 s> *(arg4 + 0xc))
            sub_1405a4f90(arg4)
        
        int64_t rbx_2 = rbx_1 << 4
        int64_t* rbx_3 = rbx_2 + *arg4
        
        if (rbx_2 != neg.q(*arg4))
            *rbx_3 = 0
            uint64_t rbp_1 = var_40
            rbx_3[1].d = var_38
            
            if (var_38 != 0)
                sub_1405a4c70(rbx_3, var_38, 0)
                memcpy(*rbx_3, rbp_1, var_38 * 2)
            else
                *(rbx_3 + 0xc) = 0
        
        i = sub_140b295a0(&var_48, &var_40, 0)
    while (i != 0)

uint64_t rcx_6 = var_40

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (var_30 != 0)
    sub_140a74f90(var_30)

return zx.q(rax_1)

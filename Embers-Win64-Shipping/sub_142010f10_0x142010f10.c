// 函数: sub_142010f10
// 地址: 0x142010f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2 = arg2 f+ arg1[2]
arg1[2] = arg2

if (arg2 <= 60f || *(arg1 + 5) != 0)
    return 

char rax_1 = arg1[1].b
arg1[2] = 0

if (rax_1 == 0)
    sub_142008910(arg1, 0)

if (rax_1 == 0 && arg1[1].b == 0)
    return 

if (*(arg1 + 0x52) != 0)
    *(arg1 + 0x52) = 0
    int32_t rbx_1 = (data_143f3f238.q).d
    int64_t rsi_1 = data_143f3f230
    uint64_t var_38 = 0
    int32_t var_30_1 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_38, rbx_1, 0)
        memcpy(var_38, rsi_1, rbx_1 * 2)
    else
        int32_t var_2c_1 = 0
    
    sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f1e0, &var_38)
    
    if (*(arg1 + 0x53) == 0 && *(arg1 + 0x52) != 0)
        *(arg1 + 0x53) = 1
        sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f1f0, &data_143f3f240)
        
        if (arg1[0x26] s> 1)
            sub_140b729b0(&data_143f3f020, &arg1[0x24], &data_143f3f1f0, &data_143f3f240)
    
    uint64_t rcx_2 = var_38
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

int64_t var_28
void arg_8
void arg_18
sub_140a2e390(&var_28, %lld", 
    (*sub_140b29d90(&arg_8) - *sub_140b0a2c0(&arg_18, 0x7b2, 1, 1, 0, 0, 0, 0)) s/ 0x989680)
sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f1a0, &var_28)

if (arg1[0x26] s> 1)
    sub_140b729b0(&data_143f3f020, &arg1[0x24], &data_143f3f1a0, &var_28)

int64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

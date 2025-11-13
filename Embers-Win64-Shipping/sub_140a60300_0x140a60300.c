// 函数: sub_140a60300
// 地址: 0x140a60300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x60)
int32_t rax = *(arg2 + 0x18)

if (rax != 0)
    int64_t* rcx = *arg1
    
    if (rax - 1 s> 0)
        rcx = arg2 + 0x10
    
    *arg1 = rcx

int32_t rax_2 = *(arg2 + 0x28)

if (rax_2 != 0)
    void* rcx_1 = arg1[1]
    
    if (rax_2 - 1 s> 0)
        rcx_1 = arg2 + 0x20
    
    arg1[1] = rcx_1

int32_t rax_4 = *(arg2 + 0x38)

if (rax_4 != 0)
    void* rcx_2 = arg1[2]
    
    if (rax_4 - 1 s> 0)
        rcx_2 = arg2 + 0x30
    
    arg1[2] = rcx_2

int32_t rax_6 = *(arg2 + 0x48)

if (rax_6 != 0)
    void* rcx_3 = arg1[3]
    
    if (rax_6 - 1 s> 0)
        rcx_3 = arg2 + 0x40
    
    arg1[3] = rcx_3

if ((arg3 & 1) != 0)
    void* arg_8 = arg2
    
    if (sub_140a661a0(&arg_8, arg2 + 0x10, &arg1[8]) != 0)
        arg1[2] = &arg1[8]
    
    if (sub_140a661a0(&arg_8, arg2 + 0x20, &arg1[0xa]) != 0)
        arg1[3] = &arg1[0xa]

if ((arg3 & 2) != 0)
    int16_t* const rbp_1 = &data_142d40450
    int16_t* rsi_1
    
    if (*(arg2 + 0x68) == 0)
        rsi_1 = &data_142d40450
    else
        rsi_1 = *(arg2 + 0x60)
    
    int64_t var_38
    sub_140597da0(&arg1[4], sub_140a300d0(sub_140a7af80(arg1), &var_38, rsi_1, &data_142d404b0, 0))
    int64_t rsi_2 = var_38
    
    if (rsi_2 != 0)
        int64_t* rcx_9 = data_143ddb3f0
        
        if (rcx_9 == 0)
            sub_140a750a0()
            rcx_9 = data_143ddb3f0
        
        (*(*rcx_9 + 0x30))(rcx_9, rsi_2)
    
    int16_t* rsi_3
    
    if (*(arg2 + 0x68) == 0)
        rsi_3 = &data_142d40450
    else
        rsi_3 = *(arg2 + 0x60)
    
    sub_140597da0(&arg1[6], sub_140a300d0(sub_140a7b010(arg1), &var_38, rsi_3, &data_142d404b0, 0))
    int64_t rsi_4 = var_38
    
    if (rsi_4 != 0)
        int64_t* rcx_13 = data_143ddb3f0
        
        if (rcx_13 == 0)
            sub_140a750a0()
            rcx_13 = data_143ddb3f0
        
        (*(*rcx_13 + 0x30))(rcx_13, rsi_4)
    
    int16_t* rsi_5
    
    if (*(arg2 + 0x58) == 0)
        rsi_5 = &data_142d40450
    else
        rsi_5 = *(arg2 + 0x50)
    
    sub_140597da0(&arg1[8], sub_140a300d0(sub_140a7b8a0(arg1), &var_38, rsi_5, &data_142e5c1c0, 0))
    int64_t rsi_6 = var_38
    
    if (rsi_6 != 0)
        int64_t* rcx_17 = data_143ddb3f0
        
        if (rcx_17 == 0)
            sub_140a750a0()
            rcx_17 = data_143ddb3f0
        
        (*(*rcx_17 + 0x30))(rcx_17, rsi_6)
    
    if (*(arg2 + 0x58) != 0)
        rbp_1 = *(arg2 + 0x50)
    
    sub_140597da0(&arg1[0xa], 
        sub_140a300d0(sub_140a7b930(arg1), &var_38, rbp_1, &data_142e5c1c0, 0))
    int64_t rsi_7 = var_38
    
    if (rsi_7 != 0)
        int64_t* rcx_21 = data_143ddb3f0
        
        if (rcx_21 == 0)
            sub_140a750a0()
            rcx_21 = data_143ddb3f0
        
        (*(*rcx_21 + 0x30))(rcx_21, rsi_7)
    
    int32_t rax_22 = *(arg2 + 0x18)
    
    if (rax_22 != 0 && rax_22 - 1 s> 0)
        *arg1 = &arg1[4]
    
    int32_t rax_24 = *(arg2 + 0x28)
    
    if (rax_24 != 0 && rax_24 - 1 s> 0)
        arg1[1] = &arg1[6]
    
    int32_t rax_26 = *(arg2 + 0x38)
    
    if (rax_26 != 0 && rax_26 - 1 s> 0)
        arg1[2] = &arg1[8]
    
    int32_t rax_28 = *(arg2 + 0x48)
    
    if (rax_28 != 0)
        if (rax_28 - 1 s> 0)
            arg1[3] = &arg1[0xa]

return arg1

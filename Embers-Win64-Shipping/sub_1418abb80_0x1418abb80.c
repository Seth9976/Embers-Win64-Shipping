// 函数: sub_1418abb80
// 地址: 0x1418abb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi = nullptr
int32_t r12 = 2
int16_t* var_38
int32_t var_2c
char rax_5
int32_t rdi_1

if (*(arg1 + 0x88) != 0)
    int32_t rax_1 = arg3[1].d
    rdi_1 = *(arg1 + 0x80)
    int32_t rsi_1 = rax_1 - 1
    
    if (rax_1 == 0)
        rsi_1 = 0
    
    int32_t rax_3
    
    if (rdi_1 == 0)
        rax_3 = 2
    
    if (rdi_1 != 0 || rsi_1 == 0xffffffff)
        rax_3 = 1
    
    int64_t r14_1 = *(arg1 + 0x78)
    int32_t rcx = rsi_1 + rax_3
    var_38 = nullptr
    
    if (rdi_1 != 0 || rcx != 0)
        sub_1405a4c70(&var_38, rdi_1 + rcx, 0)
        memcpy(var_38, r14_1, rdi_1 * 2)
    else
        var_2c = 0
    
    sub_140a2cf70(&var_38, *arg3, rsi_1)
    int64_t* rcx_4 = *(arg1 + 8)
    int16_t* const rdx_3 = &data_142d40450
    rsi = var_38
    
    if (rdi_1 != 0)
        rdx_3 = rsi
    
    void arg_8
    rax_5 = (*(*rcx_4 + 0x18))(rcx_4, rdx_3, &arg_8)

if (*(arg1 + 0x88) == 0 || rax_5 == 0)
    int32_t rax_6 = arg3[1].d
    int32_t r14_2 = *(arg1 + 0x70)
    int32_t rdi_3 = rax_6 - 1
    
    if (rax_6 == 0)
        rdi_3 = 0
    
    if (r14_2 != 0 || rdi_3 == 0xffffffff)
        r12 = 1
    
    int64_t rbp_1 = *(arg1 + 0x68)
    int32_t rax_8 = rdi_3 + r12
    var_38 = nullptr
    
    if (r14_2 != 0 || rax_8 != 0)
        sub_1405a4c70(&var_38, r14_2 + rax_8, 0)
        memcpy(var_38, rbp_1, r14_2 * 2)
    else
        var_2c = 0
    
    sub_140a2cf70(&var_38, *arg3, rdi_3)
    
    if (rsi != 0)
        sub_140a74f90(rsi)
    
    *arg2 = var_38
    arg2[1].d = r14_2
else
    *arg2 = rsi
    arg2[1].d = rdi_1

*(arg2 + 0xc) = var_2c
return arg2

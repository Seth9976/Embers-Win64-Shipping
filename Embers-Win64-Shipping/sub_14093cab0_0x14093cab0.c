// 函数: sub_14093cab0
// 地址: 0x14093cab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi = nullptr
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int32_t rax = *arg2

if (rax == 6)
    sub_140943f20(arg1, *(arg2 + 8))
    return arg1

if (rax != 0xa)
    if (rax == 8)
        sub_140943e00(arg1, arg2[4], *(arg2 + 8))
        return arg1
    
    *arg1 = *arg2
    *(arg1 + 0x10) = *(arg2 + 0x10)
else
    int32_t rax_2 = 0
    int16_t* rbp_1 = *(arg2 + 8)
    int32_t rdx_1 = 0
    int32_t var_10_1 = 0
    int16_t* var_18 = nullptr
    int32_t var_c_1 = 0
    int16_t* rdx_4
    int32_t r14_1
    
    if (rbp_1 != 0 && *rbp_1 != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (rbp_1[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&var_18, rdi_1.d + 1)
            rax_2 = var_c_1
            rdx_1 = var_10_1
            rsi = var_18
        
        r14_1 = rdi_1.d + 1 + rdx_1
        
        if (r14_1 s> rax_2)
            sub_140594770(&var_18)
            rsi = var_18
        
        UnDecorator::getReferenceType(rsi, rbp_1, (rdi_1.d + 1) * 2)
        rdx_4 = rsi
    
    if (rbp_1 == 0 || *rbp_1 == 0 || r14_1 == 0)
        rdx_4 = &data_142d40450
    
    sub_140943f20(arg1, rdx_4)
    *arg1 = 0xa
    
    if (rsi != 0)
        sub_140a74f90(rsi)

return arg1

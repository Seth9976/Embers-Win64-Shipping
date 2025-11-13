// 函数: sub_140b982a0
// 地址: 0x140b982a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18
int64_t* rdx = &var_18

if ((*(arg1 + 0x28) & 1) == 0)
    int512_t zmm1 = sub_140d21e10(*arg2, rdx, 0)
    sub_140a1d9d0(*(arg1 + 0x90), &var_18, zmm1)
else
    int64_t* rcx = *(arg1 + 0x90)
    var_18 = nullptr
    int32_t var_10_1 = 0
    sub_140a1d9d0(rcx, rdx, arg3)
    int16_t* const rbp_1 = &data_142d40450
    int16_t* const rbx_1 = &data_142d40450
    
    if (var_10_1 != 0)
        rbx_1 = var_18
    
    int64_t rax_2 = sub_140d2ee50(sub_140d41340(), nullptr, rbx_1, 0)
    *arg2 = rax_2
    
    if (rax_2 == 0 && *(arg1 + 0x98) != 0)
        if (var_10_1 != 0)
            rbp_1 = var_18
        
        *arg2 = sub_140d2f6f0(sub_140d41340(), 0, rbp_1, 0, 0, 0, 1, 0)

int16_t* rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg1

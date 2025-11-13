// 函数: sub_141d15640
// 地址: 0x141d15640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1

if (sub_140b0f6c0(&arg_18, u"REPLAYSTREAMER") == 0)
    return 0

int16_t* var_28
sub_140b294d0(&var_28, &arg_18, 0)
int32_t var_20

if (var_20 s> 1)
    int16_t* const rdx_1 = &data_142d40450
    
    if (var_20 != 0)
        rdx_1 = var_28
    
    int64_t* rax_2 = (*(*(arg1 - 8) + 0x40))(arg1 - 8, rdx_1)
    int64_t r8 = *rax_2
    int64_t* var_18
    (*(r8 + 0x40))(rax_2, &var_18, r8)
    int64_t* rcx_4 = var_18
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x190))(rcx_4, arg_18, arg4)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

int16_t* rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int32_t result
result.b = 1
return result

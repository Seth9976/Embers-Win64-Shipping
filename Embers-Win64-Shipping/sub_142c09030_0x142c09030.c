// 函数: sub_142c09030
// 地址: 0x142c09030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = arg7
int32_t var_40 = arg6
int32_t var_48 = arg4
int32_t var_50 = arg1.d
char const* const var_58 = "face=%p num_features=%d num_coords=%d shaper_list=%p"
void* rdi = arg1
int64_t var_60 = 0
int64_t var_68 = 0

if (arg2 != 0)
    int32_t* result_1 = sub_140dc0ea0(1, 0x120)
    int128_t* result = result_1
    
    if (result_1 != 0)
        *result_1 = 1
        result_1[1] = 1
        *(result_1 + 8) = 0
        
        if (rdi == 0)
            rdi = &data_143ccb6b0
        
        sub_142bf2880(rdi)
        var_48.q = arg7
        var_60.d = arg4
        result[1].q = rdi
        
        if (sub_142c08db0(result + 0x18, 1, rdi, arg2, arg3, 0, arg5, arg6, var_48) != 0)
            if (sub_142c08960(&result[6], rdi, result + 0x18) != 0)
                return result
            
            j_sub_140a74f90(*(result + 0x38))
        
        j_sub_140a74f90(result)

return &data_14369a5d0

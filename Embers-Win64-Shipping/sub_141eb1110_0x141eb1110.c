// 函数: sub_141eb1110
// 地址: 0x141eb1110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x8140)
void var_8158
uint64_t var_20 = __security_cookie ^ &var_8158
uint64_t result

if (arg1 == 0 || *(arg1 + 0x1f8) == 0)
    result.b = 0
else
    int64_t rax_1 = sx.q(*arg2)
    char result_1 = 0
    
    if (rax_1.d u<= 6)
        switch (rax_1)
            case 0, 2, 3, 4
                void var_80a8
                void** var_8098
                char arg_30
                sub_141eb5350(&var_8098, arg4, 0, 
                    sub_1422655c0(&var_80a8, arg_30, *(arg4 + 0x10), arg5, arg4, arg6, 0))
                char var_8078_1 = 1
                int64_t var_30_1 = 0
                int16_t var_8114 = 0x14
                int32_t var_28_1 = 0
                void* rcx_4 = *(arg1 + 0x1f8)
                void var_8030
                void* var_8040_1 = &var_8030
                void** const var_8070 = &data_142fcabd8
                void** const* var_8100 = &var_8070
                void*** var_80f8_1 = &var_8098
                char* var_80e8_1 = &arg_30
                int16_t* var_80c8_1 = &var_8114
                void* var_80c0_1 = &var_80a8
                char* var_80b8_1 = &result_1
                int64_t var_80b0_1 = arg3
                void** const** var_8108_1 = &var_8100
                char* (* var_8110)(int64_t* arg1) = j_sub_141eb70f0
                int128_t var_8068_1 = zx.o(0)
                int32_t var_8058_1 = 0xffffffff
                char var_8048_1 = 0
                int64_t var_8038_1 = 0x200
                int32_t var_24_1 = 0x200
                int64_t r9
                int64_t var_80f0_1 = r9
                void* var_80e0_1 = arg4
                void* var_80d8_1 = rcx_4
                int32_t* var_80d0_1 = arg2
                sub_142269ec0(rcx_4, &var_8110)
                
                if (var_30_1 != 0)
                    sub_140a74f90(var_30_1)
    
    result = zx.q(result_1)

__security_check_cookie(var_20 ^ &var_8158)
return result

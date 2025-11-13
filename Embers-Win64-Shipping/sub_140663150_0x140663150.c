// 函数: sub_140663150
// 地址: 0x140663150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int128_t* result = __security_cookie ^ &var_b8
int128_t* result_1 = result

if (data_143de5480 != 0)
    result.b = GetCurrentThreadId().d == data_143de5470

if (data_143de5480 == 0 || result.b != 0)
    if (arg2 != 0)
        int64_t var_98 = 0
        result = arg1 + 0x40
        
        if (result != &var_98)
            int128_t zmm5 = *result
            int128_t zmm4 = result[1]
            arg4 = result[2]
            arg3 = result[3]
            *result = var_98.o
            int128_t var_78
            int128_t zmm0 = var_78
            result[1] = 0.o
            int128_t var_68
            arg5 = var_68
            result[2] = zmm0
            result[3] = arg5
            result = zmm5.q
            int128_t var_58_1 = zmm5
            int128_t* var_48_1 = zmm4.q
            int128_t var_38_1 = arg4
            int128_t var_28_1 = arg3
            var_98.o = zmm5
            int64_t var_88_1
            var_88_1.o = zmm4
            var_78 = arg4
            int128_t var_68_1 = arg3
            
            if (result != 0)
                int128_t* rcx = &var_78
                
                if (var_48_1 != 0)
                    rcx = var_48_1
                
                result = (*(*rcx + 0x10))(rcx)
    
    if (*(arg1 + 0x40) != 0)
        void* rax_3 = *(arg1 + 0x50)
        void* rcx_1 = arg1 + 0x60
        
        if (rax_3 != 0)
            rcx_1 = rax_3
        
        result = (*(arg1 + 0x40))((*(*rcx_1 + 8))(rcx_1, arg5, arg3, arg4))
    
    *(arg1 + 0x31) = 1

__security_check_cookie(result_1 ^ &var_b8)
return result

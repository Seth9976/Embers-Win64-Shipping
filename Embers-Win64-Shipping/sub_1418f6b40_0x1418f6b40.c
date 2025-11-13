// 函数: sub_1418f6b40
// 地址: 0x1418f6b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg2 + 0x50)
int32_t rbx_2 = (zx.d(arg4) ^ 1) * 2
int64_t (* var_38)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4)
int64_t (* var_28)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4)

if (result == 0)
    int64_t* rcx_3 = *(arg2 + 0x28)
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x30))(rcx_3, &var_38)
        int64_t* rcx_4 = *(arg2 + 0x28)
        result = (*(*rcx_4 + 8))(rcx_4)
        int32_t var_30
        int64_t (* var_18)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4)
        
        if (result == 0)
            int64_t* rcx_8 = *(arg2 + 0x28)
            
            if ((*(*rcx_8 + 0x10))(rcx_8) != 0)
                return sub_1418f0930(arg1, arg2, var_38.d, var_38:4.d, var_30, arg3, rbx_2)
            
            int64_t* rcx_9 = *(arg2 + 0x28)
            result = (*(*rcx_9 + 0x18))(rcx_9)
            
            if (result == 0)
                int64_t* rcx_13 = *(arg2 + 0x28)
                result = (*(*rcx_13 + 0x20))(rcx_13)
                
                if (result != 0)
                    return sub_1418f0930(arg1, arg2, var_38.d, var_38:4.d, var_30, arg3, rbx_2)
            else
                if (rbx_2 == 0)
                    int32_t r9_7 = var_38:4.d
                    int32_t r8_9 = var_38.d
                    void** var_20_9 = &var_18
                    var_18 = arg1
                    var_28 = sub_140fdd510
                    int64_t (** var_48_9)(int64_t* arg1, int64_t* arg2, int16_t* arg3, 
                        char* arg4) = &var_28
                    int64_t var_50_9 = arg3
                    void* var_10_6 = arg2
                    return sub_140fcf8c0(arg1, arg2, r8_9, r9_7, var_30)
                
                if (rbx_2 == 1)
                    int32_t r9_6 = var_38:4.d
                    int32_t r8_8 = var_38.d
                    void** var_20_8 = &var_18
                    var_18 = arg1
                    var_28 = sub_140fdd510
                    int64_t (** var_48_8)(int64_t* arg1, int64_t* arg2, int16_t* arg3, 
                        char* arg4) = &var_28
                    int64_t var_50_8 = arg3
                    void* var_10_5 = arg2
                    return sub_140fcf400(arg1, arg2, r8_8, r9_6, var_30)
                
                if (rbx_2 == 2)
                    int32_t r9_5 = var_38:4.d
                    int32_t r8_7 = var_38.d
                    void** var_20_7 = &var_18
                    var_18 = arg1
                    var_28 = sub_140fdd510
                    int64_t (** var_48_7)(int64_t* arg1, int64_t* arg2, int16_t* arg3, 
                        char* arg4) = &var_28
                    int64_t var_50_7 = arg3
                    void* var_10_4 = arg2
                    return sub_140fcf660(arg1, arg2, r8_7, r9_5, var_30)
        else
            if (rbx_2 == 0)
                int32_t r9_4 = var_38:4.d
                int32_t r8_6 = var_38.d
                void** var_20_6 = &var_18
                var_18 = arg1
                var_28 = sub_140fdd510
                int64_t (** var_48_6)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_28
                int64_t var_50_6 = arg3
                void* var_10_3 = arg2
                return sub_140fceac0(arg1, arg2, r8_6, r9_4, var_30)
            
            if (rbx_2 == 1)
                int32_t r9_3 = var_38:4.d
                int32_t r8_5 = var_38.d
                void** var_20_5 = &var_18
                var_18 = arg1
                var_28 = sub_140fdd510
                int64_t (** var_48_5)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_28
                int64_t var_50_5 = arg3
                void* var_10_2 = arg2
                return sub_140fce620(arg1, arg2, r8_5, r9_3, var_30)
            
            if (rbx_2 == 2)
                int32_t r9_2 = var_38:4.d
                int32_t r8_4 = var_38.d
                int64_t (** var_10_1)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_28
                var_28 = arg1
                var_18 = sub_140fdd510
                void** var_48_4 = &var_18
                int64_t var_50_4 = arg3
                void* var_20_4 = arg2
                return sub_140fce870(arg1, arg2, r8_4, r9_2, var_30)
else
    result = zx.q(divu.dp.d(0:(*(result + 0x18)), (&data_1439c85f4)[sx.q(*(arg2 + 0x68)) * 0xa]))
    
    if (rbx_2 == 0)
        var_28 = arg1
        int64_t (** var_30_3)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_28
        void* var_20_3 = arg2
        var_38 = sub_140fdd510
        int64_t (** var_48_3)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_38
        int64_t var_50_3 = arg3
        return sub_140fcffc0(arg1, arg2, result.d, 1, 1)
    
    if (rbx_2 == 1)
        var_28 = arg1
        int64_t (** var_30_2)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_28
        void* var_20_2 = arg2
        var_38 = sub_140fdd510
        int64_t (** var_48_2)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_38
        int64_t var_50_2 = arg3
        return sub_140fcfb20(arg1, arg2, result.d, 1, 1)
    
    if (rbx_2 == 2)
        var_38 = arg1
        int64_t* var_20_1 = &var_38
        void* var_30_1 = arg2
        var_28 = sub_140fdd510
        int64_t (** var_48_1)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_28
        int64_t var_50_1 = arg3
        return sub_140fcfd70(arg1, arg2, result.d, rbx_2 - 1, rbx_2 - 1)
return result

// 函数: sub_141e86370
// 地址: 0x141e86370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* var_80 = arg2
int64_t* result = sub_140a80ea0()
void** var_78
int64_t (* var_68)(int64_t* arg1)

if (result.b != 0)
    void* r8_1 = var_80
    
    if (r8_1 != 0)
        void* rsi_1 = arg1[0x40]
        
        if (r8_1 != rsi_1)
            arg1[0x40] = r8_1
            int32_t var_88
            
            if (rsi_1 != 0)
                sub_140865b30(&arg1[0x42], &var_88, rsi_1)
                int64_t rax_3 = sx.q(var_88)
                void* const rax_6
                
                if (rax_3.d == 0xffffffff)
                    rax_6 = nullptr
                else
                    rax_6 = rax_3 * 0x50 + arg1[0x42]
                
                char* r8_3 = rax_6 + 8
                
                if (rax_6 == 0)
                    r8_3 = nullptr
                
                *r8_3 = 0
                sub_141e89c70(arg1, rsi_1, r8_3)
                r8_1 = var_80
            
            sub_140865b30(&arg1[0x42], &var_88, r8_1)
            int64_t rax_7 = sx.q(var_88)
            
            if (rax_7.d == 0xffffffff)
                result = nullptr
            else
                result = rax_7 * 0x50 + arg1[0x42]
            
            void* rsi_2 = &result[1]
            
            if (result == 0)
                rsi_2 = nullptr
            
            if (rsi_2 == 0)
                __builtin_memset(&var_68, 0, 0x40)
                var_78 = &var_80
                int64_t (** var_70_2)(int64_t* arg1) = &var_68
                sub_141e6e140(&arg1[0x42], &var_88, &var_78, nullptr)
                rsi_2 = arg1[0x42] + sx.q(var_88) * 0x50 + 8
                result = sub_141e755a0(arg1, var_80, rsi_2)
                void* rcx_9 = arg1[0x58]
                
                if (rcx_9 != 0)
                    result = sub_141e871e0(rcx_9, var_80, 0, 0)
            
            *rsi_2 = 1
else
    void* var_70_1 = var_80
    void** const var_48_1 = &data_142d42ed8
    var_78 = arg1
    int128_t zmm0 = var_78.o
    var_68 = sub_141e76690
    int64_t var_58_1 = 0
    int128_t var_40_1 = zmm0
    char var_84
    result = sub_141e85cb0(&var_68, var_84)
__security_check_cookie(rax_1 ^ &var_a8)
return result

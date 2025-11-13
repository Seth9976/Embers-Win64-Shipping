// 函数: sub_142b642b0
// 地址: 0x142b642b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_128 = -2
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* r13 = arg1
char* var_138 = arg2
void var_f0
uint64_t result = (*(*arg3 + 0x50))(arg3, &var_f0, arg4)

if (*arg4 s<= 0)
    int32_t r12_1 = 0
    result = sub_142ac2da0(&var_f0, 0, &var_138, arg3)
    
    while (result.b != 0)
        int64_t i = 0
        char* rdx_1 = var_138
        void var_118
        
        do
            char rax_3 = rdx_1[i]
            i += 1
            
            if (rax_3 != data_1436400e0[7][i])
                for (int64_t j = 0; j != 6; )
                    char rax_9 = rdx_1[j]
                    j += 1
                    
                    if (rax_9 != *(j + 0x143640103))
                        goto label_142b64571
                
                int64_t j_3 = sx.q(*(data_144016e58 + 0x10) + 1)
                uint64_t rax_11 = 0x64 * j_3
                
                if (mulu.dp.q(0x64, j_3) u>> 0x40 != zx.o(0))
                    rax_11 = -1
                
                void* rax_12 = j_sub_142a7dd00(rax_11)
                void* const r8_8 = rax_12
                void* var_120_1 = rax_12
                
                if (rax_12 == 0)
                    r8_8 = nullptr
                else if (j_3 != 0)
                    void* rdx_8 = rax_12 + 4
                    int64_t j_1
                    
                    do
                        *(rdx_8 - 4) = 0
                        __builtin_memset(rdx_8, 0xffffffff, 0x60)
                        rdx_8 += 0x64
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                
                *(data_144016e58 + 8) = r8_8
                result = data_144016e58
                
                if (*(result + 8) == 0)
                    *arg4 = 7
                    goto label_142b6459f
                
                (*(*arg3 + 0x50))(arg3, &var_118, arg4)
                result = sub_142b63e20(r13, &var_118, var_138, arg3, arg4)
                
                if (*arg4 s> 0)
                    goto label_142b6459f
                
                goto label_142b64571
        while (i != 8)
        
        result = (*(*arg3 + 0x50))(arg3, &var_118, arg4)
        
        if (*arg4 s> 0)
            break
        
        int32_t r15_1 = 0
        
        if (sub_142ac2da0(&var_118, 0, &var_138, arg3) != 0)
            char i_1
            
            do
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                sub_142a9c7e0(arg3, &var_88)
                int16_t var_bc
                void* _Str1_1 = &var_bc:1
                int32_t var_c0_1 = 0x28
                var_bc = 0
                int32_t var_90_1 = 0
                sub_142a8cd50(&_Str1_1, &var_88, arg4)
                void* _Str1 = _Str1_1
                uint64_t rdi_1
                
                if (*arg4 s> 0)
                    rdi_1 = 0xffffffff
                else if (strncmp(_Str1, "set", 3) != 0)
                label_142b6443f:
                    *arg4 = 3
                    rdi_1 = 0xffffffff
                else
                    rdi_1 = 0
                    void* rdx_5 = _Str1 + 3
                    char j_2 = *rdx_5
                    
                    if (j_2 == 0)
                        goto label_142b6443f
                    
                    do
                        if (sx.d(j_2) - 0x30 u> 9)
                            goto label_142b6443f
                        
                        rdi_1 = zx.q(sx.d(j_2) - 0x30 + ((rdi_1 * 5).d << 1))
                        rdx_5 += 1
                        j_2 = *rdx_5
                    while (j_2 != 0)
                    
                    if (rdi_1.d == 0)
                        goto label_142b6443f
                
                if (var_bc.b != 0)
                    sub_142a7dcd0(_Str1_1)
                
                sub_142a86f70(*data_144016e58, var_138, rdi_1.d, arg4)
                sub_142a47ff0(&var_88)
                r15_1 += 1
                i_1 = sub_142ac2da0(&var_118, r15_1, &var_138, arg3)
            while (i_1 != 0)
            r13 = arg1
        
    label_142b64571:
        r12_1 += 1
        result = sub_142ac2da0(&var_f0, r12_1, &var_138, arg3)

label_142b6459f:
__security_check_cookie(rax_1 ^ &var_168)
return result

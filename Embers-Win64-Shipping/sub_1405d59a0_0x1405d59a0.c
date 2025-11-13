// 函数: sub_1405d59a0
// 地址: 0x1405d59a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
char rcx = (data_1439c7a34).b
int128_t var_78 = zx.o(0)
void* rdx = *arg1
int32_t var_68 = 1
int32_t i = 0
int128_t var_64 = data_143dbb1e0
uint64_t result = zx.q((1 << rcx) - 1)
char var_50 = 0
int32_t var_54 = result.d
int64_t var_48 = 0
int32_t var_40 = 0

if (*(rdx + 0x6c) s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rcx_1 = data_143f0f180
        uint64_t result_1
        (*(*rcx_1 + 0x560))(rcx_1, &result_1, &data_143f02b98, zx.q(*(rdx + 0xc4)), *(rdx + 0xc8), 
            *(rdx + 0xcc), 1, 1, 0x40000, &var_78)
        result = &result_1
        uint64_t* rdx_3 = *(*arg1 + 0x58) + r14_1
        
        if (rdx_3 == &result_1)
        label_1405d5b2f:
            uint64_t result_2 = result_1
            
            if (result_2 != 0)
                result = zx.q(*(result_2 + 8))
                *(result_2 + 8) -= 1
                
                if (result.d == 1)
                    char rax_13
                    
                    if (*(result_2 + 0x10) == 0 && data_143f0f1d0 == 0)
                        rax_13 = sub_1405949a0()
                    
                    if (*(result_2 + 0x10) != 0 || (data_143f0f1d0 == 0 && rax_13 != 0))
                        result = (**result_2)(result_2, 1)
                    else
                        result = 0
                        bool z_2
                        
                        if (0 == *(result_2 + 0xc))
                            *(result_2 + 0xc) = 1
                            z_2 = true
                        else
                            result = zx.q(*(result_2 + 0xc))
                            z_2 = false
                        
                        if (z_2)
                            int32_t rax_14 = sub_140a20af0()
                            uint64_t rdx_5 = zx.q(rax_14)
                            void* const rax_15
                            
                            if (rax_14 != 0)
                                rax_15 = *((rdx_5 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_5.d) & 0x3fff) * 0x18
                            else
                                rax_15 = nullptr
                            
                            *(rax_15 + 8) = result_2
                            result = sub_1405a42f0(&data_143f02390, rdx_5.d)
        else
            uint64_t rbx_1 = *rdx_3
            result = result_1
            *rdx_3 = result
            result_1 = 0
            
            if (rbx_1 != 0)
                result = zx.q(*(rbx_1 + 8))
                *(rbx_1 + 8) -= 1
                
                if (result.d == 1)
                    char rax_6
                    
                    if (*(rbx_1 + 0x10) == 0 && data_143f0f1d0 == 0)
                        rax_6 = sub_1405949a0()
                    
                    if (*(rbx_1 + 0x10) != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
                        result = (**rbx_1)(rbx_1, 1)
                    else
                        result = 0
                        bool z_1
                        
                        if (0 == *(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) = 1
                            z_1 = true
                        else
                            result = zx.q(*(rbx_1 + 0xc))
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_7 = sub_140a20af0()
                            uint64_t rdx_4 = zx.q(rax_7)
                            void* const rax_8
                            
                            if (rax_7 != 0)
                                rax_8 = *((rdx_4 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_4.d) & 0x3fff) * 0x18
                            else
                                rax_8 = nullptr
                            
                            *(rax_8 + 8) = rbx_1
                            result = sub_1405a42f0(&data_143f02390, rdx_4.d)
                
                goto label_1405d5b2f
        
        rdx = *arg1
        i += 1
        r14_1 += 0x40
    while (i s< *(rdx + 0x6c))

char temp0_3 = *(rdx + 0xfa)
*(rdx + 0xfa) = 1
int64_t rdi
rdi.b = temp0_3
__security_check_cookie(rax_1 ^ &var_d8)
return result

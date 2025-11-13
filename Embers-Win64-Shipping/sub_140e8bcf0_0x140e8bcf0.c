// 函数: sub_140e8bcf0
// 地址: 0x140e8bcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
uint64_t var_38 = __security_cookie ^ &var_148
int32_t var_118 = 0
char r15 = 0
uint64_t result

if (data_1439b3870 == 0)
    result.b = 0
else
    if (data_143de5480 != 0)
        result.b = GetCurrentThreadId().d == data_143de5470
    
    if (data_143de5480 != 0 && result.b == 0)
        result.b = 0
    else
        int64_t r14_1 = *(arg1 + 0x20)
        
        if (r14_1 == 0)
            result.b = 0
        else
            int32_t rcx = *(arg1 + 0x34)
            *(arg1 + 0x34) = rcx - 1
            
            if (rcx s<= 0)
                result.b = 0
            else
                int64_t* var_120 = data_143e29f28
                void* rax_2 = data_143e20d18
                int64_t* rbx_1 = *(rax_2 + 0x10)
                int64_t r12_1 = *(rax_2 + 8)
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                    r14_1 = *(arg1 + 0x20)
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp1_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp1_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                
                uint64_t var_88 = 0
                int64_t var_80
                __builtin_memset(&var_80, 0, 0x24)
                int32_t var_5c_1 = 0x80
                int32_t var_58_1 = 0xffffffff
                int32_t var_54_1 = 0
                int64_t var_48_1 = 0
                int32_t var_40_1 = 0
                int64_t* rdi_1
                int16_t* r13_1
                
                if (r12_1 != r14_1)
                    int64_t* var_108
                    rdi_1 = var_108
                    int16_t var_128
                    r13_1 = &var_128
                    var_128 &= 0xfe00
                else
                    rdi_1 = data_143e20d20
                    int64_t* rcx_3 = data_143e20d18
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d += 1
                    
                    r13_1 = (*(*rcx_3 + 0x58))(rcx_3, &var_118)
                    r15 = 1
                
                int64_t* r12_2 = var_120
                uint64_t* r14_2 = &r12_2[0x24]
                
                if (r12_1 != r14_1)
                    r14_2 = &var_88
                
                int64_t rax_7 = data_143e202b8
                int64_t* rbx_2 = data_143e202c8
                int64_t rax_8 = data_143e202c0
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                sub_140e68dd0(arg1, &var_120, 0xa)
                int64_t var_114
                sub_140e68880(arg1, &var_114, 0xa)
                int16_t var_f0_1 = *r13_1
                int32_t var_ec_1 = *(arg1 + 0x18)
                int64_t var_e0_1 = var_114
                int64_t zmm0_1 = var_114.d
                int64_t* var_d8_1 = var_120
                int64_t* zmm1 = var_114:4.d
                void** const var_f8 = &data_142ecfd88
                int64_t var_c0_1 = rax_7
                int64_t var_b8_1 = rax_8
                char var_ee_1 = 0
                int64_t var_e8_1 = 0
                uint64_t* var_c8_1 = r14_2
                zmm0_1.d = zmm0_1.d f- var_120.d
                zmm1.d = zmm1.d f- var_120:4.d
                int32_t var_d0_1 = zmm0_1.d
                int32_t var_cc_1 = zmm1.d
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                int32_t var_a0_1 = 0x3f800000
                int32_t var_a8_1 = 0xa
                int32_t var_a4_1 = 0
                int16_t var_9c_1 = 0
                int64_t var_98_1 = 0
                int16_t var_90_1 = 0
                char var_8e_1 = 0
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp3_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                if ((r15 & 1) != 0 && rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp7_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
                
                sub_140e7d5c0(r12_2, &var_f8, 1)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp6_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                var_f8 = &data_142d7f690
                int32_t var_40_2 = 0
                
                if (var_48_1 != 0)
                    sub_140a74f90(var_48_1)
                
                sub_1407ece30(&var_88, 0)
                int64_t var_68
                
                if (var_68 != 0)
                    sub_140a74f90(var_68)
                
                uint64_t rcx_16 = var_88
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                result.b = 1

__security_check_cookie(var_38 ^ &var_148)
return result

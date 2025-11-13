// 函数: sub_141c6f200
// 地址: 0x141c6f200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t result = __security_cookie ^ &var_c8
uint64_t result_1 = result

if ((arg1[0x12].b & 8) == 0)
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        result = 0
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            result = zx.q(rbx_1[1].d)
            z_1 = false
        
        if (not(z_1))
            bool z_3
            
            do
                bool z_2
                
                if (result.d == rbx_1[1].d)
                    rbx_1[1].d = (result + 1).d
                    z_2 = true
                else
                    result = zx.q(rbx_1[1].d)
                    z_2 = false
                
                if (z_2)
                    if (rbx_1 != 0)
                        void* rsi_1 = *arg2
                        
                        if (rsi_1 != 0)
                            int64_t r9_1 = sx.q(*(rsi_1 + 0x10))
                            int32_t* rcx_5
                            
                            if (arg1[2].d == *(arg1 + 0x3c))
                            label_141c6f301:
                                rcx_5 = nullptr
                            else
                                void* rcx_1 = arg1[9]
                                void* r8_1 = &arg1[8]
                                
                                if (rcx_1 != 0)
                                    r8_1 = rcx_1
                                
                                int32_t rax_2 = *(r8_1 + (((sx.q(arg1[0xa].d) - 1) & r9_1) << 2))
                                
                                if (rax_2 == 0xffffffff)
                                label_141c6f301_1:
                                    rcx_5 = nullptr
                                else
                                    while (true)
                                        rcx_5 = sx.q(rax_2) * 0x30 + arg1[1]
                                        
                                        if (*rcx_5 == r9_1.d)
                                            break
                                        
                                        rax_2 = rcx_5[0xa]
                                        
                                        if (rax_2 == 0xffffffff)
                                            goto label_141c6f301_2
                                    
                                    if (rax_2 == 0xffffffff)
                                    label_141c6f301_2:
                                        rcx_5 = nullptr
                            
                            void* r8_3 = &rcx_5[2]
                            
                            if (rcx_5 == 0)
                                r8_3 = nullptr
                            
                            uint128_t zmm0
                            
                            if (r8_3 != 0)
                                zmm0.d = (*(r8_3 + 0x10)).d f- arg3.d
                                
                                if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770).d
                                        f<= 9.99999994e-09f))
                                    *(r8_3 + 0x10) = arg3.d
                                    sub_141c6f100(*arg1, *(arg1 + 0x8c), r8_3)
                            else
                                int64_t* rax_3 = arg2[1]
                                uint128_t zmm1 = zx.o(0)
                                uint128_t var_88 = zx.o(0)
                                
                                if (rax_3 != 0)
                                    *(rax_3 + 0xc) += 1
                                    zmm1 = var_88
                                
                                zmm0 = rsi_1.o
                                void* var_a0_1
                                var_a0_1.o = zmm1
                                void* rcx_6 = _mm_bsrli_si128(zmm1, 8).q
                                uint128_t var_58_1 = zmm0
                                var_88 = zmm0
                                
                                if (rcx_6 != 0)
                                    int32_t rax_4 = *(rcx_6 + 0xc)
                                    *(rcx_6 + 0xc) -= 1
                                    
                                    if (rax_4 == 1)
                                        (*(*rax_3 + 8))(rax_3, 1)
                                
                                int32_t var_78_1 = arg3.d
                                char var_74_1 = 0
                                int32_t var_a8 = *(rsi_1 + 0x10)
                                int32_t* var_68 = &var_a8
                                int128_t* var_60_1 = &var_88
                                void var_8c
                                sub_141c4c940(&arg1[1], &var_8c, &var_68, nullptr)
                                sub_141c6f100(*arg1, *(arg1 + 0x8c), &var_88)
                                int64_t* rcx_10 = var_88:8.q
                                
                                if (rcx_10 != 0)
                                    int32_t rax_7 = *(rcx_10 + 0xc)
                                    *(rcx_10 + 0xc) -= 1
                                    
                                    if (rax_7 == 1 && rcx_10 != 0)
                                        (*(*rcx_10 + 8))(rcx_10, 1)
                        
                        result = zx.q(rbx_1[1].d)
                        rbx_1[1].d -= 1
                        
                        if (result.d == 1)
                            (**rbx_1)(rbx_1)
                            result = zx.q(*(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) -= 1
                            
                            if (result.d == 1)
                                result = (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    break
                
                result = 0
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    result = zx.q(rbx_1[1].d)
                    z_3 = false
            while (not(z_3))

int64_t* rcx_14 = arg2[1]

if (rcx_14 != 0)
    int32_t rdi_1 = *(rcx_14 + 0xc)
    *(rcx_14 + 0xc) -= 1
    
    if (rdi_1 == 1 && rcx_14 != 0)
        result = (*(*rcx_14 + 8))(rcx_14, zx.q(rdi_1))

__security_check_cookie(result_1 ^ &var_c8)
return result

// 函数: sub_1420a3e80
// 地址: 0x1420a3e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x220)
int32_t rbp = 0
int32_t arg_8 = 0

if (result != 0)
    void* rcx = *(result + 0x58)
    
    if (rcx != 0)
        result = sub_14208d4c0(rcx)
        void* result_1 = result
        void* result_3 = result
        
        if (result != 0)
            int32_t rcx_1 = *(result + 0x78)
            
            if (rcx_1 s> 0)
                if (rcx_1 s> *(arg1 + 0x27c))
                    result = sub_1405a5410(arg1 + 0x270, rcx_1)
                    rcx_1 = *(result_3 + 0x78)
                
                int128_t zmm9 = *(arg1 + 0x284)
                int32_t i_1 = 0
                
                if (rcx_1 s> 0)
                    int128_t* r12_1 = nullptr
                    int32_t i
                    
                    do
                        int64_t rax = *(result_3 + 0x70)
                        int64_t rbx_1 = *(r12_1 + rax + 8)
                        void* rsi_1 = *(arg1 + 0x220)
                        int32_t rcx_3
                        rcx_3.b = sub_140b5b8a0(rbx_1.d, 0) == 0
                        result.b = (rbx_1 u>> 0x20).d != 0
                        result.b |= rcx_3.b
                        int32_t rcx_4
                        int64_t rdi_1
                        
                        if (result.b != 0)
                            rcx_4 = 0
                            rdi_1 = 0
                        
                        int64_t var_98
                        void* result_4
                        
                        if (result.b == 0 || *(rsi_1 + 0x38) s<= 0)
                        label_1420a3fd8:
                            rdi_1 = -1
                            result_4 = nullptr
                        else
                            while (true)
                                result = *(*(rsi_1 + 0x30) + (rdi_1 << 3))
                                
                                if (*(result + 0x40) == rbx_1)
                                    break
                                
                                rcx_4 += 1
                                rdi_1 += 1
                                
                                if (rcx_4 s>= *(rsi_1 + 0x38))
                                    goto label_1420a3fd8
                            
                            if (rdi_1 == -1)
                                result_4 = nullptr
                            else
                                rbp |= 1
                                arg_8 = rbp
                                result =
                                    sub_14208af70(arg1, sub_140b63b70(r12_1 + rax + 8, &var_98))
                                result_4 = result
                        
                        if ((rbp.b & 1) != 0)
                            int64_t rcx_5 = var_98
                            rbp &= 0xfffffffe
                            arg_8 = rbp
                            
                            if (rcx_5 != 0)
                                result = sub_140a74f90(rcx_5)
                        
                        if (rdi_1 != -1 && result_4 != 0)
                            result = *(arg1 + 0x220)
                            int32_t j = 0
                            void* rbp_1 = *(*(result + 0x30) + (rdi_1 << 3))
                            
                            if (*(rbp_1 + 0x38) s> 0)
                                int64_t** r14_2 = nullptr
                                
                                do
                                    result = *(rbp_1 + 0x30)
                                    int64_t* rdi_2 = *(r14_2 + result)
                                    
                                    if (rdi_2 != 0)
                                        void* rax_3 = sub_1424d1b10()
                                        void* rdx_3 = rdi_2[2]
                                        result = sx.q(*(rax_3 + 0x38))
                                        
                                        if (result.d s<= *(rdx_3 + 0x38))
                                            void* result_2 = result
                                            result = *(rdx_3 + 0x30)
                                            
                                            if (*(result + (result_2 << 3)) == rax_3 + 0x30)
                                                result = zx.q(rdi_2[0xd].d u>> 2)
                                                
                                                if ((result.b & 1) == 0 && j s< *(result_4 + 0x40))
                                                    int64_t rax_5 = *(result_4 + 0x38)
                                                    uint32_t var_a8[0x4] = zx.o(0)
                                                    int64_t rbx_2 = *(r14_2 + rax_5)
                                                    int128_t zmm1
                                                    zmm1.d = (*(r12_1 + rax)).d f+ 0.00999999978f
                                                    sub_1420ab750(arg1, zmm1, result_4)
                                                    void var_b8
                                                    char rax_8 = (*(*rdi_2 + 0x378))(rdi_2, rbx_2, 
                                                        *(r12_1 + rax) + 0.00999999978f, &var_a8, 
                                                        &var_b8)
                                                    uint32_t zmm6_1[0x4]
                                                    result, zmm6_1 =
                                                        sub_1420ab750(arg1, zmm9, result_4)
                                                    
                                                    if (rax_8 != 0)
                                                        if (_mm_and_ps(var_a8[0], zmm6_1)[0]
                                                                f> 9.99999975e-05f)
                                                            result.b = 0
                                                        else if (_mm_and_ps(var_a8[1], zmm6_1)[0]
                                                                f> 9.99999975e-05f)
                                                            result.b = 0
                                                        else if (_mm_and_ps(var_a8[2], zmm6_1)[0]
                                                                f> 9.99999975e-05f)
                                                            result.b = 0
                                                        else
                                                            result.b = 1
                                                        
                                                        if (result.b == 0)
                                                            int64_t rbx_4 = sx.q(*(arg1 + 0x278))
                                                            int32_t rax_11 = (rbx_4 + 1).d
                                                            var_a8[3] = (*(r12_1 + rax))[0]
                                                            *(arg1 + 0x278) = rax_11
                                                            
                                                            if (rax_11 s> *(arg1 + 0x27c))
                                                                sub_1405a4f90(arg1 + 0x270)
                                                            
                                                            result = *(arg1 + 0x270)
                                                            *(result + rbx_4 * 0x10) = var_a8
                                                            break
                                    
                                    j += 1
                                    r14_2 = &r14_2[1]
                                while (j s< *(rbp_1 + 0x38))
                            
                            rbp = arg_8
                        
                        r12_1 += 0x14
                        result_3 = result_1
                        i = i_1 + 1
                        i_1 = i
                    while (i s< *(result_3 + 0x78))

return result

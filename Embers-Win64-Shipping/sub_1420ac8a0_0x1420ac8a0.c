// 函数: sub_1420ac8a0
// 地址: 0x1420ac8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = 0
int32_t arg_18 = 0
int64_t* rdi = *(arg3 + 0x20)
int64_t* result = (*(*rdi + 0x260))(rdi)
int64_t* result_1 = result

if (result != 0)
    void* rax_1 = sub_14256a090()
    void* rcx_1 = result_1[2]
    result = rax_1 + 0x30
    int64_t rdx_1 = sx.q(result[1].d)
    
    if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == result)
        void* r12_1 = rdi[4]
        
        if (result_1[0x1e].b == 3 || (*(r12_1 + 0x23c) & 0x20) != 0 || (*(arg1 + 0x80) & 1) != 0)
            int32_t rdx_2 = *(arg1 + 0x78)
            int32_t r8 = -1
            int64_t rax_5
            int128_t zmm6
            
            if (rdx_2 s<= 0)
                zmm6 = zx.o(0)
                rax_5 = *(*(arg1 + 0x20) + 0x40)
            else
                int32_t* r9_1 = *(arg1 + 0x70)
                
                if (arg2.d f<= *r9_1)
                    zmm6 = zx.o(0)
                    rax_5 = *(*(arg1 + 0x20) + 0x40)
                else
                    int32_t rax_2 = 0
                    
                    if (rdx_2 s<= 0)
                        zmm6 = zx.o(0)
                        rax_5 = *(*(arg1 + 0x20) + 0x40)
                    else
                        int32_t* rcx_3 = r9_1
                        
                        while (not(arg2.d f< *rcx_3))
                            r8 = rax_2
                            rcx_3 = &rcx_3[5]
                            rax_2 += 1
                            
                            if (rax_2 s>= rdx_2)
                                break
                        
                        if (r8 == 0xffffffff)
                            zmm6 = zx.o(0)
                            rax_5 = *(*(arg1 + 0x20) + 0x40)
                        else
                            int64_t rax_4 = sx.q(r8) * 5
                            zmm6 = r9_1[rax_4 + 1]
                            rax_5 = *(r9_1 + (rax_4 << 2) + 8)
            
            arg_18.q = rax_5
            int64_t var_48
            
            if (rax_5 != *(rdi[5] + 0x40))
                r14 = 1
                int64_t* rax_8
                rax_8, zmm6 = sub_14208af70(r12_1, sub_140b63b70(&arg_18, &var_48))
                rdi = rax_8
            
            if ((r14 & 1) != 0)
                int64_t rcx_7 = var_48
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
            
            result = (*(*result_1 + 0x698))(result_1)
            int64_t* result_2 = result
            
            if (rdi == 0)
            label_1420acadb:
                void* r9_2 = *(arg3 + 0x28)
                
                if (r9_2 != 0)
                    int32_t rax_14 = *(r9_2 + 0xc)
                    void* const rax_21
                    
                    if (rax_14 s>= data_143e1d9b4)
                        rax_21 = nullptr
                    else
                        int16_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q(rax_14)
                        uint32_t rdx_10 = zx.d(temp0_1)
                        int32_t rax_16 = temp1_1 + rdx_10
                        rax_21 = *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3))
                            + sx.q(zx.d(rax_16.w) - rdx_10) * 0x18
                    
                    if (((*(rax_21 + 8) u>> 0x1d).b & 1) == 0)
                        int64_t rax_24 = *result_1
                        int32_t var_64_1 = 1.d
                        int32_t var_4c
                        int32_t var_5c_2 = var_4c & 0xfffffffe
                        int32_t var_68 = zmm6.d
                        int32_t var_60_1 = 0x40000000
                        (*(rax_24 + 0xd10))(result_1, r9_2, &var_68)
                    
                    (*(*result_1 + 0xb50))(result_1, 0, r12_1)
                    result = sub_1422785c0(result_1, 0, 0)
                    *(arg3 + 0x28) = 0
            else
                int64_t rdx_5 = *rdi
                result = (*(rdx_5 + 0x260))(rdi, rdx_5)
                
                if (result == 0)
                    goto label_1420acadb
                
                int64_t rdx_6 = *rdi
                result = (*(rdx_6 + 0x260))(rdi, rdx_6)
                
                if (result == result_1)
                    goto label_1420acadb
                
                if (result_2 != rdi[6])
                    if (*(arg3 + 0x28) == 0)
                        void* rax_10 = sub_14183bf40(result_1)
                        int64_t rax_11
                        
                        if (rax_10 != 0)
                            rax_11 = *(rax_10 + 0x28)
                        
                        if (rax_10 == 0 || rax_11 == 0)
                            *(arg3 + 0x28) = result_2
                        else
                            *(arg3 + 0x28) = rax_11
                    
                    sub_1422785c0(result_1, arg3, *(arg1 + 0x80) & 1)
                    void* rdx_7
                    rdx_7.b = 1
                    (*(*result_1 + 0xb50))(result_1, rdx_7, r12_1)
                    int64_t rax_13 = *result_1
                    int64_t rdx_8 = rdi[6]
                    int64_t r14_1 = *(arg3 + 0x28)
                    char var_54
                    var_54.d = 1
                    int32_t var_5c
                    int32_t var_4c_1 = var_5c & 0xfffffffe
                    int32_t var_58 = zmm6.d
                    int32_t var_50_1 = 0x40000000
                    (*(rax_13 + 0xd10))(result_1, rdx_8, &var_58)
                    result = result_1[0x57]
                    
                    if (result != 0)
                        result[0x4e2].d |= 0x400
                    
                    *(arg3 + 0x28) = r14_1

return result

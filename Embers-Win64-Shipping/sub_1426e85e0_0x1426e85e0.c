// 函数: sub_1426e85e0
// 地址: 0x1426e85e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
uint64_t result = zx.q(arg1[1].d u>> 4)

if ((result.b & 1) == 0)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    (*(*arg1 + 0x5d0))()
    int128_t zmm7 = zx.o(0)
    
    do
        result = (*(*arg1 + 0x150))(arg1)
        void* const r15_2
        
        if (result == 0)
            r15_2 = nullptr
        else
            void* r15_1 = *(result + 0x138)
            
            if (r15_1 == 0)
                r15_2 = nullptr
            else
                void* rax_5 = sub_14272b250()
                void* rdx_1 = *(r15_1 + 0x10)
                result = sx.q(*(rax_5 + 0x38))
                
                if (result.d s> *(rdx_1 + 0x38))
                    r15_2 = nullptr
                else
                    uint64_t result_1 = result
                    result = *(rdx_1 + 0x30)
                    
                    if (*(result + (result_1 << 3)) != rax_5 + 0x30)
                        r15_2 = nullptr
                    else
                        r15_2 = *(r15_1 + 0xa8)
        
        if (r15_2 != 0)
            if (arg1[0xa6] == 0)
                void* r8_2 = arg1[0x98]
                
                if (r8_2 != 0)
                    int64_t* i = arg1[0x9b]
                    void* r13_1 = sx.q(arg1[0x9c].d) * 0x38
                    int128_t var_c8
                    __builtin_memset(&var_c8, 0, 0x34)
                    void* r13_2 = r13_1 + i
                    int32_t var_94_1 = 0x80
                    int32_t var_90_1 = 0xffffffff
                    int32_t var_8c_1 = 0
                    int64_t var_80_1 = 0
                    int32_t var_78_1 = 0
                    
                    for (; i != r13_2; i = &i[7])
                        zmm6 = *(i + 0xc)
                        int64_t rbx_1 = *i
                        int32_t var_e8
                        sub_140b33170(&var_c8:8, &var_e8)
                        int64_t* var_e0
                        var_e0[1].d = zmm6.d
                        *var_e0 = rbx_1
                        *(var_e0 + 0xc) = 0xffffffff
                        int32_t rax_7 = sub_140b5ead0(rbx_1.d)
                        void var_108
                        sub_140e0e750(&var_c8:8, &var_108, (rbx_1 u>> 0x20).d + rax_7, var_e0, 
                            var_e8, nullptr)
                    
                    void* const var_128
                    double zmm8_1
                    zmm7, zmm8_1 = sub_1426cf150(r15_2, &var_128, r8_2, zx.d(arg1[0x9f].b))
                    void* const rdi_2 = var_128
                    int128_t var_118
                    int64_t* var_120
                    
                    if (rdi_2 != 0)
                        void* rbx_4 = *(r15_2 + 0x30)
                        void* const rbx_5
                        
                        if (rbx_4 == 0)
                            int64_t* rcx_8 = *(r15_2 + 0x20)
                            rbx_5 = (*(*rcx_8 + 0x150))(rcx_8)
                        else
                            rbx_5 = *(rbx_4 + 0x20)
                            void* rax_11
                            int64_t rax_12
                            void* rdx_6
                            
                            if (rbx_5 != 0)
                                rax_11 = sub_1425be5e0()
                                rdx_6 = *(rbx_5 + 0x10)
                                rax_12 = sx.q(*(rax_11 + 0x38))
                            
                            if (rbx_5 == 0 || rax_12.d s> *(rdx_6 + 0x38)
                                    || *(*(rdx_6 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
                                rbx_5 = nullptr
                        
                        *(rdi_2 + 0x58) = rbx_5
                        sub_140d3a3a0(rdi_2 + 0x34, arg1)
                        int64_t performanceCount
                        QueryPerformanceCounter(&performanceCount)
                        *(rdi_2 + 0x140) = float.d(performanceCount) f* data_143d796f8 f+ zmm8_1
                        sub_1405cd980(rdi_2 + 0x70, &var_c8:8)
                        int128_t zmm0_2 = var_128.o
                        *(rdi_2 + 0x30) = *(r15_2 + 0x128)
                        *(r15_2 + 0x128) += 1
                        var_118 = zmm0_2
                        var_120 = nullptr
                        var_128 = nullptr
                    else
                        var_118 = zx.o(0)
                        
                        if (var_120 != 0)
                            var_120[1].d -= 1
                            
                            if (var_120[1].d == 1)
                                (**var_120)(var_120)
                                int32_t temp1_1 = *(var_120 + 0xc)
                                *(var_120 + 0xc) -= 1
                                
                                if (temp1_1 == 1)
                                    (*(*var_120 + 8))(var_120, zx.q((rdi_2 + 1).d))
                    int64_t* rbx_6 = var_118:8.q
                    
                    if (&arg1[0xa6] == &var_118)
                    label_1426e88fc:
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d -= 1
                            
                            if (rbx_6[1].d == 1)
                                (**rbx_6)(rbx_6)
                                int32_t temp3_1 = *(rbx_6 + 0xc)
                                *(rbx_6 + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    (*(*rbx_6 + 8))(rbx_6, 1)
                    else
                        arg1[0xa6] = var_118.q
                        int64_t* rdi_3 = arg1[0xa7]
                        
                        if (rbx_6 == rdi_3)
                            goto label_1426e88fc
                        
                        arg1[0xa7] = rbx_6
                        
                        if (rdi_3 != 0)
                            rdi_3[1].d -= 1
                            
                            if (rdi_3[1].d == 1)
                                (**rdi_3)(rdi_3)
                                int32_t temp5_1 = *(rdi_3 + 0xc)
                                *(rdi_3 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rdi_3 + 8))(rdi_3, 1)
                    
                    uint64_t rdx_9 = arg1[0xa6]
                    
                    if (rdx_9 != 0)
                        int64_t* rax_21 = arg1[0xa7]
                        uint64_t var_f8 = rdx_9
                        
                        if (rax_21 != 0)
                            *(rax_21 + 0xc) += 1
                            rdx_9 = arg1[0xa6]
                        
                        sub_1426c43e0(r15_2 + 0x58, rdx_9 + 0x30, &var_f8)
                        
                        if (rax_21 != 0)
                            int32_t temp6_1 = *(rax_21 + 0xc)
                            *(rax_21 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                (*(*rax_21 + 8))(rax_21, 1)
                    
                    result = sub_1405ae200(&var_c8:8)
            
            uint64_t rcx_18 = arg1[0xa6]
            
            if (rcx_18 != 0 && *(rcx_18 + 0x28) == 0)
                zmm7 = sub_1426d5c40(rcx_18, arg1[0x9d].d)
                int64_t rdi_4 = sx.q(arg1[0xa9].d)
                uint64_t r15_3 = arg1[0xa6]
                int32_t rax_23 = (rdi_4 + 1).d
                arg1[0xa9].d = rax_23
                
                if (rax_23 s> *(arg1 + 0x54c))
                    sub_1423c8410(&arg1[0xa8])
                
                sub_1426c56d0(rdi_4 * 0x168 + arg1[0xa8], r15_3)
                result = arg1[0xa6]
                
                if (*(result + 0x28) != 0)
                    result = zx.q(arg1[0xa9].d - 1)
                    *(arg1 + 0x4ec) = result.d
        
        if (zmm7.d f< arg1[0x9d].d)
            break
        
        result = arg1[0xa6]
        
        if (result == 0)
            break
    while (*(result + 0x28) == 0)

__security_check_cookie(rax_1 ^ &var_158)
return result

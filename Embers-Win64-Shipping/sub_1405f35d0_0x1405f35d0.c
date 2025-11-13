// 函数: sub_1405f35d0
// 地址: 0x1405f35d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8 = -2
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t* rcx = *(arg1 + 0xa8)
int32_t result = (*(*rcx + 8))(rcx)

if (result s< 3)
    int32_t var_134 = 0
    int64_t* var_128
    __builtin_memset(&var_128, 0, 0x18)
    uint32_t var_138 = 0
    result = (*(*arg2 + 0x138))(arg2, &var_134)
    
    if (result s>= 0)
        int64_t* var_118
        
        if (var_134 != 1)
        label_1405f3676:
            int64_t* rcx_3 = var_118
            result = (**rcx_3)(rcx_3, &data_142d5b578, &var_128)
            
            if (result s>= 0)
                int64_t* rcx_4 = var_128
                int64_t* var_120
                result = (*(*rcx_4 + 0x18))(rcx_4, &data_142d5b568, &var_120)
                
                if (result s>= 0)
                    int64_t* rcx_5 = var_128
                    result = (*(*rcx_5 + 0x20))(rcx_5, &var_138)
                    
                    if (result s>= 0)
                        int64_t* rcx_6 = *(arg1 + 0x50)
                        uint64_t var_100
                        uint64_t r12_1
                        uint32_t r15_2
                        
                        if ((*(*rcx_6 + 0x40))(rcx_6, &data_1434cbc10, &var_100) s< 0)
                            r12_1 = zx.q(var_138)
                            r15_2 = var_138
                        else
                            r12_1 = var_100
                            r15_2 = (r12_1 u>> 0x20).d
                        
                        int64_t var_108 = 0
                        int64_t var_110 = 0
                        (*(*arg2 + 0x118))(arg2, &var_108)
                        (*(*arg2 + 0x128))(arg2, &var_110)
                        int64_t* rcx_9 = *(arg1 + 0x50)
                        int64_t var_80
                        result = (*(*rcx_9 + 0x50))(rcx_9, &data_1434cbb90, &var_80)
                        int32_t var_168
                        int32_t var_160
                        int64_t* var_158
                        uint32_t var_150
                        int64_t* var_148
                        
                        if (result s>= 0)
                            void*** var_f8
                            sub_1405eea50(*(arg1 + 0x98), &var_f8)
                            int64_t rcx_11 = var_80
                            int64_t var_78
                            int32_t r13_1
                            int32_t r14_1
                            
                            if (rcx_11 == 0x1000003231564e && var_78 == 0x719b3800aa000080)
                                r14_1 = 0x43
                                r13_1 = 5
                            else if (rcx_11 != 0x10000000000015 || var_78 != 0x719b3800aa000080)
                                r14_1 = 0x13
                                r13_1 = 0xd
                            else
                                r14_1 = 2
                                r13_1 = 2
                            
                            int64_t* rbx_2 = *(*(arg1 + 0x58) + 0x70)
                            int64_t* var_d0_1 = rbx_2
                            
                            if (rbx_2 != 0)
                                (*(*rbx_2 + 8))(rbx_2)
                            
                            double zmm0[0x2] = zx.o(0)
                            zmm0[0] = float.d(var_110 s/ 0xa)
                            arg3 = 0x4024000000000000
                            zmm0[0] = zmm0[0] f* arg3
                            arg4 = 0x3fe0000000000000
                            zmm0[0] = zmm0[0] f+ arg4
                            int64_t rdx_8 = int.q(zmm0[0])
                            
                            if (rdx_8 != -0x8000000000000000 && not(float.d(rdx_8) f== zmm0[0]))
                                int64_t rdx_9 = rdx_8
                                    - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))) & 1)
                                zmm0 = zx.o(0)
                                zmm0[0] = float.d(rdx_9)
                            
                            int64_t r8_6 = int.q(zmm0[0])
                            zmm0 = zx.o(0)
                            zmm0[0] = float.d(var_108 s/ 0xa)
                            zmm0[0] = zmm0[0] f* arg3
                            zmm0[0] = zmm0[0] f+ arg4
                            int64_t rcx_15 = int.q(zmm0[0])
                            arg5 = (zx.o(0)).q
                            
                            if (rcx_15 != -0x8000000000000000)
                                arg5 = float.d(rcx_15)
                                
                                if (not(arg5 f== zmm0[0]))
                                    int64_t rcx_16 = rcx_15 - (
                                        zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))) & 1)
                                    zmm0 = zx.o(0)
                                    zmm0[0] = float.d(rcx_16)
                            
                            void*** rdi_1 = var_f8
                            rdi_1[6] = int.q(zmm0[0])
                            rdi_1[2].d = r15_2
                            *(rdi_1 + 0x14) = r12_1.d
                            rdi_1[4].d = r15_2
                            *(rdi_1 + 0x24) = r12_1.d
                            rdi_1[3] = r8_6
                            rdi_1[5].d = r13_1
                            rdi_1[0xe].d = r14_1
                            int64_t* rcx_17 = rdi_1[0xb]
                            int32_t var_70
                            
                            if (rcx_17 != 0)
                                (*(*rcx_17 + 0x50))(rcx_17, &var_70)
                            
                            int32_t var_6c
                            
                            if (rcx_17 == 0 || var_70 != rdi_1[2].d || var_6c != *(rdi_1 + 0x14))
                                int32_t var_b0 = rdi_1[2].d
                                int32_t var_ac_1 = *(rdi_1 + 0x14)
                                int32_t var_a8_1 = 1
                                int32_t var_a4_1 = 1
                                int32_t var_a0_1 = (&data_1439c85fc)[zx.q(r14_1) * 0xa]
                                int64_t var_9c_1 = 1
                                int64_t var_94_1 = 0
                                int32_t var_8c_1 = 0
                                int32_t var_88_1 = 0x100
                                int64_t* rcx_19 = rdi_1[0xb]
                                
                                if (rcx_19 != 0)
                                    (*(*rcx_19 + 0x10))(rcx_19, arg5)
                                    rdi_1[0xb] = 0
                                
                                (*(*rbx_2 + 0x28))(rbx_2, &var_b0, 0, &rdi_1[0xb])
                                int64_t* r14_2 = rdi_1[0xc]
                                rdi_1[0xc] = rbx_2
                                (*(*rbx_2 + 8))(rbx_2)
                                
                                if (r14_2 != 0)
                                    (*(*r14_2 + 0x10))(r14_2)
                            
                            int64_t* r14_3 = rdi_1[0xb]
                            
                            if (rbx_2 != 0)
                                (*(*rbx_2 + 0x10))(rbx_2)
                            
                            int64_t var_c8 = 0
                            int32_t var_c0_1 = 0
                            uint32_t var_bc_1 = r15_2
                            int32_t var_b8_1 = r12_1.d
                            int32_t var_b4_1 = 1
                            int64_t* var_130 = nullptr
                            result = (**r14_3)(r14_3, &data_142d5fd48, &var_130)
                            int64_t* rcx_25 = var_130
                            
                            if (rcx_25 != 0)
                                result = (*(*rcx_25 + 0x40))(rcx_25, 0, 0)
                                
                                if (result == 0)
                                    int64_t* rcx_26 = *(*(arg1 + 0x58) + 0x78)
                                    var_148 = &var_c8
                                    var_150 = var_138
                                    var_158 = var_120
                                    var_160 = 0
                                    var_168 = 0
                                    (*(*rcx_26 + 0x170))(rcx_26, r14_3, 0, 0, var_168, var_160, 
                                        var_158, var_150, var_148)
                                    int64_t* rcx_27 = var_130
                                    (*(*rcx_27 + 0x48))(rcx_27, 1)
                                    zmm0 = var_f8.o
                                    double var_e8[0x2] = zmm0
                                    zmm0 = _mm_bsrli_si128(zmm0, 8)
                                    double rax_42 = zmm0[0]
                                    
                                    if (rax_42 != 0)
                                        *(rax_42 i+ 8) += 1
                                    
                                    int64_t* rcx_28 = *(arg1 + 0xa8)
                                    result = (**rcx_28)(rcx_28, &var_e8)
                                    double rbx_3 = var_e8[1]
                                    
                                    if (rbx_3 != 0)
                                        result = *(rbx_3 i+ 8)
                                        *(rbx_3 i+ 8) -= 1
                                        
                                        if (result == 1)
                                            (**rbx_3)(rbx_3)
                                            result = *(rbx_3 i+ 0xc)
                                            *(rbx_3 i+ 0xc) -= 1
                                            
                                            if (result == 1)
                                                result = (*(*rbx_3 + 8))(rbx_3, 1)
                                
                                rcx_25 = var_130
                            
                            if (rcx_25 != 0)
                                result = (*(*rcx_25 + 0x10))(rcx_25, zmm0)
                            
                            int64_t* var_f0
                            
                            if (var_f0 != 0)
                                result = var_f0[1].d
                                var_f0[1].d -= 1
                                
                                if (result == 1)
                                    result = (**var_f0)(var_f0)
                                    int32_t rdi_2 = *(var_f0 + 0xc)
                                    *(var_f0 + 0xc) -= 1
                                    
                                    if (rdi_2 == 1)
                                        result = (*(*var_f0 + 8))(var_f0, zx.q(rdi_2))
                        else if (*(arg1 + 0xb0) != 0)
                            *(arg1 + 0xb0) = 0
                        
                        int64_t* rcx_33 = var_120
                        
                        if (rcx_33 != 0)
                            result = (*(*rcx_33 + 0x10))(rcx_33, arg5, arg3, arg4, var_168, 
                                var_160, var_158, var_150, var_148)
                        
                        int64_t* rcx_34 = var_128
                        
                        if (rcx_34 != 0)
                            result = (*(*rcx_34 + 0x10))(rcx_34, arg5, arg3, arg4, var_168, 
                                var_160, var_158, var_150, var_148)
                        
                        int64_t* rcx_35 = var_118
                        
                        if (rcx_35 != 0)
                            result = (*(*rcx_35 + 0x10))(rcx_35)
        else
            result = (*(*arg2 + 0x140))(arg2, 0, &var_118)
            
            if (result s>= 0)
                goto label_1405f3676

__security_check_cookie(rax_1 ^ &var_188)
return result

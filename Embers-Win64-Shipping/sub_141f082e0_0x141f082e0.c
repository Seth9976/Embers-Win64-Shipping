// 函数: sub_141f082e0
// 地址: 0x141f082e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18

uint64_t result = zx.q(*(rax_7 + 8) u>> 0x1d)

if ((result.b & 1) == 0)
    result = sub_141f020c0(&arg1[0x53], arg2)
    
    if (result.d == 0xffffffff)
        result = sub_140d3c6e0(arg2 + 0x74)
        uint64_t result_1 = result
        
        if (result != 0 && (*(result + 0x209) & 1) != 0 && (*(arg1 + 0x209) & 1) != 0)
            result = sub_141f3be00(arg1, result)
            
            if (result.d == 1)
                data_143f3ad98 += 1
                int64_t* rbx_1 = arg1[0x14]
                int64_t* rdi_1 = *(result_1 + 0xa0)
                char arg_8
                char rax_11
                
                if (arg3 != 0 && rbx_1 != rdi_1)
                    int64_t* rdx_5 = rdi_1
                    int64_t* rcx_5 = rbx_1
                    int32_t r8_3 = rdi_1[0x35].d - *(rdi_1 + 0x1d4)
                    int32_t rax_10 = rbx_1[0x35].d - *(rbx_1 + 0x1d4)
                    
                    if (rax_10 s> r8_3)
                        rdx_5 = rbx_1
                    
                    if (rax_10 s> r8_3)
                        rcx_5 = rdi_1
                    
                    rax_11 = sub_141dce3b0(rcx_5, rdx_5)
                    arg_8 = 1
                
                if (arg3 == 0 || rbx_1 == rdi_1 || rax_11 != 0)
                    arg_8 = 0
                
                int64_t r12_1 = sx.q(arg1[0x54].d)
                int32_t rax_12 = (r12_1 + 1).d
                arg1[0x54].d = rax_12
                
                if (rax_12 s> *(arg1 + 0x2a4))
                    sub_141f22a70(&arg1[0x53])
                
                int64_t rcx_7 = arg1[0x53]
                int128_t* rdx_7 = r12_1 * 0x8c
                *(rdx_7 + rcx_7) = *arg2
                *(rdx_7 + rcx_7 + 0x10) = arg2[1]
                *(rdx_7 + rcx_7 + 0x20) = arg2[2]
                *(rdx_7 + rcx_7 + 0x30) = arg2[3]
                *(rdx_7 + rcx_7 + 0x40) = arg2[4]
                *(rdx_7 + rcx_7 + 0x50) = arg2[5]
                *(rdx_7 + rcx_7 + 0x60) = arg2[6]
                *(rdx_7 + rcx_7 + 0x70) = arg2[7]
                *(rdx_7 + rcx_7 + 0x80) = arg2[8].q
                *(rdx_7 + rcx_7 + 0x88) = *(arg2 + 0x88)
                uint128_t var_c8
                char* rax_14 = sub_141f2d540(&var_c8, arg1, 0xffffffff)
                
                if (sub_141f020c0(result_1 + 0x298, rax_14) == 0xffffffff)
                    int32_t rax_16 = *(result_1 + 0x2a0)
                    *(result_1 + 0x2a0) = rax_16 + 1
                    
                    if (rax_16 + 1 s> *(result_1 + 0x2a4))
                        sub_141f22a70(result_1 + 0x298)
                    
                    int64_t rcx_12 = *(result_1 + 0x298)
                    uint128_t* rdx_11 = sx.q(rax_16) * 0x8c
                    *(rdx_11 + rcx_12) = *rax_14
                    *(rdx_11 + rcx_12 + 0x10) = *(rax_14 + 0x10)
                    *(rdx_11 + rcx_12 + 0x20) = *(rax_14 + 0x20)
                    *(rdx_11 + rcx_12 + 0x30) = *(rax_14 + 0x30)
                    *(rdx_11 + rcx_12 + 0x40) = *(rax_14 + 0x40)
                    *(rdx_11 + rcx_12 + 0x50) = *(rax_14 + 0x50)
                    *(rdx_11 + rcx_12 + 0x60) = *(rax_14 + 0x60)
                    *(rdx_11 + rcx_12 + 0x70) = *(rax_14 + 0x70)
                    *(rdx_11 + rcx_12 + 0x80) = *(rax_14 + 0x80)
                    *(rdx_11 + rcx_12 + 0x88) = *(rax_14 + 0x88)
                
                result = arg1[0x15]
                
                if (result == 0)
                    result = sub_141ee69e0(arg1)
                
                char* r14_2
                
                if (arg3 == 0 || (*(rbx_1 + 0x5a) & 8) == 0 || (*(rbx_1 + 0x5b) & 0x40) == 0)
                    r14_2.b = 0
                else
                    r14_2.b = 1
                
                if (arg3 != 0)
                    if (result != 0)
                        result = sub_1424385d0(result)
                        
                        if (result.b != 0 || r14_2.b != 0)
                        label_141f085e0:
                            int32_t rax_19 = *(arg1 + 0xc)
                            void* const rax_26
                            void* const r12_3
                            
                            if (rax_19 s>= data_143e1d9b4)
                                r12_3 = nullptr
                                rax_26 = nullptr
                            else
                                int16_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = sx.q(rax_19)
                                uint32_t rdx_13 = zx.d(temp2_1)
                                int32_t rax_21 = temp3_1 + rdx_13
                                r12_3 = nullptr
                                rax_26 = *(data_143e1d9a0 + (sx.q(rax_21 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_21.w) - rdx_13) * 0x18
                            
                            int64_t* var_168
                            int64_t* var_160
                            uint128_t var_158
                            uint128_t zmm1_1
                            
                            if (((*(rax_26 + 8) u>> 0x1d).b & 1) == 0)
                                char rax_29 = *arg2
                                zmm1_1 = *(arg2 + 0x14)
                                int32_t r14_3 = arg2[6].d
                                var_158 = *(arg2 + 4)
                                int32_t arg_20
                                arg_20.b = rax_29
                                uint128_t var_148_1 = zmm1_1
                                uint128_t var_138_1 = *(arg2 + 0x24)
                                uint128_t var_128_1 = *(arg2 + 0x34)
                                uint128_t var_118_1 = *(arg2 + 0x44)
                                uint128_t var_108_1 = *(arg2 + 0x54)
                                uint128_t var_f8_1 = *(arg2 + 0x64)
                                uint64_t var_d8_1 = *(arg2 + 0x84)
                                uint128_t var_e8_1 = *(arg2 + 0x74)
                                sub_141f19ce0(arg1 + 0x3d9, &var_168)
                                int64_t* rcx_21 = var_168
                                
                                if (rcx_21 != 0)
                                    uint128_t* var_178_1 = &var_158
                                    char var_180_1 = arg_20.b
                                    sub_141f08d40(rcx_21, arg1, rdi_1.d, result_1.b, r14_3)
                                
                                if (var_160 != 0)
                                    var_160[1].d -= 1
                                    
                                    if (var_160[1].d == 1)
                                        (**var_160)(var_160)
                                        int32_t temp7_1 = *(var_160 + 0xc)
                                        *(var_160 + 0xc) -= 1
                                        
                                        if (temp7_1 == 1)
                                            (*(*var_160 + 8))(var_160, 1)
                            
                            int32_t rax_33 = *(result_1 + 0xc)
                            
                            if (rax_33 s< data_143e1d9b4)
                                int16_t temp4_1
                                int32_t temp5_1
                                temp4_1:temp5_1 = sx.q(rax_33)
                                uint32_t rdx_18 = zx.d(temp4_1)
                                int32_t rax_35 = temp5_1 + rdx_18
                                r12_3 = *(data_143e1d9a0 + (sx.q(rax_35 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_35.w) - rdx_18) * 0x18
                            
                            result = zx.q(*(r12_3 + 8) u>> 0x1d)
                            
                            if ((result.b & 1) == 0)
                                char r14_5 = *arg2
                                uint128_t zmm0_1 = *(arg2 + 4)
                                zmm1_1 = *(arg2 + 0x14)
                                uint128_t var_148_2
                                uint128_t var_138_2
                                uint128_t var_128_2
                                uint128_t var_118_2
                                uint128_t var_108_2
                                uint128_t var_f8_2
                                uint128_t var_e8_2
                                uint64_t var_d8_2
                                
                                if (r14_5 == 0)
                                    var_158 = zmm0_1
                                    var_148_2 = zmm1_1
                                    var_138_2 = *(arg2 + 0x24)
                                    var_128_2 = *(arg2 + 0x34)
                                    var_118_2 = *(arg2 + 0x44)
                                    var_108_2 = *(arg2 + 0x54)
                                    var_f8_2 = *(arg2 + 0x64)
                                    var_d8_2 = *(arg2 + 0x84)
                                    var_e8_2 = *(arg2 + 0x74)
                                else
                                    uint64_t rax_41 = *(arg2 + 0x84)
                                    var_158 = zmm0_1
                                    var_148_2 = zmm1_1
                                    var_138_2 = *(arg2 + 0x24)
                                    var_128_2 = *(arg2 + 0x34)
                                    var_118_2 = *(arg2 + 0x44)
                                    var_108_2 = *(arg2 + 0x54)
                                    var_f8_2 = *(arg2 + 0x64)
                                    var_e8_2 = *(arg2 + 0x74)
                                    var_d8_2 = rax_41
                                    var_160.d = (var_128_2.d ^ 0x80000000).d
                                    int32_t rax_42 = var_160.d
                                    var_138_2:8.q = (_mm_unpacklo_ps(var_138_2:8.d ^ 0x80000000, 
                                        (var_138_2:0xc.d ^ 0x80000000).q)).q
                                    var_160.d = (var_128_2:0xc.d ^ 0x80000000).d
                                    zmm1_1 = _mm_unpacklo_ps(var_128_2:4.d ^ 0x80000000, 
                                        (var_128_2:8.d ^ 0x80000000).q)
                                    var_128_2.d = rax_42
                                    var_128_2:4.q = zmm1_1.q
                                    var_128_2:0xc.d = var_160.d
                                
                                var_c8 = var_158
                                uint128_t var_b8_1 = var_148_2
                                uint128_t var_a8_1 = var_138_2
                                uint128_t var_98_1 = var_128_2
                                uint128_t var_88_1 = var_118_2
                                uint128_t var_78_1 = var_108_2
                                uint128_t var_68_1 = var_f8_2
                                uint64_t var_48_1 = var_d8_2
                                uint128_t var_58_1 = var_e8_2
                                result = sub_141f19ce0(result_1 + 0x3d9, &var_168)
                                int64_t* rcx_29 = var_168
                                
                                if (rcx_29 != 0)
                                    uint128_t* var_178_2 = &var_c8
                                    char var_180_2 = r14_5
                                    result =
                                        sub_141f08d40(rcx_29, result_1, rbx_1.d, arg1.b, 0xffffffff)
                                
                                if (var_160 != 0)
                                    var_160[1].d -= 1
                                    
                                    if (var_160[1].d == 1)
                                        result = (**var_160)(var_160)
                                        int32_t temp9_1 = *(var_160 + 0xc)
                                        *(var_160 + 0xc) -= 1
                                        
                                        if (temp9_1 == 1)
                                            result = (*(*var_160 + 8))(var_160, 1)
                            
                            if (arg_8 != 0)
                                if (sub_141dcded0(rbx_1) != 0)
                                    (*(*rbx_1 + 0x338))(rbx_1, rdi_1)
                                
                                if (sub_141dcded0(rdi_1) != 0)
                                    (*(*rdi_1 + 0x338))(rdi_1, rbx_1)
                                
                                if (sub_141dcded0(rbx_1) != 0)
                                    sub_141f00130(rbx_1 + 0x183, rbx_1)
                                
                                result = sub_141dcded0(rdi_1)
                                
                                if (result.b != 0)
                                    return sub_141f00130(rdi_1 + 0x183, rdi_1)
                    else if (r14_2.b != 0)
                        goto label_141f085e0

return result

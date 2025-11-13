// 函数: sub_141e0d8e0
// 地址: 0x141e0d8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t rdx = sx.q(*(arg1 + 0x208))
int64_t r13 = 0
int64_t r12_1 = rdx << 4
uint64_t result = zx.q(1 - rdx.d)
int64_t var_128 = r12_1
int32_t rcx = 0
int64_t rdx_2 = sx.q(result.d) << 4
float zmm7[0x4] = arg2
int64_t var_120 = rdx_2
int32_t var_138 = 0
char var_f8
float var_e8[0x4]
int64_t var_b0
float zmm2[0x4]
float zmm6[0x4]

if (*(r12_1 + arg1 + 0x160) s> 0)
    int64_t rdi_1 = 0
    int64_t var_118_1 = 0
    
    while (true)
        int64_t* rdi_2 = rdi_1 + *(r12_1 + arg1 + 0x158)
        
        if (rdi_2[1].d s> 0)
            int64_t* r14_2
            
            if (rcx s< 0 || rcx s>= *(rdx_2 + arg1 + 0x160))
                r14_2 = nullptr
            else
                r14_2 = sx.q(rcx) * 0x70 + *(rdx_2 + arg1 + 0x158)
            
            zmm6 = sub_141e66730(rdi_2, r14_2, arg3)
            bool cond:4_1 = rdi_2[4].d s> 0
            int64_t** r12_2 = &rdi_2[3]
            uint32_t zmm3_1[0x4] = data_143f393b0
            int32_t rax_3 = *(arg1 + 0x280)
            arg2 = zmm3_1
            uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm3_1, data_143f393c0)
            arg2[0].q = zx.o(0) u>> 0x40
            int16_t var_5f
            var_5f:1.b = rdi_2[1].d == 1
            float temp0_2[0x4] = _mm_shuffle_ps(zx.o(0), arg2, 0xc4)
            float var_70_1 = zmm7[0]
            var_f8 = 0
            int32_t var_f4_1 = 0
            var_e8 = temp0_2
            int128_t var_d8_1 = zx.o(0)
            uint32_t var_c8_1[0x4] = temp0_1
            int32_t var_b8_1 = rax_3
            var_b0 = 0
            int32_t var_a8_1 = 0
            int64_t var_a0_1
            __builtin_memset(&var_a0_1, 0, 0x28)
            int64_t var_6c_1 = 0
            int32_t var_64_1 = 0
            var_5f.b = 1
            int64_t var_90_1
            
            if (r14_2 != 0)
                int32_t rcx_2
                rcx_2.b = sub_140b5b8a0(*(r14_2 + 0x54), 0) == 0
                
                if ((r14_2[0xb].d != 0 | rcx_2.b) != 0)
                    int32_t rcx_3
                    rcx_3.b = sub_140b5b8a0(*(r14_2 + 0x5c), 0) == 0
                    
                    if ((r14_2[0xc].d != 0 | rcx_3.b) != 0)
                        int32_t rcx_4
                        rcx_4.b = r14_2[0xb].d == 0
                        
                        if ((rcx_4.b & sub_140b5b8a0(*(r14_2 + 0x54), 0)) != 0)
                        label_141e0dad6:
                            int32_t rcx_6
                            rcx_6.b = r14_2[0xc].d == 0
                            
                            if ((rcx_6.b & sub_140b5b8a0(*(r14_2 + 0x5c), 0)) != 0)
                                var_a0_1.o = *(r14_2 + 0x54)
                                var_90_1.d = *(r14_2 + 0x64)
                            else
                                int64_t* rcx_7 = *r12_2
                                void* rdx_5 = &rcx_7[sx.q(r12_2[1].d)]
                                
                                if (rcx_7 != rdx_5)
                                    while (*rcx_7 != *(r14_2 + 0x5c))
                                        rcx_7 = &rcx_7[1]
                                        
                                        if (rcx_7 == rdx_5)
                                            goto label_141e0db24
                                    
                                    var_a0_1.o = *(r14_2 + 0x54)
                                    var_90_1.d = *(r14_2 + 0x64)
                        else
                            int64_t* rcx_5 = *r12_2
                            void* rdx_4 = &rcx_5[sx.q(r12_2[1].d)]
                            
                            if (rcx_5 != rdx_4)
                                while (*rcx_5 != *(r14_2 + 0x54))
                                    rcx_5 = &rcx_5[1]
                                    
                                    if (rcx_5 == rdx_4)
                                        goto label_141e0db24
                                
                                goto label_141e0dad6
            
        label_141e0db24:
            int32_t rsi_1 = 0
            int64_t var_130
            
            if (rdi_2[1].d s> 0)
                int64_t r12_3 = 0
                
                while (true)
                    int64_t* rbx_4 = *rdi_2 + r12_3
                    int64_t* rcx_8 = *rbx_4
                    (*(*rcx_8 + 0x260))(rcx_8, rbx_4, arg1 + 0x210, &var_f8, var_138)
                    
                    if (*(arg1 + 0x280) == 2 && var_f8 != 0)
                        zmm2 = rbx_4[3].d
                        zmm2[0] = zmm2[0] f* *(rbx_4 + 0x14)
                        zmm6, zmm7 = sub_141df38f0(arg1 + 0x460, &var_e8, zmm2)
                    
                    if (cond:4_1 != 0)
                        int32_t rcx_10
                        rcx_10.b = sub_140b5b8a0(var_90_1:4.d, 0) == 0
                        int64_t var_88
                        
                        if ((var_88.d != 0 | rcx_10.b) == 0)
                        label_141e0dbbe:
                            rdi_2[2].d = rsi_1
                            r13 += 1
                            rsi_1 += 1
                            r12_3 += 0x48
                            
                            if (rsi_1 s>= rdi_2[1].d)
                                break
                            
                            continue
                        else
                            int32_t rcx_11
                            rcx_11.b = sub_140b5b8a0(var_88:4.d, 0) == 0
                            int64_t var_80
                            
                            if ((var_80.d != 0 | rcx_11.b) == 0)
                                goto label_141e0dbbe
                            
                            if (&rdi_2[6] != &var_b0)
                                int64_t r12_4 = sx.q(var_a8_1)
                                int32_t r8_1 = *(rdi_2 + 0x3c)
                                var_130 = var_b0
                                rdi_2[7].d = r12_4.d
                                
                                if (r12_4.d != 0 || r8_1 != 0)
                                    sub_1407c3650(&rdi_2[6], r12_4.d, r8_1)
                                    memcpy(rdi_2[6], var_130, (r12_4 * 0xc).d)
                                else
                                    *(rdi_2 + 0x3c) = r12_4.d
                            
                            *(rdi_2 + 0x40) = var_a0_1.o
                            rdi_2[0xa].d = var_90_1.d
                            *(rdi_2 + 0x54) = var_90_1:4.o
                            *(rdi_2 + 0x64) = var_80:4.d
                            rdi_2[0xd] = r12_2
                    
                    rdi_2[2].d = rsi_1
                    break
                
                r12_2 = &rdi_2[3]
            
            result, arg3 = sub_141e5cf50(rdi_2, r14_2)
            
            if (cond:4_1 != 0)
                int64_t* rcx_15 = *(arg1 + 0xa8)
                (*(*rcx_15 + 0x70))(rcx_15)
                var_130 = *(*(*rdi_2 + sx.q(rdi_2[2].d) * 0x48) + 0x18)
                int64_t var_110
                arg3, zmm6 = sub_140b63b70(&var_130, &var_110)
                int32_t rcx_19
                rcx_19.b = var_a0_1:4.d == 0
                
                if ((rcx_19.b & sub_140b5b8a0(var_a0_1.d, 0)) != 0)
                label_141e0dcd9:
                    r14_2.b = 1
                else
                    for (int64_t* i = *r12_2; i != &i[sx.q(r12_2[1].d)]; i = &i[1])
                        if (*i == var_a0_1)
                            goto label_141e0dcd9
                    
                    r14_2.b = 0
                
                uint64_t var_98
                int32_t rcx_20
                rcx_20.b = var_98:4.d == 0
                
                if ((rcx_20.b & sub_140b5b8a0(var_98.d, 0).b) != 0)
                label_141e0dd1a:
                    result.b = 1
                else
                    for (int64_t* i_1 = *r12_2; i_1 != &i_1[sx.q(r12_2[1].d)]; i_1 = &i_1[1])
                        if (*i_1 == var_98)
                            goto label_141e0dd1a
                    
                    result.b = 0
                
                if (r14_2.b == 0 || result.b == 0)
                    char var_60_2 = 0
                
                int64_t rcx_21 = var_110
                
                if (rcx_21 != 0)
                    result, arg3 = sub_140a74f90(rcx_21)
            
            int32_t i_2 = rsi_1 + 1
            
            if (rdi_2[1].d s> i_2)
                var_5f.b = 0
                int64_t r14_5 = (r13 + 1) * 0x48
                
                do
                    void* rbx_8 = *rdi_2
                    var_f8 = 0
                    int32_t var_f4_2 = 0
                    int64_t* rbx_9 = rbx_8 + r14_5
                    int64_t* rcx_22 = *rbx_9
                    result, arg3 =
                        (*(*rcx_22 + 0x260))(rcx_22, rbx_9, arg1 + 0x210, &var_f8, var_138)
                    
                    if (*(arg1 + 0x280) == 2 && var_f8 != 0)
                        zmm2 = rbx_9[3].d
                        zmm2[0] = zmm2[0] f* *(rbx_9 + 0x14)
                        zmm6, zmm7 = sub_141df38f0(arg1 + 0x460, &var_e8, zmm2)
                    
                    i_2 += 1
                    r14_5 += 0x48
                while (i_2 s< rdi_2[1].d)
            
            int64_t rcx_24 = var_b0
            
            if (rcx_24 != 0)
                result, arg3 = sub_140a74f90(rcx_24)
            
            rdx_2 = var_120
            r13 = 0
            r12_1 = var_128
            rcx = var_138
        
        rcx += 1
        rdi_1 = var_118_1 + 0x70
        var_138 = rcx
        var_118_1 = rdi_1
        
        if (rcx s>= *(r12_1 + arg1 + 0x160))
            break

int32_t i_3 = 0

if (*(r12_1 + arg1 + 0x140) s> 0)
    float var_38_1[0x4] = zmm6
    int64_t rsi_2 = 0
    zmm6 = zx.o(0)
    
    do
        int64_t* rdi_5 = *(r12_1 + arg1 + 0x138) + rsi_2
        int64_t* rcx_25 = *rdi_5
        int64_t* rax_29 = (*(*rcx_25 + 0x270))(rcx_25)
        zmm2 = data_143f393b0
        int64_t* rcx_26 = &data_143f39940
        float var_70_2 = zmm7[0]
        arg2 = zmm2
        var_f8 = 0
        zmm2 = __andps_xmmxud_memxud(zmm2, data_143f393c0)
        
        if (rax_29 != 0)
            rcx_26 = rax_29
        
        int32_t var_f4_3 = 0
        float var_d8_2[0x4] = zmm6
        float var_c8_2[0x4] = zmm2
        int32_t var_b8_2 = *(arg1 + 0x280)
        __builtin_memset(&var_b0, 0, 0x38)
        int64_t* var_78_2 = rcx_26
        int64_t var_6c_2 = 0
        int32_t var_64_2 = 0
        arg2[0].q = zmm6 u>> 0x40
        var_e8 = _mm_shuffle_ps(zmm6, arg2, 0xc4)
        int16_t var_5f_1 = 0x101
        bool var_60_3 = rcx_26[1].d s> 0
        int64_t* rcx_27 = *rdi_5
        result = (*(*rcx_27 + 0x260))(rcx_27, rdi_5, arg1 + 0x210, &var_f8, var_138)
        
        if (*(arg1 + 0x280) == 2 && var_f8 != 0)
            zmm2 = rdi_5[3].d
            zmm2[0] = zmm2[0] f* *(rdi_5 + 0x14)
            zmm6, zmm7 = sub_141df38f0(arg1 + 0x460, &var_e8, zmm2)
        
        int64_t rcx_29 = var_b0
        
        if (rcx_29 != 0)
            result = sub_140a74f90(rcx_29)
        
        i_3 += 1
        rsi_2 += 0x48
    while (i_3 s< *(r12_1 + arg1 + 0x140))

__security_check_cookie(rax_1 ^ &var_158)
return result

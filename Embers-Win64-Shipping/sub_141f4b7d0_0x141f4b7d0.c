// 函数: sub_141f4b7d0
// 地址: 0x141f4b7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = arg2
sub_140b33630("ProjectileMovement")
int512_t zmm1

if ((*(arg1 + 0xf9) & 0x14) == 4)
    zmm1.o = zmm7
    (*(*arg1 + 0x580))(arg1, zmm1)

bool cond:0 = arg1[0x16] == 0
int32_t rax_2 = arg1[0x39].d
arg1[0x2e] = arg1[0x38]
arg1[0x2f].d = rax_2
arg1[0x38] = data_143dbb1f8.q
arg1[0x39].d = data_143dbb200

if (not(cond:0) && (*(arg1 + 0x8a) & 1) != 0)
    zmm1.o = zmm7
    
    if ((*(*arg1 + 0x428))(arg1, zmm1) == 0)
        zmm1.o = zmm7
        int512_t zmm1_1
        int512_t zmm2_1
        int512_t zmm3_1
        int128_t zmm6_1
        zmm1_1, zmm2_1, zmm3_1, zmm6_1 = sub_141f29460(arg1, zmm1, zx.q(arg3), arg4)
        void* r8_1 = arg1[0x16]
        
        if (r8_1 != 0)
            int32_t rax_6 = *(r8_1 + 0xc)
            void* const rax_13
            
            if (rax_6 s>= data_143e1d9b4)
                rax_13 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_6)
                uint32_t rdx_2 = zx.d(temp0_1)
                int32_t rax_8 = temp1_1 + rdx_2
                rax_13 = *(data_143e1d9a0 + (sx.q(rax_8 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_8.w) - rdx_2) * 0x18
            
            if (((*(rax_13 + 8) u>> 0x1d).b & 1) == 0 && (arg1[0x1f].b & 0x20) != 0)
                void* r15_1 = *(r8_1 + 0xa0)
                
                if (r15_1 != 0 && (*(*arg1 + 0x510))(arg1) != 0)
                    int64_t* rcx_8 = arg1[0x16]
                    int64_t arg_8 = 0
                    
                    if ((*(*rcx_8 + 0x3e8))(rcx_8, arg_8) == 0)
                        int128_t var_38_1 = zmm6_1
                        int32_t r12_1 = 0
                        int128_t zmm8
                        int128_t var_58_1 = zmm8
                        int32_t r13_1 = 0
                        uint32_t zmm9[0x4]
                        uint32_t var_68_1[0x4] = zmm9
                        int32_t rsi_1 = 0
                        int128_t zmm10
                        int128_t var_78_1 = zmm10
                        int128_t zmm11
                        int128_t var_88_1 = zmm11
                        int128_t zmm12
                        int128_t var_98_1 = zmm12
                        int128_t zmm13
                        int128_t var_a8_1 = zmm13
                        int128_t zmm14
                        int128_t var_b8_1 = zmm14
                        int128_t zmm15
                        int128_t var_c8_1 = zmm15
                        char var_1a8
                        memset(&var_1a8, 0, 0x88)
                        int32_t var_1a0_1 = 0x3f800000
                        
                        if ((arg1[0x1f].b & 0x20) != 0)
                            zmm9 = 0x7fffffff
                            zmm15 = zx.o(0)
                            zmm8 = 0x358637bd
                            zmm10 = 0x3c23d70a
                            zmm14 = 0x43340000
                            
                            do
                                int32_t r14_1 = rsi_1
                                
                                if (zmm7.d f< zmm8.d)
                                    break
                                
                                if (rsi_1 s>= arg1[0x2b].d)
                                    break
                                
                                int32_t rax_20 = *(r15_1 + 0xc)
                                void* const rax_24
                                
                                if (rax_20 s>= data_143e1d9b4)
                                    rax_24 = nullptr
                                else
                                    uint32_t rdx_5 = zx.d(rax_20.w)
                                    
                                    if (rax_20 s< 0)
                                        rax_20 += 0xffff
                                        rdx_5 -= 0x10000
                                    
                                    rax_24 = *(data_143e1d9a0 + (sx.q(rax_20 s>> 0x10) << 3))
                                        + sx.q(rdx_5) * 0x18
                                
                                if (((*(rax_24 + 8) u>> 0x1d).b & 1) != 0)
                                    break
                                
                                if (sub_141f3f060(arg1) != 0)
                                    break
                                
                                rsi_1 += 1
                                zmm6_1 = zmm7
                                uint128_t zmm0_1
                                
                                if ((*(*arg1 + 0x528))(arg1) != 0)
                                    zmm0_1 = *(arg1 + 0x154)
                                    
                                    if (not(zmm7.d f<= zmm0_1.d) && rsi_1 s< arg1[0x2b].d)
                                        zmm6_1.d = zmm6_1.d f* 0.5f
                                        zmm6_1 = _mm_min_ss(zmm6_1.d, zmm0_1.d)
                                    
                                    zmm6_1 = _mm_max_ss(zmm6_1.d, zmm8.d)
                                
                                int32_t rax_30 = *(arg1 + 0xcc)
                                zmm7.d = zmm7.d f- zmm6_1.d
                                int64_t rax_31 = *arg1
                                zmm3_1.o = zmm6_1
                                int32_t var_1a0_2 = 0x3f800000
                                uint64_t var_238 = *(arg1 + 0xc4)
                                char* var_248
                                char var_240
                                void var_218
                                (*(rax_31 + 0x568))(arg1, &var_218, &var_238, zmm3_1, var_248, 
                                    var_240, var_238, rax_30)
                                uint8_t r9_1 = arg1[0x1f].b
                                int32_t* rax_32
                                uint128_t var_1b8
                                
                                if ((r9_1 & 1) == 0)
                                    rax_32 = &var_1b8
                                    var_1b8 = *(arg1[0x16] + 0x1c0)
                                else
                                    int32_t var_e8[0x4]
                                    
                                    if (_mm_and_ps(var_238.d, zmm9).d f> zmm10.d)
                                        rax_32, zmm1_1, zmm2_1, zmm3_1, zmm6_1, zmm7, zmm8, zmm9, 
                                            zmm10, zmm14, zmm15 = sub_140ae1890(&var_238, &var_e8)
                                        r9_1 = arg1[0x1f].b
                                    else if (_mm_and_ps(var_238:4.d, zmm9).d f> zmm10.d)
                                        rax_32, zmm1_1, zmm2_1, zmm3_1, zmm6_1, zmm7, zmm8, zmm9, 
                                            zmm10, zmm14, zmm15 = sub_140ae1890(&var_238, &var_e8)
                                        r9_1 = arg1[0x1f].b
                                    else if (_mm_and_ps(rax_30, zmm9).d f<= zmm10.d)
                                        rax_32 = &var_1b8
                                        var_1b8 = *(arg1[0x16] + 0x1c0)
                                    else
                                        rax_32, zmm1_1, zmm2_1, zmm3_1, zmm6_1, zmm7, zmm8, zmm9, 
                                            zmm10, zmm14, zmm15 = sub_140ae1890(&var_238, &var_e8)
                                        r9_1 = arg1[0x1f].b
                                zmm0_1 = *rax_32
                                uint128_t var_208 = zmm0_1
                                
                                if ((r9_1 & 3) == 3)
                                    int32_t var_228
                                    sub_140adf5d0(&var_208, &var_228)
                                    var_228 = 0
                                    float var_224
                                    float zmm0_3
                                    zmm0_3, zmm9 = sub_140a454f0(var_224, 0x43b40000)
                                    
                                    if (not(zmm0_3 f>= zmm15.d))
                                        zmm0_3 = zmm0_3 + 360f
                                    
                                    if (not(zmm0_3 f<= zmm14.d))
                                        zmm0_3 = zmm0_3 - 360f
                                    
                                    var_224 = zmm0_3
                                    int32_t var_220_1 = 0
                                    float var_d8[0x4]
                                    float (* rax_35)[0x4]
                                    rax_35, zmm1_1, zmm2_1, zmm3_1, zmm6_1, zmm7, zmm8 =
                                        sub_140ade170(&var_228, &var_d8)
                                    r9_1 = arg1[0x1f].b
                                    zmm0_1 = *rax_35
                                    var_208 = zmm0_1
                                
                                var_240 = 0
                                uint128_t* r8_3 = &var_208
                                void* rdx_11 = &var_218
                                
                                if ((r9_1 & 4) == 0)
                                    int32_t rbx_1 = arg1[0x18].d
                                    var_248 = &var_1a8
                                    arg1[0x18].d = rbx_1 | 4
                                    (*(*arg1 + 0x478))(arg1, rdx_11, r8_3, arg1[0x1f].b u>> 6 & 1, 
                                        var_248, 0)
                                    arg1[0x18].d = rbx_1
                                else
                                    var_248 = &var_1a8
                                    sub_141f231f0(arg1, rdx_11, r8_3, r9_1 u>> 6 & 1, zmm0_1.q, 
                                        zmm1_1, zmm2_1, var_248, 0)
                                
                                int32_t rax_39 = *(r15_1 + 0xc)
                                void* const rax_43
                                
                                if (rax_39 s>= data_143e1d9b4)
                                    rax_43 = nullptr
                                else
                                    uint32_t rdx_12 = zx.d(rax_39.w)
                                    
                                    if (rax_39 s< 0)
                                        rax_39 += 0xffff
                                        rdx_12 -= 0x10000
                                    
                                    rax_43 = *(data_143e1d9a0 + (sx.q(rax_39 s>> 0x10) << 3))
                                        + sx.q(rdx_12) * 0x18
                                
                                if (((*(rax_43 + 8) u>> 0x1d).b & 1) != 0)
                                    return sub_140b37f60("ProjectileMovement")
                                
                                if (sub_141f3f060(arg1) != 0)
                                    return sub_140b37f60("ProjectileMovement")
                                
                                zmm0_1 = var_238.d
                                
                                if ((var_1a8 & 1) != 0)
                                    if (zmm0_1.d f!= *(arg1 + 0xc4)
                                            || var_238:4.d.d f!= arg1[0x19].d
                                            || rax_30.d f!= *(arg1 + 0xcc))
                                        zmm1_1.o = var_1a0_2
                                    else
                                        zmm1_1.o = var_1a0_2
                                        zmm0_1 = zx.o(var_238)
                                        uint64_t* rax_53
                                        
                                        if (zmm1_1.d f<= 9.99999975e-05f)
                                            int32_t var_1d0_1 = rax_30
                                            uint64_t var_1d8
                                            rax_53 = &var_1d8
                                            var_1d8 = zmm0_1.q
                                        else
                                            zmm1_1.d = zmm1_1.d f* zmm6_1.d
                                            int32_t var_1e0_1 = rax_30
                                            int64_t rax_52 = *arg1
                                            uint64_t var_1e8 = zmm0_1.q
                                            zmm3_1.o = zmm1_1.o
                                            void var_10c
                                            rax_53 = (*(rax_52 + 0x518))(arg1, &var_10c, &var_1e8, 
                                                zmm3_1, var_248, 0)
                                            zmm1_1.o = var_1a0_2
                                        
                                        *(arg1 + 0xc4) = *rax_53
                                        *(arg1 + 0xcc) = rax_53[1].d
                                    
                                    zmm0_1.d = 1f f- zmm1_1.d
                                    var_248 = &arg_8
                                    zmm2_1.o = zmm6_1
                                    r12_1 += 1
                                    zmm0_1.d = zmm0_1.d f* zmm6_1.d
                                    arg_8.d = zmm0_1.d
                                    int32_t rax_56 = (*(*arg1 + 0x548))(arg1, &var_1a8, zmm2_1, 
                                        &var_218, var_248, 0)
                                    
                                    if (rax_56 == 2)
                                        break
                                    
                                    if (sub_141f3f060(arg1) != 0)
                                        break
                                    
                                    if (rax_56 == 0)
                                        var_248 = &arg_8
                                        r13_1 += 1
                                        (*(*arg1 + 0x550))(arg1, &var_1a8, &var_238, zx.q(r13_1), 
                                            var_248)
                                        int64_t var_180
                                        zmm1_1.o = zx.o(var_180)
                                        int32_t var_178
                                        int32_t var_1c0_1 = var_178
                                        int64_t rax_60 = *arg1
                                        *(arg1 + 0xfc) = var_1a0_2.d
                                        int64_t var_1c8 = (zmm1_1.o).q
                                        void var_100
                                        int64_t* rax_61 =
                                            (*(rax_60 + 0x4f0))(arg1, &var_100, &var_1c8)
                                        arg1[0x20] = *rax_61
                                        arg1[0x21].d = rax_61[1].d
                                    else if (rax_56 == 1)
                                        *(arg1 + 0xfc) = 0x3f800000
                                    
                                    zmm0_1 = arg_8.d
                                    
                                    if (not(zmm0_1.d f< zmm8.d))
                                        zmm7.d = zmm7.d f+ zmm0_1.d
                                        
                                        if (r12_1 s<= *(arg1 + 0x15c))
                                            rsi_1 = r14_1
                                else
                                    *(arg1 + 0xf9) &= 0xfd
                                    *(arg1 + 0xfc) = 0x3f800000
                                    
                                    if (not(zmm0_1.d f!= *(arg1 + 0xc4))
                                            && not(var_238:4.d.d f!= arg1[0x19].d)
                                            && not(rax_30.d f!= *(arg1 + 0xcc)))
                                        int32_t var_1f0_1 = *(arg1 + 0xcc)
                                        zmm3_1.o = zmm6_1
                                        int64_t rax_48 = *arg1
                                        uint64_t var_1f8 = *(arg1 + 0xc4)
                                        void var_118
                                        int64_t* rax_49 = (*(rax_48 + 0x518))(arg1, &var_118, 
                                            &var_1f8, zmm3_1, var_248, 0)
                                        *(arg1 + 0xc4) = *rax_49
                                        *(arg1 + 0xcc) = rax_49[1].d
                            while ((arg1[0x1f].b & 0x20) != 0)
                        
                        (*(*arg1 + 0x460))(arg1)

return sub_140b37f60("ProjectileMovement")

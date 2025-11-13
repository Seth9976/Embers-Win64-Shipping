// 函数: sub_142037630
// 地址: 0x142037630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
uint32_t i = 0
arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1413f6f70(arg3, 0)

float zmm0[0x4] = zx.o(0)
int32_t var_2c8 = 0
*(arg3 + 0x10) = zmm0
arg3[4] = (_mm_unpacklo_ps(zmm0, 0)).q
arg3[5].d = 0
memset(arg3 + 0x2c, 0, 0x88)
*(arg3 + 0x34) = 0x3f800000
int64_t r12
r12.b = 0
void* rax_2
float zmm6
rax_2, zmm6 = sub_1423de540(data_143f5b298, arg1, 1)

if (rax_2 != 0)
    uint32_t zmm0_1[0x4] = arg2[9].d
    
    if (not(zmm0_1[0] f<= 9.99999975e-05f))
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        float zmm11[0x4] = 0x3f800000
        zmm11[0] = 1f f/ zmm0_1[0]
        uint32_t zmm15[0x4] = *(arg2 + 0x4c)
        float var_2b4_1 = zmm11[0]
        
        if (not(__andps_xmmxud_memxud(zmm15, data_142d3f770)[0] f> 9.99999994e-09f))
            zmm15 = sub_142436950(rax_2)
        
        int128_t zmm10 = *(arg2 + 0x1c)
        TEB* gsbase
        
        if (data_143f40718
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f40718)
            
            if (data_143f40718 == 0xffffffff)
                zmm6 = sub_140b58170(&data_143f40710, "PredictProjectilePath", 1)
                _Init_thread_footer(&data_143f40718)
        
        char i_1
        void var_158
        sub_141eb54c0(&var_158, data_143f40710, &i_1, arg2[0xb].b, nullptr)
        int32_t rbx_1 = arg2[6].d
        int32_t var_2c0 = 0
        char var_2bc_1 = 0
        float zmm7[0x4]
        
        if (arg2[3].b == 0 || (*(arg2 + 0x24) == 0 && rbx_1 s<= 0))
            i_1 = 0
        else
            i.b = 1
            i_1 = 1
            sub_141eb8b70(&var_158, &arg2[7])
            
            if (rbx_1 s> 0)
                for (i = 0; i s>= 0; i += 1)
                    if (i s>= arg2[6].d)
                        break
                    
                    uint32_t rbx_2 = zx.d(*(sx.q(i) + arg2[5]))
                    void* rax_6
                    rax_6, zmm6, zmm7 = sub_141ec4150()
                    int32_t rax_7 = sub_141ebfb60(rax_6, 0, rbx_2)
                    var_2c0 |= 1 << (rax_7 u% 0x20)
                
                i.b = 1
        
        uint128_t zmm1_1
        zmm1_1.d = arg2[9].d.d f* arg2[4].d
        int32_t rcx_12 = arg2[1].d
        int64_t zmm2_1 = *arg2
        uint128_t zmm9 = zx.o(*(arg2 + 0xc))
        int32_t rbx_3 = *(arg2 + 0x14)
        zmm1_1.d = zmm1_1.d f+ zmm1_1.d
        uint64_t var_300_1 = zmm9.q
        int64_t var_2f0 = zmm2_1
        uint128_t zmm0_3
        zmm0_3.d = -0.5f f- zmm1_1.d
        uint64_t var_310 = zmm2_1
        int32_t var_308_1 = rcx_12
        int32_t rdx_5 = neg.d(int.d(zmm0_3.d) s>> 1)
        
        if (rdx_5 s>= 0x80)
            rdx_5 = 0x80
        
        if (rdx_5 s> *(arg3 + 0xc))
            sub_1413f6f70(arg3, rdx_5)
            zmm2_1 = var_2f0
        
        int32_t var_298_1 = rbx_3
        int64_t rbx_4 = sx.q(arg3[1].d)
        int64_t var_2ac = zmm2_1
        int32_t var_2a4_1 = rcx_12
        uint64_t var_2a0_1 = zmm9.q
        int32_t rax_8 = (rbx_4 + 1).d
        int32_t var_294_1 = 0
        arg3[1].d = rax_8
        
        if (rax_8 s> *(arg3 + 0xc))
            sub_1405c50f0(arg3)
        
        int64_t rcx_15 = *arg3
        uint128_t* rdx_7 = rbx_4 * 0x1c
        *(rdx_7 + rcx_15) = var_2ac.o
        zmm0_3 = data_1430219f0
        *(rdx_7 + rcx_15 + 0x10) = var_2a0_1
        *(rdx_7 + rcx_15 + 0x18) = var_294_1
        zmm8 = arg2[4].d
        bool cond:1_1 = zmm8[0] <= zmm6
        int32_t var_178_1 = 0xffffffff
        int64_t var_174
        __builtin_memset(&var_174, 0, 0x14)
        int32_t var_208_1 = 0xffffffff
        int64_t var_204
        __builtin_memset(&var_204, 0, 0x14)
        uint128_t var_188_1 = zmm0_3
        uint128_t var_218_1 = zmm0_3
        float var_1e0_1 = 1f
        int32_t var_270_1 = 0x3f800000
        
        if (not(cond:1_1))
            float var_58_1[0x4] = zmm7
            float zmm12[0x4] = rbx_3
            int128_t zmm13
            zmm13.d = var_300_1.d.d f* 2f
            int128_t zmm14
            zmm14.d = var_300_1:4.d.d f* 2f
            
            while (true)
                zmm0_3 = var_310.d
                zmm8[0] = zmm8[0] - zmm6
                int32_t zmm4_1 = var_310:4.d
                var_2f0.d = zmm0_3.d
                float var_2b0_1 = zmm6
                *(arg3 + 0x1c) = zmm9.q
                var_2f0:4.d = zmm4_1
                zmm7 = _mm_min_ss(zmm8[0], zmm11[0])
                int32_t var_2e8_2 = var_308_1
                zmm11 = zmm12
                zmm6 = zmm6 + zmm7[0]
                zmm1_1.d = zmm7.d f* 0.5f
                zmm12 = zmm7
                zmm12[0] = zmm12[0] f* zmm15[0]
                arg3[5].d = zmm6
                uint128_t zmm3
                zmm3.d = zmm1_1.d f* zmm13.d
                zmm2_1.d = zmm1_1.q.d f* zmm14.d
                zmm12[0] = zmm12[0] + zmm11[0]
                zmm3.d = zmm3.d f+ zmm0_3.d
                zmm2_1.d = zmm2_1.d f+ zmm4_1
                float var_2f8_2 = zmm12[0]
                zmm0_3.d = zmm12.d f+ zmm11[0]
                zmm0_3.d = zmm0_3.d f* zmm1_1.d
                zmm0_3.d = zmm0_3.d f+ var_308_1
                var_308_1 = zmm0_3.d
                zmm0_3 = _mm_unpacklo_ps(zmm3, zmm2_1)
                arg3[2] = zmm0_3.q
                zmm1_1 = zmm0_3
                arg3[3].d = var_308_1
                *(arg3 + 0x24) = var_2f8_2
                var_310 = zmm0_3.q
                
                if (i.b != 0)
                    rbx_4.b = 0
                    i.b = 0
                    void var_1e8
                    
                    if (rbx_1 s> 0)
                        int32_t var_28c_1 = zmm10.d
                        void* var_330_1 = &var_158
                        int32_t var_290 = 2
                        char rax_12
                        rax_12, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                            sub_141ecd570(rax_2, &var_1e8, &var_2f0, &var_310, &data_14399f720, 
                            &var_2c0, &var_290, var_330_1)
                        zmm1_1 = zx.o(var_310)
                        rbx_4 = zx.q(rax_12)
                    
                    void var_278
                    
                    if (*(arg2 + 0x24) != 0)
                        var_2ac:4.d = zmm10.d
                        int32_t* var_340
                        var_340.d = zx.d(*(arg2 + 0x25))
                        var_2ac.d = 2
                        char i_2
                        i_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                            sub_141ecd380(rax_2, &var_278, &var_2f0, &var_310, &data_14399f720, 
                            var_340.b, &var_2ac, &var_158, &data_143f3a660)
                        zmm1_1 = zx.o(var_310)
                        i = zx.d(i_2)
                    
                    if (rbx_4.b != 0 || i.b != 0)
                        uint128_t* rax_18 = &var_1e8
                        
                        if (var_270_1.d f<= var_1e0_1)
                            rax_18 = &var_278
                        
                        zmm1_1 = rax_18[1]
                        *(arg3 + 0x2c) = *rax_18
                        zmm0_3 = rax_18[2]
                        *(arg3 + 0x3c) = zmm1_1
                        zmm1_1 = rax_18[3]
                        *(arg3 + 0x4c) = zmm0_3
                        zmm0_3 = rax_18[4]
                        *(arg3 + 0x5c) = zmm1_1
                        zmm1_1 = rax_18[5]
                        *(arg3 + 0x6c) = zmm0_3
                        zmm0_3 = rax_18[6]
                        *(arg3 + 0x7c) = zmm1_1
                        zmm1_1 = rax_18[7]
                        *(arg3 + 0x8c) = zmm0_3
                        zmm0_3 = zx.o(rax_18[8].q)
                        *(arg3 + 0x9c) = zmm1_1
                        *(arg3 + 0xac) = zmm0_3.q
                        zmm7[0] = zmm7[0] f* *(arg3 + 0x34)
                        int64_t rbx_5 = sx.q(arg3[1].d)
                        int32_t var_2d8_2 = *(arg3 + 0x44)
                        zmm7[0] = zmm7[0] + var_2b0_1
                        zmm0_3.d = zmm7.d f* zmm15[0]
                        zmm0_3.d = zmm0_3.d f+ zmm11[0]
                        float var_2c8_2 = zmm7[0]
                        uint64_t var_2e0_2 = *(arg3 + 0x3c)
                        int32_t var_2cc_2 = zmm0_3.d
                        int32_t rax_21 = (rbx_5 + 1).d
                        uint64_t var_2d4_2 = (_mm_unpacklo_ps(var_300_1.d, var_300_1:4.d.q)).q
                        arg3[1].d = rax_21
                        
                        if (rax_21 s> *(arg3 + 0xc))
                            sub_1405c50f0(arg3)
                        
                        int64_t rcx_21 = *arg3
                        r12.b = 1
                        uint128_t* rdx_13 = rbx_5 * 0x1c
                        *(rdx_13 + rcx_21) = var_2e0_2.o
                        *(rdx_13 + rcx_21 + 0x10) = var_2d4_2
                        *(rdx_13 + rcx_21 + 0x18) = var_2c8_2
                        break
                    
                    i = zx.d(i_1)
                
                rbx_4 = sx.q(arg3[1].d)
                int32_t var_2d8_1 = var_308_1
                float var_2cc_1 = var_2f8_2
                int32_t rax_16 = (rbx_4 + 1).d
                uint64_t var_2e0_1 = zmm1_1.q
                uint64_t var_2d4_1 = zmm9.q
                arg3[1].d = rax_16
                
                if (rax_16 s> *(arg3 + 0xc))
                    sub_1405c50f0(arg3)
                
                int64_t rcx_19 = *arg3
                uint128_t* rdx_11 = rbx_4 * 0x1c
                bool cond:2_1 = zmm6 >= zmm8[0]
                *(rdx_11 + rcx_19) = var_2e0_1.o
                *(rdx_11 + rcx_19 + 0x10) = var_2d4_1
                *(rdx_11 + rcx_19 + 0x18) = zmm6
                
                if (cond:2_1)
                    break
                
                zmm11 = var_2b4_1
        
        int64_t var_f8
        
        if (var_f8 != 0)
            sub_140a74f90(var_f8)
        
        int64_t var_118
        
        if (var_118 != 0)
            sub_140a74f90(var_118)

__security_check_cookie(rax_1 ^ &var_368)
return zx.q(r12.b)

// 函数: sub_1426b7090
// 地址: 0x1426b7090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t var_198 = data_143b57f9c
char rax_3 = (arg3[4].d).b
char var_194 = 0

if ((rax_3 & 1) == 0 || ((rax_3 & 2) != 0 && *arg3 == 0))
    rax_3 = 0
else
    rax_3 = 1

if (rax_3 != 0 && arg1[0x5b] != 0)
    void* rbx_1 = arg3[3]
    
    if (rbx_1 == 0)
    label_1426b7143:
        
        if (arg1[0x61] != 0)
            sub_14269cf80()
    else
        void* rax_4 = sub_14269cf80()
        
        if (rax_4 == 0)
            goto label_1426b7143
        
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            goto label_1426b7143
    
    int64_t r14
    r14.b = 1
    void* var_1a8
    uint128_t* var_1a0
    void var_140
    float zmm2_1[0x4]
    float zmm3_1
    
    if ((1 & (arg3[4].d u>> 1).b) != 0)
        char rax_32
        rax_32, zmm2_1, zmm3_1 = sub_142702c10(arg1[0x5b], arg3)
        
        if (rax_32 == 0)
        label_1426b7363:
            int64_t zmm0_1 = data_143b57f60
            int32_t rax_26 = data_143b57f68
            int32_t var_e0
            int32_t var_e0_1 = var_e0 | 1
            char var_c0
            char var_c0_1 = var_c0 & 0xe0
            int64_t var_110_1 = zmm0_1
            int64_t var_104_1 = zmm0_1
            int128_t var_f8_1 = zx.o(0)
            int32_t var_b0_1 = 0x3f000000
            int32_t var_e8_1 = 0x7f7fffff
            int32_t var_118 = 0xffffffff
            int32_t var_114_1 = 0
            int32_t var_108_1 = rax_26
            int32_t var_fc_1 = rax_26
            int32_t var_e4_1 = 0
            int32_t var_d8_1 = 0xffffffff
            int32_t var_d4
            __builtin_memset(&var_d4, 0, 0x14)
            int32_t var_bc_1 = 0xbf800000
            int32_t var_b8_1 = 0xbf800000
            int32_t var_b4_1 = 0xbf800000
            int64_t var_a8
            __builtin_memset(&var_a8, 0, 0x18)
            
            if (sub_1426aa0f0(arg1, arg3, &var_118, zmm3_1, zmm2_1) != 0)
                int64_t rax_28 = *arg1
                uint128_t var_178 = zx.o(0)
                (*(rax_28 + 0x780))(arg1, arg3, &var_118, &var_178, var_1a8, var_1a0, var_198)
                int32_t* rax_31
                
                if (var_178.q == 0)
                    int32_t var_168 = data_143b57f9c
                    rax_31 = &var_168
                else
                    uint128_t zmm0_2 = var_178
                    uint128_t var_78 = zmm0_2
                    void* rax_29 = _mm_bsrli_si128(zmm0_2, 8).q
                    
                    if (rax_29 != 0)
                        *(rax_29 + 8) += 1
                    
                    void var_144
                    rax_31 = (*(*arg1 + 0x778))(arg1, &var_144, arg3, &var_78)
                
                int32_t rax_35 = *rax_31
                int64_t* rbx_3
                
                if (rax_35 == 0xffffffff)
                    rbx_3 = var_178:8.q
                else
                    var_198 = rax_35
                    arg1[0x5a].d ^= (zx.d((arg3[4].d u>> 7).b) << 4 ^ arg1[0x5a].d) & 0x10
                    var_194 = 2
                    
                    if (arg4 == 0)
                        rbx_3 = var_178:8.q
                    else
                        uint128_t zmm1_1 = var_178
                        uint128_t var_158 = zmm1_1
                        rbx_3 = _mm_bsrli_si128(zmm1_1, 8).q
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d += 1
                            rbx_3 = var_178:8.q
                            zmm1_1 = var_158
                        
                        if (&var_158 != arg4)
                            uint128_t var_68_1 = zmm1_1
                            var_158 = *arg4
                            *arg4 = zmm1_1
                        
                        void* rcx_15 = var_158:8.q
                        
                        if (rcx_15 != 0)
                            int32_t rax_36 = *(rcx_15 + 8)
                            *(rcx_15 + 8) -= 1
                            
                            if (rax_36 == 1)
                                int64_t* rbx_4 = var_158:8.q
                                (**rbx_4)(rbx_4)
                                int32_t rax_38 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (rax_38 == 1)
                                    int64_t* rcx_17 = var_158:8.q
                                    (*(*rcx_17 + 8))(rcx_17, 1)
                            
                            rbx_3 = var_178:8.q
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t r14_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (r14_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, zx.q(r14_1))
            
            sub_142645530(&var_118)
            
            if (var_194 == 0)
                var_198 = *sub_14270c2d0(arg1[0x5b], &var_140, 5, 0)
        else
        label_1426b748c:
            char var_194_1 = 1
            void var_148
            var_198 = *sub_14270c2d0(arg1[0x5b], &var_148, 0, 0)
    else
        uint128_t zmm0 = zx.o(arg3[1])
        int32_t rax_9 = arg3[2].d
        uint64_t var_190 = zmm0.q
        zmm0.q = fconvert.d(zmm0.d)
        int32_t rax_10
        
        if (_finite(zmm0.q) == 0)
            rax_10.b = 1
        else if (_finite(_mm_cvtps_pd(var_190:4.d.q).q) == 0)
            rax_10.b = 1
        else if (_finite(_mm_cvtps_pd(rax_9.q).q) == 0)
            rax_10.b = 1
        else
            rax_10.b = 0
        
        if (rax_10.b != 0)
            var_198 = *sub_14270c2d0(arg1[0x5b], &var_140, 5, 0)
        else
            uint128_t zmm1 = zx.o(arg3[1])
            uint128_t zmm3 = data_143b57f80.d
            int32_t rax_11 = arg3[2].d
            var_190 = zmm1.q
            
            if ((zmm3 ^ 0x80000000).d f>= zmm1.d || zmm1.d f>= zmm3.d)
                rax_11.b = 0
            else
                zmm1 = data_143b57f80:4.d
                zmm3 = var_190:4.d
                
                if ((zmm1 ^ 0x80000000).d f>= zmm3.d || zmm3.d f>= zmm1.d)
                    rax_11.b = 0
                else
                    zmm1 = data_143b57f88
                    zmm3 = rax_11
                    
                    if ((zmm1 ^ 0x80000000).d f>= zmm3.d || zmm3.d f>= zmm1.d)
                        rax_11.b = 0
                    else
                        rax_11.b = 1
            
            if (rax_11.b == 0)
                var_198 = *sub_14270c2d0(arg1[0x5b], &var_140, 5, 0)
            else
                if (((arg3[4].d u>> 4).b & 1) != 0)
                    void* rax_15 = (*(*arg1 + 0x150))(arg1)
                    int64_t* rbx_2
                    
                    if (rax_15 == 0)
                        rbx_2 = nullptr
                    else
                        rbx_2 = *(rax_15 + 0x120)
                        
                        if (rbx_2 == 0)
                            rbx_2 = nullptr
                        else
                            void* rax_16 = sub_14269bba0()
                            void* rdx_1 = rbx_2[2]
                            int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                            
                            if (rax_17.d s> *(rdx_1 + 0x38)
                                    || *(*(rdx_1 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
                                rbx_2 = nullptr
                    
                    int64_t rax_20 = (*(arg1[0x44] + 0x10))(&arg1[0x44])
                    zmm0 = zx.o(data_143dbb1f8.q)
                    int32_t rcx_4 = data_143dbb200
                    uint64_t var_138 = zmm0.q
                    int64_t var_128_1 = 0
                    
                    if (rbx_2 != 0)
                        int32_t rax_21 = arg3[2].d
                        var_190 = arg3[1]
                        int32_t var_188_3 = rax_21
                        void* rax_23
                        
                        if (rax_20 == 0)
                            rax_23 = sub_142657070(rbx_2, rax_20.d)
                        else
                            rax_23 = (*(*rbx_2 + 0x2b0))(rbx_2, rax_20, &var_190, &data_143dbb1f8)
                        
                        uint128_t var_88
                        var_1a0 = &var_88
                        var_1a8 = rax_23
                        var_88 = zx.o(0)
                        bool cond:1_1 = sub_142663310(rbx_2, &var_190, &var_138, &data_143dbb1f8, 
                            var_1a8, var_1a0) == 0
                        zmm0 = zx.o(var_138)
                        r14 = 1
                        
                        if (cond:1_1)
                            r14 = 0
                    
                    if ((arg3[4].b & 2) == 0)
                        arg3[1] = zmm0.q
                        arg3[2].d = rcx_4
                
                if (((arg3[4].d u>> 4).b & 1) != 0 && r14.b == 0)
                    var_198 = *sub_14270c2d0(arg1[0x5b], &var_140, 5, 0)
                else
                    char rax_25
                    rax_25, zmm2_1, zmm3_1 = sub_142702c10(arg1[0x5b], arg3)
                    
                    if (rax_25 != 0)
                        goto label_1426b748c
                    
                    if (r14.b != 0)
                        goto label_1426b7363
                    
                    var_198 = *sub_14270c2d0(arg1[0x5b], &var_140, 5, 0)

*arg2 = var_198.q
__security_check_cookie(rax_1 ^ &var_1c8)
return arg2

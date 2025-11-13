// 函数: sub_1421f9ef0
// 地址: 0x1421f9ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1

if ((*(arg1 + 0x3c) & 0xc) == 0)
    return 

int64_t r10_1 = *(arg1 + 0x78)
int32_t i = 0
int64_t var_138_1 = r10_1
int32_t* j_3 = nullptr
int32_t i_1 = 0

if (*(arg1 + 0x5c) s<= 0)
    return 

uint128_t zmm1 = 0x437f0000
int64_t rcx = 0
uint128_t zmm6
uint128_t var_38_1 = zmm6
uint128_t zmm7
uint128_t var_48_1 = zmm7
uint128_t zmm9
uint128_t var_68_1 = zmm9
uint128_t zmm11
uint128_t var_88_1 = zmm11
int128_t zmm12
int128_t var_98_1 = zmm12
int128_t zmm13
int128_t var_a8_1 = zmm13
int128_t zmm14
int128_t var_b8_1 = zmm14
uint128_t zmm15
uint128_t var_c8_1 = zmm15
int64_t var_130_1 = 0

do
    int32_t r8 = *(rbx + 0x60)
    int64_t r9 = sx.q(*(rbx + 0x130))
    int32_t* r15_2 = sx.q(zx.d(*(*(rbx + 0x80) + rcx)) * r8) + r10_1
    int32_t rcx_3 = *(r15_2 + r9)
    void* j_6 = r15_2 + r9
    int32_t* var_1c0_1 = r15_2
    int32_t* rax = zx.q(rcx_3) & 0xf0000000
    void* j_7 = j_6
    
    if (rax.d == 0x40000000 || rax.d == 0x10000000)
        zmm15 = zx.o(0)
        void* j_5 = j_6
        rax = r15_2
        uint128_t zmm2
        zmm2.d = 2f f/ _mm_cvtepi32_ps(zx.o(*(j_6 + 8))).d
        int32_t var_184_1 = zmm2.d
        int32_t* j_2
        
        while (true)
            int32_t rcx_4 = rcx_3 & 0x3fff
            
            if (rcx_4 == 0x3fff)
                r15_2 = rax
                var_1c0_1 = rax
                j_2 = j_5
                j_3 = j_5
                break
            
            rax = sx.q(r8 * rcx_4) + r10_1
            j_5 = rax + r9
            
            if (j_5 == 0)
                j_2 = j_3
                break
            
            rcx_3 = *j_5
        
        if (j_2 != j_6)
            char var_1e5_1 = 0xff
            int32_t* rdx = r15_2
            zmm13.d = zmm1.d
            char var_1e1_1 = 0xff
            
            if ((j_2[9].b & 1) != 0)
                rdx = nullptr
            
            int32_t* var_140_1 = rdx
            zmm14.d = zx.o(0).d
            int32_t* j = j_2
            
            do
                int32_t rcx_7 = *j s>> 0xe & 0x3fff
                int32_t* j_1
                int32_t* var_148_1
                int32_t* r14_1
                
                if (rcx_7 != 0x3fff)
                    int64_t rcx_8 = sx.q(*(rbx + 0x130))
                    r14_1 = sx.q(*(rbx + 0x60) * rcx_7) + r10_1
                    int32_t* j_4 = rcx_8 + r14_1
                    var_148_1 = r14_1
                    j_1 = j_4
                    
                    if (rcx_8 != neg.q(r14_1) && (j_4[9].b & 1) == 0)
                        if (rdx == 0)
                            rdx = r14_1
                        
                        var_140_1 = rdx
                else
                    r14_1 = nullptr
                    var_148_1 = nullptr
                    j_1 = nullptr
                
                zmm15.d = zmm15.d f+ zmm2.d
                uint64_t var_1e0 = *(r15_2 + 0x10)
                int32_t rax_8 = r15_2[6]
                zmm9.d = r15_2[0x14].d f* *(rbx + 0x88)
                uint128_t zmm0
                zmm0.d = zmm15.d f* zmm1.d
                char var_1e7_1 = (int.d(zmm14.d)).b
                zmm14.d = zmm0.d
                char var_1e6_1 = (int.d(zmm13.d)).b
                int32_t var_190 = 0.d
                char var_1e3_1 = (int.d(zmm0.d)).b
                zmm0.d = 1f f- zmm15.d
                zmm0.d = zmm0.d f* zmm1.d
                zmm13.d = zmm0.d
                char var_1e2_1 = (int.d(zmm0.d)).b
                int32_t var_18c = 0.d
                char rax_15 = (*(rbx + 0x3c)).b
                uint128_t var_178
                
                if ((rax_15 & 4) != 0)
                    char rax_16
                    void* r9_1
                    
                    if ((j[9].b & 1) != 0)
                        void var_ec
                        sub_140acc920(&var_ec, &data_14399f63c)
                        rax_16 = sub_14082c3b0(arg2, arg4)
                        r9_1 = &var_ec
                    else
                        void var_fc
                        sub_140acc920(&var_fc, &data_14399f638)
                        rax_16 = sub_14082c3b0(arg2, arg4)
                        r9_1 = &var_fc
                    
                    sub_14229cc60(arg3, &var_1e0, zmm9, r9_1, rax_16)
                    rax_15 = (*(rbx + 0x3c)).b
                    
                    if ((rax_15 & 0x10) != 0 && r14_1 != 0)
                        void var_dc
                        sub_140acc920(&var_dc, &data_14399f640)
                        var_178.q = &r14_1[4]
                        (*(*arg3 + 0x30))(arg3, &var_1e0, &r14_1[4], &var_dc, 
                            sub_14082c3b0(arg2, arg4), 0, 0, 0, 0)
                        int32_t rbx_2 = j[7]
                        uint64_t var_168 = var_1e0
                        int32_t var_160_1 = rax_8
                        zmm12.d = 1f f/ _mm_cvtepi32_ps(zx.o(rbx_2)).d
                        int32_t var_118
                        sub_140acc920(&var_118, &var_190)
                        int32_t var_128
                        sub_140acc920(&var_128, &var_18c)
                        int32_t r15_4 = 0
                        
                        if (rbx_2 s> 0)
                            zmm9.d = zmm9.d f* 0.300000012f
                            
                            do
                                int32_t* rcx_19 = var_178.q
                                int64_t rbx_3 = *arg3
                                zmm11.d = _mm_cvtepi32_ps(zx.o(r15_4)).d f* zmm12.d
                                zmm1.d = zmm11.d f* zmm11.d
                                zmm0.d = zmm1.d f* 3f
                                zmm7.d = zmm1.d f* zmm11.d
                                uint128_t zmm5_1
                                zmm5_1.d = zmm7.d f+ zmm7.d
                                uint128_t zmm4_1
                                zmm4_1.d = zmm7.d f- zmm1.d
                                zmm1.d = zmm1.d f+ zmm1.d
                                zmm6.d = zmm0.d f- zmm5_1.d
                                zmm5_1.d = zmm5_1.d f- zmm0.d
                                zmm7.d = zmm7.d f- zmm1.d
                                zmm1.d = zmm4_1.d f* j_1[0xa]
                                zmm5_1.d = zmm5_1.d f+ 1f
                                zmm7.d = zmm7.d f+ zmm11.d
                                zmm2.d = zmm5_1.d f* var_1c0_1[4]
                                zmm0.d = zmm7.d f* j[0xa]
                                float zmm3_1 = zmm7.d f* j[0xb]
                                zmm7.d = zmm7.d f* j[0xc]
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm0.d = zmm6.d f* *rcx_19
                                zmm2.d = zmm2.d f+ zmm1.d
                                zmm1.d = zmm4_1.d f* j_1[0xb]
                                zmm4_1.d = zmm4_1.d f* j_1[0xc]
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm0 = zmm5_1
                                zmm5_1.d = zmm5_1.d f* var_1c0_1[6]
                                zmm0.d = zmm0.d f* var_1c0_1[5]
                                zmm7.d = zmm7.d f+ zmm5_1.d
                                int32_t var_1b0 = zmm2.d
                                int32_t var_124
                                int32_t var_114
                                zmm5_1.d = var_124.d f- var_114
                                zmm3_1 = zmm3_1 f+ zmm0.d
                                zmm0.d = zmm6.d f* rcx_19[1]
                                zmm6.d = zmm6.d f* rcx_19[2]
                                zmm7.d = zmm7.d f+ zmm4_1.d
                                zmm3_1 = zmm3_1 f+ zmm1.d
                                zmm5_1.d = zmm5_1.d f* zmm11.d
                                int32_t var_11c
                                int32_t var_10c
                                zmm1.d = var_11c.d f- var_10c
                                zmm5_1.d = zmm5_1.d f+ var_114
                                zmm7.d = zmm7.d f+ zmm6.d
                                zmm1.d = zmm1.d f* zmm11.d
                                float var_1ac_1 = zmm3_1 f+ zmm0.d
                                zmm1.d = zmm1.d f+ var_10c
                                int32_t var_1a8_1 = zmm7.d
                                zmm7.d = var_128.d f- var_118
                                int32_t var_19c_1 = zmm5_1.d
                                int32_t var_194_1 = zmm1.d
                                zmm7.d = zmm7.d f* zmm11.d
                                zmm7.d = zmm7.d f+ var_118
                                float var_120
                                float var_110
                                float var_198_1 = (var_120 - var_110) f* zmm11.d + var_110
                                int32_t var_1a0 = zmm7.d
                                (*(rbx_3 + 0x30))(arg3, &var_168, &var_1b0, &var_1a0, 
                                    sub_14082c3b0(arg2, arg4), 0, 0, 0)
                                
                                if (r15_4 s> 0)
                                    zmm1.d = 1f f- zmm11.d
                                    zmm0.d = 1f f- zmm1.d
                                    var_1a0 = zmm1.d
                                    int32_t var_19c_2 = zmm1.d
                                    int32_t var_198_2 = zmm0.d
                                
                                sub_14229cc60(arg3, &var_1b0, zmm9, &var_1a0, 
                                    sub_14082c3b0(arg2, arg4))
                                r15_4 += 1
                                var_168 = var_1b0.q
                                int32_t var_160_2 = var_1a8_1
                            while (r15_4 s< rbx_2)
                            
                            r14_1 = var_148_1
                        
                        (*(*arg3 + 0x30))(arg3, &var_168, &r14_1[4], &var_128, 
                            sub_14082c3b0(arg2, arg4), 0, 0, 0)
                        r15_2 = var_1c0_1
                        rax_15 = (*(arg1 + 0x3c)).b
                    
                    j_6 = j_7
                    j_2 = j_3
                
                if ((rax_15 & 8) != 0)
                    zmm1.d = var_1e0.d.d f+ j[0xa]
                    zmm2.d = var_1e0:4.d.d f+ j[0xb]
                    zmm0.d = rax_8.d f+ j[0xc]
                    int32_t var_100_1 = zmm0.d
                    uint64_t var_158 = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
                    int32_t var_150_1 = var_100_1
                    
                    if (j == j_6)
                        zmm0 = data_142ee7660
                    else if (j != j_2)
                        zmm0 = data_142f2cb30
                    else
                        zmm0 = data_142d8c9b0
                    
                    int64_t rbx_5 = *arg3
                    var_178 = zmm0
                    (*(rbx_5 + 0x30))(arg3, &var_1e0, &var_158, &var_178, 
                        sub_14082c3b0(arg2, arg4), 0, 0, 0, 0)
                
                j = j_1
                bool cond:4_1 = r14_1 == 0
                zmm1 = 0x437f0000
                zmm2 = var_184_1
                
                if (r14_1 == 0)
                    r14_1 = r15_2
                
                rbx = arg1
                
                if (cond:4_1)
                    j = nullptr
                
                rdx = var_140_1
                r15_2 = r14_1
                r10_1 = var_138_1
                j_6 = j_7
                j_2 = j_3
                var_1c0_1 = r14_1
            while (j != 0)
            
            i = i_1
    
    i += 1
    rcx = var_130_1 + 2
    i_1 = i
    var_130_1 = rcx
while (i s< *(rbx + 0x5c))

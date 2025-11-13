// 函数: sub_141480d60
// 地址: 0x141480d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_dd8
int64_t rax_1 = __security_cookie ^ &var_dd8
void* rdi = arg2
void* var_d28 = arg2
int32_t rax_3 = *(data_143ed9d50 + 4)
int32_t rcx_1 = rax_3 & 0xf
uint8_t rax_4 = (rax_3 u>> 4).b & 1
char rax_6

if ((*(*(arg2 + 0x20) + 0x138) & 2) != 0)
    rax_6 = sub_1412c75b0(arg2)

if ((*(*(arg2 + 0x20) + 0x138) & 2) == 0 || rax_6 == 0)
    arg2.b = 0
else
    arg2.b = 1

int64_t* rcx_3 = *(rdi + 0x20)
char var_d98 = arg2.b
uint32_t i = zx.d(rcx_3[0x27].b)

if ((i.b & 0x10) != 0)
    if (arg2.b != 0)
    label_141480e06:
        uint32_t i_1 = 0
        
        if (*(arg1 + 0xa8) s> 0)
            uint64_t rsi
            uint64_t var_20_1 = rsi
            int64_t rcx_4 = 0
            int32_t* r15
            int32_t* var_38_1 = r15
            uint128_t zmm8
            uint128_t var_68_1 = zmm8
            uint128_t zmm9
            uint128_t var_78_1 = zmm9
            uint128_t zmm10
            uint128_t var_88_1 = zmm10
            uint128_t zmm11
            uint128_t var_98_1 = zmm11
            uint128_t zmm12
            uint128_t var_a8_1 = zmm12
            uint128_t zmm13
            uint128_t var_b8_1 = zmm13
            uint128_t zmm14
            uint128_t var_c8_1 = zmm14
            uint128_t zmm15
            uint128_t var_d8_1 = zmm15
            int64_t var_d18_1 = 0
            
            do
                rsi.b = 0
                void* r14_2 = rcx_4 * 0x5240 + *(arg1 + 0xa0)
                void** var_9e8
                sub_141475910(&var_9e8)
                int32_t r12_1 = *(r14_2 + 0x278)
                r15.b = 0
                int128_t zmm0_1 = data_142d3f660
                *(r14_2 + 0x278) = 1
                int64_t var_ae8_1 = 0
                int32_t var_ad8_1 = 0
                int64_t var_a48_1 = 0
                int32_t var_a38_1 = 0
                int64_t* rbx_1 = *(rdi + 0x20)
                int128_t var_b88_1 = zmm0_1
                int128_t var_b68
                __builtin_memcpy(&var_b68, 
                    "\x00\x00\x00\x00\x00\x00\x00\x4a\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x4a\x"
                "00\x00\x00\x00", 
                    0x18)
                int32_t var_ad4_1 = 6
                int32_t var_a34_1 = 8
                char var_a08_1 = 0
                int32_t var_a04_1 = 0xffffffff
                int32_t var_a00_1 = 0x3f800000
                int16_t var_9f8_1 = 0
                rdi = var_d28
                int32_t var_db0
                int32_t var_da8
                char var_da0
                void var_c18
                
                if ((*(*rbx_1 + 0xa8))(rbx_1, r14_2, 0, zx.q(sub_14122cc00(var_d28)), &var_c18, 
                        var_db0, var_da8, var_da0, var_d98) != 0)
                    void* rax_12 = sx.q(*(rdi + 0x28)) * 0x70 + *(arg1 + 0x2f0)
                    
                    if (*(rax_12 + 0x18) != 0)
                        var_da0 = 0
                        void* rcx_8 = **(rax_12 + 0x10)
                        var_da8 = *(rcx_8 + 0x550)
                        var_db0 = *(rcx_8 + 0x54c)
                        void* var_db8_1
                        var_db8_1.d = *(rcx_8 + 0x548)
                        sub_1414a3420(&var_9e8, rdi, r14_2, &var_c18, var_db8_1.d, var_db0, 
                            var_da8, var_da0)
                        r15.b = 1
                
                *(r14_2 + 0x278) = r12_1
                
                if (var_a48_1 != 0)
                    sub_140a74f90(var_a48_1)
                
                if (var_ae8_1 != 0)
                    sub_140a74f90(var_ae8_1)
                
                if (r15.b != 0)
                    void* rcx_13 = r14_2
                    void* var_9a0
                    
                    if (var_9a0 != 0)
                        rcx_13 = var_9a0
                    
                    void* rax_16 = *(rdi + 0x20)
                    int32_t zmm2 = *(rax_16 + 0x60)
                    void* rbx_3 = *(rcx_13 + 0x18d0) + 0x68
                    int128_t zmm1_1 = *(rax_16 + 0x50)
                    int64_t rcx_14 = sx.q(*(rdi + 0x28)) * 0x78
                    int32_t var_d38 = (*(rax_16 + 0x40)).d
                    int32_t var_d34_1 = zmm1_1.d
                    int32_t var_d44 = 0x4a000000
                    int64_t* rbx_4 = rbx_3 + rcx_14
                    
                    if (rbx_4[1].d != 0 || rcx_1 u<= 1)
                        int32_t var_ba4_1 = 6
                        int64_t var_bb8_1 = 0
                        int32_t var_ba8_1 = 0
                        int64_t var_b18_1 = 0
                        int32_t var_b08_1 = 0
                        int32_t var_b04_1 = 8
                        uint128_t zmm6_1
                        uint128_t zmm7_1
                        zmm6_1, zmm7_1 = sub_141f8c8a0(&var_c18, r14_2 + 0x3c0, 1)
                        void* var_cf0 = &var_c18
                        void var_758
                        void* var_ce8_1 = &var_758
                        void var_994
                        void* var_ce0_1 = &var_994
                        int32_t var_d90
                        int32_t var_d78
                        
                        if (rcx_1 == 0)
                            void* r10_1 = r14_2 + 0x15b8
                            var_d90 = 0
                            rsi = zx.q(*(r10_1 + 0x18))
                            int32_t rbx_5 = 1
                            int32_t var_d8c_1 = 1
                            int32_t rcx_21 = 0
                            void* var_d88_5 = r10_1
                            int32_t r8_8 = 0
                            int32_t var_d7c_1 = 0
                            int32_t rdi_2 = -1
                            var_d78 = 0
                            int32_t r9_7 = 0
                            
                            if (rsi.d != 0)
                                void* rax_35 = *(r10_1 + 0x10)
                                rcx_21 = rsi.d
                                
                                if (rax_35 != 0)
                                    r10_1 = rax_35
                                
                                int32_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = sx.q((rsi - 1).d)
                                int32_t rdx_10 = *r10_1
                                
                                if (rdx_10 != 0)
                                label_1414816aa:
                                    rbx_5 = neg.d(rdx_10) & rdx_10
                                    uint64_t rflags_1
                                    int32_t temp0_8
                                    temp0_8, rflags_1 = _bit_scan_reverse(rbx_5)
                                    var_d8c_1 = rbx_5
                                    int32_t rax_40
                                    
                                    if (rbx_5 == 0)
                                        rax_40 = 0x20
                                    else
                                        rax_40 = 0x1f - temp0_8
                                    
                                    int32_t rax_41 = r9_7 - rax_40 + 0x1f
                                    
                                    if (rax_41 s> rcx_21)
                                        rax_41 = rcx_21
                                    
                                    rcx_21 = rax_41
                                    var_d7c_1 = rax_41
                                else
                                    while (true)
                                        int64_t rdx_11 = sx.q(r8_8)
                                        r9_7 += 0x20
                                        r8_8 += 1
                                        var_d78 = r9_7
                                        var_d90 = r8_8
                                        
                                        if (rdx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                            var_d7c_1 = rcx_21
                                            break
                                        
                                        rdx_10 = *(r10_1 + (rdx_11 << 2) + 4)
                                        rdi_2 = -1
                                        
                                        if (rdx_10 != 0)
                                            goto label_1414816aa
                            
                            if (rcx_21 s< rsi.d)
                                while (true)
                                    sub_141489280(var_d98, 
                                        *(*(*(arg1 + 8) + 0xdb8) + (sx.q(rcx_21) << 3)), 
                                        r14_2 + 0x4810, r14_2)
                                    sub_14059bdd0(&var_d90)
                                    rcx_21 = var_d7c_1
                                    
                                    if (rcx_21 s>= *(var_d88_5 + 0x18))
                                        break
                                    
                                    rdi_2 &= not.d(rbx_5)
                                    rbx_5 = var_d8c_1
                            
                            *(r14_2 + 0x4810) |= 1
                            rsi.b = 1
                            rdi = var_d28
                        else if (rcx_1 == 1)
                            rsi = zx.q(sub_141470890(*(arg1 + 8), r14_2, &var_9e8, &var_cf0))
                        else
                            void var_d97
                            void var_d96
                            int32_t var_d80
                            uint128_t var_d68
                            
                            if (rcx_1 == 2)
                                int64_t* rdx_5 = *rbx_4
                                int64_t rax_24 = sx.q(rbx_4[1].d)
                                uint128_t zmm1_2 = zmm6_1
                                var_d68 = zx.o(0)
                                int32_t var_d58_1 = zmm6_1.d
                                uint128_t zmm0_2 = zmm6_1
                                void* r8_5 = &rdx_5[rax_24]
                                int32_t var_d54_1 = zmm6_1.d
                                int32_t var_d50_1 = zmm6_1.d
                                uint128_t zmm2_1 = zmm6_1
                                
                                if (rdx_5 != r8_5)
                                    while (true)
                                        int128_t* rcx_18 = *(*rdx_5 + 8) + 0xc0
                                        int32_t* rax_27
                                        
                                        if (zmm2_1.d f<= zmm6_1.d)
                                            var_d78 = *(rcx_18 + 0x18)
                                            rax_27 = &var_d90
                                            var_d90.o = *rcx_18
                                            var_d80.q = rcx_18[1].q
                                        else
                                            uint128_t zmm3_1 = var_d68.d
                                            uint128_t zmm4_1 = var_d68:8.d
                                            zmm2_1 = var_d68:0xc.d
                                            zmm15 = var_d68:4.d
                                            zmm7_1.d = zmm3_1.d f- zmm2_1.d
                                            int32_t var_d20_1 = zmm3_1.d
                                            zmm8.d = zmm15.d f- zmm1_2.d
                                            int32_t var_d1c_1 = zmm4_1.d
                                            zmm6_1.d = zmm4_1.d f- zmm0_2.d
                                            zmm2_1.d = zmm2_1.d f+ zmm3_1.d
                                            zmm11 = zmm7_1
                                            zmm1_2.d = zmm1_2.d f+ zmm15.d
                                            zmm0_2.d = zmm0_2.d f+ zmm4_1.d
                                            zmm10 = zmm8
                                            zmm9 = zmm6_1
                                            
                                            if (not(zmm7_1.d f<= zmm2_1.d))
                                                zmm11 = zmm2_1
                                            
                                            if (not(zmm8.d f<= zmm1_2.d))
                                                zmm10 = zmm1_2
                                            
                                            if (not(zmm6_1.d f<= zmm0_2.d))
                                                zmm9 = zmm0_2
                                            
                                            if (not(zmm7_1.d f>= zmm2_1.d))
                                                zmm7_1 = zmm2_1
                                            
                                            if (not(zmm8.d f>= zmm1_2.d))
                                                zmm8 = zmm1_2
                                            
                                            if (not(zmm6_1.d f>= zmm0_2.d))
                                                zmm6_1 = zmm0_2
                                            
                                            zmm14 = *rcx_18
                                            float zmm5_1 = *(rcx_18 + 0xc)
                                            zmm12 = *(rcx_18 + 4)
                                            zmm0_2.d = zmm14.d f- zmm5_1
                                            zmm13 = *(rcx_18 + 8)
                                            zmm1_2 = rcx_18[1].d
                                            zmm2_1 = *(rcx_18 + 0x14)
                                            zmm3_1.d = zmm12.d f- zmm1_2.d
                                            zmm4_1.d = zmm13.d f- zmm2_1.d
                                            
                                            if (not(zmm11.d f<= zmm0_2.d))
                                                zmm11 = zmm0_2
                                            
                                            if (not(zmm10.d f<= zmm3_1.d))
                                                zmm10 = zmm3_1
                                            
                                            if (not(zmm9.d f<= zmm4_1.d))
                                                zmm9 = zmm4_1
                                            
                                            if (not(zmm7_1.d f>= zmm0_2.d))
                                                zmm7_1 = zmm0_2
                                            
                                            if (not(zmm8.d f>= zmm3_1.d))
                                                zmm8 = zmm3_1
                                            
                                            if (not(zmm6_1.d f>= zmm4_1.d))
                                                zmm6_1 = zmm4_1
                                            
                                            zmm1_2.d = zmm1_2.d f+ zmm12.d
                                            zmm0_2.d = zmm14.d f+ zmm5_1
                                            zmm2_1.d = zmm2_1.d f+ zmm13.d
                                            
                                            if (not(zmm11.d f<= zmm0_2.d))
                                                zmm11 = zmm0_2
                                            
                                            if (not(zmm10.d f<= zmm1_2.d))
                                                zmm10 = zmm1_2
                                            
                                            if (not(zmm9.d f<= zmm2_1.d))
                                                zmm9 = zmm2_1
                                            
                                            if (not(zmm7_1.d f>= zmm0_2.d))
                                                zmm7_1 = zmm0_2
                                            
                                            if (not(zmm8.d f>= zmm1_2.d))
                                                zmm8 = zmm1_2
                                            
                                            if (not(zmm6_1.d f>= zmm2_1.d))
                                                zmm6_1 = zmm2_1
                                            
                                            zmm7_1.d = zmm7_1.d f- zmm11.d
                                            zmm6_1.d = zmm6_1.d f- zmm9.d
                                            zmm8.d = zmm8.d f- zmm10.d
                                            zmm3_1 = zmm7_1
                                            zmm7_1.d = zmm7_1.d f* zmm7_1.d
                                            zmm3_1.d = zmm3_1.d f* 0.5f
                                            zmm1_2.d = zmm6_1.d f* 0.5f
                                            zmm2_1.d = zmm8.d f* 0.5f
                                            zmm0_2 = zmm3_1
                                            zmm3_1.d = zmm3_1.d f+ zmm11.d
                                            zmm6_1.d = zmm6_1.d f* zmm6_1.d
                                            int32_t var_c90_1 = zmm1_2.d
                                            zmm1_2.d = zmm1_2.d f+ zmm9.d
                                            zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm2_1.q)
                                            zmm2_1.d = zmm2_1.d f+ zmm10.d
                                            uint64_t var_ccc_1 = zmm0_2.q
                                            zmm14.d = zmm14.d f- zmm3_1.d
                                            zmm4_1.d = zmm13.d f- zmm1_2.d
                                            int32_t var_cd0_1 = zmm1_2.d
                                            zmm0_2.d = var_d20_1.d f- zmm3_1.d
                                            zmm8.d = zmm8.d f* zmm8.d
                                            int32_t var_cc4_1 = var_c90_1
                                            zmm5_1 = zmm12.d f- zmm2_1.d
                                            int32_t var_cd4_1 = zmm2_1.d
                                            zmm15.d = zmm15.d f- zmm2_1.d
                                            zmm14.d = zmm14.d f* zmm14.d
                                            zmm7_1.d = zmm7_1.d f+ zmm8.d
                                            zmm2_1.d = var_d1c_1.d f- zmm1_2.d
                                            zmm0_2.d = zmm0_2.d f* zmm0_2.d
                                            zmm7_1.d = zmm7_1.d f+ zmm6_1.d
                                            zmm15.d = zmm15.d f* zmm15.d
                                            zmm4_1.d = zmm4_1.d f* zmm4_1.d
                                            zmm15.d = zmm15.d f+ zmm0_2.d
                                            zmm2_1.d = zmm2_1.d f* zmm2_1.d
                                            zmm7_1.d = zmm7_1.d f* 0.25f
                                            int32_t var_cd8 = zmm3_1.d
                                            zmm15.d = zmm15.d f+ zmm2_1.d
                                            zmm6_1 = _mm_sqrt_ss(0, zmm7_1.d)
                                            zmm1_2 = _mm_sqrt_ss(0, 
                                                zmm5_1 * zmm5_1 f+ zmm14.d f+ zmm4_1.d)
                                            zmm0_2 = _mm_sqrt_ss(0, zmm15.d)
                                            zmm1_2.d = zmm1_2.d f+ *(rcx_18 + 0x18)
                                            zmm0_2.d = zmm0_2.d f+ var_d50_1
                                            zmm1_2 = _mm_max_ss(zmm1_2.d, zmm0_2.d)
                                            
                                            if (zmm6_1.d f> zmm1_2.d)
                                                int32_t var_cc0_2 = zmm1_2.d
                                                rax_27 = &var_cd8
                                                zmm6_1 = zx.o(0)
                                            else
                                                int32_t var_cc0_1 = zmm6_1.d
                                                rax_27 = &var_cd8
                                                zmm6_1 = zx.o(0)
                                        
                                        rdx_5 = &rdx_5[1]
                                        var_d58_1.q = *(rax_27 + 0x10)
                                        var_d50_1 = rax_27[6]
                                        var_d68 = *rax_27
                                        
                                        if (rdx_5 == r8_5)
                                            break
                                        
                                        zmm0_2 = var_d54_1
                                        zmm1_2 = var_d58_1
                                        zmm2_1 = var_d50_1
                                    
                                    zmm7_1 = 0x4a000000
                                
                                void*** r8_6 = &var_9e8
                                int32_t rax_30 = var_d68:8.d
                                zmm2_1 = var_d38
                                void* rcx_19 = *(arg1 + 8)
                                uint64_t var_d10 = var_d68.q
                                zmm0_2.d = zmm2.d f* zmm7_1.d
                                int32_t var_d08_1 = rax_30
                                zmm2_1.d = zmm2_1.d f* zmm7_1.d
                                zmm0_2.d = zmm0_2.d f+ var_d68:8.d
                                zmm1_2.d = var_d34_1.d f* zmm7_1.d
                                zmm2_1.d = zmm2_1.d f+ var_d68.d
                                zmm1_2.d = zmm1_2.d f+ var_d68:4.d
                                int32_t var_cf8_1 = zmm0_2.d
                                uint64_t var_d00 = (_mm_unpacklo_ps(zmm2_1, zmm1_2.q)).q
                                var_d90.q = &var_cf0
                                
                                if (rax_4 == 0)
                                    void* var_d88_4 = &var_d96
                                    var_d80.q = &var_d68
                                    var_d78.q = &var_d10
                                    uint64_t* var_d70_2 = &var_d00
                                    uint128_t var_c48 = var_d90.o
                                    uint64_t var_c28_1 = var_d70_2
                                    uint128_t var_c38_1 = var_d80.o
                                    rsi = zx.q(sub_141471410(rcx_19, r14_2, r8_6, &var_c48))
                                else
                                    void* var_d88_3 = &var_d97
                                    var_d80.q = &var_d68
                                    var_d78.q = &var_d10
                                    uint64_t* var_d70_1 = &var_d00
                                    uint128_t var_c78 = var_d90.o
                                    uint64_t var_c58_1 = var_d70_1
                                    uint128_t var_c68_1 = var_d80.o
                                    rsi = zx.q(sub_1414703a0(rcx_19, r14_2, r8_6, &var_c78))
                            else if (rcx_1 == 3)
                                int64_t* r9_3 = &var_d68
                                void* rcx_16 = *(arg1 + 8)
                                void*** r8_4 = &var_9e8
                                var_d90.q = rbx_4
                                
                                if (rax_4 == 0)
                                    void* var_d88_2 = &var_d96
                                    var_d80.q = &var_d38
                                    var_d78.q = &var_d44
                                    int32_t* var_ca0_1 = &var_d90
                                    var_d68 = (&var_cf0).o
                                    rsi = zx.q(sub_141470d20(rcx_16, r14_2, r8_4, r9_3))
                                else
                                    void* var_d88_1 = &var_d97
                                    var_d80.q = &var_d38
                                    var_d78.q = &var_d44
                                    int32_t* var_cb0_1 = &var_d90
                                    var_d68 = (&var_cf0).o
                                    rsi = zx.q(sub_1414718f0(rcx_16, r14_2, r8_4, r9_3))
                            else if (rcx_1 == 4)
                                *(r14_2 + 0x4810) &= 0xfffffffe
                                rsi.b = 0
                        
                        if (*(data_143ed9d38 + 4) != 0)
                            sub_1414b3d50(r14_2, rdi, &var_9e8)
                        
                        if (var_b18_1 != 0)
                            sub_140a74f90(var_b18_1)
                        
                        if (var_bb8_1 != 0)
                            sub_140a74f90(var_bb8_1)
                    
                    *(r14_2 + 0x4810) &= 0xfffffffe
                    *(r14_2 + 0x4810) |= zx.d(rsi.b)
                    int64_t var_110
                    
                    if (var_110 != 0)
                        sub_140a74f90(var_110)
                    
                    int64_t var_120
                    
                    if (var_120 != 0)
                        sub_140a74f90(var_120)
                    
                    void var_140
                    sub_1412687b0(&var_140)
                    int64_t var_130
                    
                    if (var_130 != 0)
                        sub_140a74f90(var_130)
                    
                    sub_14108c350(&var_140)
                    int64_t var_158
                    sub_141095f70(&var_158, 0)
                    int64_t rcx_34 = var_158
                    
                    if (rcx_34 != 0)
                        sub_140a74f90(rcx_34)
                    
                    int64_t var_168
                    
                    if (var_168 != 0)
                        sub_140a74f90(var_168)
                    
                    void var_368
                    sub_14125cfd0(&var_368)
                    int64_t* var_438
                    
                    if (var_438 != 0)
                        (*(*var_438 + 0x38))(var_438)
                    
                    void var_440
                    sub_1405d1550(&var_440)
                    void var_450
                    sub_1414761d0(&var_450)
                    int64_t var_460
                    
                    if (var_460 != 0)
                        sub_140a74f90(var_460)
                    
                    int64_t var_470
                    
                    if (var_470 != 0)
                        sub_140a74f90(var_470)
                    
                    int64_t var_488
                    
                    if (var_488 != 0)
                        sub_140a74f90(var_488)
                    
                    int64_t var_4f8
                    
                    if (var_4f8 != 0)
                        sub_140a74f90(var_4f8)
                    
                    int64_t var_598
                    
                    if (var_598 != 0)
                        sub_140a74f90(var_598)
                    
                    int64_t var_658
                    
                    if (var_658 != 0)
                        sub_140a74f90(var_658)
                    
                    int64_t var_6f8
                    
                    if (var_6f8 != 0)
                        sub_140a74f90(var_6f8)
                    
                    int64_t var_778
                    
                    if (var_778 != 0)
                        sub_140a74f90(var_778)
                    
                    int64_t var_818
                    
                    if (var_818 != 0)
                        sub_140a74f90(var_818)
                    
                    void var_9c8
                    sub_1405d1550(&var_9c8)
                    void var_9d0
                    sub_1405d1550(&var_9d0)
                else
                    sub_141476250(&var_9e8)
                
                i = i_1 + 1
                rcx_4 = var_d18_1 + 1
                i_1 = i
                var_d18_1 = rcx_4
            while (i s< *(arg1 + 0xa8))
    else if ((i.b & 8) != 0)
        i = (*(*rcx_3 + 0x98))()
        
        if (i.b != 0)
            goto label_141480e06

__security_check_cookie(rax_1 ^ &var_dd8)
return i

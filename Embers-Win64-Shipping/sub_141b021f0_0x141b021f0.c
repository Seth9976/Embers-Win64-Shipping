// 函数: sub_141b021f0
// 地址: 0x141b021f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_178
int64_t rax_2 = __security_cookie ^ &var_178
int64_t* rsi_1 = arg7
int64_t* var_108 = rsi_1
int64_t* rdi_1 = arg2
void* rax_3 = sub_142591550()
void* rdx = rdi_1[2]
int64_t rax_4 = sx.q(*(rax_3 + 0x38))

if (rax_4.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
    goto label_141b022cb

void* rax_5 = sub_142452380()
void* rdx_1 = rdi_1[2]
int64_t rax_6 = sx.q(*(rax_5 + 0x38))
int64_t rax

if (rax_6.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
    void* rax_8 = sub_142493230()
    void* rdx_2 = rdi_1[2]
    rax = sx.q(*(rax_8 + 0x38))
    
    if (rax.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax << 3)) == rax_8 + 0x30)
        rdi_1 = rdi_1[0x3f]
        
        if (rdi_1 != 0)
            goto label_141b022b3
else
label_141b022b3:
    int64_t rax_9 = sub_142591550()
    int64_t r8_3 = *rdi_1
    rdi_1 = (*(r8_3 + 0x610))(rdi_1, rax_9, r8_3)
label_141b022cb:
    
    if (rdi_1 != 0)
        uint64_t rcx_4 = zx.q(data_14401b1a0)
        void** const var_f8 = &data_143059b00
        TEB* gsbase
        
        if (data_143f2c818 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_4 << 3))))
            _Init_thread_header(&data_143f2c818)
            
            if (data_143f2c818 == 0xffffffff)
                int64_t rax_83 = data_143f2c810
                
                if (rax_83 == 0)
                    rax_83 = sub_141a54240(&data_143f2c810, (rax_83 + 2).d)
                
                data_143f2c808 = rax_83
                _Init_thread_footer(&data_143f2c818)
        
        int64_t r13_1 = 0
        int64_t* r14_1 = *(arg4 + 0x10)
        int64_t rcx_5
        rcx_5.b = 0
        int64_t rbx_1 = data_143f2c808
        int64_t r15_2 = 0
        char var_127_1 = 0
        uint64_t r12_2 = sx.q(*(arg4 + 0x18)) << 3 u>> 3
        
        if (r14_1 u> &r14_1[sx.q(*(arg4 + 0x18))])
            r12_2 = 0
        
        int32_t var_118
        
        if (r12_2 != 0)
            do
                void* rax_14 = *r14_1
                
                if (*(rax_14 + 0x34) == 1)
                    rsi_1[0x5a] = *(rax_14 + 0x28)
                    int32_t rax_15 = *(rax_14 + 0x30)
                    rsi_1[0x5b].d = rax_15
                    int32_t var_110_1 = rax_15
                    *(rsi_1 + 0x2dc) = 2
                    var_118.q = rsi_1[0x5a]
                    sub_1405c5900(&rsi_1[0x1f], rbx_1, &var_f8, rdi_1, 2, &var_118)
                    rcx_5.b = 1
                
                r14_1 = &r14_1[1]
                r15_2 += 1
            while (r15_2 != r12_2)
        
        char rdx_5 = *(rsi_1 + 0x2dd)
        var_118 = data_1439e5888
        int32_t var_114_1 = 0xffffffff
        int64_t zmm0_1 = var_118.q
        rsi_1[0x5a] = zmm0_1
        rsi_1[0x5b].d = 0xffffffff
        *(rsi_1 + 0x2dc) = rdx_5
        
        if (rcx_5.b == 0)
            int32_t var_110_2 = rsi_1[0x5b].d
            var_118.q = zmm0_1
            sub_1405c5900(&rsi_1[0x1f], rbx_1, &var_f8, rdi_1, rdx_5, &var_118)
        
        void** rax_18 = sub_141f3b9f0(rdi_1)
        var_f8 = rax_18
        void** rbx_2 = rax_18
        
        if (rax_18 != 0)
            void* rax_20 = sub_140d21950(rbx_2, sub_141ae8e30())
            
            if (rax_20 != 0)
                int64_t rdx_8 = *rax_20
                void** rax_21 = (*(rdx_8 + 0x10))(rax_20, rdx_8)
                rbx_2 = rax_21
                var_f8 = rax_21
        
        char var_128 = 0
        char* rax_22
        float zmm6_1[0x4]
        rax_22, zmm6_1 = sub_141aecc60(rdi_1, &var_128)
        void* r15_3
        
        if (rax_22 == 0)
            r15_3 = nullptr
        else
            r15_3 = &rax_22[0x268]
            
            if (r15_3 != 0)
                int64_t rax_23 = *r15_3
                
                if (var_128 == 0)
                    (*(rax_23 + 0x38))(r15_3)
                else
                    (*(rax_23 + 0x50))(r15_3)
        
        int64_t rax_25 = (*(*rdi_1 + 0x150))(rdi_1)
        char rax_28
        
        if (rax_25 != 0)
            rax_28 = sub_1424385d0((*(*rdi_1 + 0x150))(rdi_1))
        
        if (rax_25 == 0 || rax_28 != 0)
            (*(*rsi_1 + 0x38))(rsi_1)
        
        float var_48_1[0x4] = zmm6_1
        int32_t rax_31 = (*(*rsi_1 + 0x38))(rsi_1)
        zmm6_1 = zx.o(0)
        int64_t var_120_1
        int64_t var_e0
        uint128_t zmm0_2
        float zmm2_1[0x4]
        
        if ((*(arg5 + 0x54) & 1) == 0)
            zmm0_2 = *arg5
            var_118.q = zmm0_2:4.q
            var_e0 = arg5[1].q
            zmm2_1 = var_e0:4.d
            zmm2_1[0] = zmm2_1[0] f- var_114_1
            zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
            zmm2_1[0] = zmm2_1[0] - 0.5f
            int32_t rcx_19 = int.d(zmm2_1[0]) s>> 1
            var_120_1.d = var_e0.d - zmm0_2:4.d + rcx_19
            zmm0_2 = _mm_cvtepi32_ps(zx.o(rcx_19))
            zmm2_1[0] = zmm2_1[0] f- zmm0_2.d
            
            if (not(zmm2_1[0] >= 0f))
                var_120_1:4.d = 0
            else if (zmm2_1[0] >= 0.99999994f)
                var_120_1:4.d = 0x3f7fffff
            else
                var_120_1:4.d = zmm2_1[0]
        else
            var_120_1 = 0
        
        int64_t rax_36 = *(arg5 + 0x18)
        uint32_t r8_7 = (rax_36 u>> 0x20).d
        var_118.q = var_120_1
        zmm0_2 = _mm_cvtepi32_ps(zx.o(r8_7))
        float zmm1_1[0x4] = _mm_cvtepi32_pd(zx.o(rax_36.d)[0].q)
        zmm0_2.d = zmm0_2.d f* var_114_1
        zmm0_2 = _mm_cvtps_pd(zmm0_2.q)
        int64_t zmm7_1 = (float.d(sx.q(var_120_1.d) * sx.q(r8_7)) f+ zmm0_2.q) f/ zmm1_1[0].q
        
        if (rax_31 - 3 u> 2)
            zmm0_2 = zx.o(0)
        
        if (rax_31 - 3 u> 2 && (zmm7_1 f!= 0.0 || rax_31 == 0))
            var_128 = 0
        else
            var_128 = 1
        
        void* var_98
        
        if (r15_3 != 0)
            (*(*r15_3 + 0x40))(zmm0_2)
        else if (rbx_2 != 0)
            int32_t rcx_22 = 0
            uint128_t var_f0
            var_f0.d = 0
            int32_t r10_1 = *(arg1 + 0x80)
            var_118.q = arg1 + 0x58
            int32_t r8_8 = 0
            var_f0:4.d = 1
            var_f0:8.q = arg1 + 0x68
            var_e0.d = 0xffffffff
            var_e0 = 0
            
            if (r10_1 != 0)
                void* rax_39 = *(arg1 + 0x78)
                void* r9_3 = arg1 + 0x68
                
                if (rax_39 != 0)
                    r9_3 = rax_39
                
                int32_t temp0_5
                int32_t temp1_1
                temp0_5:temp1_1 = sx.q(r10_1 - 1)
                int32_t rdx_15 = *r9_3
                
                if (rdx_15 != 0)
                label_141b026a8:
                    int32_t rax_46 = neg.d(rdx_15) & rdx_15
                    uint64_t rflags_1
                    int32_t temp0_6
                    temp0_6, rflags_1 = _bit_scan_reverse(rax_46)
                    var_f0:4.d = rax_46
                    int32_t rax_47
                    
                    if (rax_46 == 0)
                        rax_47 = 0x20
                    else
                        rax_47 = 0x1f - temp0_6
                    
                    var_e0:4.d = r8_8 - rax_47 + 0x1f
                    
                    if (r8_8 - rax_47 + 0x1f s> r10_1)
                        var_e0:4.d = r10_1
                else
                    while (true)
                        int64_t rdx_16 = sx.q(rcx_22)
                        r8_8 += 0x20
                        rcx_22 += 1
                        int32_t var_d8_1 = r8_8
                        var_f0.d = rcx_22
                        
                        if (rdx_16.d s>= (temp1_1 + (temp0_5 & 0x1f)) s>> 5)
                            break
                        
                        rdx_15 = *(r9_3 + (rdx_16 << 2) + 4)
                        var_e0.d = 0xffffffff
                        
                        if (rdx_15 != 0)
                            goto label_141b026a8
                    
                    var_e0:4.d = r10_1
            
            int32_t rdx_17 = *(arg1 + 0x80)
            zmm2_1 = var_e0.o
            var_98 = arg1 + 0x58
            var_e0:4.d = rdx_17
            float var_80_1[0x4] = zmm2_1
            int32_t r9_4 = 0xffffffff << (rdx_17 & 0x1f).b
            var_120_1.d = r9_4
            var_e0.d = r9_4
            int32_t r9_6 = rdx_17 & 0xffffffe0
            int32_t r8_11 = rdx_17 s>> 5
            int64_t var_a0_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0].q)).q
            uint128_t var_c0 = var_98.o
            float var_b0_1[0x4] = var_f0
            
            if (rdx_17 != r10_1)
                void* rax_51 = *(arg1 + 0x78)
                void* r11_1 = arg1 + 0x68
                
                if (rax_51 != 0)
                    r11_1 = rax_51
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r10_1 - 1)
                int32_t rdx_21 = *(r11_1 + (sx.q(r8_11) << 2)) & var_120_1.d
                
                if (rdx_21 != 0)
                label_141b02785:
                    int32_t rax_57 = neg.d(rdx_21) & rdx_21
                    uint64_t rflags_2
                    int32_t temp0_8
                    temp0_8, rflags_2 = _bit_scan_reverse(rax_57)
                    int32_t r14_2
                    
                    if (rax_57 == 0)
                        r14_2 = 0x20
                    else
                        r14_2 = 0x1f - temp0_8
                    
                    var_e0:4.d = r9_6 - r14_2 + 0x1f
                    
                    if (r9_6 - r14_2 + 0x1f s> r10_1)
                        var_e0:4.d = r10_1
                else
                    while (true)
                        int64_t rcx_26 = sx.q(r8_11)
                        r9_6 += 0x20
                        r8_11 += 1
                        
                        if (rcx_26.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_21 = *(r11_1 + (rcx_26 << 2) + 4)
                        var_e0.d = 0xffffffff
                        
                        if (rdx_21 != 0)
                            goto label_141b02785
                    
                    var_e0:4.d = r10_1
            
            int64_t rsi_2 = var_118.q
            void** const r13_2 = var_f8
            
            while (true)
                int64_t rcx_28 = sx.q(var_b0_1[3])
                int32_t rax_50
                
                if (rcx_28.d != (var_e0 u>> 0x20).d || var_b0_1[0].q != arg1 + 0x68)
                    rax_50.b = 0
                else
                    rax_50.b = 1
                
                int64_t* rdx_22 = var_c0.q
                
                if (rax_50.b == 0 || rdx_22 != rsi_2)
                    rax_50.b = 1
                else
                    rax_50.b = 0
                
                if (rax_50.b == 0)
                    break
                
                void* rax_59 = sub_141e02fc0(r13_2, *(rcx_28 * 0x1c + *rdx_22 + 0x10))
                
                if (rax_59 != 0)
                    sub_141defe90(rax_59 + 0x130, zmm6_1[0])
                    zmm6_1, zmm7_1 = sub_141defc30(rax_59 + 0x130, zmm6_1)
                
                var_b0_1[2] &= not.d(var_c0:0xc.d)
                sub_14059bdd0(&var_c0:8)
            
            rsi_1 = var_108
            r13_1 = 0
        
        int64_t rbx_7 = arg6
        int32_t rcx_34 = arg3[1].d
        char var_158
        int64_t* var_150
        
        if (rcx_34 != 0 && (rsi_1[0x64].b & 1) != 0)
            zmm1_1 = zx.o(0)
            var_108 = *arg3
            char rax_64 = var_128
            int32_t var_100_1 = rcx_34
            zmm0_2 = var_108.o
            char var_140_1 = 1
            zmm1_1[0] = fconvert.s(zmm7_1)
            var_108.o = zmm0_2
            var_150.d = zmm1_1[0]
            var_158.q = &var_108
            zmm7_1 = sub_141f4b670(rdi_1, 
                sub_141b05550(arg1, rbx_7, rsi_1, rdi_1, var_158, var_150.d, 0, var_140_1, rax_64), 
                0)
            (*(*rdi_1 + 0x8d8))(rdi_1, 0)
            (*(*rdi_1 + 0x908))(rdi_1)
            sub_141f5dec0(rdi_1)
            int64_t* r14_5 = rdi_1[0x1a]
            uint64_t r12_5 = sx.q(rdi_1[0x1b].d) << 3 u>> 3
            
            if (r14_5 u> &r14_5[rdi_1[0x1b]])
                r12_5 = 0
            
            if (r12_5 != 0)
                do
                    int64_t rbx_9 = *(*r14_5 + 0xc8)
                    int32_t rcx_40
                    rcx_40.b = sub_140b5b8a0(rbx_9.d, 0) == 0
                    uint32_t rax_71
                    rax_71.b = (rbx_9 u>> 0x20).d != 0
                    rcx_40.b |= rax_71.b
                    
                    if (rcx_40.b != 0)
                        (*(*rdi_1 + 0x408))(rdi_1, &var_98, rbx_9, 2)
                        void* rcx_42 = &rsi_1[0x5c]
                        
                        if ((rsi_1[0x64].b & 2) == 0)
                            rcx_42 = *rcx_42
                        
                        (*(*rcx_42 + 8))(rcx_42, rdi_1, &var_98, rbx_9)
                    
                    r14_5 = &r14_5[1]
                    r13_1 += 1
                while (r13_1 != r12_5)
                
                rbx_7 = arg6
        
        zmm1_1 = zx.o(0)
        zmm1_1[0] = fconvert.s(zmm7_1)
        var_108 = arg3[2]
        int32_t var_100_2 = arg3[3].d
        var_150.d = zmm1_1[0]
        var_158.q = &var_108
        var_108.o = var_108.o
        float zmm6_3[0x4] =
            sub_141b05550(arg1, rbx_7, rsi_1, rdi_1, var_158, var_150.d, 0, 1, var_128)
        
        if (sub_141f44590(rdi_1) != 0)
        label_141b02a33:
            sub_141f4b670(rdi_1, zmm6_3, 0)
            (*(*rdi_1 + 0x8d8))(rdi_1, 0)
            sub_141f6f060(rdi_1)
            sub_1405c6ac0(rdi_1, 0, 0)
            (*(*rdi_1 + 0x908))(rdi_1)
            sub_141ee8690(rdi_1)
            sub_141ee8470(rdi_1)
        else if (r15_3 != 0 && (*(*r15_3 + 0x10))(r15_3) != var_f8)
            goto label_141b02a33
        
        var_108.d = data_1439e5888
        rax = zx.q(*(rsi_1 + 0x2dd))
        var_108:4.d = 0xffffffff
        rsi_1[0x5a] = var_108
        rsi_1[0x5b].d = 0xffffffff
        *(rsi_1 + 0x2dc) = rax.b
__security_check_cookie(rax_2 ^ &var_178)

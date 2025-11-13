// 函数: sub_141eef2d0
// 地址: 0x141eef2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_808
int64_t rax_1 = __security_cookie ^ &var_808
void* result = sub_1405be820(arg1)
*(arg1 + 0x212) &= 0xfb
void* result_1 = result

if ((*(arg1 + 0x8a) & 1) != 0)
    char rbx_1 = arg1[0x42].b
    int64_t rdx = *arg1
    arg1[0x42].b = rbx_1 & 0xfe
    result = (*(rdx + 0x538))(arg1, rdx)
    arg1[0x42].b ^= (rbx_1 ^ arg1[0x42].b) & 1

if (arg1[0x3e] != 0 && (result_1 == 0 || (*(result_1 + 0x11e) & 2) != 0))
    result = sub_141ee2210(arg1)
    
    if (result != 0)
        float zmm0_1[0x4]
        
        if (result_1 == 0)
            zmm0_1 = zx.o(0)
        else
            zmm0_1 = *(result_1 + 0x52c)
        
        *(arg1 + 0x664) = zmm0_1[0]
        char r14_1 = *(arg1 + 0x212)
        arg1[0xcd].d = arg3.d
        char rax_2 = r14_1 & 0xef
        *(arg1 + 0x212) = rax_2
        int32_t var_7c8
        
        if ((rax_2 & 8) != 0 && sub_14243ade0(result_1) != 0)
            int64_t* rax_4 = sub_140d3c6e0(&arg1[0xe6])
            
            if (rax_4 == 0)
                sub_141eda8f0(arg1, 1, result_1)
            else
                void* rdx_2 = arg1[0x18]
                
                if (rdx_2 == 0 || rdx_2 != rax_4 || arg1[0x19] != arg1[0xe7])
                label_141eef472:
                    *(arg1 + 0x212) &= 0xef
                    *(arg1 + 0x212) |= r14_1 & 0x10
                    rdx_2.b = 1
                    sub_141eda8f0(arg1, rdx_2.b, result_1)
                    int32_t rax_6 = *(arg1 + 0x124)
                    int64_t r9_1 = arg1[0xe7]
                    arg1[0xea] = *(arg1 + 0x11c)
                    arg1[0xeb].d = rax_6
                    int32_t rax_7 = arg1[0x26].d
                    *(arg1 + 0x75c) = arg1[0x25]
                    int64_t zmm0_2 = *(arg1 + 0x134)
                    *(arg1 + 0x764) = rax_7
                    int32_t rax_8 = *(arg1 + 0x13c)
                    arg1[0xed] = zmm0_2
                    arg1[0xee].d = rax_8
                    var_7c8.b = *(arg1 + 0x66c)
                    var_7c8:1.b = *(arg1 + 0x66d)
                    var_7c8:2.b = *(arg1 + 0x66e)
                    var_7c8:3.b = 0
                    sub_141f32b40(arg1, rax_4, &var_7c8, r9_1)
                else
                    int64_t* rcx_6 = *(rdx_2 + 0xd0)
                    rdx_2 = &rcx_6[sx.q(*(rdx_2 + 0xd8))]
                    
                    if (rcx_6 == rdx_2)
                        goto label_141eef472
                    
                    while (*rcx_6 != arg1)
                        rcx_6 = &rcx_6[1]
                        
                        if (rcx_6 == rdx_2)
                            goto label_141eef472
                
                *(arg1 + 0x212) |= 0x10
        
        void* r15_1
        
        if ((arg1[0x42].b & 8) == 0)
            r15_1 = nullptr
        else
            r15_1 = sub_141ee2110(arg1)
        
        float zmm1_1[0x4] = *(arg1 + 0x1d0)
        int64_t* rdx_4 = arg1[0x3e]
        int32_t var_7c4
        int32_t* var_7d8_1 = &var_7c4
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        float var_7a8 = zmm1_1[0]
        int32_t var_7c0
        int32_t* var_7e0_1 = &var_7c0
        float var_7a0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
        float var_7a4_1 = temp0_1[0]
        var_7c0 = 0
        var_7c4 = 0x3f800000
        float zmm7_1
        float zmm8_1[0x4]
        int128_t zmm9_1
        float zmm10_1[0x4]
        zmm7_1, zmm8_1, zmm9_1, zmm10_1 =
            sub_141e7e530(result, rdx_4, result_1, &var_7a8, temp0_1, r15_1, var_7e0_1)
        void** var_778
        sub_141db66c0(&var_778)
        sub_141dd7690(&var_778, arg1)
        sub_141dd9500(&var_778, sub_1405be820(arg1))
        sub_141dd9140(&var_778, arg1[0x3e])
        sub_141dd9360(&var_778, arg1[0x49])
        sub_141dd91a0(&var_778, arg1[0x41])
        int64_t var_6d0
        
        if (&var_6d0 != &arg1[0xc2])
            int64_t rbx_3 = sx.q(arg1[0xcb].d)
            void var_698
            sub_1405a4aa0(&var_698, 0, rbx_3.d, 4)
            void* rax_14 = arg1[0xca]
            void* rdx_10 = &arg1[0xc9]
            void* rcx_20 = &var_698
            
            if (rax_14 != 0)
                rdx_10 = rax_14
            
            void* var_690
            
            if (var_690 != 0)
                rcx_20 = var_690
            
            memcpy(rcx_20, rdx_10, (rbx_3 << 2).d)
            int64_t r14_2 = sx.q(arg1[0xc3].d)
            int32_t var_688_1 = rbx_3.d
            int32_t var_6c8_1 = 0
            int32_t var_6c4
            
            if (var_6c4 != r14_2.d)
                sub_1405a5410(&var_6d0, r14_2.d)
            
            int32_t var_6a0_1 = 0xffffffff
            int32_t var_69c_1 = 0
            void var_6c0
            sub_14059a8e0(&var_6c0, r14_2.d)
            int32_t rax_16 = r14_2.d + var_6c8_1
            int32_t var_6c8_2 = rax_16
            
            if (rax_16 s> var_6c4)
                sub_1405a4f90(&var_6d0)
            
            void* rbx_4 = &arg1[0xc4]
            int32_t var_6a0_2 = arg1[0xc8].d
            int32_t var_69c_2 = *(arg1 + 0x644)
            
            if (&var_6c0 != rbx_4)
                sub_14059a8e0(&var_6c0, *(rbx_4 + 0x18))
                int32_t rax_19 = *(rbx_4 + 0x18)
                int32_t var_6a8_1 = rax_19
                
                if (rax_19 != 0)
                    void* rcx_25 = *(rbx_4 + 0x10)
                    
                    if (rcx_25 != 0)
                        rbx_4 = rcx_25
                    
                    void* rcx_26 = &var_6c0
                    void* var_6b0
                    
                    if (var_6b0 != 0)
                        rcx_26 = var_6b0
                    
                    memcpy(rcx_26, rbx_4, (zx.q(rax_19 + 0x1f) u>> 5 << 2).d)
            
            memcpy(var_6d0, arg1[0xc2], (r14_2 << 4).d)
        
        int32_t rax_22 = *(arg1 + 0x7cc) * 0xbb38435 + 0x3619636b
        *(arg1 + 0x7cc) = rax_22
        int128_t zmm2 = *(arg1 + 0x22c)
        float zmm1_2[0x4] = arg1[0x45].d
        zmm1_2[0] = zmm1_2[0] f- zmm2.d
        var_7c8 = rax_22 u>> 9 | 0x3f800000
        int128_t zmm0_3
        zmm0_3.d = var_7c8.d f- 1f
        zmm1_2[0] = zmm1_2[0] f* zmm0_3.d
        zmm1_2[0] = zmm1_2[0] f+ zmm2.d
        zmm1_2[0] = zmm1_2[0] f* arg1[0x46].d
        sub_141dd9420(&var_778, zmm1_2[0])
        
        if ((*(arg1 + 0x211) & 1) == 0)
            zmm0_3 = *(arg1[0x3e] + 0x104)
        else
            zmm0_3 = *(arg1 + 0x23c)
        
        int32_t var_578_1 = zmm0_3.d
        int32_t rax_27 = *(arg1 + 0x7cc) * 0xbb38435 + 0x3619636b
        *(arg1 + 0x7cc) = rax_27
        zmm2 = *(arg1 + 0x224)
        zmm1_2 = arg1[0x44].d
        zmm1_2[0] = zmm1_2[0] f- zmm2.d
        var_7c8 = rax_27 u>> 9 | 0x3f800000
        zmm0_3.d = var_7c8.d f- 1f
        zmm1_2[0] = zmm1_2[0] f* zmm0_3.d
        zmm1_2[0] = zmm1_2[0] f+ zmm2.d
        zmm1_2[0] = zmm1_2[0] f* arg1[0x4a].d
        sub_141dd8f70(&var_778, zmm1_2[0])
        uint8_t rcx_30 = arg1[0x42].b
        zmm0_3 = *(arg1 + 0x254)
        int32_t var_5d0_1 = zmm0_3.d
        char var_5f6
        char r11_1 = var_5f6 ^ ((rcx_30 u>> 1 ^ var_5f6) & 0x40)
        char var_5f6_1 = r11_1
        
        if (zmm7_1 > zmm8_1[0])
            float var_5dc_2 = zmm7_1
        else
            int32_t var_5dc_1 = 0
        
        if ((rcx_30 & 0x20) == 0)
            int64_t* rcx_31 = arg1[0x3e]
            (*(*rcx_31 + 0x2a8))(rcx_31)
            rcx_30 = arg1[0x42].b
            r11_1 = var_5f6_1
        else
            zmm0_3 = arg1[0x48].d
        
        int32_t var_57c_1 = zmm0_3.d
        char var_5f8
        char r9_3 = var_5f8 ^ (((rcx_30 * 2) ^ var_5f8) & 8)
        char rax_32
        
        if ((*(arg1 + 0x211) & 2) != 0)
            rax_32 = sub_141b28ce0(&arg1[0xe4])
            r11_1 = var_5f6_1
        
        void* rsi
        
        if ((*(arg1 + 0x211) & 2) == 0 || rax_32 != 0)
            rsi.b = 1
        else
            rsi = nullptr
        
        uint8_t rdx_17 = *(arg1 + 0x211)
        rsi.b *= 2
        char rbx_5 = *(arg1 + 0x212)
        uint8_t r8_13 = arg1[0x42].b
        uint8_t rcx_33 = rdx_17 u>> 5
        rsi.b |= r8_13 & 0xe8
        rsi.b *= 2
        char var_5f7
        rsi.b |= var_5f7 & 0xb
        rsi.b &= 0xaf
        rsi.b |= ((not.b(rdx_17 u>> 2) & 1) << 2 | (rdx_17 & 0x18)) << 2
        char var_5f7_1 = rsi.b
        
        if ((rsi.b & 0x10) != 0)
            int128_t var_558_1 = *(arg1 + 0x1c0)
            int128_t var_538_1 = *(arg1 + 0x1e0)
            float var_548_1[0x4] = *(arg1 + 0x1d0)
        
        r8_13 = (r8_13 u>> 2 & 2) | (sbb.b(rcx_33, rcx_33, r15_1 != 0) & 4)
            | ((((rbx_5 << 4 ^ r9_3) & 0x20) ^ r9_3) & 0xf9)
        uint8_t var_5f8_2 = r8_13
        
        if ((r8_13 & 4) != 0)
            void var_500
            sub_141c51970(&var_500, r15_1)
            int32_t var_518_1 = sub_1423648a0(r15_1, sub_141e7dd10(result), var_7c4.d).d
        
        int32_t rax_40 = *(arg1 + 0x234)
        int32_t rcx_37 = 0
        
        if (rax_40 s>= 0)
            rcx_37 = rax_40
        
        int32_t rax_41 = arg1[0x47].d
        int32_t var_120_1 = rcx_37
        int32_t rcx_38 = 0
        
        if (rax_41 s>= 0)
            rcx_38 = rax_41
        
        int64_t* i = arg1[0xd5]
        int32_t var_11c_1 = rcx_38
        
        for (; i != &i[sx.q(arg1[0xd6].d) * 2]; i = &i[2])
            if (i[1].d != 0 && *i != 0)
                goto label_141eefa51
        
        if (arg1[0xd4].d s> 0)
        label_141eefa51:
            i.b = 0x80
        else
            i.b = 0
        
        uint8_t var_5f6_3 =
            (((((rcx_33 | r11_1) ^ rbx_5 << 3) & 8) ^ ((r11_1 & 0xf8) | rcx_33)) & 0x7f) | i.b
        
        if (arg1[0xd9].d s> 0)
        label_141eefa9c:
            i.b = 1
        else
            for (i = arg1[0xda]; i != &i[sx.q(arg1[0xdb].d) * 2]; i = &i[2])
                if (i[1].d != 0 && *i != 0)
                    goto label_141eefa9c
            
            i = nullptr
        
        char var_5f5
        char rcx_45 = (var_5f5 & 0xfe) | i.b
        char var_5f5_1 = rcx_45
        
        if (arg1[0xde].d s> 0)
        label_141eefaeb:
            i.b = 2
        else
            for (i = arg1[0xdf]; i != &i[sx.q(arg1[0xe0].d) * 2]; i = &i[2])
                if (i[1].d != 0 && *i != 0)
                    goto label_141eefaeb
            
            i.b = 0
        
        rcx_45 = (rcx_45 & 0xfd) | i.b
        
        if ((*(result + 0x352) & 0x10) != 0)
            int64_t* rcx_46 = arg1[0x3e]
            int64_t* var_7b8 = nullptr
            int32_t var_7b0_1 = 0
            char var_5f5_3 = rcx_45 ^ (((*(*rcx_46 + 0x2d8))(rcx_46, &var_7b8) << 2 ^ rcx_45) & 4)
            sub_141c8c520(&arg1[0xef])
            int64_t* rbx_6 = var_7b8
            int64_t rsi_1 = 0
            void* rcx_49 = &rbx_6[sx.q(var_7b0_1)]
            uint64_t r14_6 = (rcx_49 - rbx_6 + 7) u>> 3
            
            if (rbx_6 u> rcx_49)
                r14_6 = 0
            
            if (r14_6 != 0)
                do
                    void* rcx_50 = *rbx_6
                    void* var_798 = rcx_50
                    int32_t var_790_1 = 0
                    int64_t var_78c_1 = -1
                    var_7c8 = *(rcx_50 + 0xc)
                    sub_141ed03a0(&arg1[0xef], &var_7c8, &var_798)
                    rsi_1 += 1
                    rbx_6 = &rbx_6[1]
                while (rsi_1 != r14_6)
                
                rbx_6 = var_7b8
            
            if (rbx_6 != 0)
                sub_140a74f90(rbx_6)
        
        int32_t var_568_1 = var_7c0.d
        uint64_t var_b8
        
        if (&var_b8 != &arg1[0x3f])
            int64_t rbx_7 = sx.q(arg1[0x40].d)
            int64_t rsi_2 = arg1[0x3f]
            int32_t var_b0_1 = rbx_7.d
            int32_t var_ac
            
            if (rbx_7.d != 0 || var_ac != 0)
                sub_14083a1f0(&var_b8, rbx_7.d, var_ac)
                memcpy(var_b8, rsi_2, (rbx_7 << 5).d)
            else
                int32_t var_ac_1 = 0
        
        int32_t var_5cc[0x14]
        sub_141c46b70(&var_5cc, zmm8_1[0])
        sub_141c46d20(&var_5cc, zmm10_1, zmm9_1, arg4)
        arg1[0x4b].d += 1
        sub_141e73390(result, &var_778)
        *(arg1 + 0x8a) = arg1[0x4b].d s> 0 | (*(arg1 + 0x8a) & 0xfe)
        result = sub_141db7fa0(&var_778)

__security_check_cookie(rax_1 ^ &var_808)
return result

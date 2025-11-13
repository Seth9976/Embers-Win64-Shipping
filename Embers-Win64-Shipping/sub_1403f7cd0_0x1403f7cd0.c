// 函数: sub_1403f7cd0
// 地址: 0x1403f7cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int128_t zmm6
int128_t var_38 = zmm6
int128_t __saved_zmm7_1
int128_t __saved_zmm7 = __saved_zmm7_1
int128_t zmm8
int128_t var_58 = zmm8
int128_t __saved_zmm9_1
int128_t __saved_zmm9 = __saved_zmm9_1
int128_t __saved_zmm10_1
int128_t __saved_zmm10 = __saved_zmm10_1
int128_t zmm11
int128_t var_88 = zmm11
int128_t __saved_zmm12_1
int128_t __saved_zmm12 = __saved_zmm12_1
int128_t zmm13
int128_t var_a8 = zmm13
int32_t i_51
int64_t rax_1 = __security_cookie ^ &i_51
int32_t r12 = *(arg1 + 0xc)
uint64_t rbx = zx.q(arg1[2].d)
int64_t* r13 = arg1
int32_t var_1d0 = zx.o(0).d
int32_t* rdi = *r13
int32_t var_178 = 0
int32_t rsi = rdi[2]
void* rax_2 = *(rdi + 0x20)
int32_t r14 = rdi[1]
i_51 = rbx.d
int32_t var_1e8 = 0xf
int32_t var_1c4 = 0
int32_t var_1d4 = 0
int32_t var_150 = 0
int32_t var_12c = 0
int32_t var_128 = 0
int32_t var_1a8 = 0x7c830
int32_t* var_1f0 = rdi
int32_t var_204_1
int32_t rdx
int32_t i
int32_t r11_1

if (arg5 s>= 2 && arg2 != 0)
    rdx = rdi[0xa]
    i = arg3 * *(r13 + 0x24)
    r11_1 = 0
    var_204_1 = 0
    
    if (rdx s>= 0)
        while (rdi[0xc] << r11_1.b != i)
            r11_1 += 1
            
            if (r11_1 s> rdx)
                break
        
        rdi = var_1f0
        var_204_1 = r11_1

uint64_t result

if (arg5 s< 2 || arg2 == 0 || r11_1 s> rdx)
    result = 0xffffffff
else
    int32_t rax_5 = 1 << r11_1.b
    int32_t rcx_3 = rdi[0xc] * rax_5
    int32_t rcx_4 = r13[1].d
    int32_t rcx_6 = rsi * r12
    int64_t r12_2 = sx.q(rcx_6) << 2
    void* rax_15 = (sx.q((rcx_4 + 0x400) * r12) << 2) + 0xd4 + r13
    void* rdi_2 = r12_2 + rax_15
    int32_t* rax_16 = r12_2 + rdi_2
    void* rdi_3 = arg6
    uint32_t var_1f8
    int32_t rcx_7
    uint32_t rsi_1
    
    if (rdi_3 != 0)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = __bsr_gprv_memv(*(rdi_3 + 0x20))
        rsi_1 = *(rdi_3 + 0x18) - temp0_1 - 1
        var_1f8 = rsi_1
        rcx_7 = (rsi_1 + 4) s>> 3
    else
        rsi_1 = 1
        var_1f8 = 1
        rcx_7 = 0
    
    int32_t result_5 = 0x4fb
    
    if (arg5 s< 0x4fb)
        result_5 = arg5
    
    int32_t result_1 = result_5
    int32_t var_1c8_1 = result_5 - rcx_7
    int32_t r9_1
    
    if (*(r13 + 0x34) != 0)
        r9_1 = r13[6].d
    
    int32_t var_1c0_1
    int32_t result_7
    
    if (*(r13 + 0x34) == 0 || r9_1 == 0xffffffff)
        r9_1 = r13[6].d
        var_1c0_1 = 0
        int32_t rax_27 = r9_1 * i
        
        if (rsi_1 s> 1)
            rax_27 += rsi_1
        
        if (r9_1 != 0xffffffff)
            uint64_t rcx_13 = zx.q(*var_1f0)
            int32_t temp0_3 = divs.dp.d(sx.q(rax_27 + (rcx_13 << 2).d), (rcx_13 << 3).d)
            int32_t rdx_4
            rdx_4.b = r13[7].d != 0
            int32_t result_2
            
            if (result_1 s>= temp0_3 - rdx_4)
                result_2 = temp0_3 - rdx_4
            else
                result_2 = result_1
            
            if (result_2 s>= 2)
                int32_t result_10 = temp0_3 - rdx_4
                result_5 = result_1
                
                if (result_5 s>= result_10)
                    result_5 = result_10
            else
                result_5 = 2
            
            result_1 = result_5
        
        result_7 = result_5
    else
        int32_t rdi_5 = *var_1f0 s>> 3
        int32_t temp0_2 = divs.dp.d(sx.q((rdi_5 s>> 1) + r9_1 * i), rdi_5)
        rdi_3 = arg6
        var_1c0_1 = temp0_2
        result_7 = temp0_2 s>> 6
    
    if (r9_1 != 0xffffffff)
        var_1a8 = r9_1 - ((0x190 s>> r11_1.b) - 0x32) * ((zx.q((rbx * 5).d) << 3) + 0x14).d
    
    if (rdi_3 == 0)
        void var_e8
        sub_1403fe470(&var_e8, arg4, result_1)
        rdi_3 = &var_e8
        arg6 = &var_e8
    
    if (var_1c0_1 s> 0 && *(r13 + 0x3c) != 0)
        int32_t rdx_9 = 0
        int32_t rcx_20 = (var_1c0_1 * 2 - *(r13 + 0xac)) s>> 6
        
        if (rsi_1 == 1)
            rdx_9 = 2
        
        int32_t rax_39 = rcx_20
        
        if (rdx_9 s> rcx_20)
            rax_39 = rdx_9
        
        if (rax_39 s< var_1c8_1)
            if (rdx_9 s> rcx_20)
                rcx_20 = rdx_9
            
            if (rcx_20 s< var_1c8_1)
                var_1c8_1 = rcx_20
                int32_t result_3 = rcx_7 + rcx_20
                result_1 = result_3
                sub_1403fe600(rdi_3, result_3)
    
    int32_t rcx_22 = *(r13 + 0x2c)
    uint32_t rdi_6 = result_1 << 3
    int32_t rax_43 = var_1f0[3]
    uint32_t var_1f4_1 = rdi_6
    
    if (rcx_22 s> rax_43)
        rcx_22 = rax_43
    
    int64_t rcx_24 = sx.q((r13[1].d + rcx_3) * r12) << 2
    int64_t rax_47 = rcx_24 + 0xf
    
    if (rax_47 u<= rcx_24)
        rax_47 = 0xffffffffffffff0
    
    int64_t rax_48 = rax_47 & 0xfffffffffffffff0
    __chkstk(rax_48)
    int32_t r11_2 = *(r13 + 0x24)
    void var_2a8
    void* rsp_1 = &var_2a8 - rax_48
    float zmm3 = *(r13 + 0xbc)
    int64_t rbx_1 = sx.q(divs.dp.d(sx.q((rcx_3 - r14) * rbx.d), r11_2))
    float zmm0_1 = sub_1403fa370(arg2, rbx_1.d)
    
    if (not(zmm3 > zmm0_1))
        zmm3 = zmm0_1
    
    uint128_t zmm0_2 = sub_1403fa370(arg2 + (rbx_1 << 2), divs.dp.d(sx.q(i_51 * r14), r11_2))
    *(r13 + 0xbc) = zmm0_2.d
    
    if (not(zmm3 f> zmm0_2.d))
        zmm3 = zmm0_2.d
    
    int32_t r14_1
    r14_1.b = 1f f/ _mm_cvtepi32_ps(zx.o(1 << (*(r13 + 0x44)).b)).d >= zmm3
    int32_t var_19c_1 = r14_1
    
    if (rsi_1 != 1)
        var_19c_1 = 0
    else
        sub_1403fe0d0(arg6, r14_1, 0xf)
        
        if (r14_1 != 0)
            if (var_1c0_1 s> 0)
                uint64_t result_4 = zx.q(result_1)
                var_1c8_1 = 2
                
                if (result_4.d s>= rcx_7 + 2)
                    result_4 = zx.q(rcx_7 + 2)
                
                result_1 = result_4.d
                result_7 = result_4.d
                rdi_6 = (result_4 << 3).d
                var_1f4_1 = rdi_6
                sub_1403fe600(arg6, result_4.d)
            
            uint64_t rflags_2
            int32_t temp0_7
            temp0_7, rflags_2 = __bsr_gprv_memv(*(arg6 + 0x20))
            var_1f8 = rdi_6
            *(arg6 + 0x18) = temp0_7 + 1 + rdi_6
    
    int32_t rbx_3 = 0
    
    do
        int64_t rdx_18 = sx.q(r13[1].d)
        int64_t rdi_7 = sx.q(rbx_3)
        *(rsp_1 + 0x38) = r13[3].d
        int32_t rax_68 = *(r13 + 0x24)
        *(rsp_1 + 0x30) = r13 + 0x9c + (rdi_7 << 2)
        *(rsp_1 + 0x28) = &var_1f0[4]
        *(rsp_1 + 0x20) = rax_68
        sub_1403fa440(arg2 + (rdi_7 << 2), 
            rsp_1 + 0xa0 + ((sx.q((rdx_18.d + rcx_3) * rbx_3) + rdx_18) << 2), zx.q(rcx_3), 
            zx.q(r12))
        rbx_3 += 1
    while (rbx_3 s< r12)
    
    uint32_t rsi_5 = var_1f8
    int32_t rax_71
    int32_t r14_4
    uint64_t i_61
    
    if (*(r13 + 0x4c) == 0 || var_1c8_1 s<= 3)
        i_61 = zx.q(i_51)
        
        if (var_1c8_1 s> (i_61 * 3).d << 2)
            goto label_1403f8364
        
        r14_4 = var_204_1
        rax_71 = 0
    else
        i_61 = zx.q(i_51)
    label_1403f8364:
        r14_4 = var_204_1
        
        if (r13[5].d != 0 || var_19c_1 != 0 || *(r13 + 0x1c) != 0 || r13[4].d s< 5
                || (*(r13 + 0x7c) != 0 && r14_4 != 3 && r13[9].d == 0x1392))
            rax_71 = 0
        else
            rax_71 = 1
    
    int32_t rdx_20 = *(r13 + 0x6c)
    *(rsp_1 + 0x50) = var_1c8_1
    *(rsp_1 + 0x48) = rax_71
    void* rdi_9 = rsp_1 + 0xa0
    *(rsp_1 + 0x40) = &var_1f8
    *(rsp_1 + 0x38) = &var_1c4
    *(rsp_1 + 0x30) = &var_1e8
    *(rsp_1 + 0x28) = rdx_20
    *(rsp_1 + 0x20) = rcx_3
    int32_t rax_73
    int512_t zmm6_1
    rax_73, zmm6_1 = sub_1403fc840(r13, rdi_9, (sx.q(rcx_4 * r12) << 2) + 0xd4 + r13, zx.q(r12))
    int32_t rcx_35 = var_1e8
    int32_t var_148_1 = rcx_35
    
    if (var_1c4 f> 0.400000006f || not((*(r13 + 0x74))[0] <= 0.400000006f))
        float zmm0_3[0x2]
        
        if (r13[0x10].d != 0)
            zmm0_3 = _mm_cvtps_pd(*(r13 + 0x84)).q
        
        if (r13[0x10].d == 0 || not(zmm0_3 f<= 0.29999999999999999))
            uint64_t zmm1_2 = _mm_cvtepi32_pd(zx.q(r13[0xe].d)).q
            uint64_t zmm2_1 = _mm_cvtepi32_pd(zx.q(rcx_35)).q
            
            if (zmm2_1 f> zmm1_2 f* 1.26 || not(zmm1_2 f* 0.79000000000000004 f<= zmm2_1))
                var_12c = 1
    
    var_1c4 = 6
    void* rbx_4
    uint32_t rsi_6
    
    if (rax_73 != 0)
        rbx_4 = arg6
        sub_1403fe0d0(rbx_4, 1, 1)
        int32_t rsi_8 = var_1e8 + 1
        uint64_t rflags_3
        int32_t temp0_11
        temp0_11, rflags_3 = _bit_scan_reverse(rsi_8)
        sub_1403fe640(rbx_4, temp0_11 - 4, 6)
        sub_1403fe100(rbx_4, rsi_8 - (0x10 << (temp0_11.b - 4)), temp0_11)
        var_148_1 = rsi_8 - 1
        sub_1403fe100(rbx_4, var_1f8, 3)
        sub_1403fe400(rbx_4, rdx_20, &data_1436fde18, 2)
        rdi_9 = rsp_1 + 0xa0
        rsi_6 = var_1f4_1
    else if (r13[5].d != rax_73)
        rbx_4 = arg6
        rsi_6 = var_1f4_1
    else
        rsi_6 = var_1f4_1
        
        if (rsi_5 + 0x10 s> rsi_6)
            rbx_4 = arg6
        else
            rbx_4 = arg6
            sub_1403fe0d0(rbx_4, 0, 1)
    
    bool cond:6_1 = r13[4].d s< 1
    int32_t r9_4 = 0
    int32_t var_1fc_1 = 0
    int32_t r8_8 = 0
    var_1e8 = 0
    
    if (not(cond:6_1) && *(r13 + 0x4c) == 0)
        uint64_t rdx_28 = zx.q(rcx_3 + r13[1].d)
        *(rsp_1 + 0x20) = &var_150
        int32_t rax_76
        int512_t zmm12
        rax_76, zmm6_1, zmm12 = sub_1403fd990(rdi_9, rdx_28, zx.q(r12), &var_1d0)
        r8_8 = var_1e8
        zmm12.o = var_1d0
        r9_4 = rax_76
        var_1fc_1 = rax_76
        var_1d4 = var_150
    
    int32_t temp0_12
    uint64_t rflags_4
    
    if (r14_4 s> 0)
        temp0_12, rflags_4 = __bsr_gprv_memv(*(rbx_4 + 0x20))
    
    if (r14_4 s<= 0 || *(rbx_4 + 0x18) - temp0_12 + 2 s> rsi_6)
        var_1fc_1 = 0
        var_128 = 1
    else if (r9_4 != 0)
        r8_8 = rax_5
        var_1e8 = rax_5
    
    int64_t rcx_46 = sx.q(rcx_3 * r12) << 2
    int64_t rax_80 = rcx_46 + 0xf
    
    if (rax_80 u<= rcx_46)
        rax_80 = 0xffffffffffffff0
    
    int64_t rax_81 = rax_80 & 0xfffffffffffffff0
    __chkstk(rax_81)
    void* rsp_2 = rsp_1 - rax_81
    int64_t rax_82 = r12_2 + 0xf
    
    if (rax_82 u<= r12_2)
        rax_82 = 0xffffffffffffff0
    
    int64_t rax_83 = rax_82 & 0xfffffffffffffff0
    __chkstk(rax_83)
    void* rsp_3 = rsp_2 - rax_83
    int64_t rax_85 = r12_2 + 0xf
    
    if (rax_85 u<= r12_2)
        rax_85 = 0xffffffffffffff0
    
    int64_t rax_86 = rax_85 & 0xfffffffffffffff0
    __chkstk(rax_86)
    void* rsp_4 = rsp_3 - rax_86
    uint32_t r12_5
    
    if (r8_8 == 0 || r13[4].d s< 8)
        r12_5 = 0
    else
        r12_5 = 1
    
    var_1f8 = r12_5
    int32_t rbx_6 = rsi * i_61.d
    int64_t rax_88 = sx.q(rbx_6)
    int32_t var_1a0 = rbx_6
    int64_t rcx_47 = rax_88 << 2
    int64_t rax_89 = rcx_47 + 0xf
    
    if (rax_89 u<= rcx_47)
        rax_89 = 0xffffffffffffff0
    
    int64_t rax_90 = rax_89 & 0xfffffffffffffff0
    __chkstk(rax_90)
    void* rsp_5 = rsp_4 - rax_90
    zmm6_1.o = 0x3f000000
    void* r15_1 = rsp_5 + 0xa0
    
    if (r12_5 != 0)
        *(rsp_5 + 0x38) = *(r13 + 0x24)
        int32_t i_52 = i_51
        *(rsp_5 + 0x30) = r14_4
        *(rsp_5 + 0x28) = r12
        *(rsp_5 + 0x20) = i_52
        sub_1403fa800(var_1f0, 0, rdi_9, rsp_2 + 0xa0)
        *(rsp_5 + 0x28) = rax_5
        *(rsp_5 + 0x20) = i_51
        sub_1404047d0(var_1f0, rsp_2 + 0xa0, rsp_3 + 0xa0, zx.q(rcx_22))
        uint64_t r8_12 = zx.q(*(r13 + 0x2c))
        *(rsp_5 + 0x28) = i_51
        *(rsp_5 + 0x20) = r15_1
        int32_t zmm6_2 = sub_140408610(var_1f0, zx.q(rcx_22), r8_12, rsp_3 + 0xa0)
        int32_t i_1 = 0
        uint128_t zmm0_4
        float zmm1_3[0x4]
        
        if (rbx_6 s> 0 && rbx_6 u>= 8)
            zmm0_4 = _mm_shuffle_epi32(zx.o(r14_4), 0)
            int32_t rax_96 = rbx_6 & 0x80000007
            
            if (rax_96 s< 0)
                rax_96 = ((rax_96 - 1) | 0xfffffff8) + 1
            
            zmm1_3 = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm0_4), data_142d3f640)
            
            do
                int64_t i_26 = sx.q(i_1)
                *(r15_1 + (i_26 << 2)) = _mm_add_ps(*(r15_1 + (i_26 << 2)), zmm1_3)
                int32_t rax_99 = i_1 + 4
                i_1 += 8
                int64_t rcx_51 = sx.q(rax_99)
                *(r15_1 + (rcx_51 << 2)) = _mm_add_ps(*(r15_1 + (rcx_51 << 2)), zmm1_3)
            while (i_1 s< rbx_6 - rax_96)
            
            rdi_9 = rsp_1 + 0xa0
        
        int64_t i_30 = sx.q(i_1)
        
        if (i_30 s< rax_88)
            if (rax_88 - i_30 s>= 4)
                void* rax_103 = r15_1 + 8 + (i_30 << 2)
                int64_t i_35 = ((rax_88 - i_30 - 4) u>> 2) + 1
                uint128_t zmm2_2
                zmm2_2.d = _mm_cvtepi32_ps(zx.o(r14_4)).d f* zmm6_2
                i_30 += i_35 << 2
                int64_t i_2
                
                do
                    zmm1_3 = zmm2_2
                    rax_103 += 0x10
                    zmm0_4.d = zmm2_2.d f+ *(rax_103 - 0x18)
                    zmm1_3[0] = zmm1_3[0] f+ *(rax_103 - 0x14)
                    *(rax_103 - 0x18) = zmm0_4.d
                    *(rax_103 - 0x14) = zmm1_3[0]
                    zmm1_3 = zmm2_2
                    zmm0_4.d = zmm2_2.d f+ *(rax_103 - 0x10)
                    zmm1_3[0] = zmm1_3[0] f+ *(rax_103 - 0xc)
                    *(rax_103 - 0x10) = zmm0_4.d
                    *(rax_103 - 0xc) = zmm1_3[0]
                    i_2 = i_35
                    i_35 -= 1
                while (i_2 != 1)
            
            if (i_30 s< rax_88)
                zmm1_3 = _mm_cvtepi32_ps(zx.o(r14_4))
                zmm1_3[0] = zmm1_3[0] f* zmm6_2
                
                do
                    i_30 += 1
                    zmm0_4.d = zmm1_3.d f+ *(r15_1 + (i_30 << 2) - 4)
                    *(r15_1 + (i_30 << 2) - 4) = zmm0_4.d
                while (i_30 s< rax_88)
    
    uint64_t rdx_40 = zx.q(var_1e8)
    *(rsp_5 + 0x38) = *(r13 + 0x24)
    *(rsp_5 + 0x30) = r14_4
    *(rsp_5 + 0x28) = r12
    *(rsp_5 + 0x20) = i_51
    uint128_t zmm7
    int32_t zmm11_1
    int32_t zmm12_1
    zmm7, zmm11_1, zmm12_1 = sub_1403fa800(var_1f0, rdx_40, rdi_9, rsp_2 + 0xa0)
    int32_t i_50 = i_51
    
    if (r12 == 2)
        int32_t rax_107 = var_1d4
        
        if (i_50 == 1)
            rax_107 = 0
        
        var_1d4 = rax_107
    
    *(rsp_5 + 0x28) = rax_5
    *(rsp_5 + 0x20) = i_50
    sub_1404047d0(var_1f0, rsp_2 + 0xa0, rsp_3 + 0xa0, zx.q(rcx_22))
    
    if (*(r13 + 0x4c) != 0)
        int32_t rax_109 = *(r13 + 0x2c)
        
        if (rax_109 s> 2)
            uint64_t i_36 = zx.q(rax_109 - 2)
            void* rcx_54 = rsp_3 + 0xa8
            uint64_t i_3
            
            do
                float zmm0_5 = *rcx_54
                float zmm1_4 = *(rsp_3 + 0xa0) * 9.99999975e-05f
                
                if (not(zmm1_4 > zmm0_5))
                    zmm0_5 = zmm1_4
                
                *rcx_54 = zmm0_5
                
                if (not(zmm0_5 > 1e-15f))
                    zmm0_5 = 1e-15f
                
                *rcx_54 = zmm0_5
                rcx_54 += 4
                i_3 = i_36
                i_36 -= 1
            while (i_3 != 1)
    
    uint64_t r8_17 = zx.q(*(r13 + 0x2c))
    *(rsp_5 + 0x28) = i_50
    *(rsp_5 + 0x20) = rsp_4 + 0xa0
    float zmm6_3 = sub_140408610(var_1f0, zx.q(rcx_22), r8_17, rsp_3 + 0xa0)
    int64_t rcx_56 = rax_88 << 2
    int64_t rax_112 = rcx_56 + 0xf
    
    if (rax_112 u<= rcx_56)
        rax_112 = 0xffffffffffffff0
    
    int64_t rax_113 = rax_112 & 0xfffffffffffffff0
    __chkstk(rax_113)
    int32_t r10_1 = *(r13 + 0x2c)
    void* rsp_6 = rsp_5 - rax_113
    
    if (r10_1 s> 0)
        __builtin_memset(rsp_6 + 0xa0, 0, zx.q(r10_1) << 2)
        i_50 = i_51
    
    int32_t r8_18 = r13[5].d
    int64_t rsi_12 = sx.q(rsi)
    int64_t i_49 = sx.q(i_50)
    int64_t var_180_1 = rsi_12
    uint128_t zmm0_6
    uint128_t zmm1_5
    uint128_t zmm2_3
    
    if (r8_18 == 0)
        int128_t* r12_6 = r13[0x19]
        
        if (r12_6 != 0 && *(r13 + 0x4c) == r8_18)
            int32_t r11_4 = *(r13 + 0x64)
            int32_t r8_19 = 0
            uint64_t r10_2 = 2
            float zmm10 = zmm7.d
            
            if (r11_4 s< 2)
                r11_4 = 2
            
            float zmm9 = zmm7.d
            int32_t r9_13 = 0
            int64_t r15_2 = sx.q(r11_4)
            
            if (i_49 s> 0)
                int128_t* r10_3 = r12_6
                int64_t i_44 = i_49
                int64_t i_4
                
                do
                    int64_t rdx_44 = 0
                    
                    if (r11_4 s> 0)
                        int128_t* rdi_14 = r10_3
                        int32_t r8_20 = 1 - r11_4
                        
                        do
                            zmm2_3 = *rdi_14
                            
                            if (0.25f f<= zmm2_3.d)
                                zmm2_3.d = 0x3e800000.d f* zmm6_3
                            else if (zmm2_3.d f<= -2f)
                                zmm2_3 = 0xc0000000
                            else if (not(zmm2_3.d f<= zmm7.d))
                                zmm2_3.d = zmm2_3.d f* zmm6_3
                            
                            zmm1_5 = zx.o(r8_20)
                            int32_t rcx_59 =
                                sx.d(*(rax_2 + (rdx_44 << 1) + 2)) - sx.d(*(rax_2 + (rdx_44 << 1)))
                            rdx_44 += 1
                            r8_20 += 2
                            r9_13 += rcx_59
                            rdi_14 += 4
                            zmm1_5.d = _mm_cvtepi32_ps(zmm1_5).d f* zmm2_3.d
                            zmm9 = zmm9 f+ zmm1_5.d
                            zmm0_6.d = _mm_cvtepi32_ps(zx.o(rcx_59)).d f* zmm2_3.d
                            zmm10 = zmm10 f+ zmm0_6.d
                        while (rdx_44 s< r15_2)
                        
                        r8_19 = 0
                    
                    r10_3 += rsi_12 << 2
                    i_4 = i_44
                    i_44 -= 1
                while (i_4 != 1)
                r13 = arg1
                rsi_12 = var_180_1
                r10_2 = zx.q((i_44 + 2).d)
            
            int32_t rcx_63 = (r11_4 - 1) * (r11_4 + 1) * r11_4 * i_51
            zmm10 = zmm10 f/ _mm_cvtepi32_ps(zx.o(r9_13)).d + 0.200000003f
            zmm0_6 = 0x3cfdf3b6
            zmm9 = zmm9 * 6f f/ _mm_cvtepi32_ps(zx.o(rcx_63)).d * zmm6_3
            
            if (not(0.0309999995f <= zmm9))
                zmm0_6 = 0xbcfdf3b6
            
            if (0.0309999995f <= zmm9 || not(zmm9 > -0.0309999995f))
                zmm9 = zmm0_6.d
            
            int32_t r14_5 = 0
            var_1d0 = 0
            int32_t temp30_1
            int32_t temp31_1
            temp30_1:temp31_1 = sx.q(*(rax_2 + (r15_2 << 1)))
            void* rdx_46 = rax_2 + 2
            int32_t rax_119 = (temp31_1 - temp30_1) s>> 1
            
            if (sx.d(*(rax_2 + 2)) s< rax_119)
                int32_t rcx_66
                
                do
                    rcx_66 = sx.d(*(rdx_46 + 2))
                    rdx_46 += 2
                    r14_5 += 1
                while (rcx_66 s< rax_119)
                var_1d0 = r14_5
            
            int32_t r9_14 = 0
            int64_t i_5 = 0
            
            if (r15_2 s>= 4)
                int64_t rax_120 = rsi_12 << 2
                int64_t r10_4 = r10_2 - rsi_12
                int32_t* rcx_67 = rax_120 + r12_6
                int32_t rdx_48 = r10_2.d - r14_5
                void* r9_17 = rsp_6 + 0xa0 - rax_120 - r12_6
                var_150 = (((r15_2 - 4) u>> 2 << 2) + 4).d
                
                do
                    zmm0_6 = rcx_67[neg.q(rsi_12)]
                    zmm2_3.d = _mm_cvtepi32_ps(zx.o(rdx_48 - 2)).d f* zmm9
                    zmm2_3.d = zmm2_3.d f+ zmm10
                    
                    if (i_49 == 2)
                        zmm1_5 = *rcx_67
                        
                        if (not(zmm0_6.d f> zmm1_5.d))
                            zmm0_6 = zmm1_5
                    
                    if (not(zmm7.d f> zmm0_6.d))
                        zmm0_6 = zmm7
                    
                    zmm0_6.d = zmm0_6.d f- zmm2_3.d
                    
                    if (not(zmm0_6.d f<= 0.25f))
                        zmm0_6.d = zmm0_6.d f- 0.25f
                        r8_19 += 1
                        *(rcx_67 + r9_17) = zmm0_6.d
                    
                    zmm0_6 = *(rcx_67 + 4 - rax_120)
                    zmm2_3.d = _mm_cvtepi32_ps(zx.o(rdx_48 - 1)).d f* zmm9
                    zmm2_3.d = zmm2_3.d f+ zmm10
                    
                    if (i_49 == 2)
                        zmm1_5 = rcx_67[1]
                        
                        if (not(zmm0_6.d f> zmm1_5.d))
                            zmm0_6 = zmm1_5
                    
                    if (not(zmm7.d f> zmm0_6.d))
                        zmm0_6 = zmm7
                    
                    zmm0_6.d = zmm0_6.d f- zmm2_3.d
                    
                    if (not(zmm0_6.d f<= 0.25f))
                        zmm0_6.d = zmm0_6.d f- 0.25f
                        r8_19 += 1
                        *(rcx_67 + r9_17 + 4) = zmm0_6.d
                    
                    zmm0_6 = rcx_67[r10_4]
                    zmm2_3.d = _mm_cvtepi32_ps(zx.o(rdx_48)).d f* zmm9
                    zmm2_3.d = zmm2_3.d f+ zmm10
                    
                    if (i_49 == 2)
                        zmm1_5 = *(r12_6 + ((var_180_1 + i_5) << 2) + 8)
                        
                        if (not(zmm0_6.d f> zmm1_5.d))
                            zmm0_6 = zmm1_5
                    
                    if (not(zmm7.d f> zmm0_6.d))
                        zmm0_6 = zmm7
                    
                    zmm0_6.d = zmm0_6.d f- zmm2_3.d
                    
                    if (not(zmm0_6.d f<= 0.25f))
                        zmm0_6.d = zmm0_6.d f- 0.25f
                        r8_19 += 1
                        *(rcx_67 + rsp_6 + 0xa0 - r12_6 + (r10_4 << 2)) = zmm0_6.d
                    
                    zmm0_6 = rcx_67[3 - rsi_12]
                    zmm2_3.d = _mm_cvtepi32_ps(zx.o(rdx_48 + 1)).d f* zmm9
                    zmm2_3.d = zmm2_3.d f+ zmm10
                    
                    if (i_49 == 2)
                        zmm1_5 = *(r12_6 + ((var_180_1 + i_5) << 2) + 0xc)
                        
                        if (not(zmm0_6.d f> zmm1_5.d))
                            zmm0_6 = zmm1_5
                    
                    if (not(zmm7.d f> zmm0_6.d))
                        zmm0_6 = zmm7
                    
                    zmm0_6.d = zmm0_6.d f- zmm2_3.d
                    
                    if (not(zmm0_6.d f<= 0.25f))
                        zmm0_6.d = zmm0_6.d f- 0.25f
                        r8_19 += 1
                        *(rcx_67 + rsp_6 + 0xa0 - r12_6 + ((3 - rsi_12) << 2)) = zmm0_6.d
                    
                    i_5 += 4
                    rdx_48 += 4
                    rcx_67 = &rcx_67[4]
                while (i_5 s< r15_2 - 3)
                
                r13 = arg1
                r14_5 = var_1d0
                r9_14 = var_150
            
            if (i_5 s< r15_2)
                int32_t r9_18 = r9_14 - r14_5
                uint128_t* rax_137 = r12_6 + (i_5 << 2)
                int64_t i_31 = r15_2 - i_5
                int64_t i_6
                
                do
                    zmm0_6 = *rax_137
                    zmm1_5.d = _mm_cvtepi32_ps(zx.o(r9_18)).d f* zmm9
                    zmm1_5.d = zmm1_5.d f+ zmm10
                    
                    if (i_49 == 2)
                        zmm2_3 = *(rax_137 + (var_180_1 << 2))
                        
                        if (not(zmm0_6.d f> zmm2_3.d))
                            zmm0_6 = zmm2_3
                    
                    if (not(zmm7.d f> zmm0_6.d))
                        zmm0_6 = zmm7
                    
                    zmm0_6.d = zmm0_6.d f- zmm1_5.d
                    
                    if (not(zmm0_6.d f<= 0.25f))
                        zmm0_6.d = zmm0_6.d f- 0.25f
                        r8_19 += 1
                        *(rsp_6 + 0xa0 - r12_6 + rax_137) = zmm0_6.d
                    
                    r9_18 += 1
                    rax_137 += 4
                    i_6 = i_31
                    i_31 -= 1
                while (i_6 != 1)
            
            if (r8_19 s>= 3)
                if (zmm10 + 0.25f f<= zmm7.d)
                    int64_t i_8 = 0
                    
                    if (r15_2 s>= 4)
                        void* rax_138 = rsp_6 + 0xa8
                        int64_t i_37 = ((r15_2 - 4) u>> 2) + 1
                        i_8 = i_37 << 2
                        int64_t i_7
                        
                        do
                            zmm0_6.d = (*(rax_138 - 8)).d f- 0.25f
                            
                            if (not(zmm7.d f<= zmm0_6.d))
                                zmm0_6 = zmm7
                            
                            zmm1_5 = *(rax_138 - 4)
                            *(rax_138 - 8) = zmm0_6.d
                            zmm1_5.d = zmm1_5.d f- 0.25f
                            
                            if (not(zmm7.d f<= zmm1_5.d))
                                zmm1_5 = zmm7
                            
                            zmm0_6 = *rax_138
                            *(rax_138 - 4) = zmm1_5.d
                            zmm0_6.d = zmm0_6.d f- 0.25f
                            
                            if (not(zmm7.d f<= zmm0_6.d))
                                zmm0_6 = zmm7
                            
                            *rax_138 = zmm0_6.d
                            zmm0_6.d = (*(rax_138 + 4)).d f- 0.25f
                            
                            if (not(zmm7.d f<= zmm0_6.d))
                                zmm0_6 = zmm7
                            
                            *(rax_138 + 4) = zmm0_6.d
                            rax_138 += 0x10
                            i_7 = i_37
                            i_37 -= 1
                        while (i_7 != 1)
                    
                    for (; i_8 s< r15_2; i_8 += 1)
                        zmm0_6.d = (*(rsp_6 + 0xa0 + (i_8 << 2))).d f- 0.25f
                        
                        if (not(zmm7.d f<= zmm0_6.d))
                            zmm0_6 = zmm7
                        
                        *(rsp_6 + 0xa0 + (i_8 << 2)) = zmm0_6.d
                else if (r15_2 s> 0)
                    __builtin_memset(rsp_6 + 0xa0, 0, r15_2 << 2)
            
            r8_18 = r13[5].d
            r10_1 = *(r13 + 0x2c)
            rbx_6 = var_1a0
            rsi_12 = var_180_1
            r14_4 = var_204_1
        
        r12_5 = var_1f8
    
    int32_t r9_19 = *(r13 + 0x4c)
    
    if (r9_19 == 0)
        zmm0_6 = 0xc1200000
        
        if (var_1e8 == r9_19)
            zmm2_3 = zmm7
        else
            zmm2_3.d = _mm_cvtepi32_ps(zx.o(r14_4)).d f* zmm6_3
        
        int64_t rcx_70 = sx.q(r8_18)
        
        if (r8_18 s< r10_1)
            uint64_t i_38 = zx.q(r10_1 - r8_18)
            uint64_t i_9
            
            do
                zmm0_6.d = zmm0_6.d f- zmm11_1
                zmm1_5.d = (*(rsp_4 + 0xa0 + (rcx_70 << 2))).d f- zmm2_3.d
                
                if (not(zmm0_6.d f> zmm1_5.d))
                    zmm0_6 = zmm1_5
                
                if (i_49 == 2)
                    zmm1_5.d = (*(rsp_4 + 0xa0 + ((rsi_12 + rcx_70) << 2))).d f- zmm2_3.d
                    
                    if (not(zmm0_6.d f> zmm1_5.d))
                        zmm0_6 = zmm1_5
                
                rcx_70 += 1
                zmm7.d = zmm7.d f+ zmm0_6.d
                i_9 = i_38
                i_38 -= 1
            while (i_9 != 1)
        
        zmm2_3 = r13[0x1a].d
        zmm7.d = zmm7.d f/ _mm_cvtepi32_ps(zx.o(r10_1 - r8_18)).d
        zmm7.d = zmm7.d f- zmm2_3.d
        
        if (-1.5f f> zmm7.d)
            zmm7 = 0xbfc00000
        else if (not(zmm7.d f<= 3f))
            zmm7 = 0x40400000
        else if (not(-1.5f f<= zmm7.d))
            zmm7 = 0xbfc00000
        
        zmm0_6.d = zmm7.d f* 0.0199999996f
        zmm0_6.d = zmm0_6.d f+ zmm2_3.d
        r13[0x1a].d = zmm0_6.d
    
    if (r12_5 == 0)
        int64_t r8_21 = 0
        
        if (rax_88 s>= 4)
            void* rcx_71 = r15_1 + 4
            int64_t rdx_55 = rsp_4 + 0xa0 - r15_1
            int64_t i_45 = ((rax_88 - 4) u>> 2) + 1
            r8_21 = i_45 << 2
            int64_t i_10
            
            do
                int32_t rax_142 = *(rdx_55 + rcx_71 - 4)
                rcx_71 += 0x10
                *(rcx_71 - 0x14) = rax_142
                *(rcx_71 - 0x10) = *(rdx_55 + rcx_71 - 0x10)
                *(rcx_71 - 0xc) = *(rdx_55 + rcx_71 - 0xc)
                *(rcx_71 - 8) = *(rdx_55 + rcx_71 - 8)
                i_10 = i_45
                i_45 -= 1
            while (i_10 != 1)
        
        if (r8_21 s< rax_88)
            int32_t* rcx_72 = r15_1 + (r8_21 << 2)
            int64_t i_39 = rax_88 - r8_21
            int64_t i_11
            
            do
                int32_t rax_146 = *(rcx_72 + rsp_4 + 0xa0 - r15_1)
                rcx_72 = &rcx_72[1]
                rcx_72[-1] = rax_146
                i_11 = i_39
                i_39 -= 1
            while (i_11 != 1)
    
    if (r14_4 s> 0)
        int32_t rdx_57 = var_1fc_1
        uint64_t rflags_5
        int32_t temp0_31
        temp0_31, rflags_5 = __bsr_gprv_memv(*(arg6 + 0x20))
        
        if (*(arg6 + 0x18) - temp0_31 + 2 s<= var_1f4_1 && rdx_57 == 0 && r13[4].d s>= 5
                && r9_19 == 0)
            int32_t i_60 = i_51
            *(rsp_6 + 0x20) = i_60
            
            if (sub_1403fc250(rsp_4 + 0xa0, rax_15, zx.q(rsi), zx.q(r10_1)) != 0)
                *(rsp_6 + 0x38) = *(r13 + 0x24)
                var_1e8 = rax_5
                *(rsp_6 + 0x30) = r14_4
                *(rsp_6 + 0x28) = r12
                var_1fc_1 = 1
                *(rsp_6 + 0x20) = i_60
                int32_t zmm8_1 = sub_1403fa800(var_1f0, zx.q(rax_5), rsp_1 + 0xa0, rsp_2 + 0xa0)
                *(rsp_6 + 0x28) = rax_5
                *(rsp_6 + 0x20) = i_60
                sub_1404047d0(var_1f0, rsp_2 + 0xa0, rsp_3 + 0xa0, zx.q(rcx_22))
                uint64_t r8_25 = zx.q(*(r13 + 0x2c))
                *(rsp_6 + 0x28) = i_60
                *(rsp_6 + 0x20) = rsp_4 + 0xa0
                int32_t zmm6_4 = sub_140408610(var_1f0, zx.q(rcx_22), r8_25, rsp_3 + 0xa0)
                int32_t i_12 = 0
                uint128_t zmm0_7
                float zmm1_6[0x4]
                
                if (rbx_6 s> 0 && rbx_6 u>= 8)
                    zmm0_7 = _mm_shuffle_epi32(zx.o(r14_4), 0)
                    int32_t rax_156 = rbx_6 & 0x80000007
                    
                    if (rax_156 s< 0)
                        rax_156 = ((rax_156 - 1) | 0xfffffff8) + 1
                    
                    zmm1_6 = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm0_7), data_142d3f640)
                    
                    do
                        int64_t i_27 = sx.q(i_12)
                        *(r15_1 + (i_27 << 2)) = _mm_add_ps(*(r15_1 + (i_27 << 2)), zmm1_6)
                        int32_t rax_159 = i_12 + 4
                        i_12 += 8
                        int64_t rcx_81 = sx.q(rax_159)
                        *(r15_1 + (rcx_81 << 2)) = _mm_add_ps(*(r15_1 + (rcx_81 << 2)), zmm1_6)
                    while (i_12 s< rbx_6 - rax_156)
                
                int64_t i_32 = sx.q(i_12)
                
                if (i_32 s< rax_88)
                    if (rax_88 - i_32 s>= 4)
                        void* rax_163 = r15_1 + ((i_32 + 2) << 2)
                        int64_t i_40 = ((rax_88 - i_32 - 4) u>> 2) + 1
                        float zmm2_4[0x4] = _mm_cvtepi32_ps(zx.o(r14_4))
                        zmm2_4[0] = zmm2_4[0] f* zmm6_4
                        i_32 += i_40 << 2
                        int64_t i_13
                        
                        do
                            rax_163 += 0x10
                            zmm0_7.d = zmm2_4.d f+ *(rax_163 - 0x18)
                            zmm2_4[0] = zmm2_4[0] f+ *(rax_163 - 0x14)
                            *(rax_163 - 0x18) = zmm0_7.d
                            *(rax_163 - 0x14) = zmm2_4[0]
                            zmm0_7.d = zmm2_4.d f+ *(rax_163 - 0x10)
                            zmm2_4[0] = zmm2_4[0] f+ *(rax_163 - 0xc)
                            *(rax_163 - 0x10) = zmm0_7.d
                            *(rax_163 - 0xc) = zmm2_4[0]
                            i_13 = i_40
                            i_40 -= 1
                        while (i_13 != 1)
                    
                    if (i_32 s< rax_88)
                        zmm1_6 = _mm_cvtepi32_ps(zx.o(r14_4))
                        zmm1_6[0] = zmm1_6[0] f* zmm6_4
                        
                        do
                            i_32 += 1
                            zmm0_7.d = zmm1_6.d f+ *(r15_1 + (i_32 << 2) - 4)
                            *(r15_1 + (i_32 << 2) - 4) = zmm0_7.d
                        while (i_32 s< rax_88)
                
                zmm12_1 = zmm8_1
            
            rdx_57 = var_1fc_1
        
        uint64_t rflags_6
        int32_t temp0_39
        temp0_39, rflags_6 = __bsr_gprv_memv(*(arg6 + 0x20))
        
        if (*(arg6 + 0x18) - temp0_39 + 2 s<= var_1f4_1)
            sub_1403fe0d0(arg6, rdx_57, 3)
    
    int32_t i_59 = i_51
    int64_t rcx_87 = sx.q(rcx_3 * i_59) << 2
    int64_t rax_167 = rcx_87 + 0xf
    
    if (rax_167 u<= rcx_87)
        rax_167 = 0xffffffffffffff0
    
    int64_t rax_168 = rax_167 & 0xfffffffffffffff0
    __chkstk(rax_168)
    void* rsp_7 = rsp_6 - rax_168
    *(rsp_7 + 0x30) = rax_5
    void* r12_9 = rsp_7 + 0xa0
    *(rsp_7 + 0x28) = i_59
    void* var_190_3 = r12_9
    *(rsp_7 + 0x20) = rcx_22
    sub_140405e10(var_1f0, rsp_2 + 0xa0, r12_9, rsp_3 + 0xa0)
    int64_t rbx_9 = rsi_12 << 2
    int64_t rax_171 = rbx_9 + 0xf
    
    if (rax_171 u<= rbx_9)
        rax_171 = 0xffffffffffffff0
    
    int64_t rax_172 = rax_171 & 0xfffffffffffffff0
    __chkstk(rax_172)
    void* rsp_8 = rsp_7 - rax_172
    var_150.q = rsp_8 + 0xa0
    int32_t rsi_15
    uint64_t r8_29
    int64_t r9_26
    
    if (result_7 s< i_59 * 0xf || r13[5].d != 0 || r13[4].d s< 2 || *(r13 + 0x4c) != 0)
        r8_29 = zx.q(*(r13 + 0x2c))
        int64_t rcx_122
        int64_t rdi_29
        
        if (r8_29.d s> 0)
            rdi_29, rcx_122 = __memfill_u32(rsp_8 + 0xa0, var_1fc_1, zx.q(r8_29.d))
        r9_26 = zx.q(rcx_22)
        rsi_15 = 0
    else
        int32_t rax_175
        
        if (result_7 s< 0x28)
            rax_175 = 0xc
        else if (result_7 s>= 0x3c)
            int32_t rax_176
            rax_176.b = result_7 s< 0x64
            rax_175 = rax_176 + 3
        else
            rax_175 = 6
        
        *(rsp_8 + 0x50) = var_1d4
        *(rsp_8 + 0x48) = zmm12_1
        *(rsp_8 + 0x40) = &var_1a0
        *(rsp_8 + 0x38) = var_204_1
        *(rsp_8 + 0x30) = rcx_3
        *(rsp_8 + 0x28) = r12_9
        *(rsp_8 + 0x20) = rax_175 * 2
        int32_t rax_178 = sub_1403fd0d0(var_1f0, zx.q(rcx_22), zx.q(var_1fc_1), rsp_8 + 0xa0)
        r9_26 = sx.q(rcx_22)
        r8_29 = zx.q(*(r13 + 0x2c))
        rsi_15 = rax_178
        
        if (r9_26.d s< r8_29.d)
            void* rdx_68 = rsp_8 + 0xa0 + (r9_26 << 2)
            void* rdi_22 = rdx_68 - 4
            uint64_t i_33 = zx.q(r8_29.d - r9_26.d)
            uint64_t i_14
            
            do
                rdx_68 += 4
                *(rdx_68 - 4) = *rdi_22
                i_14 = i_33
                i_33 -= 1
            while (i_14 != 1)
    
    int64_t rcx_95 = rax_88 << 2
    int64_t rax_181 = rcx_95 + 0xf
    
    if (rax_181 u<= rcx_95)
        rax_181 = 0xffffffffffffff0
    
    int64_t rax_182 = rax_181 & 0xfffffffffffffff0
    __chkstk(rax_182)
    void* rsp_9 = rsp_8 - rax_182
    bool cond:13_1 = r13[4].d s>= 4
    *(rsp_9 + 0x80) = *(r13 + 0x4c)
    *(rsp_9 + 0x78) = r13[8].d
    int32_t rax_185 = *(r13 + 0x14)
    int32_t rdx_69
    rdx_69.b = cond:13_1
    *(rsp_9 + 0x70) = rdx_69
    uint64_t rdx_70 = zx.q(r13[5].d)
    *(rsp_9 + 0x68) = r13 + 0x5c
    *(rsp_9 + 0x60) = rax_185
    *(rsp_9 + 0x58) = var_1c8_1
    *(rsp_9 + 0x50) = var_204_1
    *(rsp_9 + 0x48) = i_51
    *(rsp_9 + 0x40) = arg6
    *(rsp_9 + 0x38) = rsp_9 + 0xa0
    *(rsp_9 + 0x30) = var_1f4_1
    *(rsp_9 + 0x28) = rax_15
    *(rsp_9 + 0x20) = rsp_4 + 0xa0
    int32_t zmm9_1
    int32_t zmm10_1
    float zmm11_2
    int32_t zmm12_2
    zmm9_1, zmm10_1, zmm11_2, zmm12_2, zmm13 = sub_1404088d0(var_1f0, rdx_70, r8_29, r9_26)
    uint64_t rdx_71 = zx.q(*(r13 + 0x2c))
    uint64_t rcx_98 = zx.q(r13[5].d)
    *(rsp_9 + 0x30) = arg6
    *(rsp_9 + 0x28) = rsi_15
    *(rsp_9 + 0x20) = var_204_1
    sub_1403fd800(rcx_98, rdx_71, zx.q(var_1fc_1), rsp_8 + 0xa0)
    uint32_t r14_9 = 5
    uint64_t rflags_7
    int32_t temp0_40
    temp0_40, rflags_7 = __bsr_gprv_memv(*(arg6 + 0x20))
    int32_t rcx_99 = *(arg6 + 0x18)
    var_1f8 = 5
    
    if (rcx_99 - temp0_40 + 3 s<= var_1f4_1)
        int32_t rax_195
        
        if (*(r13 + 0x4c) == 0)
            uint32_t rax_235
            uint64_t i_56
            
            if (var_1e8 == 0 && r13[4].d s>= 3)
                i_56 = zx.q(i_51)
                rax_235 = (i_56 * 5).d
            
            if (var_1e8 == 0 && r13[4].d s>= 3 && var_1c8_1 s>= rax_235 * 2 && r13[5].d == 0)
                *(rsp_9 + 0x48) = rax_5
                uint64_t r9_35 = zx.q(r13[0xb].d)
                *(rsp_9 + 0x40) = i_56.d
                *(rsp_9 + 0x38) = rcx_22
                int32_t rcx_123
                rcx_123.b = rax_73 != 0
                *(rsp_9 + 0x30) = rcx_123
                *(rsp_9 + 0x28) = r13 + 0x6c
                *(rsp_9 + 0x20) = &r13[0xd]
                rax_195 = sub_140407ca0(var_1f0, r12_9, &r13[0xc], r9_35)
            else if (r13[4].d != 0)
                rax_195 = 2
            else
                rax_195 = 0
        else
            *(r13 + 0x6c) = 0
            rax_195 = 2
        
        r13[0xb].d = rax_195
        sub_1403fe400(arg6, rax_195, &data_1436fde14, 5)
    
    int64_t rax_196 = rbx_9 + 0xf
    
    if (rax_196 u<= rbx_9)
        rax_196 = 0xffffffffffffff0
    
    int64_t rax_197 = rax_196 & 0xfffffffffffffff0
    __chkstk(rax_197)
    uint64_t r9_28 = zx.q(r13[5].d)
    void* rsp_10 = rsp_9 - rax_197
    *(rsp_10 + 0x88) = rsp_6 + 0xa0
    *(rsp_10 + 0x80) = *(r13 + 0x4c)
    *(rsp_10 + 0x78) = &var_1a0
    *(rsp_10 + 0x70) = result_7
    *(rsp_10 + 0x68) = var_204_1
    *(rsp_10 + 0x60) = rax_2
    *(rsp_10 + 0x58) = *(r13 + 0x3c)
    *(rsp_10 + 0x50) = *(r13 + 0x34)
    *(rsp_10 + 0x48) = var_1fc_1
    *(rsp_10 + 0x40) = *(var_1f0 + 0x40)
    *(rsp_10 + 0x38) = *(r13 + 0x44)
    int32_t i_53 = i_51
    *(rsp_10 + 0x30) = rsp_10 + 0xa0
    *(rsp_10 + 0x28) = i_53
    *(rsp_10 + 0x20) = *(r13 + 0x2c)
    int512_t zmm0_8
    int32_t zmm7_1
    zmm0_8, zmm7_1 = sub_1403faeb0(rsp_4 + 0xa0, r15_1, zx.q(rsi), r9_28)
    int32_t zmm6_5 = zmm0_8.d
    int32_t var_1e4_2 = 8
    
    if (*(r13 + 0x4c) != 0)
        int32_t rdx_75 = result_7 s/ 3
        
        if (rdx_75 s> 8)
            rdx_75 = 8
        
        *(rsp_10 + 0xa0) = rdx_75
    
    int64_t rax_211 = rbx_9 + 0xf
    
    if (rax_211 u<= rbx_9)
        rax_211 = 0xffffffffffffff0
    
    int64_t rax_212 = rax_211 & 0xfffffffffffffff0
    __chkstk(rax_212)
    void* rsp_11 = rsp_10 - rax_212
    sub_14037e6c0(var_1f0, rsp_11 + 0xa0, var_204_1, i_51)
    uint32_t var_1f4_2 = var_1f4_1 << 3
    int32_t rdi_25 = 0
    int32_t var_1d8_1 = 0
    int32_t rax_213 = sub_140403430(arg6)
    int64_t r11_9 = sx.q(r13[5].d)
    int32_t r9_30 = rax_213
    var_1d0 = rax_213
    int32_t var_1d4_1 = r11_9.d
    
    if (r11_9.d s< *(r13 + 0x2c))
        void* r12_10 = rsp_10 + 0xa0 + (r11_9 << 2)
        void* r10_7 = rsp_11 + 0xa0 - (rsp_10 + 0xa0)
        void* rax_214 = rax_2 + (r11_9 << 1)
        void* var_160_3 = r10_7
        
        do
            uint64_t rdx_80 = zx.q(((sx.d(*(rax_214 + 2)) - sx.d(*rax_214)) * i_51) << var_204_1.b)
            uint64_t rcx_109 = zx.q(var_1c4)
            uint32_t rax_216 = (rdx_80 << 3).d
            uint32_t r15_5 = rdx_80.d
            
            if (rdx_80.d s< 0x30)
                r15_5 = 0x30
            
            char r8_33 = rcx_109.b
            
            if (rax_216 s< r15_5)
                r15_5 = rax_216
            
            int32_t rsi_19 = var_1f4_2 - rdi_25
            int32_t i_15 = 0
            int32_t r14_10 = 0
            
            if (r9_30 + (rcx_109 << 3).d s< rsi_19)
                while (i_15 s< *(r10_7 + r12_10))
                    int32_t rdi_26
                    rdi_26.b = r14_10 s< *r12_10
                    sub_1403fe0d0(arg6, rdi_26, r8_33)
                    int32_t rax_220 = sub_140403430(arg6)
                    r10_7 = var_160_3
                    rdi_25 = var_1d8_1
                    r9_30 = rax_220
                    
                    if (rdi_26 == 0)
                        break
                    
                    rdi_25 += r15_5
                    rsi_19 += neg.d(r15_5)
                    r8_33 = 1
                    i_15 += r15_5
                    r14_10 += 1
                    var_1d8_1 = rdi_25
                    
                    if (rax_220 + 8 s>= rsi_19)
                        break
                
                r13 = arg1
                r11_9 = zx.q(var_1d4_1)
                var_1d0 = r9_30
                
                if (r14_10 != 0)
                    int32_t rcx_112 = var_1c4 - 1
                    
                    if (var_1c4 - 1 s< 2)
                        rcx_112 = 2
                    
                    var_1c4 = rcx_112
            
            rax_214 += 2
            r11_9 = zx.q(r11_9.d + 1)
            *r12_10 = i_15
            r12_10 += 4
            var_1d4_1 = r11_9.d
        while (r11_9.d s< *(r13 + 0x2c))
        
        r12_9 = var_190_3
        r14_9 = 5
    
    uint64_t i_57 = zx.q(i_51)
    
    if (i_57.d == 2)
        if (var_204_1 != 0)
            int32_t rax_224
            rax_224, zmm0_8, zmm6_5, zmm7_1 = sub_1403fce10(var_1f0, r12_9, var_204_1, rcx_3)
            var_178 = rax_224
        
        *(rsp_11 + 0x20) = *(r13 + 0xc4)
        zmm0_8.o = zx.o(var_1a8 s/ 0x3e8)
        zmm0_8.o = _mm_cvtepi32_ps(zmm0_8.o)
        int32_t rax_228
        rax_228, zmm0_8 = sub_140405820(zmm0_8, &data_1436fddc0, &data_1436fde20, 0x15)
        int32_t r8_36 = r13[5].d
        int32_t rdx_87 = *(r13 + 0x2c)
        int32_t rcx_114 = rax_228
        *(r13 + 0xc4) = rax_228
        
        if (r8_36 s> rax_228)
            rcx_114 = r8_36
        
        if (rdx_87 s>= rcx_114)
            rdx_87 = rax_228
            
            if (r8_36 s> rax_228)
                rdx_87 = r8_36
        
        *(r13 + 0xc4) = rdx_87
    
    int32_t rdi_27 = var_1d0
    void* r14_11
    
    if (rdi_27 + 0x30 s> var_1f4_2 - rdi_25)
        r14_11 = arg6
    else
        if (*(r13 + 0x4c) == 0)
            int32_t rax_230 = *(r13 + 0xc4)
            uint64_t r9_33 = zx.q(*(r13 + 0x2c))
            *(rsp_11 + 0x58) = zmm9_1
            *(rsp_11 + 0x50) = rax_230
            *(rsp_11 + 0x48) = zmm12_2
            *(rsp_11 + 0x40) = &r13[0x18]
            *(rsp_11 + 0x38) = &r13[0x10]
            *(rsp_11 + 0x30) = rcx_3
            *(rsp_11 + 0x28) = i_57.d
            *(rsp_11 + 0x20) = var_204_1
            uint32_t rax_232
            rax_232, zmm0_8, zmm7_1, zmm10_1, zmm11_2, zmm12_2, zmm13 =
                sub_1403f7720(var_1f0, r12_9, rsp_4 + 0xa0, r9_33)
            r14_9 = rax_232
        
        var_1f8 = r14_9
        r14_11 = arg6
        sub_1403fe400(r14_11, r14_9, "~|wmW)", 7)
        rdi_27 = sub_140403430(r14_11)
    
    if (var_1c0_1 s> 0)
        int32_t result_6 = result_1
        int32_t result_8 = 0x4fb s>> (3 - var_204_1.b)
        char r14_13 = (var_1f0[0xa]).b - var_204_1.b
        
        if (result_6 s>= result_8)
            result_6 = result_8
        
        int32_t rsi_20 = *(r13 + 0x3c)
        uint64_t r8_41 = zx.q(var_1c0_1 - ((i_57 * 5).d << 6) - 0xa0)
        
        if (rsi_20 != 0)
            r8_41 = zx.q(r8_41.d + (*(r13 + 0xb4) s>> r14_13))
        
        zmm0_8.o = r13[0x18].d
        *(rsp_11 + 0x90) = zmm7_1
        *(rsp_11 + 0x88) = zmm10_1
        int32_t rax_242
        rax_242.b = r13[0x19] != 0
        *(rsp_11 + 0x80) = rax_242
        *(rsp_11 + 0x78) = *(r13 + 0x4c)
        *(rsp_11 + 0x70) = r13[9].d
        *(rsp_11 + 0x68) = zmm6_5
        *(rsp_11 + 0x60) = var_12c
        int32_t rax_246 = var_1a0
        *(rsp_11 + 0x58) = zmm12_2
        *(rsp_11 + 0x50) = rax_246
        int32_t rax_247 = *(r13 + 0xc4)
        *(rsp_11 + 0x48) = zmm0_8.d
        *(rsp_11 + 0x40) = rsi_20
        *(rsp_11 + 0x38) = rax_247
        *(rsp_11 + 0x30) = i_51
        *(rsp_11 + 0x28) = *(r13 + 0x64)
        *(rsp_11 + 0x20) = var_1a8
        int32_t r8_42 = rdi_27 + sub_1403fab70(var_1f0, &r13[0x10], r8_41, zx.q(var_204_1))
        int32_t rcx_130 = (r8_42 + 0x20) s>> 6
        
        if (((var_1d8_1 + 0x3f + rdi_27) s>> 6) - rcx_7 + 2 s> rcx_130)
            rcx_130 = ((var_1d8_1 + 0x3f + rdi_27) s>> 6) - rcx_7 + 2
        
        int32_t result_11 = rcx_130 + rcx_7
        
        if (result_6 s< result_11)
            result_11 = result_6
        
        int32_t r8_43 = r8_42 - var_1c0_1
        int32_t rdi_30 = result_11 - rcx_7
        int32_t rcx_132 = rdi_30 << 6
        
        if (var_19c_1 != 0)
            rdi_30 = 2
            r8_43 = 0
            rcx_132 = 0x80
        
        int32_t rax_252 = r13[0x17].d
        
        if (rax_252 s>= 0x3ca)
            zmm11_2 = 0.00100000005f
        else
            r13[0x17].d = rax_252 + 1
            zmm11_2 = zmm11_2 f/ _mm_cvtepi32_ps(zx.o(rax_252 + 0x15)).d
        
        if (rsi_20 != 0)
            *(r13 + 0xac) += rcx_132 - var_1c0_1
            
            if (rsi_20 != 0)
                int32_t rdx_102 = r13[0x16].d
                uint128_t zmm0_9
                zmm0_9.d = _mm_cvtepi32_ps(zx.o((1 << r14_13) * r8_43 - *(r13 + 0xb4) - rdx_102)).d
                    f* zmm11_2
                int32_t rcx_136 = int.d(zmm0_9.d) + rdx_102
                r13[0x16].d = rcx_136
                *(r13 + 0xb4) = neg.d(rcx_136)
                
                if (rsi_20 != 0)
                    int32_t rax_259 = *(r13 + 0xac)
                    
                    if (rax_259 s< 0)
                        int32_t temp42_1
                        int32_t temp43_1
                        temp42_1:temp43_1 = sx.q(rax_259)
                        *(r13 + 0xac) = 0
                        int32_t rax_263 = neg.d((temp43_1 + (temp42_1 & 0x3f)) s>> 6)
                        
                        if (var_19c_1 != 0)
                            rax_263 = 0
                        
                        rdi_30 += rax_263
        
        r14_11 = arg6
        int32_t result_9 = rdi_30 + rcx_7
        
        if (result_6 s>= result_9)
            result_6 = result_9
        
        result_1 = result_6
        sub_1403fe600(r14_11, result_6)
    
    int64_t rax_264 = rbx_9 + 0xf
    
    if (rax_264 u<= rbx_9)
        rax_264 = 0xffffffffffffff0
    
    int64_t rax_265 = rax_264 & 0xfffffffffffffff0
    __chkstk(rax_265)
    void* rsp_12 = rsp_11 - rax_265
    int64_t rax_266 = rbx_9 + 0xf
    
    if (rax_266 u<= rbx_9)
        rax_266 = 0xffffffffffffff0
    
    int64_t rax_267 = rax_266 & 0xfffffffffffffff0
    __chkstk(rax_267)
    void* rsp_13 = rsp_12 - rax_267
    int64_t rax_268 = rbx_9 + 0xf
    
    if (rax_268 u<= rbx_9)
        rax_268 = 0xffffffffffffff0
    
    int64_t rax_269 = rax_268 & 0xfffffffffffffff0
    __chkstk(rax_269)
    void* rsp_14 = rsp_13 - rax_269
    int32_t rsi_22 = result_1 << 6
    uint64_t r9_38 = zx.q(var_204_1)
    int32_t rdx_108 = rsi_22 - sub_140403430(r14_11) - 1
    int32_t rax_272
    
    if (var_1fc_1 == 0 || r9_38.d s< 2 || rdx_108 s< ((r9_38 << 3) + 0x10).d)
        rax_272 = 0
        var_1e4_2 = 0
    else
        rax_272 = 8
    
    uint64_t r8_44 = zx.q(*(r13 + 0x2c))
    int32_t rcx_140 = (r8_44 - 1).d
    
    if (r13[0x10].d != 0)
        int32_t i_55 = i_51
        
        if (var_1a8 s< i_55 * 0x7d00)
            rcx_140 = 0xd
        else if (var_1a8 s< i_55 * 0xbb80)
            rcx_140 = 0x10
        else if (var_1a8 s>= i_55 * 0xea60)
            int32_t rcx_141
            rcx_141.b = var_1a8 s>= i_55 * 0x13880
            rcx_140 = rcx_141 + 0x13
        else
            rcx_140 = 0x12
        
        int32_t rax_281 = r13[0x13].d
        
        if (rax_281 s> rcx_140)
            rcx_140 = rax_281
    
    int32_t rax_282 = *(r13 + 0x64)
    
    if (*(r13 + 0x4c) != 0)
        rcx_140 = 1
    
    *(rsp_14 + 0x90) = rcx_140
    *(rsp_14 + 0x88) = rax_282
    *(rsp_14 + 0x80) = 1
    *(rsp_14 + 0x78) = arg6
    int32_t i_54 = i_51
    *(rsp_14 + 0x70) = r9_38.d
    *(rsp_14 + 0x68) = i_54
    *(rsp_14 + 0x60) = rsp_14 + 0xa0
    *(rsp_14 + 0x58) = rsp_12 + 0xa0
    *(rsp_14 + 0x50) = rsp_13 + 0xa0
    int32_t var_f8
    *(rsp_14 + 0x48) = &var_f8
    *(rsp_14 + 0x40) = rdx_108 - rax_272
    uint64_t rdx_110 = zx.q(r13[5].d)
    *(rsp_14 + 0x38) = &var_178
    uint32_t rax_284 = var_1f8
    *(rsp_14 + 0x30) = r13 + 0xc4
    *(rsp_14 + 0x28) = rax_284
    *(rsp_14 + 0x20) = rsp_11 + 0xa0
    int32_t rax_286 = sub_140403490(var_1f0, rdx_110, r8_44, rsp_10 + 0xa0)
    int32_t rax_287 = *(r13 + 0x64)
    
    if (rax_287 == 0)
        *(r13 + 0x64) = rax_286
    else
        int32_t rcx_143 = rax_286
        
        if (rax_287 - 1 s> rax_286)
            rcx_143 = rax_287 - 1
        
        int32_t rax_288 = rax_287 + 1
        
        if (rax_288 s>= rcx_143)
            rax_288 = rax_286
            
            if (rax_287 - 1 s> rax_286)
                rax_288 = rax_287 - 1
        
        *(r13 + 0x64) = rax_288
    
    uint64_t r8_45 = zx.q(*(r13 + 0x2c))
    uint64_t rdx_112 = zx.q(r13[5].d)
    *(rsp_14 + 0x38) = i_51
    *(rsp_14 + 0x30) = arg6
    *(rsp_14 + 0x28) = rsp_12 + 0xa0
    *(rsp_14 + 0x20) = rsp_9 + 0xa0
    sub_1404094b0(var_1f0, rdx_112, r8_45, rax_15)
    int64_t rax_292 = rax_88 + 0xf
    
    if (rax_292 u<= rax_88)
        rax_292 = 0xffffffffffffff0
    
    int64_t rax_293 = rax_292 & 0xfffffffffffffff0
    __chkstk(rax_293)
    void* rsp_15 = rsp_14 - rax_293
    void* rcx_146
    
    if (i_51 != 2)
        rcx_146 = nullptr
    else
        rcx_146 = var_190_3 + (sx.q(rcx_3) << 2)
    
    uint64_t r9_41 = zx.q(*(r13 + 0x2c))
    *(rsp_15 + 0x98) = r13 + 0x54
    *(rsp_15 + 0x90) = rax_286
    *(rsp_15 + 0x88) = var_204_1
    int32_t rax_297 = var_f8
    *(rsp_15 + 0x80) = arg6
    *(rsp_15 + 0x78) = rax_297
    int64_t rax_298 = var_150.q
    *(rsp_15 + 0x70) = rsi_22 - var_1e4_2
    *(rsp_15 + 0x68) = rax_298
    *(rsp_15 + 0x60) = *(r13 + 0xc4)
    *(rsp_15 + 0x58) = var_178
    *(rsp_15 + 0x50) = r13[0xb].d
    *(rsp_15 + 0x48) = var_1e8
    *(rsp_15 + 0x40) = rsp_13 + 0xa0
    *(rsp_15 + 0x38) = rsp_3 + 0xa0
    *(rsp_15 + 0x30) = rsp_15 + 0xa0
    *(rsp_15 + 0x28) = rcx_146
    *(rsp_15 + 0x20) = var_190_3
    sub_140405fc0(1, var_1f0, zx.q(r13[5].d), r9_41)
    
    if (var_1e4_2 s> 0)
        int32_t rdx_115
        rdx_115.b = *(r13 + 0x7c) s< 2
        sub_1403fe100(arg6, rdx_115, 1)
    
    uint64_t rflags_8
    int32_t temp0_44
    temp0_44, rflags_8 = __bsr_gprv_memv(*(arg6 + 0x20))
    int32_t i_58 = i_51
    uint64_t r8_48 = zx.q(*(r13 + 0x2c))
    *(rsp_15 + 0x48) = i_58
    *(rsp_15 + 0x40) = arg6
    *(rsp_15 + 0x38) = temp0_44 + 1 + (result_1 << 3) - *(arg6 + 0x18)
    uint64_t rdx_119 = zx.q(r13[5].d)
    *(rsp_15 + 0x30) = rsp_14 + 0xa0
    *(rsp_15 + 0x28) = rsp_12 + 0xa0
    *(rsp_15 + 0x20) = rsp_9 + 0xa0
    sub_1404092e0(var_1f0, rdx_119, r8_48, rax_15)
    int64_t rcx_151
    int64_t rdi_35
    
    if (var_19c_1 != 0 && rax_88 s> 0)
        rdi_35, rcx_151 = __memfill_u32(rax_15, 0xc1e00000, rax_88)
    int64_t r15_8 = sx.q(r12)
    *(r13 + 0x74) = zmm13.d
    r13[0xe].d = var_148_1
    r13[0xf].d = rdx_20
    
    if (r15_8.d == 2 && i_58 == 1)
        int64_t rdi_36 = 0
        
        if (var_180_1 s>= 4)
            void* rcx_152 = rax_15 + 4
            int64_t i_41 = ((var_180_1 - 4) u>> 2) + 1
            rdi_36 = i_41 << 2
            int64_t i_16
            
            do
                int32_t rax_311 = *(rcx_152 - 4)
                rcx_152 += 0x10
                *(rbx_9 + rcx_152 - 0x14) = rax_311
                *(rbx_9 + rcx_152 - 0x10) = *(rcx_152 - 0x10)
                *(rbx_9 + rcx_152 - 0xc) = *(rcx_152 - 0xc)
                *(rcx_152 + (var_180_1 << 2) - 8) = *(rcx_152 - 8)
                i_16 = i_41
                i_41 -= 1
            while (i_16 != 1)
        
        if (rdi_36 s< var_180_1)
            int32_t* rcx_153 = rax_15 + (rdi_36 << 2)
            int64_t i_42 = var_180_1 - rdi_36
            int64_t i_17
            
            do
                int32_t rax_315 = *rcx_153
                rcx_153 = &rcx_153[1]
                rcx_153[rsi_12 - 1] = rax_315
                i_17 = i_42
                i_42 -= 1
            while (i_17 != 1)
    
    int64_t r8_49 = 0
    void* rdi_44
    
    if (var_1fc_1 != 0)
        uint32_t rdi_43 = 0
        int32_t zmm0_10
        int32_t zmm1_7
        
        if (rcx_6 s>= 4)
            int32_t* rcx_158 = rdi_2 + 4
            void* rdx_131 = rax_15 - rdi_2
            uint64_t i_28 = zx.q(((rcx_6 - 4) u>> 2) + 1)
            rdi_43 = (i_28 << 2).d
            r8_49 = i_28 << 2
            uint64_t i_18
            
            do
                zmm0_10 = rcx_158[-1]
                zmm1_7 = *(rcx_158 + rdx_131 - 4)
                
                if (not(zmm1_7 f> zmm0_10))
                    zmm0_10 = zmm1_7
                
                zmm1_7 = *rcx_158
                rcx_158[-1] = zmm0_10
                int32_t zmm2_5 = *(rcx_158 + rdx_131)
                
                if (not(zmm2_5 f> zmm1_7))
                    zmm1_7 = zmm2_5
                
                zmm0_10 = rcx_158[1]
                *rcx_158 = zmm1_7
                zmm1_7 = *(rcx_158 + rdx_131 + 4)
                
                if (not(zmm1_7 f> zmm0_10))
                    zmm0_10 = zmm1_7
                
                rcx_158[1] = zmm0_10
                zmm0_10 = rcx_158[2]
                zmm1_7 = *(rcx_158 + rdx_131 + 8)
                
                if (not(zmm1_7 f> zmm0_10))
                    zmm0_10 = zmm1_7
                
                rcx_158[2] = zmm0_10
                rcx_158 = &rcx_158[4]
                i_18 = i_28
                i_28 -= 1
            while (i_18 != 1)
        
        if (rdi_43 s< rcx_6)
            int32_t* rax_329 = rdi_2 + (r8_49 << 2)
            uint64_t i_34 = zx.q(rcx_6 - rdi_43)
            uint64_t i_19
            
            do
                zmm0_10 = *rax_329
                zmm1_7 = *(rax_329 + rax_15 - rdi_2)
                
                if (not(zmm1_7 f> zmm0_10))
                    zmm0_10 = zmm1_7
                
                *rax_329 = zmm0_10
                rax_329 = &rax_329[1]
                i_19 = i_34
                i_34 -= 1
            while (i_19 != 1)
        
        rdi_44 = rdi_2
    else
        int64_t rax_316 = sx.q(rcx_6)
        
        if (rax_316 s>= 4)
            void* rcx_154 = &rax_16[1]
            void* rdx_124 = rdi_2 - rax_16
            int64_t i_46 = ((rax_316 - 4) u>> 2) + 1
            r8_49 = i_46 << 2
            int64_t i_20
            
            do
                int32_t rax_317 = *(rdx_124 + rcx_154 - 4)
                rcx_154 += 0x10
                *(rcx_154 - 0x14) = rax_317
                *(rcx_154 - 0x10) = *(rdx_124 + rcx_154 - 0x10)
                *(rcx_154 - 0xc) = *(rdx_124 + rcx_154 - 0xc)
                *(rcx_154 - 8) = *(rdx_124 + rcx_154 - 8)
                i_20 = i_46
                i_46 -= 1
            while (i_20 != 1)
        
        if (r8_49 s< rax_316)
            void* rcx_155 = &rax_16[r8_49]
            int64_t i_43 = rax_316 - r8_49
            int64_t i_21
            
            do
                int32_t rax_321 = *(rcx_155 + rdi_2 - rax_16)
                rcx_155 += 4
                *(rcx_155 - 4) = rax_321
                i_21 = i_43
                i_43 -= 1
            while (i_21 != 1)
        
        int64_t r8_50 = 0
        
        if (rax_316 s>= 4)
            void* rcx_156 = rdi_2 + 4
            void* rdx_127 = rax_15 - rdi_2
            int64_t i_47 = ((rax_316 - 4) u>> 2) + 1
            r8_50 = i_47 << 2
            int64_t i_22
            
            do
                int32_t rax_322 = *(rcx_156 + rdx_127 - 4)
                rcx_156 += 0x10
                *(rcx_156 - 0x14) = rax_322
                *(rcx_156 - 0x10) = *(rcx_156 + rdx_127 - 0x10)
                *(rcx_156 - 0xc) = *(rcx_156 + rdx_127 - 0xc)
                *(rcx_156 - 8) = *(rcx_156 + rdx_127 - 8)
                i_22 = i_47
                i_47 -= 1
            while (i_22 != 1)
        
        rdi_44 = rdi_2
        
        if (r8_50 s< rax_316)
            void* rcx_157 = rdi_44 + (r8_50 << 2)
            int64_t i_48 = rax_316 - r8_50
            int64_t i_23
            
            do
                int32_t rax_326 = *(rcx_157 + rax_15 - rdi_44)
                rcx_157 += 4
                *(rcx_157 - 4) = rax_326
                i_23 = i_48
                i_48 -= 1
            while (i_23 != 1)
    
    int32_t* r10_14 = rax_16
    int64_t r9_45 = 0
    int64_t r11_11 = 0
    
    do
        int32_t i_24 = 0
        
        if (r13[5].d s> 0)
            int32_t* rax_330 = r10_14
            
            do
                *(rax_15 - rax_16 + rax_330) = 0
                *rax_330 = 0xc1e00000
                *(rax_330 + rdi_44 - rax_16) = 0xc1e00000
                i_24 += 1
                rax_330 = &rax_330[1]
            while (i_24 s< r13[5].d)
        
        int64_t r8_51 = sx.q(*(r13 + 0x2c))
        
        if (r8_51 s< var_180_1)
            int32_t* rcx_159 = &rax_16[r11_11 + r8_51]
            int64_t i_29 = var_180_1 - r8_51
            int64_t i_25
            
            do
                *(rcx_159 + rax_15 - rax_16) = 0
                *rcx_159 = 0xc1e00000
                *(rcx_159 + rdi_2 - rax_16) = 0xc1e00000
                rcx_159 = &rcx_159[1]
                i_25 = i_29
                i_29 -= 1
            while (i_25 != 1)
        
        rdi_44 = rdi_2
        r9_45 += 1
        r11_11 += var_180_1
        r10_14 = &r10_14[rsi_12]
    while (r9_45 s< r15_8)
    
    if (var_1fc_1 != 0 || var_128 != 0)
        *(r13 + 0x7c) += 1
    else
        *(r13 + 0x7c) = 0
    
    *(r13 + 0x54) = *(arg6 + 0x20)
    sub_1403fe190(arg6)
    result = zx.q(result_1)
    
    if (*(arg6 + 0x30) != 0)
        result = 0xfffffffd

__security_check_cookie(rax_1 ^ &i_51)
return result

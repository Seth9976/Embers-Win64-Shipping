// 函数: sub_141e7b450
// 地址: 0x141e7b450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t result

if (sub_140a80ea0() != 0)
    int32_t rdi_1 = arg1[0x7b].d
    int32_t rdi_2 = rdi_1 - 1
    
    if (rdi_1 - 1 s>= 0)
        int64_t rsi_1 = sx.q(rdi_2) << 3
        int64_t r14_1 = rsi_1
        int32_t temp4_1
        
        do
            if (sub_14235b8d0(*(rsi_1 + arg1[0x7a]), 1) != 0)
                int32_t rdx_3 = arg1[0x7b].d
                int32_t rax_13 = rdx_3 - rdi_2 - 1
                
                if (rax_13 s>= 1)
                    rax_13 = 1
                
                if (rax_13 != 0)
                    int64_t rcx_10 = arg1[0x7a]
                    memcpy(rcx_10 + r14_1, rcx_10 + (sx.q(rdx_3 - rax_13) << 3), rax_13 << 3)
                    rdx_3 = arg1[0x7b].d
                
                arg1[0x7b].d = rdx_3 - 1
            
            r14_1 -= 8
            rsi_1 -= 8
            temp4_1 = rdi_2
            rdi_2 -= 1
        while (temp4_1 - 1 s>= 0)
    
    if (arg2 == 0)
        (*(*arg1 + 0x28))(arg1)
    
    int32_t rax_17 = arg1[0x70].d
    char var_1d7_1 = 0
    int64_t rsi_2 = sx.q(rax_17 - 1)
    
    if (rax_17 - 1 s>= 0)
        int64_t temp9_1
        
        do
            void* rdi_3 = *(arg1[0x6f] + (rsi_2 << 3))
            
            if (arg2 == 0)
                sub_141e744f0(arg1, rdi_3)
            else if ((*(rdi_3 + 0x181) & 0x20) == 0)
                int64_t rax_20 = sub_140d3c6e0(rdi_3 + 8)
                
                if (rax_20 == 0 || rax_20 == arg2)
                    sub_141e744f0(arg1, rdi_3)
            else
                var_1d7_1 = 1
            
            temp9_1 = rsi_2
            rsi_2 -= 1
        while (temp9_1 - 1 s>= 0)
    
    int32_t var_1bc_1 = 1
    int32_t var_1b0_1 = 0xffffffff
    int32_t r11_1 = arg1[0x83].d
    void* var_1b8_1 = &arg1[0x80]
    int32_t rcx_15 = 0
    int32_t var_1c0_1 = 0
    int32_t r8_2 = 0
    int64_t var_1ac_1 = 0
    
    if (r11_1 != 0)
        void* rax_21 = arg1[0x82]
        void* r9_1 = &arg1[0x80]
        
        if (rax_21 != 0)
            r9_1 = rax_21
        
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(r11_1 - 1)
        int32_t rdx_9 = *r9_1
        
        if (rdx_9 != 0)
        label_141e7b74c:
            int32_t rax_28 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_1
            int32_t temp0_4
            temp0_4, rflags_1 = _bit_scan_reverse(rax_28)
            int32_t var_1bc_2 = rax_28
            int32_t rax_29
            
            if (rax_28 == 0)
                rax_29 = 0x20
            else
                rax_29 = 0x1f - temp0_4
            
            var_1ac_1.d = r8_2 - rax_29 + 0x1f
            
            if (r8_2 - rax_29 + 0x1f s> r11_1)
                var_1ac_1.d = r11_1
        else
            while (true)
                int64_t rdx_10 = sx.q(rcx_15)
                r8_2 += 0x20
                rcx_15 += 1
                var_1ac_1:4.d = r8_2
                var_1c0_1 = rcx_15
                
                if (rdx_10.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r9_1 + (rdx_10 << 2) + 4)
                int32_t var_1b0_2 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_141e7b74c
            
            var_1ac_1.d = r11_1
    
    int32_t rdx_11 = arg1[0x83].d
    int32_t r9_2 = 0xffffffff << (rdx_11.b & 0x1f)
    int128_t var_198_1 = var_1c0_1.o
    int32_t var_1d4 = r9_2
    int32_t r8_5 = rdx_11 s>> 5
    int128_t var_188_1 = 0xffffffff
    int128_t zmm1 = var_198_1
    var_198_1:8.d = r9_2
    int32_t r9_4 = rdx_11 & 0xffffffe0
    int64_t var_148_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_198_1:0xc.d = rdx_11
    int128_t var_168 = (&arg1[0x7e]).o
    int128_t var_158_1 = zmm1
    
    if (rdx_11 != r11_1)
        void* rax_31 = arg1[0x82]
        void* r10_1 = &arg1[0x80]
        
        if (rax_31 != 0)
            r10_1 = rax_31
        
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(r11_1 - 1)
        int32_t rdx_15 = *(r10_1 + (sx.q(r8_5) << 2)) & var_1d4
        
        if (rdx_15 != 0)
        label_141e7b833:
            int32_t rax_38 = neg.d(rdx_15) & rdx_15
            uint64_t rflags_2
            int32_t temp0_6
            temp0_6, rflags_2 = _bit_scan_reverse(rax_38)
            int32_t rdi_4
            
            if (rax_38 == 0)
                rdi_4 = 0x20
            else
                rdi_4 = 0x1f - temp0_6
            
            var_198_1:0xc.d = r9_4 - rdi_4 + 0x1f
            
            if (r9_4 - rdi_4 + 0x1f s> r11_1)
                var_198_1:0xc.d = r11_1
        else
            while (true)
                int64_t rcx_20 = sx.q(r8_5)
                r9_4 += 0x20
                r8_5 += 1
                
                if (rcx_20.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                    break
                
                rdx_15 = *(r10_1 + (rcx_20 << 2) + 4)
                var_198_1:8.d = 0xffffffff
                
                if (rdx_15 != 0)
                    goto label_141e7b833
            
            var_198_1:0xc.d = r11_1
    
    int64_t* rdx_16
    
    while (true)
        int64_t rax_40 = sx.q(var_158_1:0xc.d)
        rdx_16 = var_168.q
        
        if (rax_40.d == (var_198_1:8.q u>> 0x20).d && var_158_1.q == &arg1[0x80]
                && rdx_16 == &arg1[0x7e])
            break
        
        char var_1d8 = 0
        void* rdi_5 = *(*rdx_16 + rax_40 * 0x28)
        void* var_170 = rdi_5
        sub_141e6db90(&arg1[0x8a], &var_1d4, &var_170, &var_1d8)
        
        if (var_1d8 == 0)
            int64_t rdx_18 = *(rdi_5 + 0x28)
            
            if (rdx_18 != 0)
                sub_1407c23d0(&arg1[0x99], rdx_18)
            
            void var_178
            
            if (*sub_1405ba450(&arg1[0x7e], &var_178, rdi_5) == 0xffffffff)
                sub_142372980(&arg1[0xb9], rdi_5)
            else
                *(rdi_5 + 0x183) |= 0x10
        
        var_158_1:8.d &= not.d(var_168:0xc.d)
        sub_14059bdd0(&var_168:8)
    
    if (arg2 == 0 || (*(arg2 + 0x11d) & 0x20) != 0)
        rdx_16.b = 1
    else
        rdx_16 = nullptr
    
    sub_141e82850(arg1, rdx_16.b)
    int32_t rax_45 = *(arg1 + 0x13c)
    arg1[0x27].d = 0
    
    if (rax_45 s< 0 && rax_45 != 0)
        sub_1408099b0(&arg1[0x26], 0)
    
    int128_t zmm1_2 = data_143dbb0d0
    int32_t var_b0
    int32_t var_b0_1 = var_b0 & 0xfffffffe
    int128_t var_f8_1 = data_143dbb0c0
    int128_t var_d8_1 = data_143dbb0e0
    int128_t var_c8
    __builtin_memset(&var_c8, 0, 0x18)
    void var_ac
    sub_141e90730(&var_ac)
    int64_t rsi_5 = sx.q(arg1[0x27].d)
    int32_t var_88_1 = 0
    int32_t var_80_1 = 0
    int32_t rax_46 = (rsi_5 + 1).d
    int128_t var_78
    __builtin_memset(&var_78, 0, 0x38)
    int64_t* var_40_1 = arg1
    arg1[0x27].d = rax_46
    
    if (rax_46 s> *(arg1 + 0x13c))
        sub_1408094f0(&arg1[0x26])
    
    int128_t var_f8
    result = &var_f8
    int128_t* rdx_24 = rsi_5 * 0xc0 + arg1[0x26]
    *rdx_24 = var_f8_1
    rdx_24[1] = zmm1_2
    rdx_24[2] = var_d8_1
    rdx_24[3] = var_c8
    int64_t var_b8
    rdx_24[4] = var_b8.o
    int128_t var_a8
    rdx_24[5] = var_a8
    int128_t var_98
    rdx_24[6] = var_98
    rdx_24[7] = var_88_1.o
    rdx_24[8] = var_78
    int128_t var_68
    rdx_24[9] = var_68
    int64_t var_58
    rdx_24[0xa] = var_58.o
    int64_t var_48
    rdx_24[0xb] = var_48.o
    
    if (arg3 != 0)
        result = sub_141e85af0(&arg1[0x5b])
        arg1[0x6e].b &= 0xfe
    
    if (arg2 == 0)
        int32_t i = 0
        int32_t rax_47 = arg1[0x29].d
        
        if (var_1d7_1 == 0)
            if (rax_47 s> 0)
                int64_t* rsi_7 = nullptr
                
                do
                    int64_t* rcx_34 = *(rsi_7 + arg1[0x28])
                    (*(*rcx_34 + 0x38))(rcx_34)
                    i += 1
                    rsi_7 = &rsi_7[1]
                while (i s< arg1[0x29].d)
            
            sub_1408d84f0(&arg1[0x2c])
        else if (rax_47 s> 0)
            int64_t* rsi_6 = nullptr
            
            do
                int64_t* rcx_33 = *(rsi_6 + arg1[0x28])
                void* rax_49 = rcx_33[2]
                
                if (rax_49 == 0 || (*(*(rax_49 + 0xc0) + 0x181) & 0x20) == 0)
                    (*(*rcx_33 + 0x38))()
                
                i += 1
                rsi_6 = &rsi_6[1]
            while (i s< arg1[0x29].d)
        
        result = zx.q(*(arg1 + 0x394))
        arg1[0x72].d = 0
        int32_t temp11_1 = result.d
        
        if (temp11_1 s< 0 && temp11_1 != 0)
            result = sub_1405c5570(&arg1[0x71], 0)
    
    if ((*(arg1 + 0x352) & 0x20) != 0)
        (*(*arg1 + 0x178))(arg1)
        result = (*(*arg1 + 0x38))(arg1, 0)
else
    void** const var_118_1 = &data_142d42ed8
    int64_t* var_1d0 = arg1
    int128_t zmm0 = var_1d0.o
    int64_t (* var_138)(int64_t* arg1) = sub_141e764a0
    int64_t var_128_1 = 0
    int128_t var_110_1 = zmm0
    sub_141e85cb0(&var_138, arg3)
    var_1d0.o = zx.o(0)
    sub_141e75650(&var_1d0)
    sub_141e8d480(&var_1d0)
    int32_t rax_3 = *(arg1 + 0x8c)
    arg1[0x11].d = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_1405a52a0(arg1 + 0x80, 0)
    
    int64_t rdi = sx.q(arg1[0x11].d)
    int32_t rax_4 = (rdi + 1).d
    arg1[0x11].d = rax_4
    
    if (rax_4 s> *(arg1 + 0x8c))
        sub_1405c4fe0(arg1 + 0x80)
    
    float zmm1_1[0x4] = data_143f39c10
    zmm1_1[0].q = zx.o(0) u>> 0x40
    result = (rdi << 6) + *(arg1 + 0x80)
    *result = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
    *(result + 0x10) = zx.o(0)
    *(result + 0x20) = __andps_xmmxud_memxud(data_143f39c10, data_143f39c20)
    *(result + 0x3c) &= 0xfffffffe
    
    if (arg2 != 0)
        (*(*arg2 + 0x20))(arg2, 0xffffffff, 0)
        result = sub_140a4fc50(arg2)
    
    int64_t* rcx_7 = var_1d0
    
    if (rcx_7 != 0)
        result = zx.q(rcx_7[9].d)
        rcx_7[9].d -= 1
        
        if (result.d == 1)
            result = sub_140a2f6e0(var_1d0)

__security_check_cookie(rax_1 ^ &var_1f8)
return result

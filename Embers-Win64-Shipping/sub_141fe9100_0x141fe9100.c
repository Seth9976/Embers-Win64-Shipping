// 函数: sub_141fe9100
// 地址: 0x141fe9100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t result = *(arg1 + 0x1d8)
int32_t rdx = data_143a2dc7c
int32_t r9 = data_143a2dc80
int32_t r13 = data_143a2dc84

if (result == 0)
    rdx = data_143a2dc70

if (result == 0)
    r9 = data_143a2dc74

if (result == 0)
    r13 = data_143a2dc78

if (*(arg1 + 0x1c0) == 0 || *(arg1 + 0x10) != rdx || *(arg1 + 0x1c) != r9 || *(arg1 + 0x1d0) != r13)
    sub_141fe6830(arg1 + 0x10, rdx, 1, r9)
    int32_t i = 0
    
    if (*(arg1 + 0x1b8) s> 0)
        int64_t rdx_1 = 0
        
        do
            rdx_1 += 8
            i += 1
            void* rcx_1 = *(rdx_1 + *(arg1 + 0x1b0) - 8)
            *(rcx_1 + 0x3d) &= 0xdf
        while (i s< *(arg1 + 0x1b8))
    
    *(arg1 + 0x1b8) = 0
    
    if (*(arg1 + 0x1bc) != 0)
        sub_1405c5570(arg1 + 0x1b0, 0)
    
    int32_t var_f4_1 = 1
    int32_t r9_1 = *(arg1 + 0x188)
    void* r8_1 = arg1 + 0x170
    void* var_f0_1 = r8_1
    int32_t rcx_3 = 0
    int32_t var_f8_1 = 0
    int32_t var_e8_1 = 0xffffffff
    int32_t rdi_1 = 0
    int64_t var_e4_1 = 0
    
    if (r9_1 != 0)
        void* rax_3 = *(r8_1 + 0x10)
        
        if (rax_3 != 0)
            r8_1 = rax_3
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r9_1 - 1)
        int32_t rdx_4 = *r8_1
        
        if (rdx_4 != 0)
        label_141fe9287:
            int32_t rax_9 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_f4_2 = rax_9
            int32_t var_a8_1 = temp0_1
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_1
            
            var_e4_1.d = rdi_1 - rax_10 + 0x1f
            
            if (rdi_1 - rax_10 + 0x1f s> r9_1)
                var_e4_1.d = r9_1
        else
            while (true)
                int64_t rax_6 = sx.q(rcx_3)
                rdi_1 += 0x20
                rcx_3 += 1
                var_e4_1:4.d = rdi_1
                var_f8_1 = rcx_3
                
                if (rax_6.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                    break
                
                rdx_4 = *(r8_1 + (rax_6 << 2) + 4)
                int32_t var_e8_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_141fe9287
            
            var_e4_1.d = r9_1
    
    int128_t var_88_1 = 0xffffffff
    double var_98_1[0x2] = var_f8_1.o
    double var_d0[0x2] = (arg1 + 0x160).o
    int64_t var_b0_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    
    if (0 s< r9_1)
        int32_t i_1 = var_98_1[1]:4.d
        
        do
            void var_a4
            sub_141fd3270(arg1 + 0xc0, &var_a4, *var_d0[0] + sx.q(i_1) * 0x18, nullptr)
            var_98_1[1].d &= not.d(var_d0[1]:4.d)
            sub_14059bdd0(&var_d0[1])
            i_1 = var_98_1[1]:4.d
        while (i_1 s< *(var_98_1[0] i+ 0x18))
    
    if (*(arg1 + 0x168) != *(arg1 + 0x194))
        int32_t rax_18 = *(arg1 + 0x16c)
        *(arg1 + 0x168) = 0
        
        if (rax_18 s< 0 && rax_18 != 0)
            sub_1405a5130(arg1 + 0x160, 0)
        
        void* rdi_3 = arg1 + 0x170
        *(arg1 + 0x194) = 0
        void* r15_1 = rdi_3 + 0x18
        *(arg1 + 0x190) = 0xffffffff
        void* rax_19 = *(rdi_3 + 0x10)
        uint32_t rdx_9 = (*r15_1 + 0x1f) u>> 5
        
        if (rax_19 != 0)
            rdi_3 = rax_19
        
        if (rdx_9 u> 8)
            memset(rdi_3, 0, zx.q(rdx_9) << 2)
        else if (rdx_9 != 0)
            __builtin_memset(rdi_3, 0, zx.q(rdx_9) << 2)
        
        *r15_1 = 0
        void* rdi_4 = arg1 + 0x198
        int64_t rcx_11 = sx.q(*(arg1 + 0x1a8))
        void* rdx_10 = *(rdi_4 + 8)
        
        if (rcx_11 s> 0)
            if (rdx_10 != 0)
                rdi_4 = rdx_10
            
            __builtin_memset(rdi_4, 0xffffffff, rcx_11 << 2)
    
    double zmm1_1[0x2] = data_143dbb1e0
    int32_t r9_2 = *(arg1 + 0x28)
    int32_t rax_21 = (1 << (data_1439c7a34).b) - 1
    double var_78[0x2] = zx.o(0)
    int32_t var_54_1 = rax_21
    int32_t var_68_1 = 1
    char var_50_1 = 0
    wchar16 const* const rax_22 = u"VisibilityAtlas"
    
    if (result == 0)
        rax_22 = u"HeightFieldAtlas"
    
    int64_t* rcx_13 = data_143f0f180
    wchar16 const* const var_48_1 = rax_22
    char rax_23 = 3
    
    if (result == 0)
        rax_23 = 0x28
    
    double var_64_1[0x2] = zmm1_1
    int32_t var_40_1 = 0
    int64_t var_100
    (*(*rcx_13 + 0x560))(rcx_13, &var_100, &data_143f02b98, r9_2, r9_2, rax_23, 1, 1, 0x10008, 
        &var_78, result)
    
    if (arg1 + 0x1c0 != &var_100)
        int64_t* rdi_6 = *(arg1 + 0x1c0)
        *(arg1 + 0x1c0) = var_100
        var_100 = 0
        
        if (rdi_6 != 0)
            rdi_6[1].d -= 1
            
            if (rdi_6[1].d == 1)
                char rax_25
                
                if (rdi_6[2].b == 0 && data_143f0f1d0 == 0)
                    rax_25 = sub_1405949a0()
                
                if (rdi_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_25 != 0))
                    (**rdi_6)(rdi_6, 1)
                else
                    bool z_1
                    
                    if (0 == *(rdi_6 + 0xc))
                        *(rdi_6 + 0xc) = 1
                        z_1 = true
                    else
                        *(rdi_6 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_27 = sub_140a20af0()
                        uint64_t rdx_13 = zx.q(rax_27)
                        void* const rax_28
                        
                        if (rax_27 != 0)
                            rax_28 = *(&data_143cf0bf8 + (rdx_13 u>> 0xe << 3))
                                + (zx.q(rdx_13.d) & 0x3fff) * 0x18
                        else
                            rax_28 = nullptr
                        
                        *(rax_28 + 8) = rdi_6
                        sub_1405a42f0(&data_143f02390, rdx_13.d)
    
    sub_1405d1550(&var_100)
    int64_t* rcx_19 = data_143f0f180
    void var_d8
    (*(*rcx_19 + 0x5a0))(rcx_19, &var_d8, &data_143f02b98, *(arg1 + 0x1c0), 0)
    sub_1405d1600(arg1 + 0x1c8, &var_d8)
    result = sub_1405d1550(&var_d8)
    *(arg1 + 0x1d4) += 1
    *(arg1 + 0x1d0) = r13

__security_check_cookie(rax_1 ^ &var_158)
return result

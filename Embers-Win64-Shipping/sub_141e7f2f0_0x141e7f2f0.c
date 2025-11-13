// 函数: sub_141e7f2f0
// 地址: 0x141e7f2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t rsi = arg3
void var_128
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_128)
int64_t* rbx

if ((*(arg1 + 0x359) & 2) != 0)
    rbx.b = 1
else if (arg2 != 0xffffffff)
    arg1[5].d = arg2
    char var_208 = 0
    sub_141c45050(&arg1[0xe], 0)
    void var_110
    int128_t* rax_3 = (*(*arg1 + 0x158))(arg1, &var_110)
    int16_t** var_228_1 = &data_143de5780
    *(arg1 + 0x10) = *rax_3
    arg1[4].d = rax_3[1].d
    int32_t rcx_3 = data_143f39bdc
    int32_t rax_5 = *(arg1 + 0x1c)
    
    if (rax_5 s> 0)
        rsi = rax_5
    
    int32_t rax_6 = 1
    
    if (rsi s>= rcx_3)
        rcx_3 = rsi
    
    if (rcx_3 s>= 1)
        rax_6 = rcx_3
    
    arg1[0x12].d = rax_6
    *(arg1 + 0x94) = rax_6
    arg1[0x13].d = rax_6
    *(arg1 + 0xc) = arg1[2].d
    sub_140af2fd0(data_143ddb400, u"Audio", u"DeferStartupPrecache", &var_208, var_228_1)
    void* rcx_5 = data_143ddb400
    int16_t** var_228_2 = &data_143de5780
    int32_t var_204 = 0
    
    if (sub_140af3b00(rcx_5, u"Audio", u"PlatformHeadroomDB", &var_204, var_228_2) != 0)
        arg1[0x5a].d = powf(10f, var_204 f* 0.0500000007f)
    
    void* rcx_6 = data_143ddb400
    int16_t** var_228_3 = &data_143de5780
    int32_t var_200 = 0
    
    if (sub_140af3c10(rcx_6, u"Audio", u"NumPrecacheFrames", &var_200, var_228_3) != 0)
        int32_t rax_10 = var_200
        
        if (rax_10 s>= 0x80)
            rax_10 = 0x80
        
        *(arg1 + 0x24) = rax_10
    
    char rcx_7 = 0
    
    if (data_143f39fd0 == 0)
        rcx_7 = 8
    
    rcx_7 |= *(arg1 + 0x352) & 0xf7
    char rax_12 = 0
    *(arg1 + 0x352) = rcx_7
    
    if (data_143a2d47c == 1)
        rax_12 = 0x10
    
    *(arg1 + 0x352) = rax_12 | (rcx_7 & 0xef)
    int64_t* rax_13 = sub_142475900()
    void* rcx_8 = rax_13[0x23]
    
    if (rcx_8 == 0)
        (*(*rax_13 + 0x390))(rax_13)
        rcx_8 = rax_13[0x23]
    
    float zmm0_4 = *(rcx_8 + 0x104)
    int32_t zmm1_2 = 0x38d1b717
    
    if (zmm0_4 >= 9.99999975e-05f)
        zmm0_4 = _mm_min_ss(zmm0_4, 0x40800000)
    else
        zmm0_4 = 9.99999975e-05f
    
    *(arg1 + 0x7a4) = zmm0_4
    int32_t zmm2_1 = *(rcx_8 + 0x108)
    
    if (not(zmm2_1 f< 9.99999975e-05f))
        zmm2_1 = _mm_min_ss(zmm2_1, 0x40800000)
        zmm1_2 = zmm2_1
    
    arg1[0xf5].d = zmm1_2
    arg1[0x6d].b ^= ((*(rcx_8 + 0x120) u>> 2).b ^ arg1[0x6d].b) & 1
    arg1[0x6e].b ^= ((*(rcx_8 + 0x120) * 2) ^ arg1[0x6e].b) & 2
    *(arg1 + 0x2d4) = *(rcx_8 + 0xfc)
    int64_t* rax_19 = sub_142475900()
    void* rdx_2 = rax_19[0x23]
    
    if (rdx_2 == 0)
        (*(*rax_19 + 0x390))(rax_19, rdx_2, zmm2_1)
        rdx_2 = rax_19[0x23]
    
    int64_t var_1b0 = *(rdx_2 + 0x80)
    int64_t var_1a8
    sub_140596d10(&var_1a8, rdx_2 + 0x88)
    int64_t var_220
    char var_218
    int64_t var_210
    
    if (var_1b0 != 0)
        int64_t var_198
        int16_t** rax_22 = sub_140d30800(&var_1b0, &var_198)
        int16_t* rdi_3
        
        if (rax_22[1].d == 0)
            rdi_3 = &data_142d40450
        else
            rdi_3 = *rax_22
        
        var_210 = 0
        var_218 = 1
        var_220 = 0
        var_228_3.d = 0
        void* rax_24 =
            sub_140d2f6f0(sub_14259e080(), 0, rdi_3, 0, var_228_3.d, var_220, var_218, var_210)
        int64_t rcx_14 = var_198
        arg1[0x41] = rax_24
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
    
    int64_t* rax_25 = sub_14259ef40()
    void* rcx_15 = rax_25[0x23]
    
    if (rcx_15 == 0)
        (*(*rax_25 + 0x390))(rax_25)
        rcx_15 = rax_25[0x23]
    
    sub_14236b660(rcx_15)
    sub_141e7fd60(arg1)
    (*(*arg1 + 0x78))(arg1)
    int32_t rcx_20
    
    if ((*(arg1 + 0x352) & 0x28) != 0x28)
        rcx_20 = 0
    else
        arg1[0x58] = (*(*arg1 + 0x180))(arg1)
        rcx_20 = *(sub_141e6e8a0() + 0x124)
    
    arg1[1].d = rcx_20
    sub_141e8b330(arg1)
    int64_t* rax_32 = sub_141e7d9a0()
    
    if (rax_32 != 0)
        void var_188
        int64_t* rax_34 = (*(*rax_32 + 0x28))(rax_32, &var_188, arg1)
        
        if (&arg1[6] != rax_34)
            arg1[6] = *rax_34
            *rax_34 = 0
            sub_1405aeff0(&arg1[7], &rax_34[1])
        
        int64_t* var_180
        
        if (var_180 != 0)
            var_180[1].d -= 1
            
            if (var_180[1].d == 1)
                (**var_180)(var_180)
                int32_t rax_38 = *(var_180 + 0xc)
                *(var_180 + 0xc) -= 1
                
                if (rax_38 == 1)
                    (*(*var_180 + 8))(var_180, 1)
        
        if ((*(arg1 + 0x352) & 0x20) == 0)
            int64_t* rcx_26 = arg1[6]
            int32_t var_1d8_1 = *(arg1 + 0xc)
            int32_t var_1d4_1 = *(arg1 + 0x14)
            int64_t rax_44 = *rcx_26
            int32_t var_1dc_1 = 0
            int128_t var_148 = (arg1[1].d + arg1[0x12].d).o
            int64_t* var_138_1 = arg1
            (*(rax_44 + 0x68))(rcx_26, &var_148)
        
        arg1[0x6b].b |= 2
        char rax_46 = (*(*rax_32 + 0x10))(rax_32)
        *(arg1 + 0x352) &= 0xbf
        *(arg1 + 0x352) |= (rax_46 & 1) << 6
        *(arg1 + 0x354) = (*(*rax_32 + 0x20))(rax_32)
    
    int64_t* rax_49 = sub_141e7d780()
    
    if (rax_49 != 0)
        void var_178
        int64_t* rax_51 = (*(*rax_49 + 0x20))(rax_49, &var_178, arg1)
        
        if (&arg1[8] != rax_51)
            arg1[8] = *rax_51
            *rax_51 = 0
            sub_1405aeff0(&arg1[9], &rax_51[1])
        
        int64_t* var_170
        
        if (var_170 != 0)
            var_170[1].d -= 1
            
            if (var_170[1].d == 1)
                (**var_170)(var_170)
                int32_t rax_55 = *(var_170 + 0xc)
                *(var_170 + 0xc) -= 1
                
                if (rax_55 == 1)
                    (*(*var_170 + 8))(var_170, 1)
        
        arg1[0x6b].b |= 8
        char rax_58 = (*(*rax_49 + 0x10))(rax_49)
        *(arg1 + 0x353) &= 0xfe
        *(arg1 + 0x353) |= rax_58 & 1
    
    int64_t* rax_59
    int32_t rcx_41
    rax_59, rcx_41 = sub_141e7d560()
    
    if (rax_59 != 0)
        void var_168
        int64_t* rax_61 = (*(*rax_59 + 0x20))(rax_59, &var_168, arg1)
        
        if (&arg1[0xa] != rax_61)
            arg1[0xa] = *rax_61
            *rax_61 = 0
            sub_1405aeff0(&arg1[0xb], &rax_61[1])
        
        int64_t* var_160
        
        if (var_160 != 0)
            var_160[1].d -= 1
            
            if (var_160[1].d == 1)
                (**var_160)(var_160)
                int32_t rax_65 = *(var_160 + 0xc)
                *(var_160 + 0xc) -= 1
                
                if (rax_65 == 1)
                    (*(*var_160 + 8))(var_160, 1)
        
        arg1[0x6b].b |= 4
        char rax_68
        rax_68, rcx_41 = (*(*rax_59 + 0x10))(rax_59)
        *(arg1 + 0x352) &= 0x7f
        *(arg1 + 0x352) |= rax_68 << 7
    
    int64_t* rax_69 = sub_141e7d2b0(rcx_41)
    
    if (rax_69 != 0)
        void var_158
        int64_t* rax_71 = (*(*rax_69 + 0x10))(rax_69, &var_158, arg1)
        
        if (&arg1[0xc] != rax_71)
            arg1[0xc] = *rax_71
            *rax_71 = 0
            sub_1405aeff0(&arg1[0xd], &rax_71[1])
        
        int64_t* var_150
        
        if (var_150 != 0)
            var_150[1].d -= 1
            
            if (var_150[1].d == 1)
                (**var_150)(var_150)
                int32_t rdi_5 = *(var_150 + 0xc)
                *(var_150 + 0xc) -= 1
                
                if (rdi_5 == 1)
                    (*(*var_150 + 8))(var_150, zx.q(rdi_5))
        
        int64_t* rcx_46 = arg1[0xc]
        int32_t var_1c0_1 = *(arg1 + 0xc)
        int32_t var_1c8 = arg1[1].d + arg1[0x12].d
        int32_t var_1bc_1 = *(arg1 + 0x14)
        int32_t var_1c4_1 = 0
        int64_t* var_1b8_1 = arg1
        (*(*rcx_46 + 0x10))(rcx_46, &var_1c8)
        arg1[0x6b].b |= 0x10
    
    if ((*(*arg1 + 0x160))(arg1) != 0)
        if ((*(arg1 + 0x352) & 0x20) == 0)
            arg1[0x58] = (*(*arg1 + 0x180))(arg1)
        
        if (arg1[0x29].d == 0)
            int32_t r15_2 = 0
            int32_t r12_2 = arg1[1].d + arg1[0x12].d
            
            if (r12_2 s> 0)
                do
                    int64_t* rax_86 = (*(*arg1 + 0x188))(arg1)
                    (*(*rax_86 + 0x68))(rax_86, zx.q(r15_2))
                    int64_t r13_1 = sx.q(arg1[0x29].d)
                    int32_t rax_88 = (r13_1 + 1).d
                    arg1[0x29].d = rax_88
                    
                    if (rax_88 s> *(arg1 + 0x14c))
                        sub_1405a4d70(&arg1[0x28])
                    
                    *(arg1[0x28] + (r13_1 << 3)) = rax_86
                    int64_t r13_2 = sx.q(arg1[0x2b].d)
                    int32_t rax_90 = (r13_2 + 1).d
                    arg1[0x2b].d = rax_90
                    
                    if (rax_90 s> *(arg1 + 0x15c))
                        sub_1405a4d70(&arg1[0x2a])
                    
                    r15_2 += 1
                    *(arg1[0x2a] + (r13_2 << 3)) = rax_86
                while (r15_2 s< r12_2)
        
        void var_f8
        int128_t* rax_92 = sub_141e716d0(&var_f8, arg1)
        int64_t r14_6 = sx.q(arg1[0x27].d)
        int32_t rax_93 = (r14_6 + 1).d
        arg1[0x27].d = rax_93
        
        if (rax_93 s> *(arg1 + 0x13c))
            sub_1408094f0(&arg1[0x26])
        
        int128_t* r8_7 = r14_6 * 0xc0 + arg1[0x26]
        *r8_7 = *rax_92
        r8_7[1] = rax_92[1]
        r8_7[2] = rax_92[2]
        r8_7[3] = rax_92[3]
        r8_7[4] = rax_92[4]
        r8_7[5] = rax_92[5]
        r8_7[6] = rax_92[6]
        r8_7[7] = rax_92[7]
        r8_7[8] = rax_92[8]
        r8_7[9] = rax_92[9]
        r8_7[0xa] = rax_92[0xa]
        r8_7[0xb] = rax_92[0xb]
        sub_141e73300(&arg1[0x10], 1)
        bool cond:2_1 = var_208 != 0
        arg1[0xec] = 0x3f800000
        arg1[0xed] = 0
        arg1[0xee].d = 0
        *(arg1 + 0x774) = 0x3f800000
        *(arg1 + 0x77c) = 0
        *(arg1 + 0x784) = 0
        arg1[0xf1] = 0x3f800000
        arg1[0xf2] = 0
        arg1[0xf3].d = 0
        *(arg1 + 0x79c) = 0x3f800000
        
        if (not(cond:2_1))
            int64_t* rcx_57 = data_143f5b298
            
            if (rcx_57 != 0 && (*(*rcx_57 + 0x388))(rcx_57) != 0 && data_143f39fdc == 0)
                int64_t var_1f8
                sub_141e701c0(&var_1f8, 0x10, 1, 0)
                int32_t i_1
                int32_t i = i_1
                int32_t var_1f0
                int32_t rdx_25 = var_1f0
                int64_t r10_1 = var_1f8
                
                while (i s>= 0)
                    if (i s>= rdx_25)
                        break
                    
                    int64_t r9_4
                    r9_4.b = 1
                    var_228_3.b = 0
                    (*(*arg1 + 0x40))(arg1, *(r10_1 + (sx.q(i) << 3)), 0, r9_4, var_228_3, var_220, 
                        var_218, var_210)
                    rdx_25 = var_1f0
                    i = i_1 + 1
                    r10_1 = var_1f8
                    i_1 = i
                    
                    if (i s< rdx_25)
                        while (*(r10_1 + (sx.q(i) << 3)) == 0)
                            int32_t i_2 = i + 1
                            i_1 = i_2
                            i = i_2
                            
                            if (i_2 s>= rdx_25)
                                break
                
                if (r10_1 != 0)
                    sub_140a74f90(r10_1)
                
                arg1[0x6b].b |= 1
        
        *(arg1 + 0x359) |= 2
        rbx.b = 1
    else
        sub_141e895d0(arg1)
        rbx.b = 0
    
    int64_t rcx_62 = var_1a8
    
    if (rcx_62 != 0)
        sub_140a74f90(rcx_62)
else
    rbx.b = 0

pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_128)
__security_check_cookie(rax_1 ^ &var_248)
return zx.q(rbx.b)

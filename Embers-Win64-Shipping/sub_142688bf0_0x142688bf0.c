// 函数: sub_142688bf0
// 地址: 0x142688bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *(arg3 + 8)
int32_t* r15 = arg3
int32_t var_160 = arg4.d

if (arg2 != 0 && (*(*arg1 + 0x400) & 0x10000) != 0 && arg6 == 0xffffffff)
    sub_14260f690(arg1[1], arg3)

int32_t rax_2 = *(r13 + 0x1c)
int32_t rsi = 0
int128_t* rbx = *(r15 + 0x18)
int32_t r12 = 0
int32_t var_1ac = rax_2
int32_t var_1c0

if (rax_2 s> 0)
    int32_t rax_5
    
    do
        int64_t rdi_1 = sx.q(arg5[1].d)
        var_1c0 = (*rbx ^ 0x80000000).d
        int32_t rax_3 = (rdi_1 + 1).d
        float var_1bc_1 = (*(rbx + 8) ^ 0x80000000)[0]
        int32_t var_1b8_1 = (*(rbx + 4)).d
        arg5[1].d = rax_3
        
        if (rax_3 s> *(arg5 + 0xc))
            sub_140638a00(arg5)
        
        int64_t rcx_2 = *arg5
        int64_t rdx_2 = rdi_1 * 3
        rbx += 0xc
        r12 += 1
        *(rcx_2 + (rdx_2 << 2)) = var_1c0.q
        *(rcx_2 + (rdx_2 << 2) + 8) = var_1b8_1
        rax_5 = *(r13 + 0x1c)
        var_1ac = rax_5
    while (r12 s< rax_5)

int32_t i = 0
uint128_t* rbx_1 = *(r15 + 0x30)

if (*(r13 + 0x28) s> 0)
    do
        int64_t rdi_2 = sx.q(arg5[1].d)
        var_1c0 = (*rbx_1 ^ 0x80000000).d
        int32_t rax_6 = (rdi_2 + 1).d
        float var_1bc_2 = (*(rbx_1 + 8) ^ 0x80000000)[0]
        int32_t var_1b8_2 = (*(rbx_1 + 4)).d
        arg5[1].d = rax_6
        
        if (rax_6 s> *(arg5 + 0xc))
            sub_140638a00(arg5)
        
        int64_t rcx_4 = *arg5
        int64_t rdx_4 = rdi_2 * 3
        rbx_1 += 0xc
        i += 1
        *(rcx_4 + (rdx_4 << 2)) = var_1c0.q
        *(rcx_4 + (rdx_4 << 2) + 8) = var_1b8_2
    while (i s< *(r13 + 0x28))

uint64_t r8 = 0
int32_t var_1c8 = 0
void* rdi_3

if (*(r13 + 0x18) s<= 0)
    rdi_3 = r13
else
    rdi_3 = r13
    int16_t* rdx_5 = nullptr
    int16_t* var_148_1 = nullptr
    int64_t r13_1 = 0
    arg4 = nullptr
    void* var_150_1 = nullptr
    
    do
        int64_t rax_8 = *(r15 + 0x10)
        void* r10_1 = arg4 + rax_8
        char rax_9 = *(arg4 + rax_8 + 0x1f)
        var_1c0.q = r10_1
        
        if (rax_9 u< 0x40)
            int64_t r12_1 = *(r15 + 0x28)
            int64_t var_138_1 = r12_1
            void* rdi_4
            
            if ((*(r10_1 + 0x1c) & arg7) == 0)
                rdi_4 = &arg5[((zx.q(rax_9) & 0x3f) + 1) * 2]
            else
                rdi_4 = &arg5[0x82]
            
            int32_t i_1 = 0
            int32_t i_6 = 0
            
            if (*(r12_1 + r13_1 + 9) u> 0)
                do
                    uint32_t r8_1 = zx.d(*(r10_1 + 0x1e))
                    char* rdx_7 = sx.q((*(r12_1 + r13_1 + 4) + i_1) << 2) + *(r15 + 0x38)
                    char rax_13 = *rdx_7
                    uint32_t rcx_6
                    
                    if (rax_13 u>= r8_1.b)
                        rcx_6 = zx.d(rax_13) - r8_1 + var_1ac + *(r12_1 + r13_1)
                    else
                        rcx_6 = zx.d(*(r10_1 + (zx.q(rax_13) << 1) + 4))
                    
                    int32_t rax_15 = rcx_6 + var_160
                    char rax_16 = rdx_7[1]
                    uint32_t rcx_10
                    
                    if (rax_16 u>= r8_1.b)
                        rcx_10 = zx.d(rax_16) - r8_1 + var_1ac + *(r12_1 + r13_1)
                    else
                        rcx_10 = zx.d(*(r10_1 + (zx.q(rax_16) << 1) + 4))
                    
                    int32_t rax_18 = rcx_10 + var_160
                    char rax_19 = rdx_7[2]
                    uint32_t rcx_14
                    
                    if (rax_19 u>= r8_1.b)
                        rcx_14 = zx.d(rax_19) - r8_1 + var_1ac + *(r12_1 + r13_1)
                    else
                        rcx_14 = zx.d(*(r10_1 + (zx.q(rax_19) << 1) + 4))
                    
                    int32_t rax_21 = rcx_14 + var_160
                    int64_t rbx_3 = sx.q(*(rdi_4 + 8))
                    int32_t rax_22 = (rbx_3 + 1).d
                    *(rdi_4 + 8) = rax_22
                    
                    if (rax_22 s> *(rdi_4 + 0xc))
                        sub_1405a4cf0(rdi_4)
                    
                    *(*rdi_4 + (rbx_3 << 2)) = rax_15
                    int64_t rbx_4 = sx.q(*(rdi_4 + 8))
                    int32_t rax_24 = (rbx_4 + 1).d
                    *(rdi_4 + 8) = rax_24
                    
                    if (rax_24 s> *(rdi_4 + 0xc))
                        sub_1405a4cf0(rdi_4)
                    
                    *(*rdi_4 + (rbx_4 << 2)) = rax_18
                    int64_t rbx_5 = sx.q(*(rdi_4 + 8))
                    int32_t rax_26 = (rbx_5 + 1).d
                    *(rdi_4 + 8) = rax_26
                    
                    if (rax_26 s> *(rdi_4 + 0xc))
                        sub_1405a4cf0(rdi_4)
                    
                    *(*rdi_4 + (rbx_5 << 2)) = rax_21
                    int64_t rax_28 = *(r15 + 0x78)
                    rdx_5 = var_148_1
                    
                    if (rax_28 != 0)
                        int16_t rcx_22 = *(rdx_5 + rax_28)
                        
                        if (rcx_22 u< 0xff)
                            int32_t rax_29 = arg5[0x8f].d
                            uint32_t rbx_6 = zx.d(rcx_22)
                            
                            if (rbx_6 s>= rax_29)
                                int64_t r12_2 = sx.q(rax_29)
                                int32_t j_2 = rbx_6 - rax_29 + 1
                                int32_t rax_30 = r12_2.d + j_2
                                arg5[0x8f].d = rax_30
                                
                                if (rax_30 s> *(arg5 + 0x47c))
                                    sub_1405a4f90(&arg5[0x8e])
                                
                                int64_t* rax_33 = (r12_2 << 4) + arg5[0x8e]
                                
                                if (j_2 != 0)
                                    int32_t j
                                    
                                    do
                                        *rax_33 = 0
                                        rax_33[1] = 0
                                        rax_33 = &rax_33[2]
                                        j = j_2
                                        j_2 -= 1
                                    while (j != 1)
                                
                                r12_1 = var_138_1
                            
                            int64_t* rbx_10 = (zx.q(rcx_22) << 4) + arg5[0x8e]
                            int64_t r15_1 = sx.q(rbx_10[1].d)
                            int32_t rax_34 = (r15_1 + 1).d
                            rbx_10[1].d = rax_34
                            
                            if (rax_34 s> *(rbx_10 + 0xc))
                                sub_1405a4cf0(rbx_10)
                            
                            *(*rbx_10 + (r15_1 << 2)) = rax_15
                            int64_t r15_2 = sx.q(rbx_10[1].d)
                            int32_t rax_36 = (r15_2 + 1).d
                            rbx_10[1].d = rax_36
                            
                            if (rax_36 s> *(rbx_10 + 0xc))
                                sub_1405a4cf0(rbx_10)
                            
                            *(*rbx_10 + (r15_2 << 2)) = rax_18
                            int64_t r15_3 = sx.q(rbx_10[1].d)
                            int32_t rax_38 = (r15_3 + 1).d
                            rbx_10[1].d = rax_38
                            
                            if (rax_38 s> *(rbx_10 + 0xc))
                                sub_1405a4cf0(rbx_10)
                            
                            *(*rbx_10 + (r15_3 << 2)) = rax_21
                            r15 = arg3
                            rdx_5 = var_148_1
                    
                    i_1 = i_6 + 1
                    r10_1 = var_1c0.q
                    i_6 = i_1
                while (i_1 s< zx.d(*(r12_1 + r13_1 + 9)))
                
                r8 = zx.q(var_1c8)
                arg4 = var_150_1
            
            rdi_3 = r13
        
        r8 = zx.q(r8.d + 1)
        arg4 += 0x20
        rdx_5 = &rdx_5[1]
        var_1c8 = r8.d
        r13_1 += 0xc
        var_150_1 = arg4
        var_148_1 = rdx_5
    while (r8.d s< *(rdi_3 + 0x18))

int32_t i_2 = 0

if (*(rdi_3 + 0x34) s> 0)
    int64_t r12_3 = 0
    
    do
        void* rdi_9 = *(r15 + 0x48)
        void* rdi_10 = rdi_9 + r12_3
        
        if (rdi_9 != neg.q(r12_3))
            int64_t r8_2 = *(r15 + 0x18)
            int32_t* rbx_13 = (zx.q(*(rdi_10 + 0x24)) << 5) + *(r15 + 0x10)
            uint64_t rcx_28 = zx.q(rbx_13[1].w) * 3
            int32_t var_198_1 = (*(r8_2 + (rcx_28 << 2)) ^ 0x80000000).d
            uint64_t rdx_21 = zx.q(*(rbx_13 + 6)) * 3
            int32_t var_190_1 = (*(r8_2 + (rcx_28 << 2) + 4)).d
            float var_194_1 = (*(r8_2 + (rcx_28 << 2) + 8) ^ 0x80000000)[0]
            char var_180_1 = *(rbx_13 + 0x1f) & 0x3f
            int32_t var_188_1 = (*(r8_2 + (rdx_21 << 2) + 8) ^ 0x80000000).d
            int32_t var_184_1 = (*(r8_2 + (rdx_21 << 2) + 4)).d
            float var_18c_1 = (*(r8_2 + (rdx_21 << 2)) ^ 0x80000000)[0]
            uint8_t var_17f_1 = *(rdi_10 + 0x27) u>> 7
            char rax_45
            rax_45, r8, arg4 = sub_142689ba0(arg1[1], r15, rbx_13)
            char var_17e_1 = rax_45
            void* rbx_14 = &arg5[0x8c]
            int32_t var_17c_1 = (*(rdi_10 + 0x18)).d
            
            if ((rbx_13[7].w & arg7) == 0)
                rbx_14 = &arg5[0x8a]
            
            int64_t rdi_11 = sx.q(*(rbx_14 + 8))
            int32_t rax_47 = (rdi_11 + 1).d
            bool cond:3_1 = rax_47 s<= *(rbx_14 + 0xc)
            *(rbx_14 + 8) = rax_47
            
            if (not(cond:3_1))
                r8, arg4 = sub_1405c4ec0(rbx_14)
            
            int64_t rax_48 = *rbx_14
            int64_t rcx_31 = rdi_11 * 5
            *(rax_48 + (rcx_31 << 3)) = var_198_1.o
            *(rax_48 + (rcx_31 << 3) + 0x10) = var_188_1.o
            *(rax_48 + (rcx_31 << 3) + 0x20) = 0.q
        
        rdi_3 = r13
        i_2 += 1
        r12_3 += 0x28
    while (i_2 s< *(rdi_3 + 0x34))
    
    rsi = 0

int32_t i_3 = 0
int32_t i_5 = 0

if (*(rdi_3 + 0x38) s> 0)
    int64_t rdx_24 = 0
    int64_t var_150_2 = 0
    
    do
        void* r9_1 = *(r15 + 0x50)
        arg4 = r9_1 + rdx_24
        var_1c0.q = arg4
        
        if (r9_1 != neg.q(rdx_24))
            int32_t j_1 = 0
            
            if (*(arg4 + 0x3e) u> 0)
                int64_t r13_3 = sx.q(zx.d(*(arg4 + 0x3c)) + *(rdi_3 + 0x40)) << 5
                
                do
                    int64_t rdx_25 = *(r15 + 0x18)
                    int32_t* r8_5 = *(r15 + 0x10) + r13_3
                    char rbx_15 = *(r8_5 + 0x1f) & 0x3f
                    uint64_t rcx_32 = zx.q(r8_5[1].w) * 3
                    int32_t var_120_1 = (*(rdx_25 + (rcx_32 << 2) + 4)).d
                    int64_t var_128_1 = (_mm_unpacklo_ps(*(rdx_25 + (rcx_32 << 2)) ^ 0x80000000, 
                        (*(rdx_25 + (rcx_32 << 2) + 8) ^ 0x80000000).q)).q
                    uint64_t rcx_33 = zx.q(*(r8_5 + 6)) * 3
                    int32_t var_114_1 = (*(rdx_25 + (rcx_33 << 2) + 4)).d
                    int64_t var_11c_1 = (_mm_unpacklo_ps(*(rdx_25 + (rcx_33 << 2)) ^ 0x80000000, 
                        (*(rdx_25 + (rcx_33 << 2) + 8) ^ 0x80000000).q)).q
                    uint64_t rcx_34 = zx.q(r8_5[2].w) * 3
                    int32_t var_e8_1 = (*(rdx_25 + (rcx_34 << 2) + 4)).d
                    int64_t var_110_1 = (_mm_unpacklo_ps(*(rdx_25 + (rcx_34 << 2)) ^ 0x80000000, 
                        (*(rdx_25 + (rcx_34 << 2) + 8) ^ 0x80000000).q)).q
                    uint64_t rcx_35 = zx.q(*(r8_5 + 0xa)) * 3
                    int32_t var_fc_1 = (*(rdx_25 + (rcx_35 << 2) + 4)).d
                    uint8_t var_f7_1 = *(arg4 + 0x3f) u>> 7
                    int64_t var_104_1 = (_mm_unpacklo_ps(*(rdx_25 + (rcx_35 << 2)) ^ 0x80000000, 
                        (*(rdx_25 + (rcx_35 << 2) + 8) ^ 0x80000000).q)).q
                    char rax_61
                    rax_61, r8 = sub_142689ba0(arg1[1], r15, r8_5)
                    int64_t r15_4 = sx.q(arg5[0x93].d)
                    char var_f6_1 = rax_61
                    int32_t rax_62 = (r15_4 + 1).d
                    arg5[0x93].d = rax_62
                    
                    if (rax_62 s> *(arg5 + 0x49c))
                        sub_1407756d0(&arg5[0x92])
                    
                    int64_t rcx_38 = arg5[0x92]
                    uint128_t* rdx_28 = r15_4 * 0x34
                    void* rbx_19 = &arg5[(zx.q(rbx_15) + 0x4a) * 2]
                    *(rdx_28 + rcx_38) = var_128_1.o
                    *(rdx_28 + rcx_38 + 0x10) = var_11c_1:4.o
                    *(rdx_28 + rcx_38 + 0x20) = var_e8_1.o
                    *(rdx_28 + rcx_38 + 0x30) = rbx_15.d
                    int64_t rdi_12 = sx.q(*(rbx_19 + 8))
                    int32_t rax_64 = (rdi_12 + 1).d
                    *(rbx_19 + 8) = rax_64
                    
                    if (rax_64 s> *(rbx_19 + 0xc))
                        sub_1405a4cf0(rbx_19)
                    
                    j_1 += 1
                    arg4 = var_1c0.q
                    r13_3 += 0x20
                    *(*rbx_19 + (rdi_12 << 2)) = r15_4.d
                    r15 = arg3
                while (j_1 s< zx.d(*(arg4 + 0x3e)))
                
                i_3 = i_5
                rsi = 0
                rdx_24 = var_150_2
                rdi_3 = r13
        
        i_3 += 1
        rdx_24 += 0x40
        i_5 = i_3
        var_150_2 = rdx_24
    while (i_3 s< *(rdi_3 + 0x38))

if (*(rdi_3 + 0x70) s> 0)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    int128_t* r12_4 = nullptr
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    
    while (true)
        int64_t r13_4 = *(r15 + 0x70)
        int32_t i_4 = *(r12_4 + r13_4 + 0xc)
        
        if (i_4 != 0xffffffff)
            int64_t* rdi_13 = arg1
            
            do
                int64_t* rbx_23 = ((sx.q(i_4) - -0x80000000) << 4) + *(arg3 + 0x98)
                i_4 = rbx_23[1].d
                int32_t* rax_68
                rax_68, arg4 = sub_142610f00(rdi_13[1], *rbx_23)
                
                if (rax_68 != 0)
                    arg4 = rdi_13[1]
                    zmm8 = *(r12_4 + r13_4) ^ 0x80000000
                    uint128_t zmm0 = *(r12_4 + r13_4 + 4)
                    zmm9 = *(r12_4 + r13_4 + 8) ^ 0x80000000
                    char r10_2 = (*(arg4 + 0xa0)).b
                    int32_t var_198_2 = zmm8.d
                    int32_t rdx_33 = ((1 << r10_2).d - 1) & *rbx_23
                    int32_t var_194_2 = zmm9.d
                    int32_t var_190_3 = zmm0.d
                    int64_t rcx_42 = sx.q(rdx_33) * 5
                    int64_t rax_70 = *(rax_68 + 0x70)
                    zmm10 = *(rax_70 + (rcx_42 << 2)) ^ 0x80000000
                    int128_t zmm2 = *(rax_70 + (rcx_42 << 2) + 4)
                    zmm11 = *(rax_70 + (rcx_42 << 2) + 8) ^ 0x80000000
                    int32_t var_18c_2 = zmm10.d
                    float var_188_2 = zmm11[0]
                    int32_t var_184_2 = zmm2.d
                    
                    if (rdx_33 s> rsi
                            || arg6 s> (((1 << (*(arg4 + 0x9c)).b).d - 1) & (*rbx_23 u>> r10_2).d))
                        zmm2.d = zmm2.d f- zmm0.d
                        zmm7 = zmm11
                        zmm6.d = zmm10.d f- zmm8.d
                        zmm7[0] = zmm7[0] f- zmm9.d
                        zmm2.d = zmm2.d f* zmm2.d
                        zmm7[0] = zmm7[0] * zmm7[0]
                        zmm0.d = zmm6.d f* zmm6.d
                        zmm7[0] = zmm7[0] f+ zmm0.d
                        zmm7[0] = zmm7[0] f+ zmm2.d
                        
                        if (not(zmm7[0] == 1f))
                            if (zmm7[0] >= 9.99999994e-09f)
                                float zmm3[0x4] = zx.o(0)
                                zmm3[0] = zmm7.d
                                float zmm5[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                                zmm3[0] = zmm3[0] * 0.5f
                                zmm0.d = zmm5.d f* zmm5[0]
                                zmm3[0] = zmm3[0] f* zmm0.d
                                zmm2.d = 0.5f - zmm3[0]
                                zmm0.d = zmm5.d f* zmm2.d
                                zmm5[0] = zmm5[0] f+ zmm0.d
                                zmm5[0] = zmm5[0] * zmm5[0]
                                zmm3[0] = zmm3[0] * zmm5[0]
                                zmm0.d = zmm5.d f* (0.5f - zmm3[0])
                                zmm5[0] = zmm5[0] f+ zmm0.d
                                zmm6.d = zmm6.d f* zmm5[0]
                                zmm7[0] = zmm7[0] * zmm5[0]
                            else
                                zmm6 = data_143dbb1f8
                                zmm7 = data_143dbb1fc
                        
                        zmm7[0] = zmm7[0] * 40f
                        zmm6.d = zmm6.d f* -40f
                        zmm7[0] = zmm7[0] f+ zmm10.d
                        zmm0.d = zmm7.d f+ zmm8.d
                        float var_18c_3 = zmm7[0]
                        var_198_2 = zmm0.d
                        zmm0.d = zmm6.d f+ zmm9.d
                        zmm6.d = zmm6.d f+ zmm11[0]
                        int32_t var_194_3 = zmm0.d
                        var_188_2 = zmm6.d
                    
                    int64_t rdi_14 = sx.q(arg5[0x91].d)
                    int32_t rax_73 = (rdi_14 + 1).d
                    arg5[0x91].d = rax_73
                    
                    if (rax_73 s> *(arg5 + 0x48c))
                        r8, arg4 = sub_1405a4df0(&arg5[0x90])
                    
                    int64_t rax_74 = arg5[0x90]
                    int64_t rcx_46 = rdi_14 * 3
                    rdi_13 = arg1
                    *(rax_74 + (rcx_46 << 3)) = var_198_2.o
                    *(rax_74 + (rcx_46 << 3) + 0x10) = var_188_2.q
            while (i_4 != 0xffffffff)
            
            rdi_3 = r13
        
        rsi += 1
        r12_4 += 0x14
        
        if (rsi s>= *(rdi_3 + 0x70))
            break
        
        r15 = arg3

int32_t rcx_47 = arg5[0x114].d
int32_t rdx_40 = rcx_47 << 0x1f s>> 0x1f
int32_t rcx_49 = rcx_47 << 0x1e s>> 0x1f

if (rdx_40 != 0 || rcx_49 != 0)
    arg4.b = rcx_49 != 0
    r8.b = rdx_40 != 0
    sub_142684ab0(arg1, arg3, r8.b, arg4.d, &arg5[0x86], &arg5[0x88])

return zx.q(*(rdi_3 + 0x28) + *(rdi_3 + 0x1c))

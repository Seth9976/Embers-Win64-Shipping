// 函数: sub_1421b93f0
// 地址: 0x1421b93f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int32_t arg_8 = 0
int32_t rsi = 0
int32_t r15 = arg1[0x22].d
void* r8 = arg1[2]
void* r14 = **(r8 + 0x40)
arg1[0x34] = *(*(r14 + 0x30) + 0x30)

if (r15 == 0)
    int32_t rcx_4 = ((zx.d(*(r8 + 0x37)) << 5 ^ arg1[0x1c].d) & 0x40) ^ arg1[0x1c].d
    arg1[0x1c].d = rcx_4
    int64_t rcx_5 = arg1[0x20]
    arg1[0x1c].d = ((zx.d(*(r8 + 0x37)) << 7 ^ rcx_4) & 0x200) ^ rcx_4
    *(arg1 + 0xe4) = *(r8 + 0x36)
    *(arg1 + 0x3c) = *(r8 + 0x160)
    arg1[8].d = *(r8 + 0x164)
    *(arg1 + 0x44) = *(r8 + 0x168)
    *(arg1 + 0x4c) = *(r8 + 0x16c)
    arg1[0x22].d = *(r8 + 0x170)
    *(arg1 + 0x1b4) = *(r8 + 0x178)
    arg1[6].d = *(r8 + 0x180)
    *(arg1 + 0x34) = *(r8 + 0x184)
    int32_t rax_15
    
    if (rcx_5 != 0)
        rax_15 = arg1[0x21].d
    
    if (rcx_5 == 0 || *(r8 + 0x174) s> rax_15)
        int64_t rax_16 = sub_140a84c80(rcx_5, sx.q(*(r8 + 0x174)), 0)
        rcx_5 = rax_16
        arg1[0x20] = rax_16
        rax_15 = *(arg1[2] + 0x174)
        arg1[0x21].d = rax_15
    
    memset(rcx_5, 0, sx.q(rax_15))
    void* rax_18 = arg1[2]
    int64_t arg_18 = 0
    int64_t* r13_1 = *(rax_18 + 0x190)
    uint64_t rcx_7 = sx.q(*(rax_18 + 0x198)) << 3 u>> 3
    
    if (r13_1 u> &r13_1[sx.q(*(rax_18 + 0x198))])
        rcx_7 = 0
    
    if (rcx_7 != 0)
        int64_t rcx_12
        
        do
            int64_t r12_1 = arg1[0x20]
            int64_t* r15_1 = *r13_1
            int32_t* rax_23
            
            if (r12_1 != 0)
                void* r14_1 = arg1[2]
                sub_140865c40(r14_1 + 0xb0, &arg_8, r15_1)
                int64_t rax_21 = sx.q(arg_8)
                void* const rcx_9
                
                if (rax_21.d == 0xffffffff)
                    rcx_9 = nullptr
                else
                    rcx_9 = *(r14_1 + 0xb0) + rax_21 * 0x18
                
                rax_23 = rcx_9 + 8
                
                if (rcx_9 == 0)
                    rax_23 = nullptr
            
            int64_t r8_4
            
            if (r12_1 == 0 || rax_23 == 0)
                r8_4 = 0
            else
                r8_4 = zx.q(*rax_23) + r12_1
            
            (*(*r15_1 + 0x290))(r15_1, arg1, r8_4)
            r13_1 = &r13_1[1]
            rcx_12 = arg_18 + 1
            arg_18 = rcx_12
        while (rcx_12 != rcx_7)
    
    void* rax_25 = arg1[2]
    int64_t* i = *(rax_25 + 0x1a0)
    
    for (uint64_t rax_28 = &i[sx.q(*(rax_25 + 0x1a8))]; i != rax_28; i = &i[1])
        int64_t r12_2 = arg1[0x20]
        int64_t* r15_2 = *i
        int32_t* rax_31
        
        if (r12_2 != 0)
            void* r14_2 = arg1[2]
            sub_140865c40(r14_2 + 0x100, &arg_8, r15_2)
            int64_t rax_29 = sx.q(arg_8)
            void* const rcx_14
            
            if (rax_29.d == 0xffffffff)
                rcx_14 = nullptr
            else
                rcx_14 = *(r14_2 + 0x100) + rax_29 * 0x18
            
            rax_31 = rcx_14 + 8
            
            if (rcx_14 == 0)
                rax_31 = nullptr
        
        int64_t r14_4
        
        if (r12_2 == 0 || rax_31 == 0)
            r14_4 = 0
        else
            r14_4 = zx.q(*rax_31) + r12_2
        
        int64_t* rax_33 = (*(*r15_2 + 0x330))(r15_2)
        uint64_t var_78
        int64_t var_58
        int64_t* r9_1
        
        if (rax_33 == 0)
            int64_t var_68
            r9_1 = &var_68
            var_68 = 0
            rsi |= 2
            var_58 = 0
            int64_t var_50_1 = 0
            char var_60 = (var_60 & 0xf4) | 4
        else
            rsi |= 1
            int64_t r12_3 = sx.q(rax_33[3].d)
            char rdx_7 = rax_33[1].b
            int64_t rax_34 = rax_33[2]
            int64_t var_88 = *rax_33
            var_78 = 0
            int32_t var_70_1 = r12_3.d
            char var_80 = var_80 ^ ((rdx_7 ^ var_80) & 0xf)
            
            if (r12_3.d != 0)
                sub_140638750(&var_78, r12_3.d, 0)
                memcpy(var_78, rax_34, (r12_3 << 2).d)
                r9_1 = &var_88
            else
                int32_t var_6c_1 = 0
                r9_1 = &var_88
        
        (*(*r15_2 + 0x328))(r15_2, arg1, r14_4, r9_1, r14)
        
        if ((rsi.b & 2) != 0)
            rsi &= 0xfffffffd
            
            if (var_58 != 0)
                sub_140a74f90(var_58)
        
        if ((rsi.b & 1) != 0)
            uint64_t rcx_22 = var_78
            rsi &= 0xfffffffe
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
    
    *(arg1 + 0x10c) = arg1[0x22].d
    int32_t rax_39 = (*(*arg1 + 0x78))(arg1)
    int32_t rdx_14 = (arg1[0x22].d + 0xf + rax_39) & 0xfffffff0
    arg1[0x22].d = rdx_14
    *(arg1 + 0x114) = (*(*arg1 + 0x88))(arg1, rdx_14)

(*(*arg1 + 0x160))(arg1, arg1[2] + 0x150)
*(arg1 + 0x124) = 0
*(arg1 + 0x12c) = 0
*(arg1 + 0x11c) = 0
sub_1421d1290(arg1)
float zmm2[0x4] = *(arg1[3] + 0x1d0)
int32_t var_90 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
uint128_t zmm0_1 = _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)
arg1[0xa] = zmm0_1.q
*(arg1 + 0x134) = zmm0_1.q
arg1[0xb].d = var_90
*(arg1 + 0x13c) = var_90
arg1[0x33] = 0

if (arg1[0x1e] == 0)
    arg1[0x24].d = 0
    arg1[0x23].d = 0

*(arg1 + 0x14c) = data_143dbb1f8.q
int32_t rax_45 = data_143dbb200
*(arg1 + 0x154) = rax_45
arg1[0x28] = *(arg1 + 0x14c)
arg1[0x29].d = rax_45
arg1[0x2b].b = 0
void* rcx_27 = *(r14 + 0x30)
int32_t rax_46 = *(rcx_27 + 0xbc)
float zmm1[0x4]

if (rax_46 != 0)
    zmm1 = 0x3f7d70a4
    zmm1[0] = 0.99000001f f/ _mm_cvtepi32_ps(zx.o(rax_46 + 1)).d
else
    zmm1 = 0x3f800000

*(rcx_27 + 0xb8) = zmm1[0]

if (r15 == 0)
    void* rcx_28 = arg1[3]
    void* rax_48 = *(rcx_28 + 0xa8)
    int64_t r8_9
    
    if (rax_48 == 0)
        rax_48, r8_9 = sub_141ee69e0(rcx_28)
    
    if (sub_14243ade0(rax_48) == 1)
        void* rax_50 = arg1[2]
        
        if (not(zx.o(0).d f>= *(rax_50 + 0x58)))
            int32_t rcx_30 = *(r14 + 0xb4)
            
            if (rcx_30 s> 0 || *(rax_50 + 0x54) s> 0)
                int32_t r8_10 = *(rax_50 + 0x54)
                uint64_t rdx_17 = 0x64
                
                if (r8_10 s<= 0)
                    if (rcx_30 s<= 0x64)
                        rdx_17 = zx.q(rcx_30)
                else if (r8_10 s<= 0x64)
                    rdx_17 = zx.q(r8_10)
                
                r8_10.b = 1
                (*(*arg1 + 0x18))(arg1, rdx_17, r8_10)
            else
                r8_9.b = 1
                (*(*arg1 + 0x18))(arg1, 0xa, r8_9)

arg1[0x2e].d = 0

if (r15 == 0)
    int32_t rdx_21 = ((zx.d(*(*(r14 + 0x30) + 0x59)) ^ arg1[0x1c].d) & 2) ^ arg1[0x1c].d
    arg1[0x1c].d = rdx_21
    void* rdx_22 = arg1[2]
    arg1[0x1c].d = ((zx.d(*(*(r14 + 0x30) + 0x59)) ^ rdx_21) & 4) ^ rdx_21
    int32_t rax_56 = arg1[0x2d].d
    arg1[0x1d].d = zx.d(*(*(r14 + 0x30) + 0x5a))
    int32_t r14_5 = *(rdx_22 + 0x48)
    
    if (rax_56 s< r14_5)
        int32_t r14_6 = r14_5 - rax_56
        int64_t r15_3 = sx.q(rax_56)
        int32_t rax_57 = r14_6 + r15_3.d
        arg1[0x2d].d = rax_57
        
        if (rax_57 s> *(arg1 + 0x16c))
            sub_1405a4f90(&arg1[0x2c])
        
        memset((r15_3 << 4) + arg1[0x2c], 0, sx.q(r14_6) << 4)
        rdx_22 = arg1[2]
    
    if (*(rdx_22 + 0x48) s> 0)
        int64_t r12_4 = 0
        int64_t r13_2 = 0
        
        do
            int64_t* rsi_2 = arg1[0x2c] + r13_2
            int64_t r14_7 = sx.q(rsi_2[1].d)
            int32_t rcx_43 = *(*(*(*(rdx_22 + 0x40) + r12_4) + 0x50) + 0xa8)
            
            if (r14_7.d s< rcx_43)
                rsi_2[1].d = rcx_43
                
                if (rcx_43 s> *(rsi_2 + 0xc))
                    sub_140679a80(rsi_2)
                
                memset(r14_7 + *rsi_2, 0, sx.q(rcx_43 - r14_7.d))
                rdx_22 = arg1[2]
            
            i_1 += 1
            r13_2 += 0x10
            r12_4 += 8
        while (i_1 s< *(rdx_22 + 0x48))

int64_t result = (*(*arg1 + 0x90))(arg1)
*(arg1 + 0x174) = 1
*(arg1 + 0x194) = 0
return result

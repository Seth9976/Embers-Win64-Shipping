// 函数: sub_141c51f10
// 地址: 0x141c51f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int128_t* r12_1 = sx.q(arg1[1].d) * 0x3f0 + *(*arg1 + 0xc8)
int64_t* rcx = arg1[3]
int128_t* var_268 = r12_1
int64_t var_250 = arg1[2]
int64_t* var_248 = rcx

if (rcx != 0)
    rcx[1].d += 1
    rcx = var_248

if (&var_250 != r12_1)
    int128_t zmm1 = var_250.o
    int128_t var_148_1 = zmm1
    var_250.o = *r12_1
    rcx = var_248
    *r12_1 = zmm1

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**var_248)(var_248)
        int32_t rax_7 = *(var_248 + 0xc)
        *(var_248 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*var_248 + 8))(var_248, 1)

sub_141c60780(*r12_1)
sub_141c656f0(*r12_1)
*(r12_1 + 0x3d1) &= 0xcf
r12_1[0x3d].b &= 0xc7
r12_1[0x3d].b |= 0x84
char rax_9 = *(r12_1 + 0x3d1)
uint8_t rcx_5 = ((arg1[0x1a].b u>> 1 ^ rax_9) & 1) ^ rax_9
*(r12_1 + 0x3d1) = rcx_5
uint8_t rax_10 = ((arg1[0x1a].b u>> 1 ^ rcx_5) & 2) ^ rcx_5
*(r12_1 + 0x3d1) = rax_10
*(r12_1 + 0x3d1) = ((arg1[0x1a].b << 2 ^ rax_10) & 0x7f) ^ arg1[0x1a].b << 2
*(r12_1 + 0x3d2) ^= (arg1[0x1a].b u>> 6 ^ *(r12_1 + 0x3d2)) & 1
char rcx_7 = *(r12_1 + 0x3d2)
r12_1[0x3e].q = arg1[0x19]
*(r12_1 + 0x3d2) = ((arg1[0x1a].b u>> 6 ^ rcx_7) & 1) ^ rcx_7
int64_t* rcx_8 = arg1[4]
r12_1[1].q = rcx_8
(**rcx_8)()
*(r12_1 + 0x3d4) = arg1[0x10].d
*(r12_1 + 0x3dc) = *(arg1 + 0x84)
sub_141c3af30(&r12_1[0x12], _mm_cvtepi32_ps(zx.o(*(*(*arg1 + 0x28) + 0xc))).d, arg1[0x10].d)
sub_141c3ae10(&r12_1[0x16], _mm_cvtepi32_ps(zx.o(*(*(*arg1 + 0x28) + 0xc))).d, arg1[0x10].d)
void* rcx_13 = *arg1
int32_t r14 = 2
char var_290 = 1
int32_t var_218 = 2
int32_t var_298 = 2
*(rcx_13 + 0x1b0)
void** var_170
void*** rax_24
int128_t zmm6
rax_24, zmm6 = sub_141c2e370(&var_170, 
    _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(*(*(rcx_13 + 0x28) + 0xc)), *(rcx_13 + 0x1b0)))), 
    arg1[0x11].d, *(arg1 + 0x8c), var_298)
*(r12_1 + 0x2a8) = rax_24[1].d
*(r12_1 + 0x2ac) = *(rax_24 + 0xc)
r12_1[0x2b].d = rax_24[2].d
*(r12_1 + 0x2b4) = *(rax_24 + 0x14)
*(r12_1 + 0x2b8) = rax_24[3].d
*(r12_1 + 0x2bc) = *(rax_24 + 0x1c)
r12_1[0x2c].d = rax_24[4].d
*(r12_1 + 0x2c4) = *(rax_24 + 0x24)
sub_141c31b70(&var_170)

if ((arg1[0x1a].b & 2) != 0)
    int64_t* rcx_23 = *(*arg1 + 0x30)
    (*(*rcx_23 + 0x40))(rcx_23, zx.q(arg1[1].d), &arg1[0x18], arg1[0x14])

int64_t rdx_3 = arg1[0x15]

if (rdx_3 != 0)
    var_298.q = rdx_3
    int64_t* rcx_25 = *(*(*arg1 + 0x28) + 0x50)
    (*(*rcx_25 + 0x18))(rcx_25, zx.q(arg1[1].d), &arg1[0x18], zx.q(arg1[0x10].d), var_298, var_290)
    *(r12_1 + 0x3d1) |= 4

int64_t rdx_5 = arg1[0x16]

if (rdx_5 != 0)
    var_298.q = rdx_5
    int64_t* rcx_27 = *(*(*arg1 + 0x28) + 0x40)
    (*(*rcx_27 + 0x20))(rcx_27, zx.q(arg1[1].d), &arg1[0x18], zx.q(arg1[0x10].d), var_298, var_290)
    *(r12_1 + 0x3d1) |= 8

*(r12_1 + 0x1c8) = 1
int32_t i_8 = arg1[0x10].d

if (i_8 s<= 2)
    char rax_32 = arg1[0x1a].b
    int64_t var_200 = 0
    int64_t var_1f8_1 = (zx.o(0)).q
    *(r12_1 + 0x1c8) = not.b(rax_32) & 1
    void* rcx_28 = *arg1
    int32_t var_1f0_1 = 0xffffffff
    int128_t var_38_1 = zmm6
    var_200:4.d = arg1[0x10].d
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(*(*(rcx_28 + 0x28) + 0xc)))
    var_200.d = zmm0_1.d
    int64_t* rcx_29 = *(rcx_28 + 0x28)
    (*(*rcx_29 + 0xc8))(rcx_29)
    r12_1[0x1a].d = arg1[0xc].d
    uint64_t var_1f8_2 = zmm0_1.q
    sub_141c56900(*arg1, arg1[1].d, &var_200, &arg1[0xd])
    *(r12_1 + 0x3d1) ^= (arg1[0x1a].b << 2 ^ *(r12_1 + 0x3d1)) & 0x40
    int32_t rax_38 = arg1[0xb].d
    
    if (rax_38 != 0xffffffff)
        *(r12_1 + 0xb8) = rax_38
        int32_t zmm1_3 = *(arg1 + 0x5c)
        
        if (not(zmm1_3 f== 0f))
            uint128_t zmm0_2
            zmm0_2.d = _mm_cvtepi32_ps(zx.o(*(*(*arg1 + 0x28) + 0xc))).d f* zmm1_3
            r12_1[0xc].q = int.q(zmm0_2.d)
        
        void* r10_1 = *arg1
        int32_t* rcx_37
        
        if (*(r10_1 + 0xf0) == *(r10_1 + 0x11c))
        label_141c523fa:
            rcx_37 = nullptr
        else
            void* r8_6 = r10_1 + 0x120
            void* rdx_8 = *(r8_6 + 8)
            int64_t r9_5 = sx.q(arg1[0xb].d)
            
            if (rdx_8 != 0)
                r8_6 = rdx_8
            
            int32_t rax_42 = *(r8_6 + (((sx.q(*(r10_1 + 0x130)) - 1) & r9_5) << 2))
            
            if (rax_42 == 0xffffffff)
            label_141c523fa_1:
                rcx_37 = nullptr
            else
                while (true)
                    rcx_37 = sx.q(rax_42) * 0x78 + *(r10_1 + 0xe8)
                    
                    if (*rcx_37 == r9_5.d)
                        break
                    
                    rax_42 = rcx_37[0x1c]
                    
                    if (rax_42 == 0xffffffff)
                        goto label_141c523fa_2
                
                if (rax_42 == 0xffffffff)
                label_141c523fa_2:
                    rcx_37 = nullptr
        
        int32_t r8_8 = arg1[0x10].d
        void* rax_43 = &rcx_37[2]
        
        if (rcx_37 == 0)
            rax_43 = nullptr
        
        if (rax_43 == 0)
            void var_c8
            sub_141c4d870(&var_c8, r10_1, r8_8, *(r10_1 + 0x1b0))
            sub_141c55ed0(&var_c8, arg1[1].d, arg1[0x10].d)
            sub_141c4c660(*arg1 + 0xe8, &arg1[0xb])
            sub_141c50bb0(&var_c8)
        else
            sub_141c55ed0(rax_43, arg1[1].d, r8_8)
    
    void* r15_1 = &r12_1[0xd]
    int32_t i = 0
    int64_t rax_45 = arg1 - r12_1
    int32_t i_4 = 0
    int64_t var_260_1 = rax_45
    
    do
        void* rsi_1 = *(rax_45 + r15_1 - 0x98)
        void* rax_47 = rsi_1 + (sx.q(*(rax_45 + r15_1 - 0x90)) << 3)
        
        if (rsi_1 != rax_47)
            uint64_t r12_3 = zx.q(i.b) << 4
            
            do
                void* r10_2 = *arg1
                zmm6 = *(rsi_1 + 4)
                int32_t j = arg1[1].d
                int32_t var_26c_1 = zmm6.d
                int32_t* rcx_49
                
                if (*(r10_2 + 0xf0) == *(r10_2 + 0x11c))
                label_141c5254e:
                    rcx_49 = nullptr
                else
                    void* r8_10 = r10_2 + 0x120
                    void* rdx_13 = *(r8_10 + 8)
                    int64_t r9_7 = sx.q(*rsi_1)
                    
                    if (rdx_13 != 0)
                        r8_10 = rdx_13
                    
                    int32_t rax_49 = *(r8_10 + (((sx.q(*(r10_2 + 0x130)) - 1) & r9_7) << 2))
                    
                    if (rax_49 == 0xffffffff)
                    label_141c5254e_1:
                        rcx_49 = nullptr
                    else
                        while (true)
                            rcx_49 = sx.q(rax_49) * 0x78 + *(r10_2 + 0xe8)
                            
                            if (*rcx_49 == r9_7.d)
                                break
                            
                            rax_49 = rcx_49[0x1c]
                            
                            if (rax_49 == 0xffffffff)
                                goto label_141c5254e_2
                        
                        if (rax_49 == 0xffffffff)
                        label_141c5254e_2:
                            rcx_49 = nullptr
                
                void* rax_50 = &rcx_49[2]
                
                if (rcx_49 == 0)
                    rax_50 = nullptr
                
                if (rax_50 == 0)
                    int64_t var_138
                    sub_141c4d870(&var_138, r10_2, arg1[0x10].d, *(r10_2 + 0x1b0))
                    void var_128
                    void* rdi_1 = &var_128 + r12_3
                    int32_t* rax_54 = *rdi_1
                    int64_t rdx_16 = sx.q(*(rdi_1 + 8))
                    void* rcx_54 = &rax_54[rdx_16 * 2]
                    
                    if (rax_54 == rcx_54)
                    label_141c52614:
                        int32_t rax_55 = (rdx_16 + 1).d
                        *(rdi_1 + 8) = rax_55
                        
                        if (rax_55 s> *(rdi_1 + 0xc))
                            sub_1405a4d70(rdi_1)
                        
                        *(*rdi_1 + (rdx_16 << 3)) = j.q
                    else
                        while (*rax_54 != j)
                            rax_54 = &rax_54[2]
                            
                            if (rax_54 == rcx_54)
                                goto label_141c52614
                        
                        rax_54[1] = zmm6.d
                    
                    sub_141c4c660(*arg1 + 0xe8, rsi_1)
                    r14 = 2
                    void var_e8
                    void* rdi_2 = &var_e8
                    
                    for (int64_t j_1 = 2; j_1 != 0; )
                        int64_t rcx_59 = *(rdi_2 - 0x10)
                        rdi_2 -= 0x10
                        j_1 -= 1
                        
                        if (rcx_59 != 0)
                            sub_140a74f90(rcx_59)
                    
                    int64_t j_2 = 2
                    void var_108
                    void* rdi_3 = &var_108
                    
                    do
                        int64_t rcx_60 = *(rdi_3 - 0x10)
                        rdi_3 -= 0x10
                        j_2 -= 1
                        
                        if (rcx_60 != 0)
                            sub_140a74f90(rcx_60)
                    while (j_2 != 0)
                    
                    int64_t rcx_61 = var_138
                    
                    if (rcx_61 != 0)
                        sub_140a74f90(rcx_61)
                else
                    int64_t rdx_14 = sx.q(*(r12_3 + rax_50 + 0x18))
                    void* rdi = r12_3 + rax_50
                    int32_t* rax_51 = *(r12_3 + rax_50 + 0x10)
                    void* rcx_50 = &rax_51[rdx_14 * 2]
                    
                    if (rax_51 == rcx_50)
                    label_141c5258d:
                        int32_t rax_52 = (rdx_14 + 1).d
                        *(rdi + 0x18) = rax_52
                        
                        if (rax_52 s> *(rdi + 0x1c))
                            sub_1405a4d70(rdi + 0x10)
                        
                        *(*(rdi + 0x10) + (rdx_14 << 3)) = j.q
                        r14 = 2
                    else
                        while (*rax_51 != j)
                            rax_51 = &rax_51[2]
                            
                            if (rax_51 == rcx_50)
                                goto label_141c5258d
                        
                        rax_51[1] = zmm6.d
                        r14 = 2
                
                int64_t rbx_2 = sx.q(*r15_1)
                int32_t rax_57 = (rbx_2 + 1).d
                *r15_1 = rax_57
                
                if (rax_57 s> *(r15_1 + 4))
                    sub_1405a4cf0(r15_1 - 8)
                
                int32_t rax_58 = *rsi_1
                rsi_1 += 8
                *(*(r15_1 - 8) + (rbx_2 << 2)) = rax_58
            while (rsi_1 != rax_47)
            
            i = i_4
        
        rax_45 = var_260_1
        i += 1
        r15_1 += 0x10
        i_4 = i
    while (i s< 2)
    
    i_8 = arg1[0x10].d
    r12_1 = var_268

*(r12_1 + 0x78) = 0

if (*(r12_1 + 0x7c) != i_8)
    sub_1405dadb0(&r12_1[7], i_8)

if (i_8 s> 0)
    uint64_t i_6 = zx.q(i_8)
    uint64_t i_1
    
    do
        int64_t rdi_4 = sx.q(*(r12_1 + 0x78))
        int32_t rax_59 = (rdi_4 + 1).d
        *(r12_1 + 0x78) = rax_59
        
        if (rax_59 s> *(r12_1 + 0x7c))
            sub_1406105e0(&r12_1[7])
        
        int32_t* rdx_21 = r12_1[7].q + (rdi_4 << 2)
        
        if (rdx_21 != 0)
            *rdx_21 = 0
        
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)

uint64_t i_9 = zx.q(arg1[0x10].d)
*(r12_1 + 0x88) = 0

if (*(r12_1 + 0x8c) != i_9.d)
    sub_1405dadb0(&r12_1[8], i_9.d)

if (i_9.d s> 0)
    uint64_t i_7 = i_9
    uint64_t i_2
    
    do
        int64_t rdi_5 = sx.q(*(r12_1 + 0x88))
        int32_t rax_61 = (rdi_5 + 1).d
        *(r12_1 + 0x88) = rax_61
        
        if (rax_61 s> *(r12_1 + 0x8c))
            sub_1406105e0(&r12_1[8])
        
        int32_t* rdx_24 = r12_1[8].q + (rdi_5 << 2)
        
        if (rdx_24 != 0)
            *rdx_24 = 0
        
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)

*(*(*arg1 + 0x40) + (sx.q(arg1[1].d) << 3)) = arg1[0xf]
char rax_65 = *(r12_1 + 0x3d1)

if ((rax_65 & 1) == 0 || (rax_65 & 2) != 0)
    r14 = *(r12_1 + 0x3d4)
    var_218 = r14

void* rsi_2 = *arg1
void* rbx_4 = *(rsi_2 + 0xd8)
int32_t r8_13 = *(*(rsi_2 + 0x28) + 0x958)
int64_t rdi_6 = sx.q(arg1[1].d) * 0x2f0
int32_t r9_9 = *(rdi_6 + rbx_4 + 0x2dc)
*(rdi_6 + rbx_4 + 0x270) = 0
*(rdi_6 + rbx_4 + 0x2e0) = r8_13
*(rdi_6 + rbx_4 + 0x2d8) = r14
*(rdi_6 + rbx_4 + 0x40) = 0
sub_141c6cf20(rbx_4 + 0x50 + rdi_6, r14, r8_13, r9_9)
uint64_t result = sub_141c6ccd0(rbx_4 + 0x278 + rdi_6)
int64_t* rcx_73 = *(rdi_6 + rbx_4 + 0x2e8)

if (rcx_73 != 0)
    *(rdi_6 + rbx_4 + 0x2e8) = 0
    result = (**rcx_73)(rcx_73, 1)

*(rdi_6 + rbx_4 + 0x2e4) |= 1
*(rdi_6 + rbx_4 + 0x10) = data_14399f720
void* rbx_5 = *(rsi_2 + 0xd8)

if ((*(r12_1 + 0x3d2) & 1) != 0)
    int64_t* var_1e0
    result = sub_141c4bd70(&var_1e0, *(*arg1 + 0x28))
    int64_t* r8_15 = rbx_5 + 0x2e8 + rdi_6
    
    if (r8_15 != result)
        int64_t* rcx_75 = *r8_15
        *r8_15 = *result
        *result = 0
        
        if (rcx_75 != 0)
            result = (**rcx_75)(rcx_75, 1, r8_15)
    
    int64_t* rcx_76 = var_1e0
    
    if (rcx_76 != 0)
        result = (**rcx_76)(rcx_76, 1)

int32_t i_3 = 0
int32_t i_5 = 0

if (arg1[6].d s> 0)
    int64_t* rdi_7 = nullptr
    int32_t var_270
    var_270.q = 0
    
    do
        int64_t rbx_6 = arg1[5]
        int64_t* r15_2 = *(rdi_7 + rbx_6 + 8)
        
        if (r15_2 != 0)
            result = 0
            bool z_1
            
            if (0 == r15_2[1].d)
                r15_2[1].d = 0
                z_1 = true
            else
                result = zx.q(r15_2[1].d)
                z_1 = false
            
            if (not(z_1))
                bool z_3
                
                do
                    bool z_2
                    
                    if (result.d == r15_2[1].d)
                        r15_2[1].d = (result + 1).d
                        z_2 = true
                    else
                        result = zx.q(r15_2[1].d)
                        z_2 = false
                    
                    if (z_2)
                        if (r15_2 != 0)
                            void* rsi_3 = *(rdi_7 + rbx_6)
                            
                            if (rsi_3 != 0)
                                int64_t r12_4 = sx.q(r12_1[0xb].d)
                                int32_t rax_71 = (r12_4 + 1).d
                                r12_1[0xb].d = rax_71
                                
                                if (rax_71 s> *(r12_1 + 0xb4))
                                    sub_1405c4e40(r12_1 + 0xa8)
                                
                                int64_t* rcx_81 = (r12_4 << 5) + *(r12_1 + 0xa8)
                                *rcx_81 = *(rdi_7 + rbx_6)
                                void* rax_73 = *(rdi_7 + rbx_6 + 8)
                                rcx_81[1] = rax_73
                                
                                if (rax_73 != 0)
                                    *(rax_73 + 0xc) += 1
                                
                                rcx_81[2].d = *(rdi_7 + rbx_6 + 0x10)
                                *(rcx_81 + 0x14) = *(rdi_7 + rbx_6 + 0x14)
                                rcx_81[3] = *(rdi_7 + rbx_6 + 0x18)
                                uint128_t zmm0_3 = *(rdi_7 + rbx_6 + 0x10)
                                int64_t var_1d8 = arg1[0xf]
                                int64_t* var_1b0 = &var_1d8
                                int32_t var_228
                                int32_t* var_1a8_1 = &var_228
                                var_228 = zmm0_3.d
                                void var_1e8
                                sub_141c4cc90(rsi_3 + 0x90, &var_1e8, &var_1b0, nullptr)
                                int64_t* rcx_83 = *(rsi_3 + 0x130)
                                
                                if (rcx_83 == 0)
                                    *(rdi_6 + rbx_5 + 0x270) = 1
                                else
                                    int64_t* rbx_7 = *(rsi_3 + 0x180)
                                    void var_1a0
                                    int64_t var_210 = *(*(*rcx_83 + 8))(rcx_83, &var_1a0)
                                    int32_t rax_81 = (*(*rbx_7 + 8))(rbx_7)
                                    int32_t rdx_34 = var_210:4.d
                                    int32_t var_208_1 = rax_81
                                    int32_t r9_12 = (rax_81 - rdx_34) ^ rdx_34 u>> 0xd
                                    int32_t r8_19 = (0x9e3779b9 - r9_12 - rdx_34) ^ r9_12 << 8
                                    int32_t rdx_37 = (rdx_34 - r8_19 - r9_12) ^ r8_19 u>> 0xd
                                    int32_t r9_15 = (r9_12 - r8_19 - rdx_37) ^ rdx_37 u>> 0xc
                                    int32_t r8_22 = (r8_19 - r9_15 - rdx_37) ^ r9_15 << 0x10
                                    int32_t rdx_40 = (rdx_37 - r8_22 - r9_15) ^ r8_22 u>> 5
                                    int32_t r9_18 = (r9_15 - r8_22 - rdx_40) ^ rdx_40 u>> 3
                                    int32_t r8_25 = (r8_22 - r9_18 - rdx_40) ^ r9_18 << 0xa
                                    void* rax_96 = sub_141c4cfd0(rbx_5 + rdi_6 + 0x278, 
                                        (rdx_40 - r8_25 - r9_18) ^ r8_25 u>> 0xf, &var_210)
                                    int64_t* r12_5 = *(rsi_3 + 0x130)
                                    void* r14_4 = rax_96
                                    int64_t var_240
                                    __builtin_memset(&var_240, 0, 0x18)
                                    int64_t var_230_1 = *(rsi_3 + 0x88)
                                    void* rax_97 = *(rsi_3 + 0x88)
                                    int32_t rax_98
                                    
                                    if (rax_97 == 0)
                                        rax_98 = 0
                                    else
                                        rax_98 = *(rax_97 + 0x14)
                                    
                                    int64_t var_238_1
                                    var_238_1:4.d = rax_98
                                    void* rax_99 = *(rsi_3 + 0x88)
                                    int32_t rax_100
                                    
                                    if (rax_99 == 0)
                                        rax_100 = 0
                                    else
                                        rax_100 = *(rax_99 + 0x958)
                                    
                                    var_240:4.d = rax_100
                                    void* rax_101 = *(rsi_3 + 0x88)
                                    
                                    if (rax_101 == 0)
                                        zmm0_3 = zx.o(0)
                                    else
                                        zmm0_3 = _mm_cvtepi32_ps(zx.o(*(rax_101 + 0xc)))
                                    
                                    var_240.d = 1
                                    var_238_1.d = (int.q(zmm0_3.d)).d
                                    var_240:4.d = var_218
                                    int64_t* rcx_92 = *(rsi_3 + 0x180)
                                    int64_t* var_1d0
                                    int64_t* rax_105 = (*(*rcx_92 + 0x10))(rcx_92, &var_1d0)
                                    
                                    if (r14_4 + 0x10 != rax_105)
                                        int64_t* rcx_93 = *(r14_4 + 0x10)
                                        *(r14_4 + 0x10) = *rax_105
                                        *rax_105 = 0
                                        
                                        if (rcx_93 != 0)
                                            (**rcx_93)(rcx_93, 1)
                                    
                                    int64_t* rcx_94 = var_1d0
                                    
                                    if (rcx_94 != 0)
                                        (**rcx_94)(rcx_94, 1)
                                    
                                    int64_t* var_288
                                    
                                    if ((*(var_268 + 0x3d2) & 1) == 0)
                                        int64_t* var_1c0
                                        int64_t* rax_120 = (*(*r12_5 + 0x10))(r12_5, &var_1c0, 
                                            &var_240, *(r14_4 + 0x10), var_298, var_290, var_288)
                                        
                                        if (r14_4 != rax_120)
                                            int64_t* rcx_106 = *r14_4
                                            *r14_4 = *rax_120
                                            *rax_120 = 0
                                            
                                            if (rcx_106 != 0)
                                                (**rcx_106)(rcx_106, 1)
                                        
                                        int64_t* rcx_107 = var_1c0
                                        
                                        if (rcx_107 != 0)
                                            (**rcx_107)(rcx_107, 1)
                                    else
                                        void var_198
                                        int64_t rbx_8 = *sub_141c4c060(&var_198)
                                        void var_190
                                        
                                        if (*(*(*r12_5 + 8))(r12_5, &var_190) != rbx_8)
                                            int64_t rdi_8 = *r12_5
                                            void var_188
                                            int64_t* rax_112 = sub_141c4c060(&var_188)
                                            sub_141c4bff0()
                                            
                                            if ((*(rdi_8 + 0x40))(r12_5, *rax_112, &data_143a13038)
                                                    != 0)
                                                int64_t r14_5 = *r12_5
                                                int64_t rsi_5 = *(r14_4 + 0x10)
                                                void var_180
                                                int64_t* rax_114 = (*(r14_5 + 8))(r12_5, &var_180)
                                                void var_178
                                                int64_t* rax_115 = sub_141c4c060(&var_178)
                                                sub_141c4bff0()
                                                var_288 = &var_240
                                                var_290.q = rsi_5
                                                var_298.q = *rax_114
                                                int64_t* var_1c8
                                                int64_t* rax_116 = (*(r14_5 + 0x20))(r12_5, 
                                                    &var_1c8, *rax_115, &data_143a13038, var_298, 
                                                    var_290, var_288)
                                                r14_4 = rax_96
                                                
                                                if (r14_4 + 8 != rax_116)
                                                    int64_t* rcx_103 = *(r14_4 + 8)
                                                    *(r14_4 + 8) = *rax_116
                                                    *rax_116 = 0
                                                    
                                                    if (rcx_103 != 0)
                                                        (**rcx_103)(rcx_103, 1, r14_4 + 8)
                                                
                                                int64_t* rcx_104 = var_1c8
                                                
                                                if (rcx_104 != 0)
                                                    (**rcx_104)(rcx_104, 1)
                                            
                                            rdi_7 = var_270.q
                                        else
                                            *(r14_4 + 0x20) = 1
                                    int64_t* var_1b8
                                    int64_t* rax_124 = (*(*r12_5 + 0x30))(r12_5, &var_1b8)
                                    
                                    if (r14_4 + 0x18 != rax_124)
                                        int64_t* rcx_109 = *(r14_4 + 0x18)
                                        *(r14_4 + 0x18) = *rax_124
                                        *rax_124 = 0
                                        
                                        if (rcx_109 != 0)
                                            (**rcx_109)(rcx_109, 1)
                                    
                                    int64_t* rcx_110 = var_1b8
                                    
                                    if (rcx_110 != 0)
                                        (**rcx_110)(rcx_110, 1)
                                
                                i_3 = i_5
                                r12_1 = var_268
                            
                            result = zx.q(r15_2[1].d)
                            r15_2[1].d -= 1
                            
                            if (result.d == 1)
                                (**r15_2)(r15_2)
                                result = zx.q(*(r15_2 + 0xc))
                                *(r15_2 + 0xc) -= 1
                                
                                if (result.d == 1)
                                    result = (*(*r15_2 + 8))(r15_2, 1)
                        
                        break
                    
                    result = 0
                    
                    if (0 == r15_2[1].d)
                        r15_2[1].d = 0
                        z_3 = true
                    else
                        result = zx.q(r15_2[1].d)
                        z_3 = false
                while (not(z_3))
        
        i_3 += 1
        rdi_7 = &rdi_7[4]
        i_5 = i_3
        var_270.q = rdi_7
    while (i_3 s< arg1[6].d)

__security_check_cookie(rax_1 ^ &var_2b8)
return result

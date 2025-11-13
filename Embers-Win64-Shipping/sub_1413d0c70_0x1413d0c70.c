// 函数: sub_1413d0c70
// 地址: 0x1413d0c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_8 = 0
int32_t i = 0
*(arg1 + 0x1700) = 1

if (*(arg1 + 0xdc0) s> 0)
    int64_t rbx_1 = 0
    
    do
        void** rcx = *(arg1 + 0xdb8)
        int32_t rax_1 = arg2[1].d
        int64_t var_118 = *arg2
        int32_t var_110_1 = rax_1
        sub_1413935b0(*(rcx + rbx_1), &var_118)
        i += 1
        rbx_1 += 8
    while (i s< *(arg1 + 0xdc0))

int32_t i_1 = 0
int64_t zmm0
float zmm1

if (*(arg1 + 0xdd0) s> 0)
    int64_t rcx_2 = 0
    
    do
        int64_t rax_2 = *(arg1 + 0xdc8)
        i_1 += 1
        zmm1 = *(rax_2 + rcx_2 + 0x34) f+ *(arg2 + 4)
        zmm0.d = (*(rax_2 + rcx_2 + 0x38)).d f+ arg2[1].d
        *(rax_2 + rcx_2 + 0x30) = *(rax_2 + rcx_2 + 0x30) f+ *arg2
        *(rax_2 + rcx_2 + 0x34) = zmm1
        *(rax_2 + rcx_2 + 0x38) = zmm0.d
        rcx_2 += 0x40
    while (i_1 s< *(arg1 + 0xdd0))

int32_t i_2 = 0

if (*(arg1 + 0xdf0) s> 0)
    int64_t* rcx_3 = nullptr
    
    do
        int64_t rax_3 = *(arg1 + 0xde8)
        i_2 += 1
        zmm0.d = (*(rcx_3 + rax_3)).d f+ *arg2
        zmm1 = *(rcx_3 + rax_3 + 4)
        *(rcx_3 + rax_3) = zmm0.d
        zmm0 = *(rcx_3 + rax_3 + 8)
        *(rcx_3 + rax_3 + 4) = zmm1 f+ *(arg2 + 4)
        zmm0.d = zmm0.d f+ arg2[1].d
        *(rcx_3 + rax_3 + 8) = zmm0.d
        rcx_3 = &rcx_3[5]
    while (i_2 s< *(arg1 + 0xdf0))

int32_t i_3 = 0

if (*(arg1 + 0xe30) s> 0)
    int32_t* rcx_4 = nullptr
    
    do
        int64_t rax_4 = *(arg1 + 0xe28)
        i_3 += 1
        zmm0.d = (*arg2).d f+ *(rcx_4 + rax_4)
        zmm1 = *(rcx_4 + rax_4 + 4)
        *(rcx_4 + rax_4) = zmm0.d
        zmm0 = *(rcx_4 + rax_4 + 8)
        *(rcx_4 + rax_4 + 4) = zmm1 f+ *(arg2 + 4)
        zmm0.d = zmm0.d f+ arg2[1].d
        *(rcx_4 + rax_4 + 8) = zmm0.d
        rcx_4 = &rcx_4[7]
    while (i_3 s< *(arg1 + 0xe30))

int64_t rdi = 0
int64_t* rbx_2 = *(arg1 + 0x1140)
uint64_t r12_1 = sx.q(*(arg1 + 0x1148)) << 3 u>> 3

if (rbx_2 u> &rbx_2[sx.q(*(arg1 + 0x1148))])
    r12_1 = 0

if (r12_1 != 0)
    do
        sub_1422901b0(*rbx_2, arg2)
        rdi += 1
        rbx_2 = &rbx_2[1]
    while (rdi != r12_1)

float* rcx_6 = *(arg1 + 0x1d58)

if (rcx_6 != 0)
    sub_1420dd790(rcx_6, arg2)

sub_141239530(arg1 + 0x1150, arg1, nullptr)
int32_t r8
r8.b = 1
sub_1413cffc0(arg1 + 0x2120, arg2, r8)
float temp0_2[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, arg2[1].d), _mm_unpacklo_ps(*(arg2 + 4), 0)[0].q)
int64_t* var_148
sub_1407453e0(&var_148, arg1 + 0xee8)
float var_140
int32_t var_13c
void* var_138
int32_t var_130
int32_t i_10

for (int32_t i_4 = i_10; i_4 s< *(var_138 + 0x18); i_4 = i_10)
    int64_t* rcx_10 = var_148
    int64_t rax_9 = *rcx_10
    int64_t rdx_7 = sx.q(i_4) * 6
    *(rax_9 + (rdx_7 << 3)) = _mm_add_ps(*(rax_9 + (rdx_7 << 3)), temp0_2)
    int64_t rax_10 = *rcx_10
    int64_t var_108 = *arg2
    int32_t var_100_1 = arg2[1].d
    int64_t* rcx_12 = *(*(rax_10 + (rdx_7 << 3) + 0x20) + 0x20)
    (*(*rcx_12 + 0xe8))(rcx_12, &var_108)
    var_130 &= not.d(var_13c)
    sub_14059bdd0(&var_140)

if (data_1439b6b0c != 0)
    void* rcx_14 = *(arg1 + 0x65b8)
    
    if (rcx_14 != 0)
        bool z_1
        
        if (0 == *(rcx_14 + 0x60))
            *(rcx_14 + 0x60) = 0
            z_1 = true
        else
            *(rcx_14 + 0x60)
            z_1 = false
        
        if (not(z_1))
            sub_140b33630("FlushAsyncLPICreation")
            void* rbx_3 = *(arg1 + 0x65b8)
            int64_t* rcx_15 = *(rbx_3 + 0x70)
            
            if (rcx_15 == 0)
                bool z_2
                
                if (0 == *(rbx_3 + 0x60))
                    *(rbx_3 + 0x60) = 0
                    z_2 = true
                else
                    *(rbx_3 + 0x60)
                    z_2 = false
                
                if (not(z_2))
                    sub_1413df470(rbx_3 + 8)
                    *(rbx_3 + 0x60) -= 1
                
                goto label_1413d0fc6
            
            if ((*(*rcx_15 + 0x18))(rcx_15, rbx_3) == 0)
            label_1413d0fc6:
                
                if (*(rbx_3 + 0x70) != 0)
                    int64_t* rcx_19 = *(rbx_3 + 0x68)
                    (*(*rcx_19 + 0x20))(rcx_19, 0xffffffff, 0)
                    *(rbx_3 + 0x70) = 0
            else
                sub_1413df470(rbx_3 + 8)
                *(rbx_3 + 0x60) -= 1
                int64_t* rcx_17 = *(rbx_3 + 0x68)
                
                if (rcx_17 != 0)
                    (*(*rcx_17 + 0x10))(rcx_17)
                
                *(rbx_3 + 0x70) = 0
            
            sub_140b37f60("FlushAsyncLPICreation")

int32_t r8_1
r8_1.b = 1
sub_1413cf800(arg1 + 0x1d60, arg2, r8_1)
int32_t i_5 = 0

while (i_5 s>= 0)
    if (i_5 s>= *(arg1 + 0x1b18))
        break
    
    int64_t i_13 = sx.q(i_5)
    void* rcx_21 = *(*(arg1 + 0x1b10) + (i_13 << 3))
    float zmm1_1 = *(rcx_21 + 0x58)
    *(rcx_21 + 0x54) = *(rcx_21 + 0x54) f- *arg2
    float zmm0_3 = *(rcx_21 + 0x5c)
    *(rcx_21 + 0x58) = zmm1_1 f- *(arg2 + 4)
    *(rcx_21 + 0x5c) = zmm0_3 f- arg2[1].d
    void* rcx_23 = *(*(arg1 + 0x1b10) + (i_13 << 3)) + 0x3b4
    i_5 += 1
    zmm1_1 = *(rcx_23 + 4)
    *rcx_23 = *arg2 f+ *rcx_23
    zmm0_3 = *(rcx_23 + 8)
    *(rcx_23 + 4) = zmm1_1 f+ *(arg2 + 4)
    *(rcx_23 + 8) = zmm0_3 f+ arg2[1].d

int64_t* var_98
sub_1407453e0(&var_98, arg1 + 0xfc8)
int64_t var_88
int32_t i_11

for (int32_t i_6 = i_11; i_6 s< *(var_88 + 0x18); i_6 = i_11)
    int64_t rcx_25 = *var_98
    float temp0_6[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, arg2[1].d.q), 
        _mm_unpacklo_ps(*(arg2 + 4), zx.o(0)[0].q)[0].q)
    void* rax_26 = *(rcx_25 + (sx.q(i_6) << 3))
    *(rax_26 + 0x20) = __addps_xmmps_memps(temp0_6, *(rax_26 + 0x20))
    int32_t var_8c
    int32_t var_80 = var_80 & not.d(var_8c)
    void var_90
    sub_14059bdd0(&var_90)

for (int32_t i_7 = 0; i_7 s>= 0; i_7 += 1)
    if (i_7 s>= *(arg1 + 0x1c50))
        break
    
    int64_t rcx_27 = *(arg1 + 0x1c48)
    int32_t var_150_1 = arg2[1].d
    uint64_t var_158 = *arg2
    sub_14242d360(*(rcx_27 + (sx.q(i_7) << 3)), &var_158)

int32_t r12_2 = 0

while (true)
    int64_t rax_24
    
    if (r12_2 s< 0 || r12_2 s>= *(arg1 + 0x1040))
        rax_24.b = 0
    else
        rax_24.b = 1
    
    if (rax_24.b == 0)
        break
    
    int64_t rbx_4 = *(arg1 + 0x1038)
    int64_t rdi_1 = sx.q(r12_2)
    uint32_t var_68[0x4][0x4]
    uint32_t (* rax_30)[0x4] = sub_140631b10(*(rbx_4 + (rdi_1 << 3)) + 0x50, &var_68)
    uint32_t var_f8 = *rax_30
    uint32_t var_f4_1 = (*rax_30)[1]
    uint32_t var_f0_1 = (*rax_30)[2]
    uint32_t var_ec_1 = (*rax_30)[3]
    uint32_t var_e8_1 = rax_30[1][0]
    uint32_t var_e4_1 = (*rax_30)[5]
    uint32_t var_e0_1 = (*rax_30)[6]
    uint32_t var_dc_1 = (*rax_30)[7]
    uint32_t var_d8_1 = rax_30[2][0]
    uint32_t var_d4_1 = (*rax_30)[9]
    uint32_t var_d0_1 = (*rax_30)[0xa]
    uint32_t var_cc_1 = (*rax_30)[0xb]
    uint32_t var_c8_1 = rax_30[3][0] f+ *arg2
    uint32_t var_c4_1 = (*rax_30)[0xd] f+ *(arg2 + 4)
    uint32_t var_c0_1 = (*rax_30)[0xe] f+ arg2[1].d
    uint32_t var_bc_1 = (*rax_30)[0xf]
    sub_141f49500(*(rbx_4 + (rdi_1 << 3)), &var_f8)
    r12_2 += 1

uint128_t zmm0_4

while (i_8 s>= 0)
    if (i_8 s>= *(arg1 + 0x1018))
        break
    
    float zmm3_1[0x4] = *arg2
    float zmm1_2[0x4] = arg2[1].d
    float zmm2_2[0x4] = *(arg2 + 4)
    int64_t zmm4_1 = zmm2_2[0].q
    int64_t i_12 = sx.q(i_8)
    i_8 += 1
    var_130.b = 1
    uint128_t* rdx_16 = *(*(arg1 + 0x1010) + (i_12 << 3))
    zmm0_4.d = zmm1_2.d f+ *(rdx_16 + 0x14)
    zmm1_2[0] = zmm1_2[0] f+ *(rdx_16 + 8)
    zmm3_1[0] = zmm3_1[0] f+ *rdx_16
    zmm2_2[0] = zmm2_2[0] f+ *(rdx_16 + 4)
    zmm3_1[0] = zmm3_1[0] f+ *(rdx_16 + 0xc)
    zmm4_1.d = zmm4_1.d f+ rdx_16[1].d
    int32_t var_110_2 = zmm0_4.d
    float var_100_2 = zmm1_2[0]
    float temp0_8[0x4] = _mm_unpacklo_ps(zmm3_1, zmm2_2[0].q)
    var_13c.q = (_mm_unpacklo_ps(zmm3_1, zmm4_1)).q
    var_140 = var_100_2
    var_138:4.d = var_110_2
    zmm0_4.q = temp0_8.q
    *rdx_16 = zmm0_4
    var_148.o = zmm0_4
    rdx_16[1].q = var_138
    *(rdx_16 + 0x18) = var_130
    zmm0_4.d = (*arg2).d f+ rdx_16[3].d
    zmm1_2 = *(rdx_16 + 0x34)
    rdx_16[3].d = zmm0_4.d
    zmm1_2[0] = zmm1_2[0] f+ *(arg2 + 4)
    zmm0_4 = *(rdx_16 + 0x38)
    *(rdx_16 + 0x34) = zmm1_2[0]
    zmm0_4.d = zmm0_4.d f+ arg2[1].d
    *(rdx_16 + 0x38) = zmm0_4.d
    zmm1_2 = zx.o(rdx_16[3].q)
    int32_t rax_35 = *(rdx_16 + 0x38)
    zmm1_2[0] = zmm1_2[0] f* rdx_16[2].d
    zmm2_2 = zx.o(rdx_16[2].q)
    zmm0_4.d = rax_35.d f* *(rdx_16 + 0x28)
    int32_t var_a0_1 = *(rdx_16 + 0x28)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
    temp0_10[0] = temp0_10[0] f* *(rdx_16 + 0x24)
    temp0_10[0] = temp0_10[0] + zmm1_2[0]
    float var_a8[0x4]
    var_a8[0].q = zmm2_2.q
    float temp0_11[0x4] = _mm_shuffle_ps(var_a8, var_a8, 0x93)
    temp0_10[0] = temp0_10[0] f+ zmm0_4.d
    temp0_11[0] = temp0_10[0]
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
    var_a8 = temp0_12
    rdx_16[2] = temp0_12

void* r8_2 = *(arg1 + 0x1c18)
void* r9_1 = sx.q(*(arg1 + 0x1c20)) * 0xa8 + r8_2

if (r8_2 != r9_1)
    int32_t* i_14 = r8_2 + 8
    
    do
        int32_t* i_9 = i_14
        
        if (i_14 != &i_14[6])
            do
                zmm0_4.d = arg2[1].d.d f+ *i_9
                *i_9 = zmm0_4.d
                i_9 = &i_9[3]
            while (i_9 != &i_14[6])
        
        r8_2 += 0xa8
        i_14 = &i_14[0x2a]
    while (r8_2 != r9_1)

int32_t rax_38 = arg2[1].d
uint64_t var_b8 = *arg2
int32_t var_b0 = rax_38
return sub_1413d08e0(arg1 + 0x61d8, &var_b8)

// 函数: sub_142790c70
// 地址: 0x142790c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
void* rax = *(arg1 + 0x520)
int32_t arg_20 = 0
int64_t* rbx = *(rax + 0xc8)
void* r14 = *(rax + 0xc0)

if (rbx != 0)
    rbx[1].d += 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t rax_5 = sub_141d1f690(r14, data_143f36fd0)
int64_t rdx_1 = *(r14 + 0x170)
int64_t rbx_1 = *(r14 + 0x178)
int32_t rax_6 = (*(rdx_1 + 0x48))(r14 + 0x170, rdx_1)
int64_t rdi = 0
int64_t rsi = sx.q(rax_6)
int32_t var_120 = rsi.d
int64_t var_128 = 0
int32_t r15

if (rax_6 != 0)
    sub_1407c3650(&var_128, rsi.d, 0)
    rdi = var_128
    memcpy(rdi, rbx_1, (rsi * 0xc).d)
    int32_t var_11c
    r15 = var_11c
    rsi = zx.q(var_120)
else
    r15 = 0
    int32_t var_11c_1 = 0

int64_t* rbx_2 = arg_10

if (rbx_2 != &var_128)
    int64_t rcx_6 = *rbx_2
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    *rbx_2 = rdi
    rbx_2[1].d = rsi.d
    *(rbx_2 + 0xc) = r15
else if (rdi != 0)
    sub_140a74f90(rdi)

int64_t rdi_1 = *(r14 + 0x208)
int32_t rax_8 = (*(*(r14 + 0x200) + 0x48))(r14 + 0x200)
int64_t r12 = 0
int64_t rsi_1 = sx.q(rax_8)
int32_t var_110 = rsi_1.d
uint64_t rbx_3 = 0
uint64_t var_118 = 0
int32_t r15_1

if (rax_8 != 0)
    sub_140638750(&var_118, rsi_1.d, 0)
    rbx_3 = var_118
    memcpy(rbx_3, rdi_1, (rsi_1 << 2).d)
    int32_t var_10c
    r15_1 = var_10c
    rsi_1 = zx.q(var_110)
else
    r15_1 = 0
    int32_t var_10c_1 = 0

int64_t* rdi_3 = &arg_10[0xe]

if (rdi_3 != &var_118)
    int64_t rcx_11 = *rdi_3
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    *rdi_3 = rbx_3
    rdi_3[1].d = rsi_1.d
    *(rdi_3 + 0xc) = r15_1
else if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t rdi_4 = *(r14 + 0x1c0)
int32_t rax_10 = (*(*(r14 + 0x1b8) + 0x48))(r14 + 0x1b8)
int64_t rsi_2 = sx.q(rax_10)
int64_t rbx_4 = 0
int32_t var_100 = rsi_2.d
int64_t var_108 = 0
int32_t r15_2

if (rax_10 != 0)
    sub_1407c3650(&var_108, rsi_2.d, 0)
    rbx_4 = var_108
    memcpy(rbx_4, rdi_4, (rsi_2 * 0xc).d)
    int32_t var_fc
    r15_2 = var_fc
    rsi_2 = zx.q(var_100)
else
    r15_2 = 0
    int32_t var_fc_1 = 0

int64_t* rdi_6 = &arg_10[6]

if (rdi_6 != &var_108)
    int64_t rcx_16 = *rdi_6
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    *rdi_6 = rbx_4
    rdi_6[1].d = rsi_2.d
    *(rdi_6 + 0xc) = r15_2
else if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

int64_t rdi_7 = *(r14 + 0x1d8)
int32_t rax_12 = (*(*(r14 + 0x1d0) + 0x48))(r14 + 0x1d0)
int64_t rsi_3 = sx.q(rax_12)
int64_t rbx_5 = 0
int32_t var_f0 = rsi_3.d
int64_t var_f8 = 0
int32_t r15_3

if (rax_12 != 0)
    sub_1407c3650(&var_f8, rsi_3.d, 0)
    rbx_5 = var_f8
    memcpy(rbx_5, rdi_7, (rsi_3 * 0xc).d)
    int32_t var_ec
    r15_3 = var_ec
    rsi_3 = zx.q(var_f0)
else
    r15_3 = 0
    int32_t var_ec_1 = 0

int64_t* rdi_9 = &arg_10[8]

if (rdi_9 != &var_f8)
    int64_t rcx_21 = *rdi_9
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    *rdi_9 = rbx_5
    rdi_9[1].d = rsi_3.d
    *(rdi_9 + 0xc) = r15_3
else if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

int64_t rdi_10 = *(r14 + 0x1f0)
int32_t rax_14 = (*(*(r14 + 0x1e8) + 0x48))(r14 + 0x1e8)
int64_t rsi_4 = sx.q(rax_14)
int64_t rbx_6 = 0
int32_t var_e0 = rsi_4.d
int64_t var_e8 = 0
int32_t r15_4

if (rax_14 != 0)
    sub_1407c3650(&var_e8, rsi_4.d, 0)
    rbx_6 = var_e8
    memcpy(rbx_6, rdi_10, (rsi_4 * 0xc).d)
    int32_t var_dc
    r15_4 = var_dc
    rsi_4 = zx.q(var_e0)
else
    r15_4 = 0
    int32_t var_dc_1 = 0

int64_t* rdi_12 = &arg_10[4]

if (rdi_12 != &var_e8)
    int64_t rcx_26 = *rdi_12
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    *rdi_12 = rbx_6
    rdi_12[1].d = rsi_4.d
    *(rdi_12 + 0xc) = r15_4
else if (rbx_6 != 0)
    sub_140a74f90(rbx_6)

int64_t rdi_13 = *(r14 + 0x190)
int32_t rax_16 = (*(*(r14 + 0x188) + 0x48))(r14 + 0x188)
int64_t rsi_5 = sx.q(rax_16)
uint64_t rbx_7 = 0
int32_t var_d0 = rsi_5.d
uint64_t var_d8 = 0
int32_t r15_5

if (rax_16 != 0)
    sub_1406387e0(&var_d8, rsi_5.d, 0)
    rbx_7 = var_d8
    memcpy(rbx_7, rdi_13, (rsi_5 << 3).d)
    int32_t var_cc
    r15_5 = var_cc
    rsi_5 = zx.q(var_d0)
else
    r15_5 = 0
    int32_t var_cc_1 = 0

int64_t* rdi_15 = &arg_10[0xa]

if (rdi_15 != &var_d8)
    int64_t rcx_31 = *rdi_15
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
    
    *rdi_15 = rbx_7
    rdi_15[1].d = rsi_5.d
    *(rdi_15 + 0xc) = r15_5
else if (rbx_7 != 0)
    sub_140a74f90(rbx_7)

int64_t rdi_16 = *(r14 + 0x1a8)
int32_t rax_18 = (*(*(r14 + 0x1a0) + 0x48))(r14 + 0x1a0)
int64_t rsi_6 = sx.q(rax_18)
uint64_t rbx_8 = 0
int32_t var_c0 = rsi_6.d
uint64_t var_c8 = 0
int32_t r15_6

if (rax_18 != 0)
    sub_14061cb30(&var_c8, rsi_6.d, 0)
    rbx_8 = var_c8
    memcpy(rbx_8, rdi_16, (rsi_6 << 4).d)
    int32_t var_bc
    r15_6 = var_bc
    rsi_6 = zx.q(var_c0)
else
    r15_6 = 0
    int32_t var_bc_1 = 0

int64_t* rdi_18 = &arg_10[0xc]

if (rdi_18 != &var_c8)
    int64_t rcx_36 = *rdi_18
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)
    
    *rdi_18 = rbx_8
    rdi_18[1].d = rsi_6.d
    *(rdi_18 + 0xc) = r15_6
else if (rbx_8 != 0)
    sub_140a74f90(rbx_8)

void* rcx_39 = arg_10 + 0x80
int32_t rax_19 = *(rcx_39 + 8) + rax_5
*(rcx_39 + 8) = rax_19

if (rax_19 s> *(rcx_39 + 0xc))
    sub_140610660(rcx_39)

int64_t** var_a0 = &arg_10
void* var_98 = r14 + 0xe0
int64_t (* var_90)(int64_t* arg1, int32_t* arg2) = sub_14278ea20
int64_t*** var_88 = &var_a0
sub_14077b750(rax_5, &var_90, 0)
void* r13 = arg1
int32_t rdi_19 = 0
void* rsi_7 = *(r13 + 0x480)
void* var_b8 = rsi_7
char rax_21
int64_t* rbx_10

if (rsi_7 == 0)
    void* rax_22 = *(r13 + 0x520)
    rbx_10 = *(rax_22 + 0xc8)
    
    if (rbx_10 != 0)
        rbx_10[1].d += 1
    
    rsi_7 = *(rax_22 + 0xc0) + 0x230
    rax_21 = 1
    var_b8 = rsi_7
else
    rbx_10 = arg_10
    rax_21 = 0

if ((rax_21 & 1) != 0 && rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        (**rbx_10)(rbx_10)
        int32_t rax_25 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (rax_25 == 1)
            (*(*rbx_10 + 8))(rbx_10, 1)

int32_t rax_27 = sub_141d1f690(r14, data_143f36fc0)
int64_t r9 = sx.q(rax_27)
int32_t i_5 = 0
int32_t zmm0_1[0x4]
uint128_t zmm1_1

if (rax_27 s> 0 && r9.d u>= 8)
    void* rdx_19 = *(rsi_7 + 8)
    int32_t zmm2[0x4] = zx.o(0)
    int32_t zmm3[0x4] = zx.o(0)
    int32_t rcx_45 = r9.d & 0x80000007
    
    if (rcx_45 s< 0)
        rcx_45 = ((rcx_45 - 1) | 0xfffffff8) + 1
    
    int64_t i = 0
    
    do
        zmm0_1 = zx.o(0)
        i_5 += 8
        zmm2 = _mm_add_epi32(
            _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rdx_19 + i)), zmm0_1[0].q), zmm0_1[0].q), 
            zmm2)
        zmm1_1 = _mm_unpacklo_epi8(zx.o(*(i + rdx_19 + 4)), zmm0_1[0].q)
        i += 8
        zmm1_1 = _mm_add_epi32(_mm_unpacklo_epi16(zmm1_1, zmm0_1[0].q), zmm3)
        zmm3 = zmm1_1
    while (i s< sx.q(r9.d - rcx_45))
    
    zmm2 = _mm_add_epi32(zmm2, zmm1_1)
    zmm2 = _mm_add_epi32(zmm2, _mm_bsrli_si128(zmm2, 8))
    rdi_19 = _mm_add_epi32(zmm2, _mm_bsrli_si128(zmm2, 4))[0]

int64_t i_1 = sx.q(i_5)
int32_t rdx_20 = 0
int32_t r8_15 = 0

if (i_1 s< r9)
    if (r9 - i_1 s>= 2)
        void* r9_1 = *(rsi_7 + 8)
        
        do
            rdx_20 += zx.d(*(r9_1 + i_1))
            r8_15 += zx.d(*(i_1 + r9_1 + 1))
            i_1 += 2
        while (i_1 s< r9 - 1)
    
    if (i_1 s< r9)
        rdi_19 += zx.d(*(i_1 + *(rsi_7 + 8)))
    
    rdi_19 += rdx_20 + r8_15

void* rcx_51 = &arg_10[2]
int32_t rax_36 = *(rcx_51 + 8) + rdi_19
*(rcx_51 + 8) = rax_36

if (rax_36 s> *(rcx_51 + 0xc))
    sub_14083a7e0(rcx_51)

if (r9 s> 0)
    int64_t r9_2 = 0
    int64_t r10_1 = 0
    
    do
        int64_t rdx_22 = sx.q(*(*(r14 + 0x250) + (r9_2 << 2)))
        
        if (*(rdx_22 + *(rsi_7 + 8)) != 0)
            int64_t rcx_52 = rdx_22 * 3
            int64_t rax_40 = *(r14 + 0x220)
            int32_t* r8_17 = arg_10[2] + r10_1
            r10_1 += 0xc
            void* rdx_23 = rax_40 + (rcx_52 << 2)
            *r8_17 = *(rax_40 + (rcx_52 << 2))
            r8_17[1] = *(rdx_23 + 4)
            r8_17[2] = *(rdx_23 + 8)
        
        r9_2 += 1
    while (r9_2 s< r9)

int32_t i_7 = sub_141d1f690(r14, data_143f36fe0)
void* rcx_55 = &arg_10[0x12]
int64_t i_6 = sx.q(i_7)
int32_t rdx_25 = *(rcx_55 + 8) + i_6.d
*(rcx_55 + 8) = rdx_25

if (rdx_25 s> *(rcx_55 + 0xc))
    sub_1405c4e40(rcx_55)

int64_t i_4 = i_6

if (i_6.d s> 0)
    int64_t rbx_12 = 0
    int64_t i_2
    
    do
        int32_t (* r10_3)[0x4] = *(r14 + 0x340) + rbx_12
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = muls.dp.d(0x55555556, (*r10_3)[1])
        zmm0_1 = *r10_3
        zmm1_1 = r10_3[1]
        int32_t j_6 = temp1_1 + (temp1_1 u>> 0x1f)
        int64_t j_5 = sx.q(j_6)
        
        if (j_6 s> 0)
            int64_t j_2 = j_5
            int32_t* rcx_56 = *(r14 + 0x250)
            int32_t rdx_28 = zmm0_1[1]
            int64_t j
            
            do
                if (*(sx.q(*rcx_56) + *(rsi_7 + 8)) == 0)
                    rdx_28 -= 3
                
                rcx_56 = &rcx_56[1]
                j = j_2
                j_2 -= 1
            while (j != 1)
            zmm0_1[1] = rdx_28
        
        int32_t j_4 = (*r10_3)[2]
        
        if (j_4 s> 0)
            uint64_t j_3 = zx.q(j_4)
            int32_t rdx_29 = zmm0_1[2]
            int32_t* rcx_57 = *(r14 + 0x250) + (j_5 << 2)
            uint64_t j_1
            
            do
                if (*(sx.q(*rcx_57) + *(rsi_7 + 8)) == 0)
                    rdx_29 -= 1
                
                rcx_57 = &rcx_57[1]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            zmm0_1[2] = rdx_29
        
        int32_t (* rcx_58)[0x4] = arg_10[0x12]
        *(rcx_58 + rbx_12) = zmm0_1
        *(rcx_58 + rbx_12 + 0x10) = zmm1_1
        rbx_12 += 0x20
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

arg_10[0x14].d = sub_141d1f690(r14, data_143f37078)
int64_t* rcx_61 = arg_10
*(rcx_61 + 0xa4) = *(r13 + 0x6a8)
*(rcx_61 + 0xb4) = *(r13 + 0x6b8)
*(rcx_61 + 0xbc) = *(r13 + 0x6c0)
int32_t rax_53 = sub_141d1f690(r14, data_143f36fc0)
int32_t rdi_20 = 0
uint64_t var_148
__builtin_memset(&var_148, 0, 0x20)
int64_t var_140
int64_t var_138

if (rax_53 s> 0)
    sub_14083ad30(&var_138, rax_53)
    sub_1405dadb0(&var_148, rax_53)
    rdi_20 = var_140.d

int32_t r15_7 = 0

if (rax_53 s> 0)
    int32_t rcx_65 = rax_53
    char* i_3 = nullptr
    
    do
        if (i_3[*(rsi_7 + 8)] != 0 && (*(*(r14 + 0x268) + (i_3 << 2)) & 1) == 0)
            int64_t var_130_1
            int64_t rsi_9 = sx.q(var_130_1.d)
            void* r13_1 = *(r14 + 0x220)
            int32_t rax_56 = (rsi_9 + 1).d
            var_130_1.d = rax_56
            
            if (rax_56 s> var_130_1:4.d)
                sub_14083a7e0(&var_138)
            
            int64_t rax_57 = var_138
            int64_t rcx_67 = rsi_9 * 3
            *(rax_57 + (rcx_67 << 2)) = *(r13_1 + r12)
            int64_t rsi_10 = sx.q(rdi_20)
            *(rax_57 + (rcx_67 << 2) + 8) = *(r13_1 + r12 + 8)
            rdi_20 = (rsi_10 + 1).d
            var_140.d = rdi_20
            
            if (rdi_20 s> var_140:4.d)
                sub_1405a4cf0(&var_148)
                rdi_20 = var_140.d
            
            rcx_65 = rax_53
            *(var_148 + (rsi_10 << 2)) = r15_7
            rsi_7 = var_b8
        
        r15_7 += 1
        i_3 = &i_3[1]
        r12 += 0xc
    while (i_3 s< sx.q(rcx_65))
    
    r13 = arg1

uint64_t var_b0 = 0
int32_t var_a8 = rdi_20

if (rdi_20 != 0)
    sub_140638750(&var_b0, rdi_20, 0)
    memcpy(var_b0, var_148, rdi_20 << 2)
else
    int32_t var_a4_1 = 0

uint64_t var_60[0x4]
uint64_t* rax_63 = sub_141d1a9a0(r14, &var_60, &var_138, &var_b0, &arg_10[0x18])
void* rdi_22 = &arg_10[0x1a]

if (rdi_22 != rax_63)
    int64_t rcx_72 = *rdi_22
    
    if (rcx_72 != 0)
        sub_140a74f90(rcx_72)
    
    *rdi_22 = *rax_63
    *rax_63 = 0
    *(rdi_22 + 8) = rax_63[1].d
    *(rdi_22 + 0xc) = *(rax_63 + 0xc)
    rax_63[1] = 0

uint64_t rcx_74 = var_60[0]

if (rcx_74 != 0)
    sub_140a74f90(rcx_74)

void* rdi_23 = *(r13 + 0x520)
int64_t var_158 = 0
int64_t var_150 = 0
int64_t* rbx_15 = *(rdi_23 + 0xc8)
void* rdx_40 = *(rdi_23 + 0xc0)

if (rbx_15 != 0)
    rbx_15[1].d += 1
    rdi_23 = *(r13 + 0x520)

int64_t* rdi_24 = *(rdi_23 + 0xc8)

if (rdi_24 != 0)
    rdi_24[1].d += 1

sub_141d17bb0(*(rdi_23 + 0xc0) + 0xb0, rdx_40 + 0xf8, &var_158)

if (rdi_24 != 0)
    rdi_24[1].d -= 1
    
    if (rdi_24[1].d == 1)
        (**rdi_24)(rdi_24)
        int32_t rax_68 = *(rdi_24 + 0xc)
        *(rdi_24 + 0xc) -= 1
        
        if (rax_68 == 1)
            (*(*rdi_24 + 8))(rdi_24, 1)

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        (**rbx_15)(rbx_15)
        int32_t rsi_11 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (rsi_11 == 1)
            (*(*rbx_15 + 8))(rbx_15, zx.q(rsi_11))

int32_t result = &var_158
void* rbx_17 = &arg_10[0x1c]

if (rbx_17 != &var_158)
    int64_t rcx_81 = *rbx_17
    
    if (rcx_81 != 0)
        sub_140a74f90(rcx_81)
    
    *rbx_17 = var_158
    var_158 = 0
    *(rbx_17 + 8) = var_150.d
    result = var_150:4.d
    *(rbx_17 + 0xc) = result
    int64_t var_150_1 = 0

int64_t rcx_82 = var_158

if (rcx_82 != 0)
    result = sub_140a74f90(rcx_82)

uint64_t rcx_83 = var_148

if (rcx_83 != 0)
    result = sub_140a74f90(rcx_83)

int64_t rcx_84 = var_138

if (rcx_84 == 0)
    return result

return sub_140a74f90(rcx_84)

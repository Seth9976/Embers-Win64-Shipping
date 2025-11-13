// 函数: sub_14227cc20
// 地址: 0x14227cc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* var_a8
int64_t** rax_2 = sub_140a228d0(&var_a8)
int32_t r12 = 0

if (arg1 + 0xd0 != rax_2)
    int64_t* rcx_1 = *(arg1 + 0xd0)
    *(arg1 + 0xd0) = *rax_2
    *rax_2 = nullptr
    
    if (rcx_1 != 0)
        rcx_1[9].d -= 1
        
        if (rcx_1[9].d == 1)
            sub_140a2f6e0(rcx_1)

int64_t* rcx_2 = var_a8

if (rcx_2 != 0)
    rcx_2[9].d -= 1
    
    if (rcx_2[9].d == 1)
        sub_140a2f6e0(rcx_2)

void*** rax_5 = j_sub_140a82f30(0x38)
void*** r13 = rax_5

if (rax_5 == 0)
    r13 = nullptr
else
    int64_t* rcx_3 = *(arg1 + 0xe0)
    int64_t rax_7 = (*(*rcx_3 + 0xd0))(rcx_3)
    r13[1] = 0
    *r13 = &data_14330f468
    r13[2] = 0
    r13[3] = 0
    *r13 = &data_143310350
    r13[4].d = 0
    int64_t* rcx_4 = *(arg1 + 0xd0)
    r13[5] = rcx_4
    
    if (rcx_4 != 0)
        rcx_4[9].d += 1
    
    r13[6] = 0
    r13[4].d = 1
    r13[3] = 0
    r13[2] = rax_7

int32_t r14_1

if (sub_140b011d0() == 0)
    r14_1 = 2
else if (sub_140b70ca0() s< 3)
    r14_1 = 2
else if (sub_140a54810() == 0)
    r14_1 = 2
else
    sub_140af2b60()
    r14_1 = 0x202
    
    if (sub_140b21a10(&data_143dbb3f0, u"SingleThreadedPhysics") != 0)
        r14_1 = 2

void*** rax_12 = sub_140a84c80(0, 0x30, 0)
void*** var_b8 = rax_12
void*** rdi = rax_12

if (rax_12 != 0)
    rdi[1] = arg1
    *rdi = &data_142d3fe58
    rdi[2] = sub_14227cb20
    rdi[4] = sub_140a387b0()
    *rdi = &data_142d3feb0

int64_t* rax_14 = *(arg1 + 0xd0)
int64_t** var_68 = nullptr
int32_t var_5c = 4
int32_t i_2 = 1
int64_t* var_88 = rax_14

if (rax_14 != 0)
    rax_14[9].d += 1
    rdi = var_b8

void var_a0
int64_t* rax_15 = sub_14199c5a0(&var_a0, &var_88, 2)
int64_t* rbx_2 = *rax_15 + 0x10
*rbx_2 = 0
rbx_2[1].d = 0

if (&var_b8 != rbx_2 && rdi != 0)
    void** r8_1 = *rdi
    r8_1[8](rdi, rbx_2, r8_1)

rbx_2[2].d = r14_1
void* rcx_7 = *rax_15
int64_t* rbx_3 = *(rcx_7 + 0x30)
int64_t* var_c0 = rbx_3

if (rbx_3 != 0)
    rbx_3[9].d += 1
    rdi = var_b8
    rbx_3 = var_c0

sub_140978a40(rcx_7, rax_15[1], rax_15[2].d, 1)
int64_t** rcx_8 = var_68
int64_t** rsi_1 = &var_88
int32_t i_1 = i_2

if (rcx_8 != 0)
    rsi_1 = rcx_8

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_9 = *rsi_1
        
        if (rcx_9 != 0)
            rcx_9[9].d -= 1
            
            if (rcx_9[9].d == 1)
                sub_140a2f6e0(rcx_9)
        
        rsi_1 = &rsi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = var_b8
    rbx_3 = var_c0
    rcx_8 = var_68

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

if (rbx_3 != 0)
    rbx_3[9].d -= 1
    
    if (rbx_3[9].d == 1)
        sub_140a2f6e0(var_c0)
    
    rdi = var_b8

if (rdi != 0)
    (*rdi)[7](rdi, 0)
    int64_t rax_18 = sub_140a84c80(rdi, 0, 0)
    
    if (rax_18 != 0)
        sub_140a74f90(rax_18)

double zmm1[0x2] = *(arg1 + 0xc0)
int32_t rax_20 = *(arg1 + 0xc4) + 1
int32_t temp2 = *(arg1 + 0xa0)
*(arg1 + 0xc4) = rax_20
rbx_3.b = rax_20 u>= temp2
float zmm6[0x4]

if (rax_20 u>= temp2)
    zmm6 = *(arg1 + 0xa8)
    zmm6[0] = zmm6[0] f- zmm1[0].d
else
    zmm6 = *(arg1 + 0xa4)
    zmm1[0].d = zmm1[0].d f+ zmm6[0]
    *(arg1 + 0xb8) = *(arg1 + 0xbc) f+ *(arg1 + 0xb8)
    *(arg1 + 0xc0) = zmm1[0].d

double zmm7[0x2]

if (rax_20 u< temp2)
    zmm7 = *(arg1 + 0xb8)
else
    zmm7 = 0x3f800000

void* rdx_5 = *(arg1 + 0xd8)

if (rdx_5 != 0)
    zmm6 = sub_142261470(rdx_5 + 0x18, rdx_5, zmm6)

int512_t zmm1_1
int128_t zmm6_1
zmm1_1, zmm6_1 = sub_14227c2a0(arg1, zmm7, zmm6)
int64_t* rcx_16 = *(*(arg1 + 0xb0) + 0x30)
int64_t rdx_6

if (rcx_16 == 0)
    rdx_6 = 0
else
    r12 = rcx_16[1].d
    rdx_6 = *rcx_16

int64_t* rcx_17 = *(arg1 + 0xe0)
zmm1_1.o = zmm6_1
(*(*rcx_17 + 0x40))(rcx_17, zmm1_1, zx.q(rbx_3.b), r13, rdx_6, r12)
int64_t result = (*r13)[4](r13)
__security_check_cookie(rax_1 ^ &var_f8)
return result

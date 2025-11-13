// 函数: sub_14227c830
// 地址: 0x14227c830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x110)
int128_t zmm7 = *(arg1 + 0x74)
int64_t* rax = sub_142565030()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t r8_1 = *rax
    (*(r8_1 + 0x390))(rax, arg3, r8_1)
    rax_1 = rax[0x23]

uint64_t rcx_1 = zx.q(*(rax_1 + 0xcc))
float zmm6[0x4] = zx.o(0)
float zmm0 = *(rax_1 + 0xc8)
zmm6[0] = float.s(rcx_1)
zmm6[0] = zmm6[0] * zmm0
float temp0[0x4] = _mm_min_ss(zmm6[0], zmm7.d)
arg3 = temp0[0]
*(rsi + 0xa8) = temp0[0]
arg3 = arg3 / zmm0
int32_t rax_4 = neg.d(int.d(-0.5f - (arg3 + arg3)) s>> 1)

if (rax_4 u<= rcx_1.d)
    rcx_1 = zx.q(rax_4)

int64_t rax_5 = 1

if (rcx_1.d u>= 1)
    rax_5 = zx.q(rcx_1.d)

*(rsi + 0xa0) = rax_5.d
temp0[0] = temp0[0] / float.s(rax_5)
*(rsi + 0xa4) = temp0[0]
int64_t* rcx_2 = *(arg1 + 0x60)
int64_t rsi_1

if (rcx_2 == 0)
    rsi_1 = 0
else
    rsi_1 = (*(*rcx_2 + 0x30))(rcx_2)

if (not(temp0[0] > (zx.o(0)).d))
    rax_5.b = 0
    return rax_5

void*** rax_7 = j_sub_140a82f30(0x38)
void*** rbx_1 = rax_7

if (rax_7 == 0)
    rbx_1 = nullptr
else
    int64_t rdx = *rsi_1
    int64_t rax_8 = (*(rdx + 0x340))(rsi_1, rdx)
    rbx_1[1] = 0
    rbx_1[2] = 0
    *rbx_1 = &data_14330f468
    rbx_1[3] = 0
    *rbx_1 = &data_143310350
    rbx_1[4].d = 0
    void* rcx_4 = *arg2
    rbx_1[5] = rcx_4
    
    if (rcx_4 != 0)
        *(rcx_4 + 0x48) += 1
    
    rbx_1[3] = 0
    rbx_1[6] = arg1 + 0xa0
    rbx_1[4].d = 1
    rbx_1[2] = rax_8

int32_t rbp_1

if (sub_140b011d0() == 0)
    rbp_1 = 2
else if (sub_140b70ca0() s< 3)
    rbp_1 = 2
else if (sub_140a54810() == 0)
    rbp_1 = 2
else
    sub_140af2b60()
    rbp_1 = 0x202
    
    if (sub_140b21a10(&data_143dbb3f0, u"SingleThreadedPhysics") != 0)
        rbp_1 = 2

int64_t rsi_2 = *(arg1 + 0x110)
int64_t* rax_14 = sub_140a84c80(0, 0x30, 0)
int64_t* var_78 = rax_14
int64_t* rdi_1 = rax_14

if (rax_14 != 0)
    rdi_1[1] = rsi_2
    *rdi_1 = &data_143311dc8
    rdi_1[2] = sub_14227bff0
    rdi_1[3] = rbx_1
    rdi_1[4] = sub_140a387b0()
    *rdi_1 = &data_143311e20

void var_68
int64_t* rax_16 = sub_140958da0(&var_68, nullptr, 0xff)
int64_t* rbx_3 = *rax_16 + 0x10
*rbx_3 = 0
rbx_3[1].d = 0

if (&var_78 != rbx_3 && rdi_1 != 0)
    int64_t r8_2 = *rdi_1
    (*(r8_2 + 0x40))(rdi_1, rbx_3, r8_2)

rbx_3[2].d = rbp_1
void* rcx_7 = *rax_16
int32_t r8_3 = rax_16[2].d
int64_t* rdx_3 = rax_16[1]
int64_t* rbx_4 = *(rcx_7 + 0x30)
int64_t* arg_18 = rbx_4
int32_t* rsi_4 = &rbx_4[9]

if (rbx_4 != 0)
    *rsi_4 += 1
    rdi_1 = var_78
    rbx_4 = arg_18

sub_140978a40(rcx_7, rdx_3, r8_3, 1)

if (rbx_4 != 0)
    int32_t rax_18 = *rsi_4
    *rsi_4 -= 1
    
    if (rax_18 == 1)
        sub_140a2f6e0(arg_18)
    
    rdi_1 = var_78

int64_t* rax_17

if (rdi_1 != 0)
    (*(*rdi_1 + 0x38))(rdi_1, 0)
    rax_17 = sub_140a84c80(rdi_1, 0, 0)
    
    if (rax_17 != 0)
        sub_140a74f90(rax_17)

rax_17.b = 1
return rax_17

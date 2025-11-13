// 函数: sub_142902aa0
// 地址: 0x142902aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
int32_t var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t zmm0[0x4] = *arg2
int32_t var_78[0x4] = arg2[1]
int32_t r14 = var_78[3]
int32_t r10 = var_78[2]
int32_t rdi = var_78[1]
int32_t r15 = var_78[0]
int32_t var_58[0x4] = arg2[3]
int32_t rax_2 = var_58[2]
int32_t r11 = var_58[3]
int32_t r9 = var_58[1]
int32_t rbx = var_58[0]
int32_t var_88[0x4] = zmm0
zmm0 = arg2[2]
var_c8 = rax_2
int64_t i_2 = 0xa
int32_t var_68[0x4] = zmm0
int32_t rsi = var_68[1]
int32_t r12 = var_68[0]
int32_t var_5c
int32_t var_b8 = var_5c
int32_t var_b4 = var_88[3]
int32_t var_bc = var_68[2]
int64_t i

do
    int32_t rax_6 = var_88[0] + r15
    int32_t rdx_2 = rol.d(rax_6 ^ rbx, 0x10)
    int32_t rcx_1 = rdx_2 + r12
    int32_t r8_3 = rol.d(rcx_1 ^ r15, 0xc)
    int32_t rbx_1 = rax_6 + r8_3
    int32_t r15_3 = rol.d(rbx_1 ^ rdx_2, 8)
    int32_t r13_1 = r15_3 + rcx_1
    int32_t rax_9 = rol.d(r13_1 ^ r8_3, 7)
    int32_t rax_11 = var_88[1] + rdi
    int32_t rdx_5 = rol.d(rax_11 ^ r9, 0x10)
    int32_t rcx_2 = rdx_5 + rsi
    int32_t r8_6 = rol.d(rcx_2 ^ rdi, 0xc)
    int32_t rdi_1 = rax_11 + r8_6
    int32_t r12_3 = rol.d(rdi_1 ^ rdx_5, 8)
    int32_t r9_1 = r12_3 + rcx_2
    int32_t rcx_4 = var_88[2] + r10
    int32_t rdx_8 = rol.d(rcx_4 ^ var_c8, 0x10)
    int32_t r8_8 = var_bc + rdx_8
    int32_t r9_3 = rol.d(r9_1 ^ r8_6, 7)
    int32_t rax_14 = rol.d(r8_8 ^ r10, 0xc)
    int32_t rsi_1 = rax_14 + rcx_4
    int32_t rcx_6 = var_b4 + r14
    int32_t rdx_10 = rol.d(rdx_8 ^ rsi_1, 8)
    int32_t r11_2 = rol.d(r11 ^ rcx_6, 0x10)
    var_c8 = rdx_10
    int32_t rdx_11 = rdx_10 + r8_8
    int32_t r8_10 = var_b8 + r11_2
    int32_t r10_3 = rol.d(rdx_11 ^ rax_14, 7)
    int32_t rax_17 = rol.d(r8_10 ^ r14, 0xc)
    int32_t r14_1 = rax_17 + rcx_6
    int32_t r11_4 = rol.d(r11_2 ^ r14_1, 8)
    int32_t r8_11 = r8_10 + r11_4
    int32_t rax_18 = r9_3 + rbx_1
    int32_t r11_7 = rol.d(r8_11 ^ rax_17, 7)
    int32_t rcx_9 = rol.d(rax_18 ^ r11_4, 0x10)
    int32_t rdx_12 = rdx_11 + rcx_9
    int32_t rbx_3 = rdx_12 ^ r9_3
    int32_t var_c0_1 = rbx_3
    int32_t r9_5 = rol.d(rbx_3, 0xc)
    int32_t rbx_4 = r9_5 + rax_18
    var_88[0] = rbx_4
    int32_t rbx_6 = rol.d(rbx_4 ^ rcx_9, 8)
    var_58[3] = rbx_6
    int32_t rax_19 = rdx_12 + rbx_6
    var_bc = rax_19
    var_68[2] = rax_19
    int32_t rax_20 = r10_3 + rdi_1
    int32_t r9_7 = rol.d(r9_5 ^ rax_19, 7)
    rdi = r9_7
    int32_t rcx_12 = rol.d(rax_20 ^ r15_3, 0x10)
    var_78[1] = r9_7
    int32_t rdx_13 = r8_11 + rcx_12
    int32_t r8_14 = rol.d(rdx_13 ^ r10_3, 0xc)
    int32_t rbx_7 = r8_14 + rax_20
    var_88[1] = rbx_7
    rbx = rol.d(rbx_7 ^ rcx_12, 8)
    int32_t rax_21 = rbx + rdx_13
    var_b8 = rax_21
    int32_t var_5c_1 = rax_21
    int32_t rax_22 = r11_7 + rsi_1
    int32_t r8_16 = rol.d(r8_14 ^ rax_21, 7)
    int32_t r9_10 = rol.d(rax_22 ^ r12_3, 0x10)
    r10 = r8_16
    var_78[2] = r8_16
    int32_t rcx_13 = r9_10 + r13_1
    r11 = rbx_6
    int32_t rdx_16 = rol.d(rcx_13 ^ r11_7, 0xc)
    int32_t rax_23 = rax_22 + rdx_16
    var_88[2] = rax_23
    r9 = rol.d(r9_10 ^ rax_23, 8)
    r12 = r9 + rcx_13
    int32_t rcx_14 = var_c8
    int32_t rdx_18 = rol.d(rdx_16 ^ r12, 7)
    var_78[3] = rdx_18
    int32_t r8_17 = r14_1 + rax_9
    r14 = rdx_18
    int32_t rcx_16 = rol.d(rcx_14 ^ r8_17, 0x10)
    int32_t rsi_3 = r9_1 + rcx_16
    int32_t rax_26 = rol.d(rsi_3 ^ rax_9, 0xc)
    int32_t r8_18 = r8_17 + rax_26
    var_b4 = r8_18
    var_88[3] = r8_18
    int32_t rdx_22 = rol.d(r8_18 ^ rcx_16, 8)
    rsi = rsi_3 + rdx_22
    var_c8 = rdx_22
    var_58[2] = rdx_22
    var_68[1] = rsi
    r15 = rol.d(rsi ^ rax_26, 7)
    i = i_2
    i_2 -= 1
while (i != 1)
int64_t i_1 = 0
var_58[1] = r9
var_58[0] = rbx
var_78[0] = r15
var_68[0] = r12
int128_t* rdx_23

if (arg1 u> &var_58[3] || &(*arg1)[0xf] u< &var_88)
    rdx_23 = arg2
    
    if (arg1 u> rdx_23 + 0x3c || &(*arg1)[0xf] u< rdx_23)
        int32_t zmm1[0x4] = _mm_add_epi32(var_88, *rdx_23)
        zmm0 = rdx_23[1]
        *arg1 = zmm1
        zmm0 = __paddd_xmmdq_memdq(zmm0, var_78)
        zmm1 = rdx_23[2]
        arg1[1] = zmm0
        zmm0 = rdx_23[3]
        zmm1 = __paddd_xmmdq_memdq(zmm1, var_68)
        zmm0 = __paddd_xmmdq_memdq(zmm0, var_58)
        arg1[2] = zmm1
        arg1[3] = zmm0
        i_1 = 0x10
else
    rdx_23 = arg2

if (i_1 u< 0x10)
    do
        (*arg1)[i_1] = var_88[i_1] + *(rdx_23 + (i_1 << 2))
        i_1 += 1
    while (i_1 s< 0x10)

__security_check_cookie(rax_1 ^ &var_c8)
return i_1

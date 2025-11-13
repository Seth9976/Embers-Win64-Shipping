// 函数: sub_14140e510
// 地址: 0x14140e510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
void var_148
void* rsp_1 = &var_148
int32_t var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rax_3 = *(*arg3 + 0x10)
void* rcx = &rbx_2[1]

if (rcx u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx = &rbx_2[1]

*(arg1 + 0x30) = rcx
*rbx_2 = rax_3
void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_4[5]

if (rax_4 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_4[5]

*(arg1 + 0x30) = rax_4
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_4
*(arg1 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142d549c8
rcx_4[3] = rbx_2
rcx_4[2].d = 1
rcx_4[4].d = 5
int64_t* r15 = *(*arg3 + 8)
int64_t* rbx_5 = r15
int64_t* var_e0 = rbx_5

if (r15 != 0)
    r15[1].d += 1
    rbx_5 = var_e0

int32_t rdi = *((*(*r15 + 8))(r15) + 0x64)
void* rax_11 = (*(*r15 + 8))(r15)
uint32_t rdx_1 = (rdi + 7) u>> 3
int32_t var_98 = data_143f02318
uint32_t rcx_12 = (*(rax_11 + 0x60) + 7) u>> 3
char var_110 = 0
int32_t var_88 = 1
int16_t var_80 = 1
char var_118 = 1
int32_t var_78 = arg5
uint32_t var_94 = rcx_12
uint32_t var_90 = rdx_1
char var_120 = 1
int64_t* r12_1 = arg4
wchar16 const* const var_68 = u"UnknownTexture2D"
int16_t var_70 = 0
int128_t var_a8 = data_143f02308
int32_t var_8c = 0
int32_t var_84 = 0x10000
int32_t var_7c = 0x39
int32_t var_74 = 0x10001
int16_t var_60 = 0
char var_5e = 0
sub_1419a0ce0(&data_1439c9260, arg1, &var_a8, r12_1, arg6, var_120, var_118, var_110)
int64_t* rdi_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_13 = *(*r12_1 + 0x18)
void* rax_15 = &rdi_3[1]

if (rax_15 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = &rdi_3[1]

*(arg1 + 0x30) = rax_15
*rdi_3 = rcx_13
void*** rcx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_16 = &rcx_17[6]

if (rax_16 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_16 = &rcx_17[6]

*(arg1 + 0x30) = rax_16
void**** rax_17 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_17 = rcx_17
*(arg1 + 8) = &rcx_17[1]
rcx_17[3] = rdi_3
rcx_17[1] = 0
*rcx_17 = &data_142da7798
rcx_17[5] = 0
rcx_17[2].d = 1
rcx_17[4] = 1
void* var_100 = nullptr
var_108 = 0
(*(*rbx_5 + 0x50))(rbx_5, &var_100, &var_108)

if (var_100 == 0)
    uint64_t rax_20 = zx.q(var_108)
    int64_t rcx_22 = rax_20 + 0xf
    
    if (rcx_22 u<= rax_20)
        rcx_22 = 0xffffffffffffff0
    
    int64_t rcx_23 = rcx_22 & 0xfffffffffffffff0
    __chkstk(rcx_23)
    rsp_1 = &var_148 - rcx_23
    var_100 = rsp_1 + 0x40
    (*(*rbx_5 + 0x50))(rbx_5, &var_100, &var_108)

void* var_c0
sub_1419a2ec0(arg2, &var_c0, &data_143ed37b0, 0)
void* r15_1 = var_c0
void* rbx_6 = nullptr

if (r15_1 != 0)
    int64_t rdx_6 = sx.q(*(r15_1 + 0x10c))
    void* var_b8
    int64_t* rdi_6 = *(var_b8 + 0x10)
    int64_t rbx_7 = rdi_6[3]
    
    if (*(rbx_7 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(rdi_6, rdx_6.d)
        rbx_7 = rdi_6[3]
    
    rbx_6 = *(rbx_7 + (rdx_6 << 3))
    r12_1 = arg4

*(arg1 + 0x1b0) = rbx_6
sub_14198aa60(rbx_6)
void*** rcx_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_25 = &rcx_30[3]

if (rax_25 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_25 = &rcx_30[3]

*(arg1 + 0x30) = rax_25
void**** rax_26 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_26 = rcx_30
*(arg1 + 8) = &rcx_30[1]
rcx_30[1] = 0
*rcx_30 = &data_142dd5b40
rcx_30[2] = rbx_6
uint64_t r9_1 = zx.q(var_108)
void* r8_3 = var_100
*(rsp_1 + 0x28) = *r12_1
*(rsp_1 + 0x20) = arg3
sub_141428a60(r15_1, arg1, r8_3, r9_1)
void*** rcx_37 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_29 = &rcx_37[4]

if (rax_29 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_37 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_29 = &rcx_37[4]

*(arg1 + 0x30) = rax_29
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_37
*(arg1 + 8) = &rcx_37[1]
rcx_37[1] = 0
*(rcx_37 + 0x14) = (rdx_1 + 7) u>> 3
*rcx_37 = &data_142ef57a8
rcx_37[2].d = (rcx_12 + 7) u>> 3
rcx_37[3].d = 1
int64_t* rbx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_41 = *(*r12_1 + 0x18)
uint32_t var_f0
var_f0.q = rcx_41
void* rax_33 = &rbx_13[1]

if (rax_33 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rcx_41 = var_f0.q
    rbx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_33 = &rbx_13[1]

*(arg1 + 0x30) = rax_33
*rbx_13 = rcx_41
void*** rcx_45 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_34 = &rcx_45[6]

if (rax_34 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_45 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_34 = &rcx_45[6]

*(arg1 + 0x30) = rax_34
void**** rax_35 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_35 = rcx_45
*(arg1 + 8) = &rcx_45[1]
rcx_45[1] = 0
*rcx_45 = &data_142da7798
rcx_45[2].d = 1
rcx_45[3] = rbx_13
rcx_45[4].d = 0
*(rcx_45 + 0x24) = 1
rcx_45[5] = 0
int64_t result = sub_1405d1550(&var_e0)
__security_check_cookie(rax_1 ^ &var_108)
return result

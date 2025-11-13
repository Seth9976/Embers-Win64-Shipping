// 函数: sub_14140ea60
// 地址: 0x14140ea60
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
int64_t rdx = *(*arg3 + 0x10)
int64_t* rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx = *(arg3[1] + 0x10)
int64_t rcx_1 = *(arg3[2] + 0x10)
void* rax_5 = &rbx_2[3]

if (rax_5 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rbx_2[3]

*(arg1 + 0x30) = rax_5
*rbx_2 = rdx
rbx_2[1] = rcx
rbx_2[2] = rcx_1
void*** rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_8 = &rcx_5[5]

if (rax_8 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_5[5]

*(arg1 + 0x30) = rax_8
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_5
*(arg1 + 8) = &rcx_5[1]
rcx_5[1] = 0
rcx_5[3] = rbx_2
*rcx_5 = &data_142d549c8
rcx_5[2].d = 3
rcx_5[4].d = 5
int64_t* r15 = *(*arg3 + 8)
int64_t* rbx_5 = r15
int64_t* var_e0 = rbx_5

if (r15 != 0)
    r15[1].d += 1
    rbx_5 = var_e0

int32_t rdi = *((*(*r15 + 8))(r15) + 0x64)
void* rax_15 = (*(*r15 + 8))(r15)
uint32_t rdx_2 = (rdi + 7) u>> 3
int32_t var_a8 = data_143f02318
uint32_t rcx_13 = (*(rax_15 + 0x60) + 7) u>> 3
char var_110 = 0
int32_t var_98 = 1
int16_t var_90 = 1
char var_118 = 1
int32_t var_88 = arg5
uint32_t var_a4 = rcx_13
uint32_t var_a0 = rdx_2
char var_120 = 1
int64_t* r13_1 = arg4
wchar16 const* const var_78 = u"UnknownTexture2D"
int16_t var_80 = 0
int128_t var_b8 = data_143f02308
int32_t var_9c = 0
int32_t var_94 = 0x10000
int32_t var_8c = 0x20
int32_t var_84 = 0x10001
int16_t var_70 = 0
char var_6e = 0
sub_1419a0ce0(&data_1439c9260, arg1, &var_b8, r13_1, arg6, var_120, var_118, var_110)
int64_t* rdi_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_14 = *(*r13_1 + 0x18)
void* rax_19 = &rdi_3[1]

if (rax_19 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = &rdi_3[1]

*(arg1 + 0x30) = rax_19
*rdi_3 = rcx_14
void*** rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_20 = &rcx_18[6]

if (rax_20 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_20 = &rcx_18[6]

*(arg1 + 0x30) = rax_20
void**** rax_21 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_21 = rcx_18
*(arg1 + 8) = &rcx_18[1]
rcx_18[3] = rdi_3
rcx_18[1] = 0
*rcx_18 = &data_142da7798
rcx_18[5] = 0
rcx_18[2].d = 1
rcx_18[4] = 1
void* var_100 = nullptr
var_108 = 0
(*(*rbx_5 + 0x50))(rbx_5, &var_100, &var_108)

if (var_100 == 0)
    uint64_t rax_24 = zx.q(var_108)
    int64_t rcx_23 = rax_24 + 0xf
    
    if (rcx_23 u<= rax_24)
        rcx_23 = 0xffffffffffffff0
    
    int64_t rcx_24 = rcx_23 & 0xfffffffffffffff0
    __chkstk(rcx_24)
    rsp_1 = &var_148 - rcx_24
    var_100 = rsp_1 + 0x40
    (*(*rbx_5 + 0x50))(rbx_5, &var_100, &var_108)

void* var_c8
sub_1419a2ec0(arg2, &var_c8, &data_143ed3910, 0)
void* r15_1 = var_c8
void* rbx_6 = nullptr

if (r15_1 != 0)
    int64_t rdx_7 = sx.q(*(r15_1 + 0x10c))
    void* var_c0
    int64_t* rdi_6 = *(var_c0 + 0x10)
    int64_t rbx_7 = rdi_6[3]
    
    if (*(rbx_7 + (rdx_7 << 3)) == 0)
        sub_1419ccf30(rdi_6, rdx_7.d)
        rbx_7 = rdi_6[3]
    
    rbx_6 = *(rbx_7 + (rdx_7 << 3))
    r13_1 = arg4

*(arg1 + 0x1b0) = rbx_6
sub_14198aa60(rbx_6)
void*** rcx_31 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_29 = &rcx_31[3]

if (rax_29 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_31 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_29 = &rcx_31[3]

*(arg1 + 0x30) = rax_29
void**** rax_30 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_30 = rcx_31
*(arg1 + 8) = &rcx_31[1]
rcx_31[1] = 0
*rcx_31 = &data_142dd5b40
rcx_31[2] = rbx_6
uint64_t r9_1 = zx.q(var_108)
void* r8_3 = var_100
*(rsp_1 + 0x28) = *r13_1
*(rsp_1 + 0x20) = arg3
sub_141428c70(r15_1, arg1, r8_3, r9_1)
void*** rcx_38 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_33 = &rcx_38[4]

if (rax_33 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_38 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_33 = &rcx_38[4]

*(arg1 + 0x30) = rax_33
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_38
*(arg1 + 8) = &rcx_38[1]
rcx_38[1] = 0
*(rcx_38 + 0x14) = (rdx_2 + 7) u>> 3
*rcx_38 = &data_142ef57a8
rcx_38[2].d = (rcx_13 + 7) u>> 3
rcx_38[3].d = 1
int64_t* rbx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_42 = *(*r13_1 + 0x18)
uint32_t var_f0
var_f0.q = rcx_42
void* rax_37 = &rbx_13[1]

if (rax_37 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rcx_42 = var_f0.q
    rbx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_37 = &rbx_13[1]

*(arg1 + 0x30) = rax_37
*rbx_13 = rcx_42
void*** rcx_46 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_38 = &rcx_46[6]

if (rax_38 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_46 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_38 = &rcx_46[6]

*(arg1 + 0x30) = rax_38
void**** rax_39 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_39 = rcx_46
*(arg1 + 8) = &rcx_46[1]
rcx_46[1] = 0
*rcx_46 = &data_142da7798
rcx_46[2].d = 1
rcx_46[3] = rbx_13
rcx_46[4].d = 0
*(rcx_46 + 0x24) = 1
rcx_46[5] = 0
int64_t result = sub_1405d1550(&var_e0)
__security_check_cookie(rax_1 ^ &var_108)
return result

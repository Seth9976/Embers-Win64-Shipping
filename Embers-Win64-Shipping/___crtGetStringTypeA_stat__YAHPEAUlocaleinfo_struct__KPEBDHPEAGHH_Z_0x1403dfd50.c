// 函数: ?__crtGetStringTypeA_stat@@YAHPEAUlocaleinfo_struct@@KPEBDHPEAGHH@Z
// 地址: 0x1403dfd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int32_t* var_38
int64_t rax_1 = __security_cookie ^ &var_38
int32_t r15 = arg1[0x246]
var_38 = arg4
int64_t r8_2 = (sx.q(r15 + 0xf) & 0xfffffffffffffff0) << 2
int64_t rax_3 = r8_2 + 0xf

if (rax_3 u<= r8_2)
    rax_3 = 0xffffffffffffff0

int64_t rax_4 = rax_3 & 0xfffffffffffffff0
__chkstk(rax_4)
uint64_t r9 = zx.q(arg5)
void var_f8
void* rsp_1 = &var_f8 - rax_4
int32_t var_40 = 0
int32_t var_c8

if (r9.d == 0 || (r9.d == 2 && arg1[sx.q(arg1[0x258]) + 0x260] == 1))
    uint64_t r8_4 = zx.q(arg1[0x258])
    *(rsp_1 + 0x20) = arg6
    sub_1403dff50(arg1, arg2, r8_4, r9)
    uint64_t r9_1 = zx.q(sx.d(*(arg1 + 0xae6)))
    uint64_t r8_5 = zx.q(sx.d(*(arg1 + 0xae5)))
    *(rsp_1 + 0x20) = arg1[0x246]
    sub_1403e0340(arg2, rsp_1 + 0x30, r8_5, r9_1)
    sub_1403e51f0(arg1, &var_c8, arg6)
    sub_1403e54b0(arg1, &var_c8, arg3, rsp_1 + 0x30)
    sub_1403e3990(arg1, &var_c8, arg3, 0)
    int32_t rax_7 = sx.d(*(arg1 + 0xae5))
    arg1[0x416] = 0
    arg1[0x252] = 0
    arg1[0x417] = rax_7
else
    sub_1403e3990(arg1, &var_c8, arg3, 1)

int64_t rcx_4 = sx.q(arg1[0x246])
int64_t rbx_1 = sx.q(arg1[0x248] - rcx_4.d)
memmove(&arg1[0x151], arg1 + ((rcx_4 + 0x2a2) << 1), rbx_1.d * 2)
memcpy(arg1 + ((rbx_1 + 0x2a2) << 1), arg3, arg1[0x246] * 2)
sub_1403e4590(arg1, arg3, r15)
sub_1403e4a30(arg1, &var_c8, arg3, r15)
int32_t* rax_12 = var_38
void var_cc
arg1[0x241] = *(&var_cc + (sx.q(arg1[0x245]) << 2))
*rax_12 = r15
__security_check_cookie(rax_1 ^ &var_38)
return 0

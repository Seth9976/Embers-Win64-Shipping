// 函数: sub_1429ccad0
// 地址: 0x1429ccad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t r8 = arg2 * 2
void var_d8
void* rbx = &var_d8
int64_t rdx = *(arg1 + 0x108)
int64_t r9 = sx.q(r8 + 1) << 2
int64_t r12 = *(arg1 + 0x120) + (sx.q(*(r9 + rdx)) << 2)
int64_t r8_1 = sx.q(r8) << 2
int64_t rsi = sx.q(*(r8_1 + rdx))
int64_t rdx_1 = *(arg1 + 0x150)
int64_t r14 = sx.q(*(r8_1 + rdx_1))
void* var_e8 = &var_d8
int32_t var_dc = 0x20
int32_t rdi = (r14 + rsi).d
void* var_58 = nullptr
int32_t var_e0 = rdi
int64_t r13 = *(arg1 + 0x168) + (sx.q(*(r9 + rdx_1)) << 2)

if (rdi u> 0x20)
    void* rax_6 = j_sub_140a82f30(zx.q(rdi) << 2)
    rbx = rax_6
    var_58 = rax_6
    void* var_e8_1 = rax_6
    int32_t var_dc_1 = rdi

int64_t rdi_1 = rsi << 2
void* rsi_1 = rdi_1 + rbx

if (sub_1429ccc20(arg1, arg2, rbx, rsi_1) == 0)
    rbx.b = 0
else
    memcpy(r12, rbx, rdi_1.d)
    memcpy(r13, rsi_1, (r14 << 2).d)
    rbx.b = 1

j_sub_140a74f90(var_58)
__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rbx.b)

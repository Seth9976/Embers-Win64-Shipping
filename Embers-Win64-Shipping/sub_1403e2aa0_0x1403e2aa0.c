// 函数: sub_1403e2aa0
// 地址: 0x1403e2aa0
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
int32_t var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t r15 = arg3
int64_t r8 = sx.q(*(arg1 + 0x114))
int32_t r14 = arg4
int64_t rcx_1 = sx.q(*(arg1 + 0x10c) + r8.d) << 2
int64_t rax_4 = rcx_1 + 0xf

if (rax_4 u<= rcx_1)
    rax_4 = 0xffffffffffffff0

int64_t rax_5 = rax_4 & 0xfffffffffffffff0
__chkstk(rax_5)
void var_88
void* rsp_1 = &var_88 - rax_5
memcpy(rsp_1 + 0x40, arg1 + 0x18, (r8 << 2).d)
int64_t r12 = *(arg1 + 0x128)
int64_t r13 = arg2
var_48 = *(arg1 + 0x110)
int32_t rsi
uint32_t count

while (true)
    rsi = *(arg1 + 0x10c)
    int64_t r9 = *(arg1 + 0x128)
    void* rdx_1 = rsp_1 + 0x40 + (sx.q(*(arg1 + 0x114)) << 2)
    
    if (r14 s< rsi)
        rsi = r14
    
    *(rsp_1 + 0x20) = rsi
    sub_1403e7700(arg1, rdx_1, r15, r9)
    uint64_t r9_1 = zx.q(*(arg1 + 0x114))
    *(rsp_1 + 0x30) = var_48
    *(rsp_1 + 0x28) = rsi << 0x10
    *(rsp_1 + 0x20) = *(arg1 + 0x118)
    r13 = sub_1403e2c10(r13, rsp_1 + 0x40, r12 + 4, r9_1)
    r14 -= rsi
    int64_t rax_12 = sx.q(rsi)
    count = *(arg1 + 0x114) << 2
    r15 += rax_12 << 1
    
    if (r14 s<= 1)
        break
    
    memcpy(rsp_1 + 0x40, rsp_1 + 0x40 + (rax_12 << 2), count)

int64_t result = memcpy(arg1 + 0x18, rsp_1 + 0x40 + (sx.q(rsi) << 2), count)
__security_check_cookie(rax_1 ^ &var_48)
return result

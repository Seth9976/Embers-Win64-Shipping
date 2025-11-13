// 函数: sub_140a80970
// 地址: 0x140a80970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t r9 = *(arg4 + 8)
uint64_t r10 = arg2
int32_t rdi = *(arg4 + 0x10)

if (r9 s<= 0)
    r9 = 0

int32_t rcx = *(arg4 + 0xc)
int32_t rax_2 = *(arg4 + 0x14)
char r8 = *(arg3 + 0x74)

if (rdi s<= 0)
    rdi = 0

*(arg4 + 8) = r9
*(arg4 + 0x10) = rdi

if (r9 s>= rcx)
    rcx = r9

*(arg4 + 0xc) = rcx

if (rdi s>= rax_2)
    rax_2 = rdi

*(arg4 + 0x14) = rax_2

if (arg4[1] == 0 || r8 == 0)
    arg2 = 0
else
    arg2.b = 1

int32_t var_110 = 0x29
void var_a8
int32_t rax_4 =
    sub_140a80ad0(r10, arg2.b, r8, *(arg3 + 0x75), *(arg3 + 0x70), arg3 + 0x76, r9, rcx, &var_a8)
int32_t rdx = 0
int16_t var_108[0x30]

if (rdi s> 0)
    uint64_t rcx_2 = 0x12
    
    if (rdi s<= 0x12)
        rcx_2 = zx.q(rdi)
    
    if (rcx_2.d s> 0)
        rdx = rcx_2.d
        int64_t rcx_3
        int64_t rdi_1
        rdi_1, rcx_3 = __memfill_u16(&var_108, *(arg3 + 0x76), rcx_2)

if (sx.q(rdx) * 2 u>= 0x52)
    __report_rangecheckfailure()
    noreturn

int32_t var_120
var_120.q = arg5
char rdx_1 = *arg4
var_108[sx.q(rdx)] = 0
int16_t var_138
var_138.d = rax_4
int64_t result = sub_140a6a820(arg1, rdx_1, arg3, &var_a8, var_138, &var_108, rdx, var_120)
__security_check_cookie(rax_1 ^ &var_158)
return result

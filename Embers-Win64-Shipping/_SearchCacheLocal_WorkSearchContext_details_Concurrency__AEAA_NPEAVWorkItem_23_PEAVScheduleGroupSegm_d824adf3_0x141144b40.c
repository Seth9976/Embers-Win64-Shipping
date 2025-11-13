// 函数: ?SearchCacheLocal@WorkSearchContext@details@Concurrency@@AEAA_NPEAVWorkItem@23@PEAVScheduleGroupSegmentBase@23@_NK@Z
// 地址: 0x141144b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t r10 = data_143e570c0
int64_t rax_3 = data_143e57100
int64_t rax_4 = data_143e57120
int64_t rax_5 = data_143e57140
int64_t* rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rax_6 = sx.q(*(arg3 + 0x18d0))
void* var_b8 = arg1
int64_t rdx = rax_6 << 3
int64_t rcx = *(*(rdx + arg3 + 0x18b0 + 8) + 0x30)
int64_t rcx_1 = *(*(rdx + arg3 + 0x18b8) + 0x10)
void* rax_9 = &rbx_2[6]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rbx_2[6]

*(arg2 + 0x30) = rax_9
*rbx_2 = r10
rbx_2[1] = rax_3
rbx_2[2] = rax_4
rbx_2[3] = rax_5
rbx_2[4] = rcx
rbx_2[5] = rcx_1
void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_15 = &rcx_5[6]

if (rax_15 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = &rcx_5[6]

*(arg2 + 0x30) = rax_15
void**** rax_16 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_16 = rcx_5
*(arg2 + 8) = &rcx_5[1]
rcx_5[1] = 0
rcx_5[5] = 0
*rcx_5 = &data_142da7798
rcx_5[2].d = 6
rcx_5[3] = rbx_2
rcx_5[4].d = 2
*(rcx_5 + 0x24) = 3
int64_t r15 = *(arg2 + 0x1b0)
int64_t r9 = *(arg4 + 0x10)
int64_t var_b0 = r15
sub_1410809a0(arg1, arg2, r15, r9)
void* r14_1 = data_143a2dd48
int32_t rsi_1 = *(r14_1 + 0x68)
int32_t rdi = *(r14_1 + 0x64)
int32_t rbx_5 = *(r14_1 + 0x60)
char var_c0 = 0
sub_14107ee50(var_b8 + 0x118, arg2, &var_b0, *(arg3 + 0x18b0 + (sx.q(*(arg3 + 0x18d0)) << 3) + 8), 
    *(arg3 + 0x18b0), r14_1.d, rbx_5, rdi, rsi_1.b)
int32_t var_a8 = rbx_5
void* rbx_6 = var_b8
int32_t var_a0 = rsi_1
int32_t var_a4 = rdi
int32_t var_d8
var_d8.q = 0
int32_t var_e8
var_e8.q = r14_1
sub_1410e8980(rbx_6 + 0x13c, arg2, r15, &data_143e570b0, var_e8, &var_a8, var_d8)
sub_1410e8640(rbx_6 + 0x16e, arg2, r15, arg5)
var_b8.d = *(arg4 + 0xc60)
sub_140741e30(arg2, &var_b0, rbx_6 + 0x18c, &var_b8, 0)
void* r9_5 = arg4 + 0xbf0
int32_t* var_e0_1
var_e0_1.d = 0
void* rax_20 = *(r9_5 + 0x60)

if (rax_20 != 0)
    r9_5 = rax_20

sub_14077c9b0(arg2, &var_b0, rbx_6 + 0x192, r9_5, *(arg4 + 0xc60), var_e0_1.d)
var_b8.d = data_1439b64a0
uint64_t result = sub_140741e30(arg2, &var_b0, rbx_6 + 0x198, &var_b8, 0)
__security_check_cookie(rax_1 ^ &var_108)
return result

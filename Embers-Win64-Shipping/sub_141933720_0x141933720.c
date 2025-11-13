// 函数: sub_141933720
// 地址: 0x141933720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int16_t* const r14 = &data_142d40450

if (arg1[0x39].b == 2)
    int64_t* rcx = arg1[0x2d]
    (*(*rcx + 0x1b8))(rcx)
    int64_t* rcx_1 = arg1[0x2d]
    arg1[0x2d] = 0
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)
    
    int64_t* rax_4 = __crt_deferred_errno_cache::get(&data_143db7b00)
    arg1[0x2c].d
    (*(*rax_4 + 0x80))()
    arg1[0x2c].d = 0
    
    if (*(arg1 + 0x164) != 0)
        sub_1405947f0(&arg1[0x2b], 0)
    
    arg2 = sub_141938f70(&arg1[0x2e], 0)

int64_t* rsi = arg1[0x29]
void var_98
memset(&var_98, 0, 0x78)
void* rbx = &var_98
int64_t i_1 = 6
int64_t i

do
    sub_140b31010(rsi, rbx)
    rbx += 0x14
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* rcx_6 = rsi[1]
int32_t var_b8 = 0
int32_t* rdx_2 = *rcx_6

if (&rdx_2[1] u> rcx_6[1])
    int32_t* rdx_3 = &var_b8
    
    if ((*(rsi + 0x29) & 0x20) != 0)
        sub_140b54070(rsi, rdx_3, arg2)
    else
        (*(*rsi + 0x150))(rsi, rdx_3, 4)
else
    var_b8 = *rdx_2
    *rcx_6 += 4

int64_t* rcx_8 = arg1[0x29]
char rbx_1 = *(rcx_8 + 0x29) & 3
int32_t r8 = (*(*rcx_8 + 0x1b8))()
int64_t* rcx_9 = arg1[0x29]

if (rcx_9 != 0)
    r8 = (**rcx_9)(rcx_9, 1)

arg1[0x29] = 0

if (rbx_1 != 0)
    sub_140af98a0("Unknown", 0x124a, 
        CloseWriteHandle - FArchive error bit set, failed to write binary cache", sub_140926420(
        &data_143f02598, sub_140b58170(&var_b8, "FailedBinaryProgramArchiveWrite", 1)))
    r8 = sub_140afbb40()

int16_t* var_a8
int32_t rcx_12 = sub_14193d4e0(arg1, &var_a8, r8)
var_b8.q = 0
int32_t var_a0
sub_1405a4c70(&var_b8, sbb.d(rcx_12, rcx_12, var_a0 != 0) + 7 + var_a0, 0)
int16_t* rsi_1 = var_a8
memcpy(var_b8.q, rsi_1, var_a0 * 2)
sub_140a20ba0(&var_b8, u".write", 6)
int64_t* rax_14 = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* rdx_9 = &data_142d40450

if (var_a0 != 0)
    rdx_9 = rsi_1

int64_t r8_3 = *rax_14
(*(r8_3 + 0x80))(rax_14, rdx_9, r8_3)
int16_t* const r8_4 = &data_142d40450
int16_t* rbp = var_b8.q

if (var_a0 != 0)
    r8_4 = rbp

if (var_a0 != 0)
    r14 = rsi_1

int64_t result = (*(*rax_14 + 0x90))(rax_14, r14, r8_4)

if (rbp != 0)
    result = sub_140a74f90(rbp)

if (rsi_1 != 0)
    result = sub_140a74f90(rsi_1)

__security_check_cookie(rax_1 ^ &var_d8)
return result

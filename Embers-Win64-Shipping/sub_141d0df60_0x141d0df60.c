// 函数: sub_141d0df60
// 地址: 0x141d0df60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int64_t* rsi_2 = (sx.q(not.d(*(arg1 + 0xdc))) & r10) * 0x30 + *(arg1 + 0xb8)
uint64_t r13 = zx.q(*(rsi_2 + 6))
int32_t r14 = rsi_2[5].d
uint64_t r15_1 = *rsi_2 & 0xffffffffffff
int64_t r12 = rsi_2[1]
void* rbx_1 = r13 * 0x98 + *(arg1 + 0xa8)
char rax_7 = sub_141cf6230(rbx_1 + ((zx.q(r14.b) * 3 + sx.q(*(rsi_2 + 0x2c)) + 0xd) << 2), 
    arg1 + 0xb8, r10.d, r15_1, r15_1 - 1 + r12, *(rbx_1 + 0x20), *(rbx_1 + 0x24))

if (rax_7 != 0)
    void* var_48
    int64_t* var_60_1 = &var_48
    var_48 = arg1
    int64_t (* var_68)(int64_t* arg1, int32_t* arg2) = sub_141cfc930
    int64_t r12_2 = r12 - 1 + r15_1
    int32_t var_90
    var_90.q = *(rbx_1 + 0x18)
    int64_t var_40_1 = r12_2
    uint8_t var_38_1 = (r14 u>> 9).b & 1
    sub_141cf4a50(rbx_1 + 0x80, arg1 + 0xe0, r15_1, r12_2, 0, var_90, *(rbx_1 + 0x20), 
        *(rbx_1 + 0x24), &var_68)
    
    if (*(*(rbx_1 + 8) + 0x190) == 0)
        sub_141d124f0(arg1, 0, r13.w)
    
    int32_t rcx_5 = *(rbx_1 + 0x7c)
    void* arg_8
    void** var_50_1 = &arg_8
    arg_8 = arg1
    void* (* var_58)(int64_t* arg1, int32_t* arg2) = sub_141cfcaf0
    var_90.q = *(rbx_1 + 0x18)
    sub_141cf54c0(rcx_5, arg1 + 0xe0, r15_1, r12_2, 0, var_90, *(rbx_1 + 0x20), *(rbx_1 + 0x24), 
        &var_58)

int64_t rdx_4 = rsi_2[3]
int32_t rbx_2 = rsi_2[4].d
__builtin_memset(rsi_2, 0, 0x2c)
*(rsi_2 + 0x2c) = 3
sub_1407c23d0(arg1 + 0x108, rdx_4)
*(arg1 + 0x50) -= 1
int64_t rbp_1 = sx.q(*(arg1 + 0xd0))
int32_t rsi_5 = not.d(*(arg1 + 0xdc)) & rbx_2
int32_t rax_15 = (rbp_1 + 1).d
*(arg1 + 0xd0) = rax_15

if (rax_15 s> *(arg1 + 0xd4))
    sub_1405a4cf0(arg1 + 0xc8)

*(*(arg1 + 0xc8) + (rbp_1 << 2)) = rsi_5
int32_t result = *(arg1 + 0xd0) + 1

if (result != *(arg1 + 0xc0))
    return result

*(arg1 + 0xc0) = 0

if (*(arg1 + 0xc4) != 0)
    sub_1405a5220(arg1 + 0xb8, 0)

*(arg1 + 0xd0) = 0

if (*(arg1 + 0xd4) != 0)
    sub_1405dadb0(arg1 + 0xc8, 0)

return sub_141cfc5b0(arg1 + 0xb8)

// 函数: sub_141047de0
// 地址: 0x141047de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x58)
int32_t r12 = -1
void* r13 = arg5
int32_t r14 = 0
int32_t r15 = -1
char var_b8 = 0
void* rbx = **(*(arg1 + 8) + 0x6d8)
int64_t var_80 = *(rbp + 0x20)
int32_t var_78 = 0
int32_t var_70 = 0
int64_t var_b0 = *(*(r13 + 0x58) + 0x20)
int32_t var_a8 = 0
int32_t var_a0 = 0

if (*(rbp + 0xfc) != 0)
    sub_141037220(rbx + 0x1c0, rbp, 0x400, 0)
    r14 = var_a0
else
    r15 = *(rbp + 0xf0)
    
    if (r15 != 0x400)
        var_b8 = 1
        sub_1410129f0(rbx + 0x1c0, rbp, r15, 0x400, 0)
        r14 = var_a0

void* rdi = *(r13 + 0x58)
arg5.b = 0

if (*(rdi + 0xfc) != 0)
    sub_141037220(rbx + 0x1c0, rdi, 0x800, r14)
else
    r12 = *(rdi + 0xf0)
    
    if (r12 != 0x800)
        arg5.b = 1
        sub_1410129f0(rbx + 0x1c0, rdi, r12, 0x800, r14)

void* rsi = *(rbx + 0x1c8)
int32_t rdx_4 = *(rsi + 0x128)
int64_t* rcx_5 = *(rsi + 0x30)

if (rdx_4 != 0)
    (*(*rcx_5 + 0xd0))(rcx_5, rdx_4, *(rsi + 0x120))
    *(rsi + 0x128) = 0
    rsi = *(rbx + 0x1c8)

int64_t* rcx_6 = *(rsi + 0x30)
(*(*rcx_6 + 0x80))(rcx_6, &var_80, zx.q(arg2), zx.q(arg3), arg4, &var_b0, arg6)
void* rdx_6 = *(r13 + 0x58)
char result = data_1439b4ad4
void* rcx_7 = *(rdx_6 + 0x28)

if (rcx_7 == 0)
    if (result != 0 && *(rdx_6 + 0x38) != 0)
        sub_141026da0(*(*(rbx + 0x1c8) + 0x118), rdx_6 + 0x30)
        result = data_1439b4ad4
else if (result != 0 && *(rcx_7 + 0x30) != 0)
    sub_141026da0(*(*(rbx + 0x1c8) + 0x118), rcx_7 + 0x28)
    result = data_1439b4ad4

void* rdx_9 = *(arg1 + 0x58)
void* rcx_10 = *(rdx_9 + 0x28)

if (rcx_10 == 0)
    if (result != 0 && *(rdx_9 + 0x38) != 0)
        result = sub_141026da0(*(*(rbx + 0x1c8) + 0x118), rdx_9 + 0x30)
else if (result != 0 && *(rcx_10 + 0x30) != 0)
    result = sub_141026da0(*(*(rbx + 0x1c8) + 0x118), rcx_10 + 0x28)

if (arg5.b != 0)
    result = sub_1410129f0(rbx + 0x1c0, rdi, 0x800, r12, r14)

if (var_b8 == 0)
    return result

return sub_1410129f0(rbx + 0x1c0, rbp, 0x400, r15, 0)

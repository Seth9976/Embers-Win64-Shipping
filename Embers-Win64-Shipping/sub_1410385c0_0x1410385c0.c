// 函数: sub_1410385c0
// 地址: 0x1410385c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* r13 = *(arg1 + 0x28)
void* rcx = *(arg1 + 0x7d8)
void* r14 = *(*(rcx + 0x18) + 0xe8)

if (*(arg1 + 0x7e0) != 0)
    int64_t* rcx_1 = *(*(r13 + 0x1c8) + 0x30)
    (*(*rcx_1 + 0xe8))(rcx_1, *(r14 + 8))
    *(arg1 + 0x7e0) = 0
    *(arg1 + 0x810) = -1
    *(arg1 + 0x267a) = 0xffff
    *(arg1 + 0x2ca2) = 0xffff
    *(arg1 + 0x206a) = 0xffff
    rcx = *(arg1 + 0x7d8)

void* rcx_2 = *(rcx + 0x20)
char rdi = *(arg1 + 0x2fb0)
int64_t rax_6

if (*(rcx_2 + 0x28) == 0)
    rax_6 = sub_141026e90(rcx_2)
else
    rax_6 = *(rcx_2 + 0x10)

int64_t rdx_2 = *(arg1 + 0x2fa8)

if (rdx_2 != rax_6)
    *(arg1 + 0x2fa8) = rax_6
    rdx_2 = rax_6
label_14103869e:
    int64_t* rcx_4 = *(*(*(arg1 + 0x28) + 0x1c8) + 0x30)
    (*(*rcx_4 + 0xc8))(rcx_4, rdx_2)
    *(arg1 + 0x2fb0) = 0
else if (rdi != 0)
    goto label_14103869e

int64_t* rcx_5 = *(*(r13 + 0x1c8) + 0x30)

if ((*(*rcx_5 + 0x40))(rcx_5) == 2)
    int64_t* rcx_6 = *(arg1 + 0x28)
    (*(*rcx_6 + 0x318))(rcx_6, zx.q(*(arg1 + 0x7e4)))

sub_141043f10(arg1, r14, 5, 6)
int64_t var_80
__builtin_memset(&var_80, 0, 0x30)
uint32_t rbp = 0
uint32_t rsi = 0
int64_t var_48 = 0
int32_t var_40 = 0
int16_t rax_13
int64_t rax_17
uint32_t rdi_1

for (int32_t i = 0; i u< 2; i += 1)
    uint32_t rcx_8 = *(arg1 + 0x3010)
    rdi_1 = 0
    rax_13 = ((1 << rcx_8.b) - 1) & *(arg1 + 0x267a)
    
    if (rax_13 != 0)
        if (*(arg1 + 0x3c) s> 2)
            rsi = rcx_8
        else
            rsi = zx.d(*(r14 + 0x55))
        
        rdi_1 = rsi
    
    uint32_t rcx_9 = *(arg1 + 0x2fe0)
    int64_t rax_14
    rax_14.b = rcx_9 u< 0x40
    rax_17 = ((rax_14 << rcx_9.b) - 1) & *(arg1 + 0x810)
    
    if (rax_17 != 0)
        if (*(arg1 + 0x3c) != 1)
            rbp = rcx_9
        else
            rbp = zx.d(*(r14 + 0x53))
        
        rdi_1 += rbp
    
    var_40:2.w = ((1 << (*(arg1 + 0x2ff8)).b) - 1) & *(arg1 + 0x206a)
    
    if (sub_141016130(*(arg1 + 0x3070), rdi_1) != 0)
        break
    
    int64_t* rcx_12 = *(arg1 + 0x3070)
    
    if ((*(*rcx_12 + 8))(rcx_12) == 0)
        break
    
    rdi_1 = 0

int32_t result
int32_t r9
result, r9 = sub_141033be0(*(arg1 + 0x3070), rdi_1)
int32_t result_1 = result

if (rax_13 != 0)
    int32_t* var_a0_1 = &result_1
    result, r9 = sub_141008360(arg1 + 0x3020, r14, arg1 + 0x2670, r9, rsi)

if (rax_17 != 0)
    int32_t* var_a0_2 = &result_1
    result = sub_141006650(arg1 + 0x3020, r14, arg1 + 0x7e8, r9, rbp)

if (var_40:2.w != 0)
    result = sub_141002ba0(arg1 + 0x3020, r14, arg1 + 0x2060, &var_40:2)

void* rbx_1 = *(r13 + 0x1c8)
int32_t rdx_10 = *(rbx_1 + 0x128)
int64_t* rcx_17 = *(rbx_1 + 0x30)

if (rdx_10 != 0)
    result = (*(*rcx_17 + 0xd0))(rcx_17, rdx_10, *(rbx_1 + 0x120))
    *(rbx_1 + 0x128) = 0

__security_check_cookie(rax_1 ^ &var_c8)
return result

// 函数: sub_1427d5010
// 地址: 0x1427d5010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[5]
int32_t arg_8
int32_t* rdi = &arg_8
arg_8 = 0x1ce

if (rax != 0)
    rdi = rax

int32_t* rax_1 = arg1[6]
int32_t rsi = 0

if (rax_1 != 0)
    rsi = *rax_1

sub_1427e5da0(arg1, *arg2)
sub_1427e5da0(arg1, arg2[2])
uint64_t rdx_2 = zx.q(*rdi)
int32_t var_24 = rsi + 0x1a8
char var_20 = 1
int64_t* var_18 = arg2
char var_28 = 1
sub_1427de010(arg1, rdx_2, &var_28)
*rdi += 1
void* rdx_3 = *arg1

if (*(rdx_3 + 0x10) != 0)
    if (*(*(rdx_3 + 8) + zx.q(*(rdx_3 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_5 = arg1[1]
        (*(*rcx_5 + 0x20))(rcx_5, rdx_3)
    
    void* rax_5 = *arg1
    *(rax_5 + 0x10) -= 1

sub_1427e5da0(arg1, arg2[3])
uint64_t rdx_5 = zx.q(*rdi)
int32_t var_24_1 = rsi + 0x1b4
char var_20_1 = 0
var_28 = 1
void* result = sub_1427de010(arg1, rdx_5, &var_28)
void* rdx_6 = *arg1

if (*(rdx_6 + 0x10) != 0)
    if (*(*(rdx_6 + 8) + zx.q(*(rdx_6 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_11 = arg1[1]
        (*(*rcx_11 + 0x20))(rcx_11, rdx_6)
    
    result = *arg1
    *(result + 0x10) -= 1

void* rdx_7 = *arg1

if (*(rdx_7 + 0x10) != 0)
    if (*(*(rdx_7 + 8) + zx.q(*(rdx_7 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_15 = arg1[1]
        (*(*rcx_15 + 0x20))(rcx_15, rdx_7)
    
    result = *arg1
    *(result + 0x10) -= 1

return result

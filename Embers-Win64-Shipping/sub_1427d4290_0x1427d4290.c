// 函数: sub_1427d4290
// 地址: 0x1427d4290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[5]
int32_t arg_8
int32_t* rsi = &arg_8
arg_8 = 0x1b4

if (rax != 0)
    rsi = rax

sub_1427e5da0(arg1, *arg2)
sub_1427e5da0(arg1, arg2[2])
int64_t arg_10
void arg_20
arg2[5](arg1[2], &arg_10, &arg_20)
void* rdx_3 = *arg1
char const* const rdi = "bad__repx__name"
char const* const r8_1

if (*(rdx_3 + 0x10) == 0)
    r8_1 = "bad__repx__name"
else
    r8_1 = *(*(rdx_3 + 8) + zx.q(*(rdx_3 + 0x10) - 1) * 0x10)

sub_1427e34e0(arg1[1], arg1[4], r8_1, arg_10)
*rsi += 1
void* rdx_5 = *arg1

if (*(rdx_5 + 0x10) != 0)
    if (*(*(rdx_5 + 8) + zx.q(*(rdx_5 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_9 = arg1[1]
        (*(*rcx_9 + 0x20))(rcx_9, rdx_5)
    
    void* rax_4 = *arg1
    *(rax_4 + 0x10) -= 1

sub_1427e5da0(arg1, arg2[3])
arg2[5](arg1[2], &arg_10, &arg_8)
void* rdx_8 = *arg1

if (*(rdx_8 + 0x10) != 0)
    rdi = *(*(rdx_8 + 8) + zx.q(*(rdx_8 + 0x10) - 1) * 0x10)

void* result = sub_1427e34e0(arg1[1], arg1[4], rdi, arg_8.q)
void* rdx_10 = *arg1

if (*(rdx_10 + 0x10) != 0)
    if (*(*(rdx_10 + 8) + zx.q(*(rdx_10 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_19 = arg1[1]
        (*(*rcx_19 + 0x20))(rcx_19, rdx_10)
    
    result = *arg1
    *(result + 0x10) -= 1

void* rdx_11 = *arg1

if (*(rdx_11 + 0x10) != 0)
    if (*(*(rdx_11 + 8) + zx.q(*(rdx_11 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_23 = arg1[1]
        (*(*rcx_23 + 0x20))(rcx_23, rdx_11)
    
    result = *arg1
    *(result + 0x10) -= 1

return result

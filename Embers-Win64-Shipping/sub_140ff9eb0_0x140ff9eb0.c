// 函数: sub_140ff9eb0
// 地址: 0x140ff9eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15 = zx.q(arg2)
int32_t arg_10 = 0
int64_t* arg_8
int64_t* rcx_1
int64_t* rbx
int32_t rsi
int64_t* rdi

if (arg3 == 0)
    rbx = arg_8
    rcx_1 = nullptr
    rdi = nullptr
    rsi = 2
else
    rbx = *(arg3 + 0x38)
    
    if (rbx != 0)
        (*(*rbx + 8))(rbx)
    
    rcx_1 = arg_8
    rdi = rbx
    rsi = 1

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)

if ((rsi.b & 1) != 0 && rbx != 0)
    (*(*rbx + 0x10))(rbx)

void* rdx = arg3 + 0x20

if (arg3 == 0)
    rdx = nullptr

sub_140ffddd0(arg1 - 0x18, rdx, r15.d)
uint32_t rcx_4 = zx.d(*(arg1 + (r15 << 1) + 0x1d88))
int64_t** result = ((r15 + 0x1a1) << 4) + arg1 + 0x158
arg_10 = arg4
uint32_t arg_20 = rcx_4
arg_8 = rdi

if (*result == rdi && *(result + 0xc) == arg4 && result[1].d == rcx_4)
    return result

*result = rdi
*(result + 0xc) = arg4
result[1].d = rcx_4
int64_t* rcx_5 = *(arg1 + 0x170)
return (*(*rcx_5 + 0x90))(rcx_5, zx.q(r15.d), 1, &arg_8, &arg_20, &arg_10)

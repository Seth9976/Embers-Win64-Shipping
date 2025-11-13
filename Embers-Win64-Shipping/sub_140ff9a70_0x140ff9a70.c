// 函数: sub_140ff9a70
// 地址: 0x140ff9a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15 = zx.q(arg3)
int32_t arg_18 = 0
int64_t* rcx_1
int64_t* rbx
int32_t rsi
int64_t* rdi

if (arg4 == 0)
    rbx = arg5
    rcx_1 = nullptr
    rdi = nullptr
    rsi = 2
else
    rbx = *(arg4 + 0x28)
    
    if (rbx != 0)
        (*(*rbx + 8))(rbx)
    
    rcx_1 = arg5
    rdi = rbx
    rsi = 1

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)

if ((rsi.b & 1) != 0 && rbx != 0)
    (*(*rbx + 0x10))(rbx)

arg5 = rdi
int64_t** rax_6 = ((r15 + 0x23b) << 4) + arg1 + 0x158

if (*rax_6 != rdi || rax_6[1].d != 0 || *(rax_6 + 0xc) != 0x1000)
    *rax_6 = rdi
    rax_6[1].d = 0
    *(rax_6 + 0xc) = 0x1000
    int64_t* rcx_4 = *(arg1 + 0x170)
    (*(*rcx_4 + 0x238))(rcx_4, zx.q(r15.d), 1, &arg5)

sub_1405d16e0((r15 << 3) + 0x4328 + arg1, arg4)
int16_t result = *(arg1 + 0x43a2) | (1 << (r15.d u% 0x20)).w
*(arg1 + 0x43a2) = result
return result

// 函数: sub_140ff9b80
// 地址: 0x140ff9b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = zx.q(arg3)
int32_t arg_10 = 0
int64_t rsi = 2
int64_t* rcx_1
int64_t* rbx
int32_t rbp
int64_t* rdi

if (arg4 == 0)
    rdi = arg_10.q
    rcx_1 = nullptr
    rbx = nullptr
    rbp = 2
else
    rdi = *(arg4 + 0x28)
    
    if (rdi != 0)
        (*(*rdi + 8))(rdi)
    
    rcx_1 = arg_10.q
    rbx = rdi
    rbp = 1

if ((2 & rbp.b) != 0)
    rbp &= 0xfffffffd
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)

if ((rbp.b & 1) != 0 && rdi != 0)
    (*(*rdi + 0x10))(rdi)

uint32_t rcx_3 = zx.d(*(arg2 + 0x2c))

if (rcx_3 == 0)
    arg_10.q = rbx
    void* rax_22 = ((r14 + 0x1f5) << 4) + arg1 + 0x158
    
    if (*rax_22 == rbx && *(rax_22 + 8) == 0)
        rsi = 0
    
    if (*rax_22 != rbx || *(rax_22 + 8) != 0 || *(rax_22 + 0xc) != 0x1000)
        *rax_22 = rbx
        *(rax_22 + 8) = 0
        *(rax_22 + 0xc) = 0x1000
        int64_t* rcx_16 = *(arg1 + 0x170)
        (*(*rcx_16 + 0x38))(rcx_16, zx.q(r14.d), 1, &arg_10)
        rsi = 0
    
    sub_1405d16e0(arg1 + ((rsi * 0xe + 0x81f + r14) << 3), arg4)
    *(arg1 + (rsi << 1) + 0x4398) |= (1 << (r14.d u% 0x20)).w
else if (rcx_3 == 1)
    arg_10.q = rbx
    int64_t** rax_18 = ((r14 + 0x203) << 4) + arg1 + 0x158
    
    if (*rax_18 != rbx || rax_18[1].d != 0 || *(rax_18 + 0xc) != 0x1000)
        *rax_18 = rbx
        rax_18[1].d = 0
        *(rax_18 + 0xc) = 0x1000
        int64_t* rcx_14 = *(arg1 + 0x170)
        (*(*rcx_14 + 0x1f0))(rcx_14, zx.q(r14.d), 1, &arg_10)
    
    rsi = 1
    sub_1405d16e0(arg1 + ((rsi * 0xe + 0x81f + r14) << 3), arg4)
    *(arg1 + (rsi << 1) + 0x4398) |= (1 << (r14.d u% 0x20)).w
else if (rcx_3 == 2)
    arg_10.q = rbx
    int64_t** rax_14 = ((r14 + 0x211) << 4) + arg1 + 0x158
    
    if (*rax_14 != rbx || rax_14[1].d != 0 || *(rax_14 + 0xc) != 0x1000)
        *rax_14 = rbx
        rax_14[1].d = 0
        *(rax_14 + 0xc) = 0x1000
        int64_t* rcx_12 = *(arg1 + 0x170)
        (*(*rcx_12 + 0x210))(rcx_12, zx.q(r14.d), 1, &arg_10)
    
    sub_1405d16e0(arg1 + ((rsi * 0xe + 0x81f + r14) << 3), arg4)
    *(arg1 + (rsi << 1) + 0x4398) |= (1 << (r14.d u% 0x20)).w
else if (rcx_3 == 3)
    arg_10.q = rbx
    int64_t** rax_10 = ((r14 + 0x21f) << 4) + arg1 + 0x158
    
    if (*rax_10 != rbx || rax_10[1].d != 0 || *(rax_10 + 0xc) != 0x1000)
        *rax_10 = rbx
        rax_10[1].d = 0
        *(rax_10 + 0xc) = 0x1000
        int64_t* rcx_10 = *(arg1 + 0x170)
        (*(*rcx_10 + 0x80))(rcx_10, zx.q(r14.d), 1, &arg_10)
    
    rsi = 3
    sub_1405d16e0(arg1 + ((rsi * 0xe + 0x81f + r14) << 3), arg4)
    *(arg1 + (rsi << 1) + 0x4398) |= (1 << (r14.d u% 0x20)).w
else if (rcx_3 == 4)
    arg_10.q = rbx
    int64_t** rax_6 = ((r14 + 0x22d) << 4) + arg1 + 0x158
    
    if (*rax_6 != rbx || rax_6[1].d != 0 || *(rax_6 + 0xc) != 0x1000)
        *rax_6 = rbx
        rax_6[1].d = 0
        *(rax_6 + 0xc) = 0x1000
        int64_t* rcx_8 = *(arg1 + 0x170)
        (*(*rcx_8 + 0xb0))(rcx_8, zx.q(r14.d), 1, &arg_10)
    
    rsi = 4
    sub_1405d16e0(arg1 + ((rsi * 0xe + 0x81f + r14) << 3), arg4)
    *(arg1 + (rsi << 1) + 0x4398) |= (1 << (r14.d u% 0x20)).w

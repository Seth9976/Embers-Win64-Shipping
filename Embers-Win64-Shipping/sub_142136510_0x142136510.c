// 函数: sub_142136510
// 地址: 0x142136510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_14090a6a0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(rdi * 0x60 + r10_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x60 + r10_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]
int32_t rsi = 1

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* rbp_2 = sx.q(rdi.d) * 0x60 + *arg1
sub_142135610(arg4, rbp_2)
rbp_2[0xb].d = 0xffffffff
int32_t r9_1 = arg1[1].d - *(arg1 + 0x34)

if (r9_1 u>= 4)
    uint32_t rax_9 = r9_1 u>> 1
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_9 + 8)
    int32_t rcx_9
    
    if (rax_9 == 0xfffffff8)
        rcx_9 = 0x20
    else
        rcx_9 = 0x1f - temp0_1
    
    uint64_t rflags_2
    char temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rax_9 + 7)
    char r8_3
    
    if (rax_9 == 0xfffffff9)
        r8_3 = 0x20
    else
        r8_3 = 0x1f - temp0_2
    
    rsi = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r8_3))

int32_t rax_12

if (r9_1 s> 0)
    rax_12 = arg1[9].d

if (r9_1 s> 0 && (rax_12 == 0 || rax_12 s< rsi))
    arg1[9].d = rsi
    sub_140abea20(arg1)
else
    void* r9_2 = &arg1[7]
    int32_t r8_6 = (arg1[9].d - 1) & arg3
    *(rbp_2 + 0x5c) = r8_6
    void* rcx_15 = *(r9_2 + 8)
    void* rax_14 = r9_2
    
    if (rcx_15 != 0)
        rax_14 = rcx_15
    
    rbp_2[0xb].d = *(rax_14 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2))
    void* rcx_16 = *(r9_2 + 8)
    
    if (rcx_16 != 0)
        r9_2 = rcx_16
    
    *(r9_2 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2)) = rdi.d

*arg2 = rdi.d

if (arg5 != 0)
    *arg5 = 0

return arg2

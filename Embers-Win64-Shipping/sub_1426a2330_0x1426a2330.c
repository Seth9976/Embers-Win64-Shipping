// 函数: sub_1426a2330
// 地址: 0x1426a2330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t rdx = sx.q(*((rdi << 5) + r10_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 5) + r10_1) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]
int32_t r9 = 1

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int64_t* rdx_5 = arg3[1]
int32_t* r11_2 = (sx.q(rdi.d) << 5) + *arg1
*r11_2 = **arg3
*(r11_2 + 8) = *rdx_5
*(r11_2 + 0x10) = rdx_5[1]
rdx_5[1] = 0
*rdx_5 = 0
r11_2[6] = 0xffffffff
uint32_t r15_2 = zx.d(*(r11_2 + 2)) ^ zx.d(*r11_2)
int32_t r10_3 = arg1[1].d - *(arg1 + 0x34)

if (r10_3 u>= 4)
    uint32_t rax_16 = r10_3 u>> 1
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_16 + 8)
    int32_t rcx_7
    
    if (rax_16 == 0xfffffff8)
        rcx_7 = 0x20
    else
        rcx_7 = 0x1f - temp0_1
    
    uint64_t rflags_2
    char temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rax_16 + 7)
    char r8_2
    
    if (rax_16 == 0xfffffff9)
        r8_2 = 0x20
    else
        r8_2 = 0x1f - temp0_2
    
    r9 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r8_2))

int32_t rax_20

if (r10_3 s> 0)
    rax_20 = arg1[9].d

if (r10_3 s> 0 && (rax_20 == 0 || rax_20 s< r9))
    arg1[9].d = r9
    sub_1426bc230(arg1)
else
    void* r9_1 = &arg1[7]
    void* rax_21 = r9_1
    uint64_t r8_5 = zx.q(arg1[9].d - 1) & zx.q(r15_2)
    r11_2[7] = r8_5.d
    void* rcx_13 = *(r9_1 + 8)
    
    if (rcx_13 != 0)
        rax_21 = rcx_13
    
    r11_2[6] = *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
    void* rcx_14 = *(r9_1 + 8)
    
    if (rcx_14 != 0)
        r9_1 = rcx_14
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi.d

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = 0

return arg2

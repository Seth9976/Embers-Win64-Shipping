// 函数: sub_142136290
// 地址: 0x142136290
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
    int64_t r9 = *arg1
    int64_t rdx = sx.q(*((rdi << 5) + r9 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 5) + r9) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int64_t* rcx_6 = arg3[1]
int128_t* rbp_2 = (sx.q(rdi.d) << 5) + *arg1
*rbp_2 = **arg3
rbp_2[1].q = *rcx_6
*(rbp_2 + 0x18) = 0xffffffff
int32_t rax_13 = sub_140a6b260(rbp_2, 0x10)

if (sub_140cb1970(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r9_1 = &arg1[7]
    int32_t rax_17 = (arg1[9].d - 1) & rax_13
    *(rbp_2 + 0x1c) = rax_17
    void* rdx_7 = *(r9_1 + 8)
    int64_t r8_2 = sx.q(rax_17)
    void* rax_18 = r9_1
    
    if (rdx_7 != 0)
        rax_18 = rdx_7
    
    *(rbp_2 + 0x18) = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
    void* rax_20 = *(r9_1 + 8)
    
    if (rax_20 != 0)
        r9_1 = rax_20
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi.d

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = 0

return arg2

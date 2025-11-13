// 函数: sub_14138a150
// 地址: 0x14138a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int32_t r8 = *(rbx + 0x34)
int64_t rdi

if (r8 == 0)
    rdi = zx.q(rbx[1].d)
    int32_t rax_1 = (rdi + 1).d
    rbx[1].d = rax_1
    
    if (rax_1 s> *(rbx + 0xc))
        sub_1405c5340(rbx)
    
    sub_1405b2ba0(&rbx[2], 0)
else
    rdi = sx.q(rbx[6].d)
    int64_t r9_1 = *rbx
    int64_t rdx = sx.q(*(rdi * 0x88 + r9_1 + 4))
    rbx[6].d = rdx.d
    *(rbx + 0x34) = r8 - 1
    
    if (r8 != 1)
        *(rdx * 0x88 + r9_1) = 0xffffffff

void* rax_2 = rbx[4]
void* r8_1 = &rbx[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t rbx_1 = sx.q(rdi.d) * 0x88
sub_1410eace0(*rbx + rbx_1, arg2)
int64_t* rax_8 = *(arg1 + 0x10)
*(arg1 + 8) = rdi.d
return *rax_8 + rbx_1

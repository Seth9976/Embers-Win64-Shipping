// 函数: sub_1421846d0
// 地址: 0x1421846d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1424256a0(arg1[1], &arg1[2])
void* rbx = *arg1
int32_t rcx_1 = *(rbx + 0x44)
int64_t rdi

if (rcx_1 == 0)
    rdi = zx.q(*(rbx + 0x18))
    int32_t rax_1 = (rdi + 1).d
    *(rbx + 0x18) = rax_1
    
    if (rax_1 s> *(rbx + 0x1c))
        sub_1405a4d70(rbx + 0x10)
    
    sub_1405b2ba0(rbx + 0x20, 0)
else
    rdi = sx.q(*(rbx + 0x40))
    int64_t rdx_1 = *(rbx + 0x10)
    int64_t r8_1 = sx.q(*(rdx_1 + (rdi << 3) + 4))
    *(rbx + 0x40) = r8_1.d
    *(rbx + 0x44) = rcx_1 - 1
    
    if (rcx_1 != 1)
        *(rdx_1 + (r8_1 << 3)) = 0xffffffff

void* rax_2 = *(rbx + 0x30)
void* r8_2 = rbx + 0x20

if (rax_2 != 0)
    r8_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_3 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_3 |= 1 << (rdi.b & 0x1f)
*(arg1[1] + 0xf8) = rdi.d
void* r8_4 = arg1[1]
void* result = *arg1
*(*(result + 0x10) + (sx.q(*(r8_4 + 0xf8)) << 3)) = r8_4
return result

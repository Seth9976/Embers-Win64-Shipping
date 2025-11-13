// 函数: sub_140b9a370
// 地址: 0x140b9a370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9_1 = *arg2 + 0x500
int64_t rax = _mm_bsrli_si128(*arg2, 8).q
int32_t temp0_1 = rax.d
int64_t* rbx

if (temp0_1 != 0)
    int32_t rcx_4
    
    if (temp0_1 s>= 0)
        rcx_4 = (rax u>> 0x20).d + *(r9_1 + 0x64) + (rax * 3).d - 3
    else
        rcx_4 = (rax u>> 0x20).d - ((rax << 1) + 2).d + *(r9_1 + 0x60)
    
    rbx = *(r9_1 + 0x48) + sx.q(rcx_4) * 0x18
else
    rbx = r9_1 + sx.q((rax u>> 0x20).d) * 0x18

void* rdx_1 = *arg3 + 0x500
int64_t rax_8 = _mm_bsrli_si128(*arg3, 8).q
int32_t temp1 = rax_8.d
void* rax_11

if (temp1 != 0)
    int32_t rcx_12
    
    if (temp1 s>= 0)
        rcx_12 = (rax_8 u>> 0x20).d + *(rdx_1 + 0x64) + (rax_8 * 3).d - 3
    else
        rcx_12 = (rax_8 u>> 0x20).d - ((rax_8 << 1) + 2).d + *(rdx_1 + 0x60)
    
    rax_11 = *(rdx_1 + 0x48) + sx.q(rcx_12) * 0x18
else
    rax_11 = rdx_1 + sx.q((rax_8 u>> 0x20).d) * 0x18

*(rax_11 + 0x10) += 1
int64_t rdi = sx.q(rbx[1].d)
int32_t rax_17 = (rdi + 1).d
rbx[1].d = rax_17

if (rax_17 s> *(rbx + 0xc))
    sub_1405a4f90(rbx)

int64_t result = *rbx
*(result + rdi * 0x10) = *arg3
return result

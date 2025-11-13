// 函数: sub_141f209c0
// 地址: 0x141f209c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x130)

if (rdi == 0)
    return 

if ((*(rdi + 0xec) == 0 & sub_140b5b8a0(rdi[0x1d].d, 0)) == 0)
    int32_t rbx_2 = *(rdi + 0xec)
    sub_140b5b8a0(rdi[0x1d].d, 0x11a)
    int64_t rdx_2
    rdx_2.b = rbx_2 == 0

if (sub_141dcdc50(rdi).d != 3)
    return 

int64_t* rcx_3 = *(arg1 + 0x130)

if ((*(*rcx_3 + 0x6b0))(rcx_3).b == 0)
    return 

void* rbx_3 = *(arg1 + 0x130)

if (rbx_3 == 0)
    return 

void* rbx_4 = *(rbx_3 + 0x258)

if (rbx_4 == 0)
    return 

void* rax_3 = sub_14256a090()
void* rdx_3 = *(rbx_4 + 0x10)
int64_t rax = sx.q(*(rax_3 + 0x38))

if (rax.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax << 3)) != rax_3 + 0x30)
    return 

void* rcx_5 = *(rbx_4 + 0x2b8)

if (rcx_5 == 0)
    return 

rax = zx.q(*(rcx_5 + 0x2710))

if (rax.b s< 0)
    *(rcx_5 + 0x2710) = rax.d | 0x200

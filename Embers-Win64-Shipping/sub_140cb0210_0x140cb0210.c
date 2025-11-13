// 函数: sub_140cb0210
// 地址: 0x140cb0210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg4)
int64_t* rax = sub_140cc3cb0(*(arg1 + 8))
int64_t* rdi = nullptr
int64_t* rbx = rax

if (rax == 0)
    int64_t* rax_1 = j_sub_140a82f30(zx.q((&rax[4]).d))
    rbx = rax_1
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        __builtin_memset(rax_1, 0, 0x20)

int32_t rax_2 = rbx[1].d + rbp.d
rbx[1].d = rax_2

if (rax_2 s> *(rbx + 0xc))
    sub_1405a4d70(rbx)

memcpy(*rbx, *arg2 + (sx.q(arg3) << 3), (rbp << 3).d)
int32_t rax_4 = sub_140a20af0()
uint64_t rdx_2 = zx.q(rax_4)
void* const rcx_4

if (rax_4 != 0)
    rcx_4 = *(&data_143cf0bf8 + (rdx_2 u>> 0xe << 3)) + (zx.q(rdx_2.d) & 0x3fff) * 0x18
else
    rcx_4 = nullptr

*(rcx_4 + 8) = rbx
sub_1405a42f0(arg1 + 0x10, rdx_2.d)
int64_t result = EnterCriticalSection(arg1 + 0x98)

if (*(arg1 + 0xc8) != 0)
    int64_t r8_2 = sx.q(*(arg1 + 0xc8))
    rdi = *(*(arg1 + 0xc0) + (r8_2 << 3) - 8)
    *(arg1 + 0xc8) = (r8_2 - 1).d
    result = sub_1405c53d0(arg1 + 0xc0)

if (arg1 != -0x98)
    result = LeaveCriticalSection(arg1 + 0x98)

if (rdi == 0)
    return result

return (*(*rdi + 0x10))(rdi)

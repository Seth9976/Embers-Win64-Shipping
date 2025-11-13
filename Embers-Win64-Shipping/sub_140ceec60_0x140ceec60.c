// 函数: sub_140ceec60
// 地址: 0x140ceec60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((not.b(*(arg1 + 0x30)) & 1) == 0)
    return sub_140cfb920(*(arg1 + 0x10), arg2[1].d, *arg2 + 0x1c) __tailcall

int32_t rbx = arg2[1].d
uint64_t* rdi = *(arg1 + 0x10)
rdi[1].d = 0

if (rbx != *(rdi + 0xc))
    sub_140ce4fc0(rdi, rbx, *(*arg2 + 0x2c))

rdi[6].d = 0xffffffff
*(rdi + 0x34) = 0
int32_t rax_4 = (rbx + 0x1f) & 0xffffffe0
rdi[5].d = 0

if (*(rdi + 0x2c) != rax_4)
    *(rdi + 0x2c) = rax_4
    sub_140d0bc80(&rdi[2], 0)

int32_t r8_5

if (rbx u< 4)
    r8_5 = 1
else
    uint32_t rax_6 = rbx u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_6 + 8)
    int32_t rcx_4
    
    if (rax_6 == 0xfffffff8)
        rcx_4 = 0x20
    else
        rcx_4 = 0x1f - temp0_2
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_6 + 7)
    char r8_4
    
    if (rax_6 == 0xfffffff9)
        r8_4 = 0x20
    else
        r8_4 = 0x1f - temp0_3
    
    r8_5 = 1 << ((not.d(rcx_4 << 0x1a s>> 0x1f)).b & (0x20 - r8_4))

if (rbx != 0)
    int32_t rax_9 = rdi[9].d
    
    if (rax_9 == 0 || rax_9 != r8_5)
        rdi[9].d = r8_5
        sub_1405a4aa0(&rdi[7], 0, r8_5, 4)

int64_t rcx_10 = sx.q(rdi[9].d)
void* result_1 = &rdi[7]
void* result = *(result_1 + 8)

if (rcx_10 s> 0)
    if (result != 0)
        result_1 = result
    
    result = 0xffffffff
    __builtin_memset(result_1, 0xffffffff, rcx_10 << 2)

return result

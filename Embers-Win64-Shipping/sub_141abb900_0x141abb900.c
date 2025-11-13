// 函数: sub_141abb900
// 地址: 0x141abb900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143de5480
int64_t rdi = data_143f2ba68
int64_t rbp = rdi
int64_t rdx
int64_t rbx

if (rax == 0)
    rbx = 0
    rdx = 0
else
    uint32_t rax_1 = GetCurrentThreadId()
    rdi = data_143f2ba68
    rbx = 0
    rax = data_143de5480
    rdx.b = rax_1 != data_143de5470

int32_t rcx = *(arg1 + 0x20)

if (*(rbp + (rdx << 2)) == 0xffffffff)
    return zx.q(rcx)

if (rcx == 0xffffffff)
    if (rax != 0)
        rbx.b = GetCurrentThreadId() != data_143de5470
    
    return zx.q(*(rdi + (rbx << 2)))

if (rax != 0)
    bool cond:2_1 = GetCurrentThreadId() != data_143de5470
    rcx = *(arg1 + 0x20)
    rbx.b = cond:2_1

int32_t rax_3 = *(rdi + (rbx << 2))

if (rcx s<= rax_3)
    return rcx

return rax_3

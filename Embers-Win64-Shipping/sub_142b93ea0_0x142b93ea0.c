// 函数: sub_142b93ea0
// 地址: 0x142b93ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x23).d)

void* rax_1 = *(arg1 + 0x90)

if (rax_1 == 0)
    return 6

int32_t rbx = 0
int64_t* rdi = nullptr
int64_t r15 = *(rax_1 + 0x10)
int64_t count = sx.q(*(*(rax_1 + 0x18) + 0x40))
int32_t temp0 = count.d

if (temp0 s> 0)
    int64_t* rax_4 = (*(r15 + 8))(r15, zx.q(count.d))
    rdi = rax_4
    
    if (rax_4 != 0)
        memset(rax_4, 0, count)
    else
        rbx = (&rax_4[8]).d
else if (temp0 s< 0)
    rbx = 6

if (rbx == 0)
    rdi[1] = arg1
    int32_t rax_5 = sub_142b98e60(rdi)
    rbx = rax_5
    
    if (rax_5 == 0)
        rdi[2] = *(arg1 + 0x78)
        *(arg1 + 0x78) = rdi
        
        if (arg2 != 0)
            *arg2 = rdi
    else
        sub_142b98c50(rdi)
        (*(r15 + 0x10))(r15, rdi)
else if (arg2 != 0)
    *arg2 = nullptr

return zx.q(rbx)

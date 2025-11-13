// 函数: sub_1429e0980
// 地址: 0x1429e0980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1 + 0x2be0)
int32_t* r14 = *(arg1 + 0x12a0)
int32_t i_2 = 0

if (rbp == 0)
    sub_142a230d0(r14)
else
    memset(**(arg1 + 0x37c0) + 0x1f, 0x7f, sx.q(*r14 + 5))
    memset(**(arg1 + 0x37c8) + 0xf, 0x7f, sx.q((*r14 s>> 1) + 5))
    memset(**(arg1 + 0x37d0) + 0xf, 0x7f, sx.q((*r14 s>> 1) + 5))
    int32_t i = 1
    
    if (*(arg1 + 0x1e74) s> 1)
        int64_t rdx = 8
        
        do
            rdx += 8
            i += 1
            *(*(rdx + *(arg1 + 0x37c0) - 8) + 0x1f) = 0x81
            *(*(rdx + *(arg1 + 0x37c8) - 8) + 0xf) = 0x81
            *(*(*(arg1 + 0x37d0) + rdx - 8) + 0xf) = 0x81
        while (i s< *(arg1 + 0x1e74))
    
    int32_t i_1 = 0
    
    if (*(arg1 + 0x1e74) s> 0)
        int64_t rdx_1 = 0
        
        do
            rdx_1 += 8
            i_1 += 1
            int64_t* rcx_9 = *(rdx_1 + *(arg1 + 0x37d8) - 8)
            *rcx_9 = -0x7e7e7e7e7e7e7e7f
            rcx_9[1] = -0x7e7e7e7e7e7e7e7f
            **(*(arg1 + 0x37e0) + rdx_1 - 8) = -0x7e7e7e7e7e7e7e7f
            **(rdx_1 + *(arg1 + 0x37e8) - 8) = -0x7e7e7e7e7e7e7e7f
        while (i_1 s< *(arg1 + 0x1e74))
    
    sub_142a1d450(arg1 + 0x12c0, arg1, rbp)

sub_1429dfad0(arg1, arg2, *(arg1 + 0x37f0), *(arg1 + 0x376c))

if (*(arg1 + 0x376c) u> 0)
    do
        ReleaseSemaphore(*(*(arg1 + 0x3808) + (zx.q(i_2) << 3)), 1, nullptr)
        i_2 += 1
    while (i_2 u< *(arg1 + 0x376c))

sub_1429ded40(arg1, arg2, 0)
return WaitForSingleObjectEx(*(arg1 + 0x3810), 0xffffffff, 0) __tailcall

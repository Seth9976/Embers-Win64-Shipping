// 函数: sub_140896080
// 地址: 0x140896080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int64_t* i = arg1
uint64_t rdx_2 = (arg2 - arg1 + 7) u>> 3

if (arg1 u> arg2)
    rdx_2 = 0

if (rdx_2 != 0 && rdx_2 u>= 2)
    result = *arg3
    
    if (i u> arg3 || &arg1[-1 + rdx_2] u< arg3)
        int64_t rcx_4
        int64_t rdi_2
        rdi_2, rcx_4 = __memfill_u64(i, result, (rdx_2 & 0xfffffffffffffffe) << 3 u>> 3)
        i = &i[rdx_2 & 0xfffffffffffffffe]

for (; i != arg2; i = &i[1])
    result = *arg3
    *i = result

return result

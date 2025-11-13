// 函数: sub_1419552b0
// 地址: 0x1419552b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = data_143f00518

if (r8 == 0)
    EnterCriticalSection(&data_143f00520)
    
    for (void* const i = &data_142ff8a50; i s< &data_142ff8b04; )
        int64_t rbx_1 = sx.q(data_143f00518)
        int32_t rax_1 = (rbx_1 + 1).d
        bool cond:1_1 = rax_1 s<= data_143f0051c
        data_143f00518 = rax_1
        
        if (not(cond:1_1))
            sub_1405a4cf0(&data_143f00510)
        
        int32_t rdx_2 = *i
        i += 4
        *(data_143f00510 + (rbx_1 << 2)) = rdx_2
    
    LeaveCriticalSection(&data_143f00520)
    r8 = data_143f00518

int32_t r9 = 0

do
    uint64_t rax_4 = zx.q((r8 + r9) u>> 1)
    int32_t temp0_1 = *(data_143f00510 + (rax_4 << 2) - 4)
    
    if (arg1 u<= temp0_1)
        r8 = rax_4.d
    
    if (arg1 u> temp0_1)
        r9 = rax_4.d
while (r8 - r9 u> 1)

return zx.q(r9)

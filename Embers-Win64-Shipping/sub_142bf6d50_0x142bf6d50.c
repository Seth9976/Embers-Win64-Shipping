// 函数: sub_142bf6d50
// 地址: 0x142bf6d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg3)
int32_t i = *arg1
uint64_t r9 = 0
int64_t* r8 = *(arg1 + 8)

if (i != 0)
    int64_t* rax_1 = r8
    
    do
        if (*rax_1 == arg2)
            void* rdx = &r8[r9 * 3]
            
            if (rdx == 0)
                break
            
            uint64_t rax_3 = zx.q(i - 1)
            int64_t result = *(rdx + 0x10)
            int128_t var_28_1 = *rdx
            void* rax_4
            
            if (rax_3.d u< i)
                rax_4 = &r8[rax_3 * 3]
            else
                rax_4 = &data_144017550
                __builtin_memset(&data_144017550, 0, 0x18)
            
            *rdx = *rax_4
            *(rdx + 0x10) = *(rax_4 + 0x10)
            int32_t rax_5 = *arg1
            
            if (rax_5 != 0)
                *arg1 = rax_5 - 1
            
            LeaveCriticalSection(arg3)
            
            if (result == 0)
                return result
            
            jump(result)
        
        r9 = zx.q(r9.d + 1)
        rax_1 = &rax_1[3]
    while (r9.d u< i)

return LeaveCriticalSection(arg3)

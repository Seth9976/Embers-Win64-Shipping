// 函数: sub_140b9d6a0
// 地址: 0x140b9d6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = arg2
int64_t rcx = sx.q(data_1439a9648)
int64_t r9 = *(arg1 + 0x138)
int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x6666666666666667, rcx * 0x900000)
uint64_t result = rdx s>> 2 u>> 0x3f

if (r9 s<= rcx * 0x900000 s/ 0xa)
    if (*(arg1 + 0x141) != 0 && *(arg1 + 0x140) == 0)
        int64_t* rax_2 = __crt_deferred_errno_cache::get(&data_143db7b00)
        int64_t r8_2 = *rax_2
        result = (*(r8_2 + 0x120))(rax_2, 0, r8_2)
        rsi = 0
        *(arg1 + 0x140) = 1
    
    *(arg1 + 0x141) = 0
else if (r9 s> rcx << 0x14)
    if (*(arg1 + 0x141) == 0 && *(arg1 + 0x140) != 0)
        int32_t rax_3 = data_143e1a334
        int32_t rdi_1
        
        if (rax_3 + 1 s>= 0)
            rdi_1 = 5
            
            if (rax_3 + 1 s< 5)
                rdi_1 = rax_3 + 1
        else
            rdi_1 = 0
        
        int64_t* rax_5 = __crt_deferred_errno_cache::get(&data_143db7b00)
        int64_t r8_3 = *rax_5
        result = (*(r8_3 + 0x120))(rax_5, zx.q(rdi_1), r8_3)
        *(arg1 + 0x140) = 0
    
    *(arg1 + 0x141) = 1

if (*(arg1 + 0x140) != 0 && rsi != 0)
    jump(*(*__crt_deferred_errno_cache::get(&data_143db7b00) + 0x120))

return result

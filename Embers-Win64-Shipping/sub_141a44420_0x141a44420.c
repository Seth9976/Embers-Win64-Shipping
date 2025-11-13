// 函数: sub_141a44420
// 地址: 0x141a44420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2[1].d
int64_t* rdi = arg1 + 0x10
int32_t* rsi = *arg3
int64_t r12 = *arg2
int64_t* var_78 = rdi
int64_t* var_60 = rdi
int64_t* var_58 = arg1 + 0x38
int64_t* var_50 = arg1 + 0x20

if (result s> 0)
    int32_t* r12_1 = r12 - rsi
    uint64_t r15_1 = zx.q(result)
    uint64_t i
    
    do
        int32_t rax
        
        if (arg1 != -0x38)
            rax = sub_141f893b0(arg1 + 0x38, *(r12_1 + rsi))
        
        int32_t* rax_7
        void arg_18
        
        if (arg1 == -0x38 || rax == 0xffffffff)
            rax_7 =
                Concurrency::details::_CriticalNonReentrantLock::_CriticalNonReentrantLock(&arg_18)
        else
            int64_t rdx_1 = sx.q(rax)
            int64_t rax_1 = *(arg1 + 0x20)
            int128_t* rcx_1 = rdx_1 * 0x1c
            uint128_t var_70_1 = *(rcx_1 + rax_1)
            int32_t rax_2 = *(rcx_1 + rax_1 + 0x18)
            uint64_t arg_20 = *(rcx_1 + rax_1 + 0x10)
            int32_t rax_4 = sub_141a376d0(&var_60, *(*rdi + (rdx_1 << 2)))
            int32_t r14_1 = *(arg1 + 0x28)
            int64_t r13_1 = sx.q(rax_4)
            *(arg1 + 0x28) = r14_1 + 1
            
            if (r14_1 + 1 s> *(arg1 + 0x2c))
                sub_1405c50f0(arg1 + 0x20)
            
            int64_t rdi_1 = r13_1 * 0x1c
            int64_t rdx_5 = *(arg1 + 0x20) + rdi_1
            memmove(rdx_5 + 0x1c, rdx_5, (r14_1 - r13_1.d) * 0x1c)
            uint128_t* rax_6 = *(arg1 + 0x20)
            *(rax_6 + rdi_1) = var_70_1
            *(rax_6 + rdi_1 + 0x10) = arg_20
            *(rax_6 + rdi_1 + 0x18) = rax_2
            void arg_10
            rax_7 = sub_141f880d0(arg1 + 0x38, &arg_10, r13_1.d)
            rdi = var_78
        result = *rax_7
        *rsi = result
        rsi = &rsi[1]
        i = r15_1
        r15_1 -= 1
    while (i != 1)

return result

// 函数: sub_141a44580
// 地址: 0x141a44580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2[1].d
int64_t* rdi = arg1 + 8
int32_t* rsi = *arg3
int64_t r12 = *arg2
int64_t* arg_20 = rdi
int64_t* var_68 = rdi
int64_t* var_60 = arg1 + 0x30
int64_t* var_58 = arg1 + 0x20

if (result s> 0)
    int32_t* r12_1 = r12 - rsi
    uint64_t r15_1 = zx.q(result)
    uint64_t i
    
    do
        int32_t rax
        
        if (arg1 != -0x30)
            rax = sub_141f893b0(arg1 + 0x30, *(r12_1 + rsi))
        
        int32_t* rax_7
        void arg_18
        
        if (arg1 == -0x30 || rax == 0xffffffff)
            rax_7 =
                Concurrency::details::_CriticalNonReentrantLock::_CriticalNonReentrantLock(&arg_18)
        else
            int64_t rcx_1 = sx.q(rax) << 2
            int32_t rax_3 = *(rcx_1 + *(arg1 + 0x20))
            int32_t rax_5 = sub_141a376d0(&var_68, *(rcx_1 + *rdi))
            int32_t r14_1 = *(arg1 + 0x28)
            int64_t r13_1 = sx.q(rax_5)
            *(arg1 + 0x28) = r14_1 + 1
            
            if (r14_1 + 1 s> *(arg1 + 0x2c))
                sub_1405a4cf0(arg1 + 0x20)
            
            int64_t rdi_1 = r13_1 << 2
            int64_t rdx_4 = *(arg1 + 0x20) + rdi_1
            memmove(rdx_4 + 4, rdx_4, (r14_1 - r13_1.d) << 2)
            *(rdi_1 + *(arg1 + 0x20)) = rax_3
            void arg_10
            rax_7 = sub_141f880d0(arg1 + 0x30, &arg_10, r13_1.d)
            rdi = arg_20
        result = *rax_7
        *rsi = result
        rsi = &rsi[1]
        i = r15_1
        r15_1 -= 1
    while (i != 1)

return result

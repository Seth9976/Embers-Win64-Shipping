// 函数: sub_141a442f0
// 地址: 0x141a442f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2[1].d
int64_t* rbx = arg1 + 8
int32_t* rdi = *arg3
int64_t r12 = *arg2
int64_t* arg_20 = rbx
int64_t* var_68 = rbx
int64_t* var_60 = arg1 + 0x38
int64_t* var_58 = arg1 + 0x20

if (result s> 0)
    int32_t* r12_1 = r12 - rdi
    uint64_t r15_1 = zx.q(result)
    uint64_t i
    
    do
        int32_t rax
        
        if (arg1 != -0x38)
            rax = sub_141f893b0(arg1 + 0x38, *(r12_1 + rdi))
        
        int32_t* rax_6
        void arg_18
        
        if (arg1 == -0x38 || rax == 0xffffffff)
            rax_6 =
                Concurrency::details::_CriticalNonReentrantLock::_CriticalNonReentrantLock(&arg_18)
        else
            int64_t rcx_1 = sx.q(rax)
            char rax_2 = *(rcx_1 + *(arg1 + 0x20))
            int32_t rax_4 = sub_141a376d0(&var_68, *(*rbx + (rcx_1 << 2)))
            int32_t r14_1 = *(arg1 + 0x28)
            int64_t r13_1 = sx.q(rax_4)
            *(arg1 + 0x28) = r14_1 + 1
            
            if (r14_1 + 1 s> *(arg1 + 0x2c))
                sub_1405daba0(arg1 + 0x20)
            
            int64_t rdx_4 = *(arg1 + 0x20) + r13_1
            memmove(rdx_4 + 1, rdx_4, r14_1 - r13_1.d)
            *(r13_1 + *(arg1 + 0x20)) = rax_2
            void arg_10
            rax_6 = sub_141f880d0(arg1 + 0x38, &arg_10, r13_1.d)
            rbx = arg_20
        result = *rax_6
        *rdi = result
        rdi = &rdi[1]
        i = r15_1
        r15_1 -= 1
    while (i != 1)

return result

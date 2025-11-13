// 函数: sub_141b10d00
// 地址: 0x141b10d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *arg3
int32_t* rsi = *arg2
uint64_t i_1 = zx.q(arg2[1].d)
int64_t* var_58
__FrameHandler3::TryBlockMap::TryBlockMap(&var_58, arg1 + 8, arg1 + 0x50)
uint64_t result = arg1 + 0x40
uint64_t result_1 = result

if (i_1.d s> 0)
    uint64_t i
    
    do
        int32_t rax = sub_141a50d70(&var_58, *rsi)
        int32_t* rax_1
        void arg_8
        
        if (rax != 0xffffffff)
            int64_t r8_1 = sx.q(rax)
            int64_t rdx_2 = r8_1 * 5
            int64_t rcx_3 = *result_1
            uint128_t var_78_1 = *(rcx_3 + (rdx_2 << 3))
            uint128_t var_68_1 = *(rcx_3 + (rdx_2 << 3) + 0x10)
            uint64_t arg_18 = *(rcx_3 + (rdx_2 << 3) + 0x20)
            int64_t r12_1 = sx.q(sub_141a376d0(&var_58, *(*var_58 + (r8_1 << 2))))
            int32_t r15_1 = *(result_1 + 8)
            *(result_1 + 8) = r15_1 + 1
            
            if (r15_1 + 1 s> *(result_1 + 0xc))
                sub_1405c4ec0(result_1)
            
            int64_t rdi_1 = r12_1 * 0x28
            int64_t rdx_6 = *result_1 + rdi_1
            memmove(rdx_6 + 0x28, rdx_6, (r15_1 - r12_1.d) * 0x28)
            uint128_t* rax_6 = *result_1
            *(rax_6 + rdi_1) = var_78_1
            *(rax_6 + rdi_1 + 0x10) = var_68_1
            *(rax_6 + rdi_1 + 0x20) = arg_18
            void arg_10
            rax_1 = sub_141a50d30(&var_58, &arg_10, r12_1.d)
        else
            rax_1 =
                Concurrency::details::_CriticalNonReentrantLock::_CriticalNonReentrantLock(&arg_8)
        result = zx.q(*rax_1)
        rsi = &rsi[1]
        *rbx = result.d
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

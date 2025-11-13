// 函数: sub_141b10e70
// 地址: 0x141b10e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *arg3
int32_t* rsi = *arg2
uint64_t i_1 = zx.q(arg2[1].d)
int64_t* var_68
__FrameHandler3::TryBlockMap::TryBlockMap(&var_68, arg1 + 8, arg1 + 0x28)
int32_t* result = arg1 + 0x18
int32_t* result_1 = result

if (i_1.d s> 0)
    uint64_t i
    
    do
        int32_t rax = sub_141a50d70(&var_68, *rsi)
        
        if (rax != 0xffffffff)
            int64_t rdi_1 = sx.q(rax)
            void var_50
            sub_141af73b0(&var_50, *result_1 + rdi_1 * 0x28)
            int64_t r12_1 = sx.q(sub_141a376d0(&var_68, *(*var_68 + (rdi_1 << 2))))
            int32_t r15_1 = result_1[2]
            result_1[2] = r15_1 + 1
            
            if (r15_1 + 1 s> result_1[3])
                sub_1405c4ec0(result_1)
            
            int64_t rdi_2 = r12_1 * 0x28
            int64_t rdx_7 = *result_1 + rdi_2
            memmove(rdx_7 + 0x28, rdx_7, (r15_1 - r12_1.d) * 0x28)
            sub_141af73b0(*result_1 + rdi_2, &var_50)
            void arg_10
            result = sub_141a50d30(&var_68, &arg_10, r12_1.d)
            *rbx = *result
            int64_t var_38
            
            if (var_38 != 0)
                result = sub_140a74f90(var_38)
        else
            void arg_8
            result =
                Concurrency::details::_CriticalNonReentrantLock::_CriticalNonReentrantLock(&arg_8)
            *rbx = *result
        
        rsi = &rsi[1]
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

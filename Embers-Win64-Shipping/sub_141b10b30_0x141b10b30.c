// 函数: sub_141b10b30
// 地址: 0x141b10b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[1].d)

if (result.d s> 0)
    int32_t* r14_1 = *arg3
    int32_t* r15_1 = *arg2
    uint64_t var_50_1 = result
    uint64_t i
    
    do
        int32_t rax = sub_141a50d70(arg1, *r15_1)
        
        if (rax != 0xffffffff)
            int64_t rbx_1 = sx.q(rax)
            uint64_t rsi_1 = 0
            int64_t rax_1 = arg1[2]
            uint64_t var_48 = 0
            int64_t* rcx_5 = (rbx_1 << 4) + *rax_1
            int32_t rdi_1 = rcx_5[1].d
            int64_t r12_1 = *rcx_5
            
            if (rdi_1 != 0)
                sub_1405a4c70(&var_48, rdi_1, 0)
                rsi_1 = var_48
                memcpy(rsi_1, r12_1, rdi_1 * 2)
            else
                int32_t var_3c_1 = 0
            
            int32_t rax_3 = sub_141a376d0(arg1, *(**arg1 + (rbx_1 << 2)))
            int64_t* r12_2 = arg1[2]
            int32_t r8_2 = rax_3
            int32_t r13_1 = r12_2[1].d
            r12_2[1].d = r13_1 + 1
            
            if (r13_1 + 1 s> *(r12_2 + 0xc))
                sub_1405a4f90(r12_2)
                r8_2 = rax_3
            
            int64_t rbx_3 = sx.q(r8_2) << 4
            int64_t rdx_6 = *r12_2 + rbx_3
            memmove(rdx_6 + 0x10, rdx_6, (r13_1 - r8_2) << 4)
            int64_t* rbx_4 = rbx_3 + *r12_2
            *rbx_4 = 0
            rbx_4[1].d = rdi_1
            
            if (rdi_1 != 0)
                sub_1405a4c70(rbx_4, rdi_1, 0)
                memcpy(*rbx_4, rsi_1, rdi_1 * 2)
            else
                *(rbx_4 + 0xc) = 0
            
            void var_58
            result = sub_141a50d30(arg1, &var_58, rax_3)
            *r14_1 = *result
            
            if (rsi_1 != 0)
                result = sub_140a74f90(rsi_1)
        else
            void arg_20
            result =
                Concurrency::details::_CriticalNonReentrantLock::_CriticalNonReentrantLock(&arg_20)
            *r14_1 = *result
        
        r15_1 = &r15_1[1]
        r14_1 = &r14_1[1]
        i = var_50_1
        var_50_1 -= 1
    while (i != 1)

return result

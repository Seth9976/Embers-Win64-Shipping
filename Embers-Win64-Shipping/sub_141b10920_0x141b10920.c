// 函数: sub_141b10920
// 地址: 0x141b10920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[1].d)

if (result.d s> 0)
    int32_t* rsi_1 = *arg3
    uint64_t i_1 = zx.q(result.d)
    int32_t* r15_1 = *arg2
    uint64_t i
    
    do
        int32_t rax = sub_141a50d70(arg1, *r15_1)
        
        if (rax != 0xffffffff)
            int64_t r14_1 = sx.q(rax)
            int64_t* rdi_3 = r14_1 * 0x30 + *arg1[2]
            int64_t rax_2 = *rdi_3
            int64_t rax_3 = rdi_3[1]
            int64_t var_58
            sub_140596d10(&var_58, &rdi_3[2])
            uint32_t count = rdi_3[5].d
            int64_t rdi_4 = rdi_3[4]
            int64_t var_48 = 0
            
            if (count != 0)
                sub_1405da9e0(&var_48, count, 0)
                memcpy(var_48, rdi_4, count)
            else
                uint32_t count_1 = count
            
            int32_t rax_5 = sub_141a376d0(arg1, *(**arg1 + (r14_1 << 2)))
            int64_t* r14_2 = arg1[2]
            int64_t r13_1 = sx.q(rax_5)
            int32_t rbp_1 = r14_2[1].d
            r14_2[1].d = rbp_1 + 1
            
            if (rbp_1 + 1 s> *(r14_2 + 0xc))
                sub_1405c4f50(r14_2)
            
            int64_t rdi_7 = r13_1 * 0x30
            int64_t rdx_7 = *r14_2 + rdi_7
            memmove(rdx_7 + 0x30, rdx_7, (rbp_1 - r13_1.d) * 0x30)
            int64_t* rdi_8 = rdi_7 + *r14_2
            *rdi_8 = rax_2
            rdi_8[1] = rax_3
            sub_140596d10(&rdi_8[2], &var_58)
            int64_t rbp_3 = var_48
            rdi_8[4] = 0
            rdi_8[5].d = count
            
            if (count != 0)
                sub_1405da9e0(&rdi_8[4], count, 0)
                memcpy(rdi_8[4], rbp_3, count)
            else
                *(rdi_8 + 0x2c) = 0
            
            void arg_20
            result = sub_141a50d30(arg1, &arg_20, r13_1.d)
            *rsi_1 = *result
            
            if (rbp_3 != 0)
                result = sub_140a74f90(rbp_3)
            
            int64_t rcx_16 = var_58
            
            if (rcx_16 != 0)
                result = sub_140a74f90(rcx_16)
        else
            void arg_10
            result =
                Concurrency::details::_CriticalNonReentrantLock::_CriticalNonReentrantLock(&arg_10)
            *rsi_1 = *result
        
        r15_1 = &r15_1[1]
        rsi_1 = &rsi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

// 函数: sub_141a43fb0
// 地址: 0x141a43fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t i_1 = sx.q(arg2[1].d)

if (i_1 s> 0)
    int32_t* rbx_1 = *arg3
    void* r13_2 = *arg2 - rbx_1
    int64_t i
    
    do
        int64_t* rcx = arg1[1]
        int32_t rax
        
        if (rcx != 0)
            rax = sub_141f893b0(rcx, *(rbx_1 + r13_2))
        
        if (rcx == 0 || rax == 0xffffffff)
            void var_78
            result =
                Concurrency::details::_CriticalNonReentrantLock::_CriticalNonReentrantLock(&var_78)
            *rbx_1 = *result
        else
            int64_t rsi_1 = sx.q(rax)
            int64_t rax_1 = arg1[2]
            int64_t var_50 = 0
            int64_t var_48_1 = 0
            int64_t* rdi_3 = rsi_1 * 0x30 + *rax_1
            int64_t rax_2 = *rdi_3
            int32_t rax_3 = rdi_3[1].d
            int64_t rax_4 = rdi_3[2]
            sub_140597df0(&var_50, &rdi_3[3])
            int64_t rax_5 = rdi_3[5]
            int32_t rax_7 = sub_141a376d0(arg1, *(**arg1 + (rsi_1 << 2)))
            int64_t* rsi_2 = arg1[2]
            int64_t r12_1 = sx.q(rax_7)
            int32_t rbp_1 = rsi_2[1].d
            rsi_2[1].d = rbp_1 + 1
            
            if (rbp_1 + 1 s> *(rsi_2 + 0xc))
                sub_1405c4f50(rsi_2)
            
            int64_t rdi_5 = r12_1 * 0x30
            int64_t rdx_5 = *rsi_2 + rdi_5
            memmove(rdx_5 + 0x30, rdx_5, (rbp_1 - r12_1.d) * 0x30)
            int32_t* rdi_6 = rdi_5 + *rsi_2
            int64_t var_74_1 = 0
            *(rdi_6 + 0x20) = 0
            *rdi_6 = 0xffffffff
            rdi_6[1] = 0
            __builtin_memset(&rdi_6[4], 0, 0x14)
            
            if (rdi_6[9] s<= 0xffffffff)
                sub_1405947f0(&rdi_6[6], 0)
            
            int16_t* rax_10 = *(rdi_6 + 0x18)
            
            if (rax_10 != 0)
                *rax_10 = 0
            
            *rdi_6 = rax_2
            rdi_6[2] = rax_3
            *(rdi_6 + 0x10) = rax_4
            sub_140597df0(&rdi_6[6], &var_50)
            *(rdi_6 + 0x28) = rax_5
            int64_t* rcx_9 = arg1[1]
            int32_t* rax_15
            void arg_20
            void arg_10
            
            if (rcx_9 == 0)
                rax_15 = sub_141f79930(&arg_20)
            else
                rax_15 = sub_141f880d0(rcx_9, &arg_10, r12_1.d)
            int64_t rcx_11 = var_50
            result = zx.q(*rax_15)
            *rbx_1 = result.d
            
            if (rcx_11 != 0)
                result = sub_140a74f90(rcx_11)
        
        rbx_1 = &rbx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

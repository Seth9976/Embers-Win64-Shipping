// 函数: sub_141198470
// 地址: 0x141198470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r15 = arg4
uint64_t r14 = arg3

if (data_1439b5f84 s> 0 && arg4 != 0)
    int64_t rbx_1 = sx.q(arg2)
    void* rdi_2 = rbx_1 * 0xe8 + *arg4
    
    if (*(rdi_2 + 0xa0) != 0 && *(rdi_2 + 0xb0) != 0)
        int32_t rax = data_143e6a534
        int128_t var_48
        __builtin_memset(&var_48, 0, 0x20)
        arg3.b = rax s> 0
        char var_78_1 = arg3.b
        int64_t var_68
        uint128_t var_38_1
        
        if (rax s> 0)
            void** rax_1 = sub_141187a90(&var_68, arg1)
            arg3 = zx.q(var_78_1)
            var_48 = *rax_1
            var_38_1 = *(rax_1 + 0x10)
        
        int64_t rax_2 = *(r15 + 0x10)
        int64_t* rcx_1 = rbx_1 * 0x130
        void* rbx_2 = *(rcx_1 + rax_2)
        result = sx.q(*(rcx_1 + rax_2 + 8))
        int64_t* r13_2 = rbx_1 * 0x5240 + *r14
        void* r12_2 = result * 0xe0 + rbx_2
        
        if (rbx_2 != r12_2)
            int64_t* r14_1 = &var_48
            
            if (arg3.b == 0)
                r14_1 = nullptr
            
            do
                sub_1411831a0(arg1, r13_2, rdi_2, rcx_1 + rax_2, rbx_2, 0, r14_1)
                rbx_2 += 0xe0
                result = nullptr
            while (rbx_2 != r12_2)
            
            r15 = arg4
        
        if (var_78_1 != 0)
            int64_t rdi_3 = sx.q(arg1[0x2f].d)
            var_68 = var_48.q
            void* var_60_1 = r15 + 0x20
            int16_t var_58_1 = 0x100
            int32_t rax_4 = (rdi_3 + 1).d
            arg1[0x2f].d = rax_4
            
            if (rax_4 s> *(arg1 + 0x17c))
                sub_14119a720(&arg1[0x2e], rdi_3.d)
            
            void** rax_5 = arg1[0x2e]
            int64_t rcx_4 = rdi_3 * 3
            *(rax_5 + (rcx_4 << 3)) = var_68.o
            int16_t var_58_2 = 0x100
            rax_5[rcx_4 + 2] = var_58_1.q
            int64_t rdi_4 = sx.q(arg1[0x2f].d)
            var_68 = var_48:8.q
            void* var_60_2 = r15 + 0x28
            int32_t rax_8 = (rdi_4 + 1).d
            arg1[0x2f].d = rax_8
            
            if (rax_8 s> *(arg1 + 0x17c))
                sub_14119a720(&arg1[0x2e], rdi_4.d)
            
            void** rax_9 = arg1[0x2e]
            int64_t rcx_6 = rdi_4 * 3
            *(rax_9 + (rcx_6 << 3)) = var_68.o
            int16_t var_58_3 = 0x100
            rax_9[rcx_6 + 2] = var_58_2.q
            int64_t rdi_5 = sx.q(arg1[0x2f].d)
            var_68 = var_38_1.q
            void* var_60_3 = r15 + 0x30
            int32_t rax_12 = (rdi_5 + 1).d
            arg1[0x2f].d = rax_12
            
            if (rax_12 s> *(arg1 + 0x17c))
                sub_14119a720(&arg1[0x2e], rdi_5.d)
            
            void** rax_13 = arg1[0x2e]
            int64_t rcx_8 = rdi_5 * 3
            *(rax_13 + (rcx_8 << 3)) = var_68.o
            int16_t var_58_4 = 0x100
            rax_13[rcx_8 + 2] = var_58_3.q
            int64_t rdi_6 = sx.q(arg1[0x2f].d)
            var_68 = var_38_1:8.q
            void* var_60_4 = r15 + 0x38
            int32_t rax_16 = (rdi_6 + 1).d
            arg1[0x2f].d = rax_16
            
            if (rax_16 s> *(arg1 + 0x17c))
                sub_14119a720(&arg1[0x2e], rdi_6.d)
            
            result = arg1[0x2e]
            int64_t rcx_10 = rdi_6 * 3
            *(result + (rcx_10 << 3)) = var_68.o
            result[rcx_10 + 2] = var_58_4.q

return result

// 函数: sub_141b32b10
// 地址: 0x141b32b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[1].d)
int64_t* rdi = arg3

if (result.d s> 0)
    int32_t* rsi_1 = *arg2
    uint64_t i_1 = zx.q(result.d)
    int32_t* r14_1 = nullptr
    uint64_t i
    
    do
        result = sub_141a50d70(arg1, *rsi_1)
        int64_t rbx_1 = sx.q(result.d)
        
        if (rbx_1.d != 0xffffffff)
            result = sub_141a58b60(arg1, rbx_1.d, *(r14_1 + *rdi))
            int64_t r13_1 = sx.q(result.d)
            
            if (r13_1.d != rbx_1.d)
                int64_t* rdi_1 = arg1[2]
                int64_t rdx_2 = rbx_1 * 5
                int64_t r9_1 = *rdi_1
                int32_t rax_1 = rdi_1[1].d
                void* rcx_2 = r9_1 + (rdx_2 << 3)
                uint128_t var_58_1 = *(r9_1 + (rdx_2 << 3))
                int32_t rdx_4 = rax_1 - rbx_1.d
                uint128_t var_48_1 = *(rcx_2 + 0x10)
                uint64_t arg_10 = *(rcx_2 + 0x20)
                
                if (rdx_4 != 1)
                    memmove(rcx_2, r9_1 + sx.q((rbx_1 + 1).d) * 0x28, (rdx_4 - 1) * 0x28)
                    rax_1 = rdi_1[1].d
                
                rdi_1[1].d = rax_1 - 1
                int64_t* rdi_2 = arg1[2]
                int32_t rbp_1 = rdi_2[1].d
                rdi_2[1].d = rbp_1 + 1
                
                if (rbp_1 + 1 s> *(rdi_2 + 0xc))
                    sub_1405c4ec0(rdi_2)
                
                int64_t rbx_2 = r13_1 * 0x28
                int64_t rdx_10 = *rdi_2 + rbx_2
                memmove(rdx_10 + 0x28, rdx_10, (rbp_1 - r13_1.d) * 0x28)
                result = *rdi_2
                rdi = arg3
                *(result + rbx_2) = var_58_1
                *(result + rbx_2 + 0x10) = var_48_1
                *(result + rbx_2 + 0x20) = arg_10
        
        rsi_1 = &rsi_1[1]
        r14_1 = &r14_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

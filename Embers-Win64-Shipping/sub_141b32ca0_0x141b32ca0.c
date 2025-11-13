// 函数: sub_141b32ca0
// 地址: 0x141b32ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2[1].d
int64_t* rdi = arg3

if (result s> 0)
    uint64_t r12_1 = zx.q(result)
    int32_t* r14_1 = *arg2
    int32_t* r15_1 = nullptr
    uint64_t i
    
    do
        result = sub_141a50d70(arg1, *r14_1)
        int64_t result_1 = sx.q(result)
        
        if (result_1.d != 0xffffffff)
            result = sub_141a58b60(arg1, result_1.d, *(r15_1 + *rdi))
            int64_t result_2 = sx.q(result)
            
            if (result_2.d != result_1.d)
                int64_t rsi_1 = result_1 * 0x28
                void var_58
                sub_141af73b0(&var_58, *arg1[2] + rsi_1)
                int64_t* rdi_1 = arg1[2]
                int64_t rcx_4 = *(rsi_1 + *rdi_1 + 0x18)
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                int32_t rcx_7 = rdi_1[1].d
                int32_t rax_3 = rcx_7 - result_1.d
                
                if (rax_3 != 1)
                    int64_t r9_1 = *rdi_1
                    memmove(r9_1 + rsi_1, r9_1 + sx.q((result_1 + 1).d) * 0x28, (rax_3 - 1) * 0x28)
                    rcx_7 = rdi_1[1].d
                
                rdi_1[1].d = rcx_7 - 1
                int64_t* rdi_2 = arg1[2]
                int32_t rsi_2 = rdi_2[1].d
                rdi_2[1].d = rsi_2 + 1
                
                if (rsi_2 + 1 s> *(rdi_2 + 0xc))
                    sub_1405c4ec0(rdi_2)
                
                int64_t rbx_1 = result_2 * 0x28
                int64_t rdx_8 = *rdi_2 + rbx_1
                memmove(rdx_8 + 0x28, rdx_8, (rsi_2 - result_2.d) * 0x28)
                result = sub_141af73b0(*rdi_2 + rbx_1, &var_58)
                int64_t var_40
                
                if (var_40 != 0)
                    result = sub_140a74f90(var_40)
                
                rdi = arg3
        
        r14_1 = &r14_1[1]
        r15_1 = &r15_1[1]
        i = r12_1
        r12_1 -= 1
    while (i != 1)

return result

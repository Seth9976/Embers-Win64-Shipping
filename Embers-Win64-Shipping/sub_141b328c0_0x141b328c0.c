// 函数: sub_141b328c0
// 地址: 0x141b328c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2[1].d
int64_t* rdi = arg3

if (result s> 0)
    int32_t* r12_1 = nullptr
    uint64_t r13_1 = zx.q(result)
    int32_t* r15_1 = *arg2
    uint64_t i
    
    do
        result = sub_141a50d70(arg1, *r15_1)
        int64_t result_2 = sx.q(result)
        
        if (result_2.d != 0xffffffff)
            result = sub_141a58b60(arg1, result_2.d, *(r12_1 + *rdi))
            
            if (result != result_2.d)
                int64_t r14_2 = result_2 * 0x30
                int64_t* rdi_2 = *arg1[2] + r14_2
                int64_t rcx_3 = *rdi_2
                int64_t rax_1 = rdi_2[1]
                int64_t var_58
                sub_140596d10(&var_58, &rdi_2[2])
                uint32_t count = rdi_2[5].d
                int64_t rdi_3 = rdi_2[4]
                int64_t var_48 = 0
                
                if (count != 0)
                    sub_1405da9e0(&var_48, count, 0)
                    memcpy(var_48, rdi_3, count)
                else
                    uint32_t count_1 = count
                
                int64_t* rdi_4 = arg1[2]
                int64_t rsi_1 = *rdi_4
                int64_t rcx_7 = *(rsi_1 + r14_2 + 0x20)
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                int64_t rcx_8 = *(rsi_1 + r14_2 + 0x10)
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                int32_t rcx_11 = rdi_4[1].d
                int32_t rax_3 = rcx_11 - result_2.d
                
                if (rax_3 != 1)
                    int64_t rcx_9 = *rdi_4
                    memmove(rcx_9 + r14_2, sx.q((result_2 + 1).d) * 0x30 + rcx_9, 
                        (rax_3 - 1) * 0x30)
                    rcx_11 = rdi_4[1].d
                
                rdi_4[1].d = rcx_11 - 1
                int64_t* rdi_5 = arg1[2]
                int32_t rsi_2 = rdi_5[1].d
                rdi_5[1].d = rsi_2 + 1
                
                if (rsi_2 + 1 s> *(rdi_5 + 0xc))
                    sub_1405c4f50(rdi_5)
                
                int64_t result_1 = sx.q(result)
                int64_t rbx_2 = result_1 * 0x30
                int64_t rdx_10 = *rdi_5 + rbx_2
                memmove(rdx_10 + 0x30, rdx_10, (rsi_2 - result_1.d) * 0x30)
                int64_t* rbx_3 = rbx_2 + *rdi_5
                *rbx_3 = rcx_3
                rbx_3[1] = rax_1
                result = sub_140596d10(&rbx_3[2], &var_58)
                int64_t rdi_6 = var_48
                rbx_3[4] = 0
                rbx_3[5].d = count
                
                if (count != 0)
                    sub_1405da9e0(&rbx_3[4], count, 0)
                    result = memcpy(rbx_3[4], rdi_6, count)
                else
                    *(rbx_3 + 0x2c) = count
                
                if (rdi_6 != 0)
                    result = sub_140a74f90(rdi_6)
                
                int64_t rcx_18 = var_58
                
                if (rcx_18 != 0)
                    result = sub_140a74f90(rcx_18)
                
                rdi = arg3
        
        r15_1 = &r15_1[1]
        r12_1 = &r12_1[1]
        i = r13_1
        r13_1 -= 1
    while (i != 1)

return result

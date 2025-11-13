// 函数: sub_141b32e40
// 地址: 0x141b32e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[1].d)
int64_t* rdi = arg3

if (result.d s> 0)
    int32_t* r12_1 = *arg2
    int64_t r13_1 = 0
    uint64_t arg_20 = result
    uint64_t i
    
    do
        result = sub_141a50d70(arg1, *r12_1)
        int64_t rbx_1 = sx.q(result.d)
        
        if (rbx_1.d != 0xffffffff)
            result = sub_141a58b60(arg1, rbx_1.d, *(*rdi + r13_1))
            
            if (result.d != rbx_1.d)
                int64_t* rdi_1 = arg1[2]
                uint64_t rsi_1 = 0
                uint64_t var_50 = 0
                int64_t* rcx_3 = *rdi_1
                int32_t rbp_1 = rcx_3[rbx_1 * 2 + 1].d
                int64_t rax = rcx_3[rbx_1 * 2]
                
                if (rbp_1 != 0)
                    sub_1405a4c70(&var_50, rbp_1, 0)
                    rsi_1 = var_50
                    memcpy(rsi_1, rax, rbp_1 * 2)
                    rdi_1 = arg1[2]
                    rcx_3 = *rdi_1
                else
                    int32_t var_44_1 = 0
                
                int64_t rcx_6 = rcx_3[rbx_1 * 2]
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                int32_t rcx_9 = rdi_1[1].d
                int32_t rax_2 = rcx_9 - rbx_1.d
                
                if (rax_2 != 1)
                    int64_t rcx_7 = *rdi_1
                    memmove(rcx_7 + (rbx_1 << 4), (sx.q((rbx_1 + 1).d) << 4) + rcx_7, 
                        (rax_2 - 1) << 4)
                    rcx_9 = rdi_1[1].d
                
                rdi_1[1].d = rcx_9 - 1
                int64_t* rdi_2 = arg1[2]
                int32_t r14_3 = rdi_2[1].d
                rdi_2[1].d = r14_3 + 1
                
                if (r14_3 + 1 s> *(rdi_2 + 0xc))
                    sub_1405a4f90(rdi_2)
                
                int64_t rcx_11 = sx.q(result.d)
                int64_t rbx_3 = rcx_11 << 4
                int64_t rdx_9 = *rdi_2 + rbx_3
                memmove(rdx_9 + 0x10, rdx_9, (r14_3 - rcx_11.d) << 4)
                int64_t* rbx_4 = rbx_3 + *rdi_2
                result = 0
                *rbx_4 = 0
                rbx_4[1].d = rbp_1
                
                if (rbp_1 != 0)
                    sub_1405a4c70(rbx_4, rbp_1, 0)
                    result = memcpy(*rbx_4, rsi_1, rbp_1 * 2)
                else
                    *(rbx_4 + 0xc) = 0
                
                if (rsi_1 != 0)
                    result = sub_140a74f90(rsi_1)
                
                rdi = arg3
        
        r12_1 = &r12_1[1]
        r13_1 += 4
        i = arg_20
        arg_20 -= 1
    while (i != 1)

return result

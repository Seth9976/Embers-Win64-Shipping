// 函数: sub_141736130
// 地址: 0x141736130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
*arg2 = 0
arg2[1] = 0
void* rcx = *(arg1 + 0x38)

if (rcx != 0)
    int32_t* var_38
    sub_1415c6060(rcx + 0x1b0, &var_38, arg3, arg4)
    int32_t var_30
    
    if (var_30 s> *(arg2 + 0xc))
        sub_1405c5570(arg2, var_30)
    
    int32_t* rdx_4 = var_38
    int32_t* r14_1 = rdx_4
    void* rcx_3 = &rdx_4[sx.q(var_30)]
    uint64_t r12_4 = (rcx_3 - rdx_4 + 3) u>> 2
    
    if (rdx_4 u> rcx_3)
        r12_4 = 0
    
    if (r12_4 != 0)
        do
            int64_t rsi_2 = sx.q(*r14_1)
            
            if (rsi_2.d s>= 0 && rsi_2.d s< *(arg1 + 0x48))
                int64_t rbp_1 = sx.q(arg2[1].d)
                int64_t r13_1 = *(arg1 + 0x40)
                int32_t rax_2 = (rbp_1 + 1).d
                arg2[1].d = rax_2
                
                if (rax_2 s> *(arg2 + 0xc))
                    sub_1405a4d70(arg2)
                
                *(*arg2 + (rbp_1 << 3)) = *(r13_1 + (rsi_2 << 3))
            
            r14_1 = &r14_1[1]
            rdi += 1
        while (rdi != r12_4)
        
        rdx_4 = var_38
    
    if (rdx_4 != 0)
        sub_140a74f90(rdx_4)
else if (arg2 != arg1 + 0x40)
    int64_t rdi_1 = sx.q(*(arg1 + 0x48))
    int64_t rsi_3 = *(arg1 + 0x40)
    arg2[1].d = rdi_1.d
    
    if (rdi_1.d != 0)
        sub_1405c4a00(arg2, rdi_1.d, 0)
        memcpy(*arg2, rsi_3, (rdi_1 << 3).d)

return arg2

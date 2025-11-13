// 函数: sub_14197bcb0
// 地址: 0x14197bcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143f01c92

if (rax != 0 && data_143f02bac u> 0)
    arg5, arg4 = sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg4)
    rax = data_143f01c92

if (*arg2 != 0)
    if (rax != 0)
        int64_t rbx_1 = sx.q(data_1439c82c8)
        void* rdi_1 = &data_1439c82a0
        int32_t rax_1 = (rbx_1 + 1).d
        bool cond:1_1 = rax_1 s<= data_1439c82cc
        data_1439c82c8 = rax_1
        
        if (not(cond:1_1))
            sub_14083a490(&data_1439c82a0, rbx_1.d)
        
        void* rax_2 = data_1439c82c0
        int64_t rcx = *arg2
        
        if (rax_2 != 0)
            rdi_1 = rax_2
        
        *(rdi_1 + (rbx_1 << 3)) = rcx
        
        if (rcx != 0)
            *(rcx + 0x48) += 1
    
    int64_t rbx_2 = sx.q(data_1439c82f8)
    void* rdi_2 = &data_1439c82d0
    int32_t rax_3 = (rbx_2 + 1).d
    bool cond:0_1 = rax_3 s<= data_1439c82fc
    data_1439c82f8 = rax_3
    
    if (not(cond:0_1))
        sub_14083a490(&data_1439c82d0, rbx_2.d)
    
    void* rax_4 = data_1439c82f0
    int64_t rcx_1 = *arg2
    
    if (rax_4 != 0)
        rdi_2 = rax_4
    
    *(rdi_2 + (rbx_2 << 3)) = rcx_1
    
    if (rcx_1 != 0)
        *(rcx_1 + 0x48) += 1

void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_4[4]

if (rax_5 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_4[4]

*(arg1 + 0x30) = rax_5
void**** rax_6 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_6 = rcx_4
*(arg1 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_143002ae8
int64_t result = *arg2
rcx_4[2] = result

if (result != 0)
    *(result + 0x48) += 1

rcx_4[3] = arg3

if (data_143f01c92 != 0 && data_143f02bac u> 0)
    return sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg4) __tailcall

return result

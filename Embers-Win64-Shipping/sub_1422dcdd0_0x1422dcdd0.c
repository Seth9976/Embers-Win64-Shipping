// 函数: sub_1422dcdd0
// 地址: 0x1422dcdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x30)
int64_t r14 = sx.q(arg2)

if (rcx s< (r14 + 1).d)
    int32_t i = 0
    
    if (r14.d - rcx + 1 s> 0)
        do
            int64_t rdi_1 = sx.q(*(arg1 + 0x30))
            int32_t rax_4 = (rdi_1 + 1).d
            *(arg1 + 0x30) = rax_4
            
            if (rax_4 s> *(arg1 + 0x34))
                sub_1405a4f90(arg1 + 0x28)
            
            i += 1
            int64_t* rax_7 = (rdi_1 << 4) + *(arg1 + 0x28)
            *rax_7 = 0
            rax_7[1] = 0
        while (i s< r14.d - *(arg1 + 0x30) + 1)

int64_t rbx_1 = r14 << 4
uint64_t result = sub_140758d90(*(arg1 + 0x28) + rbx_1, arg3)

if (result.d == 0xffffffff)
    int64_t* rbx_2 = rbx_1 + *(arg1 + 0x28)
    int64_t rdi_2 = sx.q(rbx_2[1].d)
    int32_t rax_11 = (rdi_2 + 1).d
    rbx_2[1].d = rax_11
    
    if (rax_11 s> *(rbx_2 + 0xc))
        sub_1405a4f90(rbx_2)
    
    result = *rbx_2
    *(result + rdi_2 * 0x10) = *arg3

return result

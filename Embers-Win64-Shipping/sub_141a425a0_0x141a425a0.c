// 函数: sub_141a425a0
// 地址: 0x141a425a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(arg2[1].d)

if (i_1 s<= 0)
    return 

int32_t* rsi_1 = *arg2
int64_t i

do
    int64_t* rcx = arg1[1]
    
    if (rcx != 0)
        int64_t rbx_1 = sx.q(sub_141f893b0(rcx, *rsi_1))
        
        if (rbx_1.d != 0xffffffff)
            int64_t* r14_1 = *arg1
            int32_t rdi_1 = (rbx_1 + 1).d
            int32_t rcx_1 = r14_1[1].d
            int32_t rax_2 = rcx_1 - rbx_1.d
            
            if (rax_2 != 1)
                int64_t rcx_2 = *r14_1
                memmove(rcx_2 + (rbx_1 << 2), rcx_2 + (sx.q(rdi_1) << 2), (rax_2 - 1) << 2)
                rcx_1 = r14_1[1].d
            
            r14_1[1].d = rcx_1 - 1
            int64_t* r14_2 = arg1[2]
            int64_t r12_2 = rbx_1 * 0x30
            int64_t rcx_4 = *(r12_2 + *r14_2 + 0x18)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int32_t rcx_7 = r14_2[1].d
            int32_t rax_8 = rcx_7 - rbx_1.d
            
            if (rax_8 != 1)
                int64_t rcx_5 = *r14_2
                memmove(rcx_5 + r12_2, sx.q(rdi_1) * 0x30 + rcx_5, (rax_8 - 1) * 0x30)
                rcx_7 = r14_2[1].d
            
            r14_2[1].d = rcx_7 - 1
            int64_t* rcx_8 = arg1[1]
            
            if (rcx_8 != 0)
                sub_141f845f0(rcx_8, rbx_1.d)
    
    rsi_1 = &rsi_1[1]
    i = i_1
    i_1 -= 1
while (i != 1)

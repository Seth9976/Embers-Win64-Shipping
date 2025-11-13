// 函数: sub_141a424a0
// 地址: 0x141a424a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(arg2[1].d)

if (i_1 s<= 0)
    return 

int32_t* rdi_1 = *arg2
int64_t i

do
    int64_t* rcx = arg1[1]
    
    if (rcx != 0)
        int64_t rbx_1 = sx.q(sub_141f893b0(rcx, *rdi_1))
        
        if (rbx_1.d != 0xffffffff)
            int64_t* r15_1 = *arg1
            int32_t rsi_1 = (rbx_1 + 1).d
            int32_t rcx_1 = r15_1[1].d
            int32_t rax_2 = rcx_1 - rbx_1.d
            
            if (rax_2 != 1)
                int64_t rcx_2 = *r15_1
                memmove(rcx_2 + (rbx_1 << 2), rcx_2 + (sx.q(rsi_1) << 2), (rax_2 - 1) << 2)
                rcx_1 = r15_1[1].d
            
            r15_1[1].d = rcx_1 - 1
            void* r15_2 = arg1[2]
            int32_t rcx_4 = *(r15_2 + 8)
            int32_t rax_7 = rcx_4 - rbx_1.d
            
            if (rax_7 != 1)
                memmove(rbx_1 * 0x1c + *r15_2, sx.q(rsi_1) * 0x1c + *r15_2, (rax_7 - 1) * 0x1c)
                rcx_4 = *(r15_2 + 8)
            
            *(r15_2 + 8) = rcx_4 - 1
            int64_t* rcx_7 = arg1[1]
            
            if (rcx_7 != 0)
                sub_141f845f0(rcx_7, rbx_1.d)
    
    rdi_1 = &rdi_1[1]
    i = i_1
    i_1 -= 1
while (i != 1)

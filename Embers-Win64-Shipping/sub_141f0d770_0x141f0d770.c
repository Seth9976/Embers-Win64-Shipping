// 函数: sub_141f0d770
// 地址: 0x141f0d770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x280)
int32_t rbx_1 = rbx - 1

if (rbx - 1 s>= 0)
    int64_t rsi_1 = sx.q(rbx_1) << 3
    int64_t r14_1 = rsi_1
    int32_t temp1_1
    
    do
        int64_t r9_1 = *(arg1 + 0x278)
        void* rax_2 = *(rsi_1 + r9_1)
        void* const rax_7
        
        if (rax_2 != 0)
            int32_t rax_3 = *(rax_2 + 0xc)
            
            if (rax_3 s>= data_143e1d9b4)
                rax_7 = nullptr
            else
                uint32_t rdx = zx.d(rax_3.w)
                
                if (rax_3 s< 0)
                    rax_3 += 0xffff
                    rdx -= 0x10000
                
                rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(rdx) * 0x18
        
        if (rax_2 == 0 || (1 & (*(rax_7 + 8) u>> 0x1d).b) != 0)
            int32_t rcx_4 = *(arg1 + 0x280)
            int32_t rax_12 = rcx_4 - rbx_1 - 1
            
            if (rax_12 s>= 1)
                rax_12 = 1
            
            if (rax_12 != 0)
                memcpy(r14_1 + r9_1, r9_1 + (sx.q(rcx_4 - rax_12) << 3), rax_12 << 3)
                rcx_4 = *(arg1 + 0x280)
            
            *(arg1 + 0x280) = rcx_4 - 1
        
        r14_1 -= 8
        rsi_1 -= 8
        temp1_1 = rbx_1
        rbx_1 -= 1
    while (temp1_1 - 1 s>= 0)

*arg2 = 0
int64_t rbx_2 = sx.q(*(arg1 + 0x280))
int64_t rdi_1 = *(arg1 + 0x278)
arg2[1].d = rbx_2.d

if (rbx_2.d == 0)
    *(arg2 + 0xc) = rbx_2.d
    return arg2

sub_1405c4a00(arg2, rbx_2.d, 0)
memcpy(*arg2, rdi_1, (rbx_2 << 3).d)
return arg2

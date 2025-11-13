// 函数: sub_141df3460
// 地址: 0x141df3460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i = *(arg3 + 8)

for (void* r15_2 = &i[sx.q(*(arg3 + 0x10)) * 8]; i != r15_2; i = &i[8])
    if (*i != 0xffffffff)
        int64_t* rcx = *(*arg1 + 0xa8)
        void* rax_3 = (*(*rcx + 0x10))(rcx)
        int64_t rcx_1 = sx.q(*(arg2 + 0x10))
        void* const rcx_4
        
        if (rcx_1.d s< 0 || rcx_1.d s>= *(rax_3 + 8))
            rcx_4 = nullptr
        else
            rcx_4 = rcx_1 * 0x30 + *rax_3
        
        int64_t* r8 = sx.q(*((sx.q(i[2]) << 6) + *(rcx_4 + 0x20) + 0xc)) * 0x58
        int64_t rdx_3 = *(rcx_4 + 0x10)
        
        if (*(r8 + rdx_3) == arg1[1][2])
            int64_t* rax = *arg1
            int32_t rbp_1 = *i
            int64_t* r14_1 = rax[0x15]
            int64_t r12_1 = rax[0x14]
            
            if (rbp_1 != 0xffffffff)
                int64_t rcx_10 = sx.q(*((*(*(*r14_1 + 0x20))(r14_1))[
                    sx.q(*((*(*r14_1 + 0x20))(r14_1, rdx_3, r8) + 8) - rbp_1) - 1] + 0x4c))
                
                if (rcx_10 != neg.q(r12_1))
                    sub_140692f90(rcx_10 + r12_1 + 0x18, arg1[1] + 0x18)

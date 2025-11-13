// 函数: sub_1426b39d0
// 地址: 0x1426b39d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 2
int32_t rax = sub_1426b0430(arg1, arg2)

if (rax s>= 0 && rax s< *(arg1 + 0x118))
    int16_t r10_1 = *(arg2 + 0x50)
    void* r9_2 = sx.q(rax) * 0x58 + *(arg1 + 0x110)
    int64_t rax_2 = sx.q(*(r9_2 + 0x28))
    
    if (rax_2.d s> 0)
        int64_t* rcx = *(r9_2 + 0x20)
        int64_t rdx = 0
        
        while (true)
            void* rax_3 = *rcx
            
            if (rax_3 == arg2)
                break
            
            if ((*(arg2 + 0x55) & 1) != 0 && rax_3 != 0 && *(rax_3 + 0x50) == r10_1)
                break
            
            rdx += 1
            rcx = &rcx[2]
            
            if (rdx s>= rax_2)
                goto label_1426b3a60
        
        rbx = rcx[1].d
    
    if (rax_2.d s<= 0 || rbx == 2)
    label_1426b3a60:
        void* rax_4 = *(r9_2 + 8)
        
        if (rax_4 == arg2)
        label_1426b3a7b:
            char rcx_1 = *(r9_2 + 0x41)
            
            if (rcx_1 == 1)
                return 0
            
            int32_t r8_1
            r8_1.b = rcx_1 != 2
            return zx.q(r8_1 + 1)
        
        if ((*(arg2 + 0x55) & 1) != 0 && rax_4 != 0 && *(rax_4 + 0x50) == r10_1)
            goto label_1426b3a7b

return zx.q(rbx)

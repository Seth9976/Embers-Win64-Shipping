// 函数: sub_142bda0d0
// 地址: 0x142bda0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
int32_t rbp = arg3
int32_t r10 = arg2
int32_t* r14 = arg1

if (arg2 u> arg3)
    rbp = arg2
    r10 = arg3

if (r10 u< rbp && rbp u< *arg1)
    int64_t rdx = *(arg1 + 8)
    uint64_t rcx = zx.q(r10) * 3
    int32_t rbx_1 = *(rdx + (rcx << 3))
    int32_t* rdi_1 = rdx + (rcx << 3)
    uint64_t rcx_1 = zx.q(rbp) * 3
    int32_t rsi_1 = *(rdx + (rcx_1 << 3))
    int32_t* r15_1 = rdx + (rcx_1 << 3)
    
    if (rsi_1 != 0)
        if (rsi_1 u> rbx_1)
            int32_t rax_3 = sub_142bd9f00(rdi_1, rsi_1, arg4)
            r12 = rax_3
            
            if (rax_3 != 0)
                return rax_3
            
            if (rbx_1 u< rsi_1)
                uint64_t r9 = zx.q(rbx_1)
                
                do
                    if (rbx_1 u< *rdi_1)
                        char* r8_3 = (r9 u>> 3) + *(rdi_1 + 8)
                        *r8_3 &= not.b((0x80 s>> (rbx_1.b & 7)).b)
                    
                    rbx_1 += 1
                    r9 += 1
                while (rbx_1 u< rsi_1)
        
        char* rdx_3 = *(r15_1 + 8)
        char* rcx_5 = *(rdi_1 + 8)
        uint32_t i_1 = (rsi_1 + 7) u>> 3
        
        if (i_1 != 0)
            uint32_t i
            
            do
                char rax_4 = *rdx_3
                rdx_3 = &rdx_3[1]
                *rcx_5 |= rax_4
                rcx_5 = &rcx_5[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    *r15_1 = 0
    r15_1[4] = 0
    uint64_t rbx_4 = zx.q(*r14 - rbp - 1)
    
    if (rbx_4.d s> 0)
        uint128_t var_30_1 = *r15_1
        uint64_t var_38_1 = *(r15_1 + 0x10)
        memmove(r15_1, &r15_1[6], (rbx_4 * 0x18).d)
        int64_t rcx_7 = sx.q(rbx_4.d) * 3
        *(r15_1 + (rcx_7 << 3)) = var_30_1
        *(r15_1 + (rcx_7 << 3) + 0x10) = var_38_1
    
    *r14 -= 1

return r12

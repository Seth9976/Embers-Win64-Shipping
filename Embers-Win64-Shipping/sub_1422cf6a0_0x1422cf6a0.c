// 函数: sub_1422cf6a0
// 地址: 0x1422cf6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t rdx = sx.q(*(arg1 + 0x18))

if (rdx.d u< rbx.d)
    if (rbx.d s> *(arg1 + 0x1c))
        sub_1422cfa40(arg1 + 0x10, rbx.d)
        rdx = zx.q(*(arg1 + 0x18))
    
    int32_t rcx_1 = *(arg1 + 0x18)
    int32_t r8_3 = rcx_1 - rdx.d + rbx.d
    *(arg1 + 0x18) = r8_3
    
    if (r8_3 s> *(arg1 + 0x1c))
        return sub_1422cf880(arg1 + 0x10, rcx_1) __tailcall
else if (rdx.d u> rbx.d)
    int32_t rbp_1 = rdx.d
    int32_t rbp_2 = rbp_1 - rbx.d
    
    if (rbp_1 != rbx.d)
        int32_t rax_2 = *(arg1 + 0x18)
        int32_t rcx_5 = rax_2 - rbp_2
        
        if (rcx_5 != rbx.d)
            void* rax_3 = *(arg1 + 0x10)
            
            if ((rax_3.b & 1) != 0)
                rax_3 = (rax_3 s>> 1) + arg1 + 0x10
            
            memmove((rbx << 6) + rax_3, (rdx << 6) + rax_3, (rcx_5 - rbx.d) << 6)
            rax_2 = *(arg1 + 0x18)
        
        *(arg1 + 0x18) = rax_2 - rbp_2
        sub_1422cf900(arg1 + 0x10)

// 函数: sub_142344be0
// 地址: 0x142344be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t rdx = sx.q(*(arg1 + 0x18))

if (rdx.d u< rbx.d)
    if (rbx.d s> *(arg1 + 0x1c))
        sub_141a148e0(arg1 + 0x10, rbx.d)
        rdx = zx.q(*(arg1 + 0x18))
    
    int32_t rcx_1 = *(arg1 + 0x18)
    int32_t r8_3 = rcx_1 - rdx.d + rbx.d
    *(arg1 + 0x18) = r8_3
    
    if (r8_3 s> *(arg1 + 0x1c))
        return sub_1407c3d10(arg1 + 0x10, rcx_1) __tailcall
else if (rdx.d u> rbx.d)
    int32_t rbp_1 = rdx.d
    int32_t rbp_2 = rbp_1 - rbx.d
    
    if (rbp_1 != rbx.d)
        int32_t rax_2 = *(arg1 + 0x18)
        int32_t r8_6 = rax_2 - rbp_2
        
        if (r8_6 != rbx.d)
            void* rcx_4 = *(arg1 + 0x10)
            
            if ((rcx_4.b & 1) != 0)
                rcx_4 = (rcx_4 s>> 1) + arg1 + 0x10
            
            memmove(rcx_4 + (rbx << 3), rcx_4 + (rdx << 3), (r8_6 - rbx.d) << 3)
            rax_2 = *(arg1 + 0x18)
        
        *(arg1 + 0x18) = rax_2 - rbp_2
        sub_1407c41d0(arg1 + 0x10)

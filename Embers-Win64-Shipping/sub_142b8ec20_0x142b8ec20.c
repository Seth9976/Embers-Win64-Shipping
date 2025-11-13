// 函数: sub_142b8ec20
// 地址: 0x142b8ec20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg5 s> 0)
    int64_t rax
    rax.b = 0
    return rax

int32_t rax_1 = sub_142aa60d0(arg2, arg4)
uint32_t rdx_1 = zx.d(rax_1.b)
uint64_t rbx = zx.q(rax_1)
*(arg1 + 0x10) = 0
uint64_t rax_2
uint64_t rcx_23

if (rdx_1 u< 0xc0)
label_142b8edc2:
    rcx_23 = zx.q(((rbx.d & 0xffffff00) << 8 | rdx_1) << 8) | (rbx & 0xffffffffffff0000) << 0x20
label_142b8edde:
    *(arg1 + 8) = rcx_23
label_142b8ede2:
    int64_t rbp_1 = *(arg1 + 8)
    
    if (rbp_1 != 0)
        int32_t rcx_26 = (rbp_1 s>> 0x20).d
        
        if (rcx_26 == 0 || rcx_26 u> *(arg1 + 0x1c78))
            rax_2.b = 0
        else
            int32_t r14_1 = *(arg1 + 0x1c7c)
            int32_t rdx_5 = rbp_1.d
            
            if ((rcx_26 u>= r14_1 || (rdx_5 & 0xffffc000) == 0x5000000)
                    && (rdx_5 & 0x3f3f) u>= 0x500)
                int64_t rbx_8 = *(arg1 + 0x10)
                int32_t rsi_3
                int32_t r15
                
                if (rbx_8 != 0)
                    rsi_3 = (rbx_8 s>> 0x20).d
                    
                    if (rsi_3 != 0)
                        r15.b = sub_142b8f200(arg1, rcx_26, rsi_3).b == 0
                    else
                        r15.b = rcx_26 u< r14_1
                
                if (rbx_8 != 0 && (r15 != 0 || (rbx_8.d & 0xffff0000) == 0
                        || (rsi_3 != 0 && rsi_3 u< r14_1 && (rbx_8.d & 0xffffc000) != 0x5000000)
                        || (rbx_8.d & 0x3f3f) u< 0x500))
                    rax_2.b = 0
                else
                    rbx_8.b |= rbp_1.b
                    rax_2.b = (rbx_8.b & 0xc0) == 0
            else
                rax_2.b = 0
    else
        rax_2.b = *(arg1 + 0x10) == 0
else
    int32_t rcx_2 = rbx.d & 0xf
    
    if (rcx_2 - 1 u<= 1)
        if (rdx_1 u< 0xc0)
            goto label_142b8edc2
        
        int32_t rbx_7 = rbx.d - rdx_1
        rdx_1.b &= 0xf
        rcx_23 = zx.q(rbx_7)
        
        if (rdx_1.b == 1)
            rcx_23 = rcx_23 << 0x20 | 0x5000500
        
        goto label_142b8edde
    
    if (rcx_2 == 4)
        *(arg1 + 8) =
            ((zx.q(rbx.d) & 0xff0000) | 0x500000000) u>> 8 | (rbx & 0xffffffffff000000) << 0x20
        *(arg1 + 0x10) = zx.q((rbx.d & 0xffffff00) << 0x10) | 0x500
        goto label_142b8ede2
    
    if (rcx_2 == 5)
        int32_t rbx_4 = rbx.d u>> 8 & 0x1f
        uint64_t rsi_1 = *(arg2 + 8) + (rbx u>> 0xd << 2)
        
        if (rbx_4 u<= 2)
            *(arg1 + 8) = sub_142b22f30(*rsi_1)
            
            if (rbx_4 == 2)
                *(arg1 + 0x10) = sub_142b22f30(*(rsi_1 + 4))
            
            goto label_142b8ede2
        
        rax_2.b = 0
    else if (rcx_2 == 6)
        int32_t rbx_2 = rbx.d u>> 8 & 0x1f
        uint64_t rdx_4 = *(arg2 + 0x10) + (rbx u>> 0xd << 3)
        
        if (rbx_2 u<= 2)
            *(arg1 + 8) = *rdx_4
            
            if (rbx_2 == 2)
                *(arg1 + 0x10) = *(rdx_4 + 8)
            
            goto label_142b8ede2
        
        rax_2.b = 0
    else
        if (rcx_2 == 9)
            return sub_142b8eed0(arg1, arg2, rbx.d, arg5)
        
        if (rcx_2 == 0xe)
            *(arg1 + 8) = sub_142b8e930(arg2, arg3, rbx.d)
            goto label_142b8ede2
        
        rax_2.b = 0
return rax_2

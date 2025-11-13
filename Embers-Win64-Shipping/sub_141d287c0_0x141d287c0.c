// 函数: sub_141d287c0
// 地址: 0x141d287c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (arg2 s> rbx.d)
    int32_t i_1 = arg2 - rbx.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_14090a6a0(arg1)
    
    int32_t* r8_2 = rbx * 0x60 + *arg1
    
    if (i_1 != 0)
        int64_t* rax = &r8_2[0xa]
        int32_t i
        
        do
            *r8_2 = 0xffffffff
            int64_t* rdx_1 = &rax[-2]
            *(rax - 0x24) = 0xffffffff
            r8_2 = &r8_2[0x18]
            rax[-4] = 0
            rax[-3] = 0
            *rax = 0
            rax[1].d = 0
            *(rax + 0xc) = 0x80
            int64_t* rcx = *rax
            rax = &rax[0xc]
            
            if (rcx != 0)
                rdx_1 = rcx
            
            *rdx_1 = 0
            rdx_1[1] = 0
            rax[-0xa].d = 0xffffffff
            *(rax - 0x4c) = 0
            rax[-8] = 0
            rax[-7].d = 0
            rax[-6].d = 1
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rbx.d)
    return sub_141d20ac0(arg1, arg2, rbx.d - arg2, arg3) __tailcall

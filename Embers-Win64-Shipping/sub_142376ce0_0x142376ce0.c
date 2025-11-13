// 函数: sub_142376ce0
// 地址: 0x142376ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (arg2 s> rbx.d)
    int32_t i_1 = arg2 - rbx.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405c5060(arg1)
    
    int64_t* r8_2 = rbx * 0x50 + *arg1
    
    if (i_1 != 0)
        int64_t* rax = &r8_2[4]
        int32_t i
        
        do
            *r8_2 = 0
            int64_t* rdx_1 = &rax[-2]
            rax[-3] = 0
            r8_2 = &r8_2[0xa]
            *rax = 0
            rax[1].d = 0
            *(rax + 0xc) = 0x80
            int64_t* rcx = *rax
            rax = &rax[0xa]
            
            if (rcx != 0)
                rdx_1 = rcx
            
            *rdx_1 = 0
            rdx_1[1] = 0
            rax[-8].d = 0xffffffff
            *(rax - 0x3c) = 0
            rax[-6] = 0
            rax[-5].d = 0
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rbx.d)
    return sub_14174d0d0(arg1, arg2, rbx.d - arg2, arg3) __tailcall

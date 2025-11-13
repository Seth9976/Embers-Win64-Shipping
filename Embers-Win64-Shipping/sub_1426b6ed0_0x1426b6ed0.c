// 函数: sub_1426b6ed0
// 地址: 0x1426b6ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (rbx.d == 0 && arg2[1].d == rbx.d)
    return 

int32_t i = 0
uint16_t arg_a

if (arg3 s> 0)
    uint16_t rax_1 = 2
    
    if (rbx.d == 0)
        rax_1 = arg3.w + 1
    
    arg_a = rax_1
    int32_t rax_2 = (rbx + 1).d
    arg1[1].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xc))
        sub_1405a4cf0(arg1)
    
    int64_t rdx_1 = *arg1
    memmove(rdx_1 + 4, rdx_1, (rbx << 2).d)
    **arg1 = 2.d
    
    if (rbx.d == 0)
        int32_t rbp_1 = 0
        
        if (arg3 s> 0)
            do
                int64_t rbx_1 = sx.q(arg1[1].d)
                arg_a = rbp_1.w
                int32_t rax_4 = (rbx_1 + 1).d
                arg1[1].d = rax_4
                
                if (rax_4 s> *(arg1 + 0xc))
                    sub_1405a4cf0(arg1)
                
                rbp_1 += 1
                *(*arg1 + (rbx_1 << 2)) = 1.d
            while (rbp_1 s< arg3)

int32_t temp0_1 = arg2[1].d

if (temp0_1 == 0)
    int64_t rbx_2 = sx.q(arg1[1].d)
    arg_a = arg4.w
    int32_t rax_6 = (rbx_2 + 1).d
    arg1[1].d = rax_6
    
    if (rax_6 s> *(arg1 + 0xc))
        sub_1405a4cf0(arg1)
    
    *(*arg1 + (rbx_2 << 2)) = 2.d
    
    if (arg4 s> 0)
        do
            int64_t rbx_3 = sx.q(arg1[1].d)
            arg_a = arg3.w + i.w
            int32_t rax_8 = (rbx_3 + 1).d
            arg1[1].d = rax_8
            
            if (rax_8 s> *(arg1 + 0xc))
                sub_1405a4cf0(arg1)
            
            i += 1
            *(*arg1 + (rbx_3 << 2)) = 1.d
        while (i s< arg4)
else if (temp0_1 s> 0)
    int32_t* r14_1 = nullptr
    
    do
        int32_t rbx_4 = *(r14_1 + *arg2)
        char arg_8
        arg_8.d = rbx_4
        
        if (rbx_4.b == 1)
            arg_a = (rbx_4 u>> 0x10).w + arg3.w
            rbx_4 = arg_8.d
        
        int64_t rbp_2 = sx.q(arg1[1].d)
        int32_t rax_10 = (rbp_2 + 1).d
        arg1[1].d = rax_10
        
        if (rax_10 s> *(arg1 + 0xc))
            sub_1405a4cf0(arg1)
        
        i += 1
        r14_1 = &r14_1[1]
        *(*arg1 + (rbp_2 << 2)) = rbx_4
    while (i s< arg2[1].d)

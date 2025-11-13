// 函数: sub_141937430
// 地址: 0x141937430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_14193755a:
    
    if (sub_1419347c0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_10 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x84) = rax_10
        void* rdx_8 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_10)
        void* rax_11 = r9_1
        
        if (rdx_8 != 0)
            rax_11 = rdx_8
        
        *(arg4 + 0x80) = *(rax_11 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_13 = *(r9_1 + 8)
        
        if (rax_13 != 0)
            r9_1 = rax_13
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1419374f9:
        rbx_1 = -1
    else
        while (true)
            int64_t rax_2
            rax_2.b = 1
            void* r8_2 = sx.q(rbx_1) * 0x88 + *arg1
            uint64_t rdx_3 = 0
            
            do
                if (rax_2.b == 0)
                    goto label_1419374ed
                
                uint64_t rcx_1 = rdx_3 * 5
                int64_t rax_3 = *(r8_2 + (rcx_1 << 2))
                rax_2 = rax_3 - *(arg4 + (rcx_1 << 2))
                
                if (rax_3 == *(arg4 + (rcx_1 << 2)))
                    int64_t rax_4 = *(r8_2 + (rcx_1 << 2) + 8)
                    rax_2 = rax_4 - *(arg4 + (rcx_1 << 2) + 8)
                    
                    if (rax_4 == *(arg4 + (rcx_1 << 2) + 8))
                        rax_2 = zx.q(*(r8_2 + (rcx_1 << 2) + 0x10))
                            - zx.q(*(arg4 + (rcx_1 << 2) + 0x10))
                
                rax_2.b = rax_2 == 0
                rdx_3 = zx.q(rdx_3.d + 1)
            while (rdx_3.d u< 6)
            
            if (rax_2.b != 0)
                break
            
        label_1419374ed:
            rbx_1 = *(r8_2 + 0x80)
            
            if (rbx_1 == 0xffffffff)
                goto label_1419374f9
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove(sx.q(rbx_1) * 0x88 + *arg1, arg4, 0x80)
        sub_14194be20(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_14193755a

*arg2 = rdi

if (arg6 != 0)
    *arg6 = rsi.b

return arg2

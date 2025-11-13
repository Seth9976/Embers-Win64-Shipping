// 函数: sub_140a70e20
// 地址: 0x140a70e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
uint64_t result = arg2
int64_t* r15 = arg4
int64_t r12 = sx.q(arg3.d)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140a70f50:
    
    if (sub_140a6d8d0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_9 = (arg1[9].d - 1) & r12.d
        *(r15 + 0x24) = rax_9
        void* rdx_7 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_9)
        void* rax_10 = r9
        
        if (rdx_7 != 0)
            rax_10 = rdx_7
        
        r15[4].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_12 = *(r9 + 8)
        
        if (rax_12 != 0)
            r9 = rax_12
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        arg3 = &arg1[7]
        void* rcx = arg1[8]
        arg2 = (sx.q(arg1[9].d) - 1) & r12
        
        if (rcx != 0)
            arg3 = rcx
        
        rbx_1 = *(arg3 + (arg2 << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140a70ee3:
        rbx_1 = -1
    else
        int32_t r11_1 = arg4[1].d
        
        while (true)
            arg4 = *arg1 + sx.q(rbx_1) * 0x28
            int16_t* const r8
            
            if (r11_1 == 0)
                r8 = &data_142d40450
            else
                r8 = *r15
            
            void* rax_3
            
            if (arg4[1].d == 0)
                rax_3 = &data_142d40450
            else
                rax_3 = *arg4
            
            arg3 = r8 - rax_3
            uint32_t i
            
            do
                uint32_t rdx_2 = zx.d(*rax_3)
                i = zx.d(*(rax_3 + arg3))
                arg2 = zx.q(rdx_2 - i)
                
                if (rdx_2 != i)
                    break
                
                rax_3 += 2
            while (i != 0)
            
            if (arg2.d == 0)
                break
            
            rbx_1 = arg4[4].d
            
            if (rbx_1 == 0xffffffff)
                goto label_140a70ee3
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t* rdi = *arg1 + sx.q(rbx_1) * 0x28
        sub_140a62ad0(rdi, arg2, arg3, arg4)
        memmove(rdi, r15, 0x20)
        sub_1405c3590(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140a70f50

*result = rdi_1

if (arg6 != 0)
    *arg6 = rsi.b

return result

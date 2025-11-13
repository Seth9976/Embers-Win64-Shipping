// 函数: sub_140d9d0f0
// 地址: 0x140d9d0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_140d9d210:
    
    if (sub_140d9bd70(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_7 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0xc) = rax_7
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_3 = sx.q(rax_7)
        void* rax_8 = r9_2
        
        if (rdx_9 != 0)
            rax_8 = rdx_9
        
        arg4[1].d = *(rax_8 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_10 = *(r9_2 + 8)
        
        if (rax_10 != 0)
            r9_2 = rax_10
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_2
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140d9d1b2:
        rbx_1 = -1
    else
        int64_t* r10_1 = *arg4
        int64_t r11_1 = *arg1
        
        while (true)
            int64_t r9_1 = sx.q(rbx_1) * 2
            int64_t* rax_2 = *(r11_1 + (r9_1 << 3))
            int16_t* const r8_1
            
            if (r10_1[1].d == 0)
                r8_1 = &data_142d40450
            else
                r8_1 = *r10_1
            
            int16_t* rax_3
            
            if (rax_2[1].d == 0)
                rax_3 = &data_142d40450
            else
                rax_3 = *rax_2
            
            void* r8_2 = r8_1 - rax_3
            uint32_t i
            uint32_t rdx_3
            
            do
                rdx_3 = zx.d(*rax_3)
                i = zx.d(*(rax_3 + r8_2))
                
                if (rdx_3 != i)
                    break
                
                rax_3 = &rax_3[1]
            while (i != 0)
            
            if (rdx_3 - i == 0)
                break
            
            rbx_1 = *(r11_1 + (r9_1 << 3) + 8)
            
            if (rbx_1 == 0xffffffff)
                goto label_140d9d1b2
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        memmove((sx.q(rbx_1) << 4) + *arg1, arg4, 8)
        sub_140906230(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140d9d210

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = rsi.b

return arg2

// 函数: sub_140a70650
// 地址: 0x140a70650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140a70780:
    
    if (sub_140a6d600(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_9 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x24) = rax_9
        void* rdx_9 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_9)
        void* rax_10 = r9_1
        
        if (rdx_9 != 0)
            rax_10 = rdx_9
        
        arg4[4].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_12 = *(r9_1 + 8)
        
        if (rax_12 != 0)
            r9_1 = rax_12
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140a70713:
        rbx_1 = -1
    else
        while (true)
            int64_t* r9 = *arg1 + sx.q(rbx_1) * 0x28
            int16_t* const r8_1
            
            if (arg4[1].d == 0)
                r8_1 = &data_142d40450
            else
                r8_1 = *arg4
            
            int16_t* rax_3
            
            if (r9[1].d == 0)
                rax_3 = &data_142d40450
            else
                rax_3 = *r9
            
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
            
            rbx_1 = r9[4].d
            
            if (rbx_1 == 0xffffffff)
                goto label_140a70713
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t* rdi = *arg1 + sx.q(rbx_1) * 0x28
        sub_140a62960(rdi)
        memmove(rdi, arg4, 0x20)
        sub_140638470(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140a70780

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rsi.b

return arg2

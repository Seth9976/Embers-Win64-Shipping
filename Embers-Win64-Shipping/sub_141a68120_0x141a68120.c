// 函数: sub_141a68120
// 地址: 0x141a68120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x28) = 0
int32_t i = arg2

if (*(arg1 + 0x2c) s<= 0xffffffff)
    sub_141a64350(arg1, 0)

void* r14_1

for (; i != data_143f29fb0; i = *r14_1)
    void* const rcx_2
    
    if (arg3[0xb].d == *(arg3 + 0x84))
    label_141a681c0:
        rcx_2 = nullptr
    else
        void* r8 = &arg3[0x11]
        void* rcx = *(r8 + 8)
        
        if (rcx != 0)
            r8 = rcx
        
        int32_t rax_3 = *(r8 + (((sx.q(arg3[0x13].d) - 1) & sx.q(i)) << 2))
        
        if (rax_3 == 0xffffffff)
        label_141a681c0_1:
            rcx_2 = nullptr
        else
            int64_t r8_1 = arg3[0xa]
            
            while (true)
                int64_t rdx_3 = sx.q(rax_3) * 5
                rcx_2 = r8_1 + (rdx_3 << 3)
                
                if (*(r8_1 + (rdx_3 << 3)) == i)
                    break
                
                rax_3 = *(rcx_2 + 0x20)
                
                if (rax_3 == 0xffffffff)
                    goto label_141a681c0_2
            
            if (rax_3 == 0xffffffff)
            label_141a681c0_2:
                rcx_2 = nullptr
    
    r14_1 = rcx_2 + 8
    
    if (rcx_2 == 0)
        r14_1 = nullptr
    
    int32_t* rcx_6
    
    if (arg3[1].d == *(arg3 + 0x34))
    label_141a68223:
        rcx_6 = nullptr
    else
        void* rcx_3 = arg3[8]
        void* r8_2 = &arg3[7]
        
        if (rcx_3 != 0)
            r8_2 = rcx_3
        
        int32_t rax = *(r8_2 + (((sx.q(arg3[9].d) - 1) & sx.q(i)) << 2))
        
        if (rax == 0xffffffff)
        label_141a68223_1:
            rcx_6 = nullptr
        else
            while (true)
                rcx_6 = sx.q(rax) * 0xf8 + *arg3
                
                if (*rcx_6 == i)
                    break
                
                rax = rcx_6[0x3c]
                
                if (rax == 0xffffffff)
                    goto label_141a68223_2
            
            if (rax == 0xffffffff)
            label_141a68223_2:
                rcx_6 = nullptr
    
    void* rbx = &rcx_6[2]
    
    if (rcx_6 == 0)
        rbx = nullptr
    
    if (r14_1 == 0)
        break
    
    if (rbx == 0)
        break
    
    int64_t rdi_1 = sx.q(*(arg1 + 0x28))
    int32_t rax_5 = (rdi_1 + 1).d
    *(arg1 + 0x28) = rax_5
    
    if (rax_5 s> *(arg1 + 0x2c))
        sub_14083a280(arg1, rdi_1.d)
    
    void* rax_6 = *(arg1 + 0x20)
    void* rdx_8 = arg1
    
    if (rax_6 != 0)
        rdx_8 = rax_6
    
    *(rdx_8 + (rdi_1 << 2)) = *(rbx + 0x40)

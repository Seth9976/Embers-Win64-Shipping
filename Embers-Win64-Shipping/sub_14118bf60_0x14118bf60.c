// 函数: sub_14118bf60
// 地址: 0x14118bf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 0
int32_t r10 = -1
int32_t r14 = *(arg1 + 0x60)
int32_t arg_c = arg3
int32_t r9 = -1

if (r14 s> 0)
    void* rax_1 = *(arg1 + 0x58)
    void* rbx_1 = arg1 + 8
    int64_t* r8 = nullptr
    
    if (rax_1 != 0)
        rbx_1 = rax_1
    
    do
        int64_t rdx = *(r8 + rbx_1)
        r8 = &r8[1]
        int32_t rax_2 = r11
        
        if (rdx.d != arg2 + arg3)
            rax_2 = r9
        
        r9 = rax_2
        int32_t rax_3 = r11
        
        if ((rdx u>> 0x20).d + rdx.d != arg2)
            rax_3 = r10
        
        r11 += 1
        r10 = rax_3
    while (r11 s< r14)

void* rbx_2 = arg1 + 8
int64_t rax_5

if (r10 == 0xffffffff)
    if (r9 != 0xffffffff)
        void* rax_12 = *(rbx_2 + 0x50)
        
        if (rax_12 != 0)
            rbx_2 = rax_12
        
        int64_t rax_13 = sx.q(r9)
        *(rbx_2 + (rax_13 << 3) + 4) += arg3
        *(rbx_2 + (rax_13 << 3)) = arg2
        return rax_13
    
    int64_t rdi_1 = sx.q(*(rbx_2 + 0x58))
    int32_t rax_14 = (rdi_1 + 1).d
    *(rbx_2 + 0x58) = rax_14
    
    if (rax_14 s> *(rbx_2 + 0x5c))
        sub_14119ab90(rbx_2, rdi_1.d)
    
    void* rax_15 = *(rbx_2 + 0x50)
    
    if (rax_15 != 0)
        rbx_2 = rax_15
    
    rax_5 = arg2.q
    *(rbx_2 + (rdi_1 << 3)) = rax_5
else
    void* rax_4 = *(rbx_2 + 0x50)
    void* rcx_3 = rbx_2
    
    if (rax_4 != 0)
        rcx_3 = rax_4
    
    rax_5 = sx.q(r10)
    void* rdx_1 = rcx_3 + (rax_5 << 3)
    int32_t r8_2 = *(rcx_3 + (rax_5 << 3) + 4) + arg3
    *(rdx_1 + 4) = r8_2
    
    if (r9 != 0xffffffff)
        void* rcx_4 = *(rbx_2 + 0x50)
        int64_t r11_1 = sx.q(r9) << 3
        void* rax_7 = rbx_2
        
        if (rcx_4 != 0)
            rax_7 = rcx_4
        
        *(rdx_1 + 4) = (*(rax_7 + r11_1) u>> 0x20).d + r8_2
        int32_t rdx_2 = *(rbx_2 + 0x58)
        int32_t r10_3 = rdx_2 - r9 - 1
        
        if (r10_3 s>= 1)
            r10_3 = 1
        
        if (r10_3 != 0)
            void* rax_8 = *(rbx_2 + 0x50)
            void* rcx_8 = rbx_2
            
            if (rax_8 != 0)
                rcx_8 = rax_8
            
            memcpy(rcx_8 + r11_1, rcx_8 + (sx.q(rdx_2 - r10_3) << 3), r10_3 << 3)
            rdx_2 = *(rbx_2 + 0x58)
        
        *(rbx_2 + 0x58) = rdx_2 - 1
        return sub_14119ad10(rbx_2) __tailcall

return rax_5

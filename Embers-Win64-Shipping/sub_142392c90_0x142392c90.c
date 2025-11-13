// 函数: sub_142392c90
// 地址: 0x142392c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x40) s<= 0)
    return 

int64_t* r14_1 = nullptr

do
    int64_t r9_1 = *(arg1 + 0x38)
    void* rbx_1 = *(r14_1 + r9_1)
    void* const rax_5
    
    if ((*(rbx_1 + 0x88) & 1) != 0)
        int32_t rax_1 = *(rbx_1 + 0xc)
        
        if (rax_1 s>= data_143e1d9b4)
            rax_5 = nullptr
        else
            uint32_t rdx = zx.d(rax_1.w)
            
            if (rax_1 s< 0)
                rax_1 += 0xffff
                rdx -= 0x10000
            
            rax_5 = *(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(rdx) * 0x18
    
    if ((*(rbx_1 + 0x88) & 1) == 0 || (1 & (*(rax_5 + 8) u>> 0x1d).b) != 0
            || (*(rbx_1 + 8) & 0x18000) != 0)
        int32_t rcx_4 = *(arg1 + 0x40)
        int32_t rax_9 = rcx_4 - i - 1
        
        if (rax_9 s>= 1)
            rax_9 = 1
        
        if (rax_9 != 0)
            memcpy(r9_1 + (sx.q(i) << 3), r9_1 + (sx.q(rcx_4 - rax_9) << 3), rax_9 << 3)
            rcx_4 = *(arg1 + 0x40)
        
        *(arg1 + 0x40) = rcx_4 - 1
        sub_1405c53d0(arg1 + 0x38)
        *(rbx_1 + 0x208) &= 0xbf
        char rdi_1 = *(rbx_1 + 0x208)
        i -= 1
        r14_1 -= 8
        void arg_8
        
        if (*sub_140865c40(*(arg1 + 8) + 0x168, &arg_8, rbx_1) != 0xffffffff)
            sub_14239a380(arg1 + 0x10)
            sub_1423b40c0(*(arg1 + 8), rbx_1, arg2)
            rdi_1 = *(rbx_1 + 0x208)
        
        *(rbx_1 + 0x208) = rdi_1 & 0xef
    
    i += 1
    r14_1 = &r14_1[1]
while (i s< *(arg1 + 0x40))

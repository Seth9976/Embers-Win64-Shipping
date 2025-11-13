// 函数: sub_140cd6b60
// 地址: 0x140cd6b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    void* r10_1 = *arg1
    int32_t r8_2 = arg1[1].d + 1
    arg1[1].d = r8_2
    arg1[2] = 0
    
    if (r8_2 s>= *(r10_1 + 0x24))
        break
    
    void* rdi_2
    
    while (true)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r8_2)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        int64_t r9_1 = *(*(r10_1 + 0x10) + (sx.q(rax_3 s>> 0x10) << 3))
        int64_t rcx_3 = sx.q(zx.d(rax_3.w) - rdx_2) * 3
        int64_t* rdi_1 = r9_1 + (rcx_3 << 3)
        
        if (*(r9_1 + (rcx_3 << 3)) != 0)
            arg1[2] = rdi_1
            rdi_2 = *rdi_1
            break
        
        r8_2 += 1
        arg1[1].d = r8_2
        
        if (r8_2 s>= *(r10_1 + 0x24))
            return 
    
    if ((arg1[4].d & *(rdi_2 + 8)) == 0)
        int64_t rax_7 = sub_140d41340()
        void* rcx_4 = arg1[3]
        
        if (rcx_4 != rax_7)
            uint64_t rax = *(rdi_2 + 0x10)
            int64_t rcx_5 = sx.q(*(rcx_4 + 0x38))
            
            if (rcx_5.d s> *(rax + 0x38))
                continue
            else if (*(*(rax + 0x30) + (rcx_5 << 3)) != rcx_4 + 0x30)
                continue
        
        int32_t rax_8 = *(rdi_2 + 0xc)
        void* const rax_12
        
        if (rax_8 s>= data_143e1d9b4)
            rax_12 = nullptr
        else
            uint32_t rdx_5 = zx.d(rax_8.w)
            
            if (rax_8 s< 0)
                rax_8 += 0xffff
                rdx_5 -= 0x10000
            
            rax_12 = *(data_143e1d9a0 + (sx.q(rax_8 s>> 0x10) << 3)) + sx.q(rdx_5) * 0x18
        
        if ((*(arg1 + 0x24) & *(rax_12 + 8)) == 0)
            break

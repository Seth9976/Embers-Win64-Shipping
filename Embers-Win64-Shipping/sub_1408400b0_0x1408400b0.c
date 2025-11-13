// 函数: sub_1408400b0
// 地址: 0x1408400b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0xa8)

while (i != 0)
    int64_t* r14_1 = *(arg1 + 0xa0)
    i -= 1
    void* rdi_1 = *r14_1
    int32_t arg_8
    sub_1408297c0(rdi_1 + 0x50, &arg_8, arg1)
    uint64_t rax = sx.q(arg_8)
    void* const rcx_3
    
    if (rax.d == 0xffffffff)
        rcx_3 = nullptr
    else
        rcx_3 = (rax << 6) + *(rdi_1 + 0x50)
    
    int64_t* rbx_1 = rcx_3 + 8
    
    if (rcx_3 == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        uint64_t r10_1 = sx.q(*(arg1 + 0xa8))
        int64_t* rax_1 = r14_1
        void* rdx_2 = &r14_1[r10_1]
        
        if (r14_1 != rdx_2)
            do
                if (*rax_1 == rdi_1)
                    int32_t rax_3 = ((rax_1 - r14_1) s>> 3).d
                    
                    if (rax_3 != 0xffffffff)
                        int32_t rcx_6 = r10_1.d - rax_3 - 1
                        
                        if (rcx_6 s>= 1)
                            rcx_6 = 1
                        
                        if (rcx_6 != 0)
                            memcpy(&r14_1[sx.q(rax_3)], &r14_1[sx.q(r10_1.d - rcx_6)], rcx_6 << 3)
                            r10_1 = zx.q(*(arg1 + 0xa8))
                        
                        *(arg1 + 0xa8) = (r10_1 - 1).d
                    
                    break
                
                rax_1 = &rax_1[1]
            while (rax_1 != rdx_2)
        
        rbx_1[1].d = 0
        
        if (*(rbx_1 + 0xc) s<= 0xffffffff)
            sub_14083adb0(rbx_1, 0)
        
        int32_t rax_5 = *(rbx_1 + 0x1c)
        rbx_1[3].d = 0
        
        if (rax_5 s< 0 && rax_5 != 0)
            sub_1405dadb0(&rbx_1[2], 0)
        
        int32_t rax_6 = *(rbx_1 + 0x2c)
        rbx_1[5].d = 0
        
        if (rax_6 s< 0 && rax_6 != 0)
            sub_1405dadb0(&rbx_1[4], 0)
        
        sub_1408382c0(rdi_1 + 0x50, arg1)

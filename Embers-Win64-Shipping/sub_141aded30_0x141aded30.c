// 函数: sub_141aded30
// 地址: 0x141aded30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_2 = arg1[1].d
    void* rdi_1 = *arg1
    
    if (i_2 != 0)
        int64_t* rbx_1 = rdi_1 + 0x98
        int32_t i
        
        do
            int64_t rcx = *rbx_1
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_1[-0xe] = &data_142d6a040
            int64_t rcx_1 = rbx_1[-3]
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            sub_1405ae180(&rbx_1[-0xd])
            int64_t rcx_3 = *rdi_1
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rdi_1 += 0xc0
            rbx_1 = &rbx_1[0x18]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg2[1].d
    void* rdi_2 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_141ae1da0(arg1, i_3, r8_1)
        int64_t* rbx_2 = *arg1
        
        if (i_3 != 0)
            void* rdi_3 = rdi_2 + 0x10
            int32_t i_1
            
            do
                *rbx_2 = 0
                int64_t rsi_1 = sx.q(*(rdi_3 - 8))
                int64_t r15_1 = *(rdi_3 - 0x10)
                rbx_2[1].d = rsi_1.d
                
                if (rsi_1.d != 0)
                    sub_140808f70(rbx_2, rsi_1.d, 0)
                    memcpy(*rbx_2, r15_1, (rsi_1 * 0x18).d)
                else
                    *(rbx_2 + 0xc) = 0
                
                rbx_2[2] = *rdi_3
                rbx_2[3].d = *(rdi_3 + 8)
                *(rbx_2 + 0x1c) = *(rdi_3 + 0xc)
                rbx_2[4].b = *(rdi_3 + 0x10)
                *(rbx_2 + 0x21) = *(rdi_3 + 0x11)
                *(rbx_2 + 0x22) = *(rdi_3 + 0x12)
                sub_141adec50(&rbx_2[5], rdi_3 + 0x18)
                rbx_2[0x15] = *(rdi_3 + 0x98)
                rbx_2[0x16].d = *(rdi_3 + 0xa0)
                *(rbx_2 + 0xb4) = *(rdi_3 + 0xa4)
                char rax_9 = *(rdi_3 + 0xa8)
                rdi_3 += 0xc0
                rbx_2[0x17].b = rax_9
                rbx_2 = &rbx_2[0x18]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = 0

return arg1

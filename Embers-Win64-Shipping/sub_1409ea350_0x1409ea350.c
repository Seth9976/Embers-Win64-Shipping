// 函数: sub_1409ea350
// 地址: 0x1409ea350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rbx_1 = sx.q(arg2[1].d)
    int64_t rdi_1 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = rbx_1.d
    
    if (rbx_1.d != 0 || r8_1 != 0)
        sub_1407c3650(arg1, rbx_1.d, r8_1)
        memcpy(*arg1, rdi_1, (rbx_1 * 0xc).d)
    else
        *(arg1 + 0xc) = 0

if (&arg1[2] != &arg2[2])
    int32_t i_3 = arg1[3].d
    int64_t* rbx_2 = arg1[2]
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_2
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_2 = &rbx_2[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[3].d
    void* rdi_2 = arg2[2]
    int32_t r8_4 = *(arg1 + 0x1c)
    arg1[3].d = i_2
    
    if (i_2 != 0 || r8_4 != 0)
        sub_1405a4be0(&arg1[2], i_2, r8_4)
        int64_t* rbx_3 = arg1[2]
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                *rbx_3 = 0
                int32_t rsi_1 = *(rdi_2 + 8)
                int64_t r15_1 = *rdi_2
                rbx_3[1].d = rsi_1
                
                if (rsi_1 != 0)
                    sub_1409ea8f0(rbx_3, rsi_1, 0)
                    memcpy(*rbx_3, r15_1, rsi_1 * 0xd0)
                else
                    *(rbx_3 + 0xc) = 0
                
                rbx_3 = &rbx_3[2]
                rdi_2 += 0x10
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x1c) = 0

if (&arg1[4] != &arg2[4])
    int64_t rdi_3 = sx.q(arg2[5].d)
    int64_t rsi_2 = arg2[4]
    int32_t r8_6 = *(arg1 + 0x2c)
    arg1[5].d = rdi_3.d
    
    if (rdi_3.d == 0 && r8_6 == 0)
        *(arg1 + 0x2c) = 0
        return arg1
    
    sub_1407c3650(&arg1[4], rdi_3.d, r8_6)
    memcpy(arg1[4], rsi_2, (rdi_3 * 0xc).d)

return arg1

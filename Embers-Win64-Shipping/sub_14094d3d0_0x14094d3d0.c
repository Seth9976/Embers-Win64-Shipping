// 函数: sub_14094d3d0
// 地址: 0x14094d3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rbx_1 = *arg1
    int32_t i_3 = arg1[1].d
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx = *(rbx_1 + 0x98)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int64_t rcx_1 = *(rbx_1 + 0x88)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = *(rbx_1 + 0x78)
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            int64_t rcx_3 = *(rbx_1 + 0x68)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = *(rbx_1 + 0x58)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *(rbx_1 + 0x40)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t rcx_6 = *(rbx_1 + 0x30)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = *(rbx_1 + 0x20)
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int64_t rcx_8 = *(rbx_1 + 0x10)
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int64_t rcx_9 = *rbx_1
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rbx_1 += 0xa8
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[1].d
    void* rbx_2 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140976950(arg1, i_2, r8_1)
        void* rsi_1 = *arg1
        
        if (i_2 != 0)
            void* rbx_3 = rbx_2 + 0x20
            int32_t i_1
            
            do
                sub_140596d10(rsi_1, rbx_3 - 0x20)
                sub_140596d10(rsi_1 + 0x10, rbx_3 - 0x10)
                sub_140596d10(rsi_1 + 0x20, rbx_3)
                sub_140596d10(rsi_1 + 0x30, rbx_3 + 0x10)
                sub_140596d10(rsi_1 + 0x40, rbx_3 + 0x20)
                *(rsi_1 + 0x50) = *(rbx_3 + 0x30)
                sub_140596d10(rsi_1 + 0x58, rbx_3 + 0x38)
                sub_140596d10(rsi_1 + 0x68, rbx_3 + 0x48)
                sub_140596d10(rsi_1 + 0x78, rbx_3 + 0x58)
                sub_140596d10(rsi_1 + 0x88, rbx_3 + 0x68)
                sub_140596d10(rsi_1 + 0x98, rbx_3 + 0x78)
                rsi_1 += 0xa8
                rbx_3 += 0xa8
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = i_2

return arg1

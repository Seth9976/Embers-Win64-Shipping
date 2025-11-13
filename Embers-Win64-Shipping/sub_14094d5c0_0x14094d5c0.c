// 函数: sub_14094d5c0
// 地址: 0x14094d5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rbx_1 = *arg1
    int32_t i_3 = arg1[1].d
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx = *(rbx_1 + 0x20)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int64_t rcx_1 = *(rbx_1 + 0x10)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx_1 += 0x30
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[1].d
    void* rbx_2 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_1405a4b40(arg1, i_2, r8_1)
        void* rsi_1 = *arg1
        
        if (i_2 != 0)
            void* rbx_3 = rbx_2 + 0x20
            int32_t i_1
            
            do
                sub_140596d10(rsi_1, rbx_3 - 0x20)
                sub_140596d10(rsi_1 + 0x10, rbx_3 - 0x10)
                sub_140596d10(rsi_1 + 0x20, rbx_3)
                rsi_1 += 0x30
                rbx_3 += 0x30
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = i_2

return arg1

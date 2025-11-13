// 函数: sub_1419c3e90
// 地址: 0x1419c3e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rbx_1 = *arg1
    int32_t i_3 = arg1[1].d
    
    if (i_3 != 0)
        int32_t i
        
        do
            *(rbx_1 + 0x48) = 0
            int64_t rcx = *(rbx_1 + 0x40)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            *(rbx_1 + 8) = 0
            
            if (*(rbx_1 + 0xc) != 0)
                sub_1406106e0(rbx_1, 0)
            
            *(rbx_1 + 0x30) = 0xffffffff
            *(rbx_1 + 0x34) = 0
            sub_14059a8e0(rbx_1 + 0x10, 0)
            int64_t rcx_3 = *(rbx_1 + 0x20)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = *rbx_1
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rbx_1 += 0x58
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[1].d
    void* r14_1 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140afef10(arg1, i_2, r8_1)
        int64_t* rsi_1 = *arg1
        
        if (i_2 != 0)
            void* rbx_2 = &rsi_1[4]
            int32_t i_1
            
            do
                *rsi_1 = 0
                int64_t* rcx_6 = rbx_2 - 0x10
                *(rbx_2 - 0x18) = 0
                *rbx_2 = 0
                *(rbx_2 + 8) = 0
                *(rbx_2 + 0xc) = 0x80
                int64_t* rax_1 = *rbx_2
                
                if (rax_1 != 0)
                    rcx_6 = rax_1
                
                *rcx_6 = 0
                rcx_6[1] = 0
                *(rbx_2 + 0x10) = 0xffffffff
                *(rbx_2 + 0x14) = 0
                *(rbx_2 + 0x20) = 0
                *(rbx_2 + 0x28) = 0
                sub_141823260(rsi_1, r14_1)
                int32_t rax_2 = *(r14_1 + 0x50)
                r14_1 += 0x58
                *(rbx_2 + 0x30) = rax_2
                rbx_2 += 0x58
                rsi_1 = &rsi_1[0xb]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = 0

return arg1

// 函数: sub_141706d00
// 地址: 0x141706d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x98) = 0

if (*(arg1 + 0x9c) != 0)
    sub_1405dadb0(arg1 + 0x90, 0)

int32_t i_4 = *(arg1 + 0xb8)

if (i_4 != 0)
    int64_t* rbx_1 = *(arg1 + 0xb0) + 0x20
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 = &rbx_1[0x16]
        i = i_4
        i_4 -= 1
    while (i != 1)

*(arg1 + 0xb8) = 0

if (*(arg1 + 0xbc) != 0)
    sub_140a05f70(arg1 + 0xb0, 0)

*(arg1 + 0xa8) = 0

if (*(arg1 + 0xac) != 0)
    sub_1405dadb0(arg1 + 0xa0, 0)

if (arg1 != arg2)
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *(arg1 + 0x18) = *(arg2 + 0x18)
    *(arg1 + 0x1c) = *(arg2 + 0x1c)
    *(arg1 + 0x24) = *(arg2 + 0x24)
    
    if (arg1 + 0x28 != arg2 + 0x28)
        sub_141554a40(arg1 + 0x28, *(arg2 + 0x28), *(arg2 + 0x30), *(arg1 + 0x34), 0)
    
    if (arg1 + 0x38 != arg2 + 0x38)
        int32_t i_5 = *(arg1 + 0x40)
        
        if (i_5 != 0)
            int64_t* rsi_2 = *(arg1 + 0x38) + 0x80
            int32_t i_1
            
            do
                int64_t rcx_5 = *rsi_2
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                int64_t rcx_6 = rsi_2[-2]
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                int32_t j_1 = rsi_2[-3].d
                int64_t* rbx_2 = rsi_2[-4]
                
                if (j_1 != 0)
                    int32_t j
                    
                    do
                        int64_t rcx_7 = *rbx_2
                        
                        if (rcx_7 != 0)
                            sub_140a74f90(rcx_7)
                        
                        rbx_2 = &rbx_2[2]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    rbx_2 = rsi_2[-4]
                
                if (rbx_2 != 0)
                    sub_140a74f90(rbx_2)
                
                int64_t rcx_9 = rsi_2[-0xe]
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                rsi_2 = &rsi_2[0x13]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        int32_t i_3 = *(arg2 + 0x40)
        void* rbx_3 = *(arg2 + 0x38)
        int32_t r8_2 = *(arg1 + 0x44)
        *(arg1 + 0x40) = i_3
        
        if (i_3 != 0 || r8_2 != 0)
            sub_14174fef0(arg1 + 0x38, i_3, r8_2)
            void*** rdi = *(arg1 + 0x38)
            
            if (i_3 != 0)
                int32_t i_2
                
                do
                    sub_141702e20(rdi, rbx_3)
                    rdi = &rdi[0x13]
                    rbx_3 += 0x98
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
        else
            *(arg1 + 0x44) = 0
    
    if (arg1 + 0x48 != arg2 + 0x48)
        sub_141554bd0(arg1 + 0x48, *(arg2 + 0x48), *(arg2 + 0x50), *(arg1 + 0x54), 0)
    
    if (arg1 + 0x58 != arg2 + 0x58)
        sub_141554bd0(arg1 + 0x58, *(arg2 + 0x58), *(arg2 + 0x60), *(arg1 + 0x64), 0)
    
    sub_1405b0be0(arg1 + 0x68, arg2 + 0x68)
    *(arg1 + 0x78) = *(arg2 + 0x78)
    *(arg1 + 0x7c) = *(arg2 + 0x7c)
    *(arg1 + 0x80) = *(arg2 + 0x80)
    *(arg1 + 0x84) = *(arg2 + 0x84)
    *(arg1 + 0x88) = *(arg2 + 0x88)

return arg1

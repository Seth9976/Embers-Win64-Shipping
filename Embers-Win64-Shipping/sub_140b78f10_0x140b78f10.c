// 函数: sub_140b78f10
// 地址: 0x140b78f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_2 = arg1[1].d
    
    if (i_2 != 0)
        void* rsi_2 = *arg1 + 0x88
        int32_t i
        
        do
            int32_t j_5 = *(rsi_2 + 0x10)
            int64_t* rbx_1 = *(rsi_2 + 8)
            
            if (j_5 != 0)
                int32_t j
                
                do
                    int64_t rcx = *rbx_1
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    rbx_1 = &rbx_1[2]
                    j = j_5
                    j_5 -= 1
                while (j != 1)
                rbx_1 = *(rsi_2 + 8)
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            int32_t j_6 = *rsi_2
            int64_t* rbx_2 = *(rsi_2 - 8)
            
            if (j_6 != 0)
                int32_t j_1
                
                do
                    int64_t rcx_2 = *rbx_2
                    
                    if (rcx_2 != 0)
                        sub_140a74f90(rcx_2)
                    
                    rbx_2 = &rbx_2[2]
                    j_1 = j_6
                    j_6 -= 1
                while (j_1 != 1)
                rbx_2 = *(rsi_2 - 8)
            
            if (rbx_2 != 0)
                sub_140a74f90(rbx_2)
            
            int32_t j_7 = *(rsi_2 - 0x10)
            int64_t* rbx_3 = *(rsi_2 - 0x18)
            
            if (j_7 != 0)
                int32_t j_2
                
                do
                    int64_t rcx_4 = *rbx_3
                    
                    if (rcx_4 != 0)
                        sub_140a74f90(rcx_4)
                    
                    rbx_3 = &rbx_3[2]
                    j_2 = j_7
                    j_7 -= 1
                while (j_2 != 1)
                rbx_3 = *(rsi_2 - 0x18)
            
            if (rbx_3 != 0)
                sub_140a74f90(rbx_3)
            
            int64_t rcx_6 = *(rsi_2 - 0x28)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = *(rsi_2 - 0x38)
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int64_t rcx_8 = *(rsi_2 - 0x48)
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int64_t rcx_9 = *(rsi_2 - 0x58)
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            int32_t j_8 = *(rsi_2 - 0x60)
            int64_t* rbx_4 = *(rsi_2 - 0x68)
            
            if (j_8 != 0)
                int32_t j_3
                
                do
                    int64_t rcx_10 = *rbx_4
                    
                    if (rcx_10 != 0)
                        sub_140a74f90(rcx_10)
                    
                    rbx_4 = &rbx_4[2]
                    j_3 = j_8
                    j_8 -= 1
                while (j_3 != 1)
                rbx_4 = *(rsi_2 - 0x68)
            
            if (rbx_4 != 0)
                sub_140a74f90(rbx_4)
            
            int32_t j_9 = *(rsi_2 - 0x70)
            int64_t* rbx_5 = *(rsi_2 - 0x78)
            
            if (j_9 != 0)
                int32_t j_4
                
                do
                    int64_t rcx_12 = *rbx_5
                    
                    if (rcx_12 != 0)
                        sub_140a74f90(rcx_12)
                    
                    rbx_5 = &rbx_5[2]
                    j_4 = j_9
                    j_9 -= 1
                while (j_4 != 1)
                rbx_5 = *(rsi_2 - 0x78)
            
            if (rbx_5 != 0)
                sub_140a74f90(rbx_5)
            
            rsi_2 += 0xa0
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg2[1].d
    int64_t* rbx_6 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_14083a0c0(arg1, i_3, r8_1)
        int64_t* rdi_1 = *arg1
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                sub_140b77330(rdi_1, rbx_6)
                rdi_1 = &rdi_1[0x14]
                rbx_6 = &rbx_6[0x14]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = i_3

return arg1

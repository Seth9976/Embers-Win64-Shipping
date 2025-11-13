// 函数: sub_1418691e0
// 地址: 0x1418691e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_1 = arg1[1].d
    void* rsi_1 = *arg1
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx = *(rsi_1 + 0x48)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int32_t j_1 = *(rsi_1 + 0x40)
            int64_t* rbx_1 = *(rsi_1 + 0x38)
            
            if (j_1 != 0)
                int32_t j
                
                do
                    int64_t rcx_1 = *rbx_1
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    rbx_1 = &rbx_1[2]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                rbx_1 = *(rsi_1 + 0x38)
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            int64_t rcx_3 = *(rsi_1 + 0x10)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = *rsi_1
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rsi_1 += 0x60
            i = i_1
            i_1 -= 1
        while (i != 1)
        rsi_1 = *arg1
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

return arg1

// 函数: sub_141e50530
// 地址: 0x141e50530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rsi_1 = rcx + 0x70
    int32_t i
    
    do
        int32_t j_2 = rsi_1[1].d
        int64_t* rbx_1 = *rsi_1
        
        if (j_2 != 0)
            int32_t j
            
            do
                int64_t rcx_1 = *rbx_1
                
                if (rcx_1 != 0)
                    sub_140a74f90(rcx_1)
                
                rbx_1 = &rbx_1[2]
                j = j_2
                j_2 -= 1
            while (j != 1)
            rbx_1 = *rsi_1
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        sub_1408464b0(&rsi_1[-4])
        int32_t j_3 = rsi_1[-5].d
        int64_t* rbx_2 = rsi_1[-6]
        
        if (j_3 != 0)
            int32_t j_1
            
            do
                int64_t rcx_4 = *rbx_2
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                rbx_2 = &rbx_2[2]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            rbx_2 = rsi_1[-6]
        
        if (rbx_2 != 0)
            sub_140a74f90(rbx_2)
        
        int64_t rcx_6 = rsi_1[-0xa]
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rsi_1 = &rsi_1[0x11]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall

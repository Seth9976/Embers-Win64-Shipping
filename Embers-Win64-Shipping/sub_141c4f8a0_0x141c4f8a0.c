// 函数: sub_141c4f8a0
// 地址: 0x141c4f8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rsi_1 = rcx + 8
    int32_t i
    
    do
        int32_t j_1 = rsi_1[1].d
        void*** rbx_1 = *rsi_1
        
        if (j_1 != 0)
            int32_t j
            
            do
                sub_141c31880(rbx_1)
                rbx_1 = &rbx_1[6]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rbx_1 = *rsi_1
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        rsi_1 = &rsi_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall

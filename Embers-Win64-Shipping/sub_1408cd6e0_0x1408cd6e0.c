// 函数: sub_1408cd6e0
// 地址: 0x1408cd6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rsi_1 = rcx + 0x28
    int32_t i
    
    do
        int32_t j_1 = rsi_1[1].d
        void* rcx_1 = *rsi_1
        
        if (j_1 != 0)
            int64_t* rbx_1 = rcx_1 + 8
            int32_t j
            
            do
                int64_t rcx_2 = *rbx_1
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
                
                rbx_1 = &rbx_1[6]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rcx_1 = *rsi_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rsi_1 = &rsi_1[7]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall

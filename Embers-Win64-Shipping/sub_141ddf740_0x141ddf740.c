// 函数: sub_141ddf740
// 地址: 0x141ddf740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rsi_1 = rcx + 8
    int32_t i
    
    do
        int64_t rcx_1 = rsi_1[5]
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int32_t j_1 = rsi_1[1].d
        void* rcx_2 = *rsi_1
        
        if (j_1 != 0)
            void* rbx_1 = rcx_2 + 0x50
            int32_t j
            
            do
                int64_t rcx_3 = *(rbx_1 + 0x20)
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                int64_t rcx_4 = *rbx_1
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                int64_t rcx_5 = *(rbx_1 - 0x28)
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                rbx_1 -= -0x80
                j = j_1
                j_1 -= 1
            while (j != 1)
            rcx_2 = *rsi_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rsi_1 = &rsi_1[9]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall

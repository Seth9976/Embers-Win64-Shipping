// 函数: sub_1422b50a0
// 地址: 0x1422b50a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rsi_1 = rcx + 0x1600
    int32_t i
    
    do
        sub_1405ae180(rsi_1 + 8)
        int64_t j = 0x40
        void* rbx_1 = rsi_1
        
        do
            rbx_1 -= 0x58
            j -= 1
            *(rbx_1 + 0x48) = 0
            int64_t rcx_2 = *(rbx_1 + 0x40)
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            sub_1407547c0(rbx_1, 0)
            int64_t rcx_4 = *(rbx_1 + 0x20)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
        while (j != 0)
        
        rsi_1 += 0x1660
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall

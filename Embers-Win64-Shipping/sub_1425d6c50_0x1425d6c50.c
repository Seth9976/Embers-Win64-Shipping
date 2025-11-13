// 函数: sub_1425d6c50
// 地址: 0x1425d6c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x1c8
    int32_t i
    
    do
        int64_t rcx_1 = *(rbx_1 + 0x10)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rbx_1 - 0x10)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rbx_1 - 0x20)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rbx_1 - 0x30)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *(rbx_1 - 0x48)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(rbx_1 - 0x58)
        void* rsi_1 = rbx_1 - 0x58
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        for (int64_t j = 2; j != 0; )
            int64_t rcx_8 = *(rsi_1 - 0x10)
            rsi_1 -= 0x10
            j -= 1
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
        
        sub_1425d6bd0(rbx_1 - 0x98)
        int64_t rcx_10 = *(rbx_1 - 0xb0)
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        sub_1405ded70(rbx_1 - 0xc0)
        int64_t rcx_12 = *(rbx_1 - 0xd0)
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t rcx_13 = *(rbx_1 - 0xe0)
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = *(rbx_1 - 0xf0)
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        sub_1405ded70(rbx_1 - 0x100)
        int64_t rcx_16 = *(rbx_1 - 0x110)
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        int64_t rcx_17 = *(rbx_1 - 0x120)
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        int64_t rcx_18 = *(rbx_1 - 0x130)
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        sub_1405ded70(rbx_1 - 0x140)
        int64_t rcx_20 = *(rbx_1 - 0x150)
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        int64_t rcx_21 = *(rbx_1 - 0x160)
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        rbx_1 += 0x1f0
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall

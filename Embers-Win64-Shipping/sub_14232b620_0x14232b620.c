// 函数: sub_14232b620
// 地址: 0x14232b620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 0x40
    int32_t i
    
    do
        sub_14232bde0(&rbx_1[4])
        sub_1405d1550(&rbx_1[1])
        sub_1405ec8a0(rbx_1)
        int64_t rcx_4 = rbx_1[-2]
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_1[-6] = &data_142dda848
        sub_1405d1550(&rbx_1[-4])
        sub_1419948a0(&rbx_1[-6])
        rbx_1 = &rbx_1[0x16]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall

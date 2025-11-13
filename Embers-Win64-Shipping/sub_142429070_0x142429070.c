// 函数: sub_142429070
// 地址: 0x142429070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rsi_1 = rcx + 0x48
    int32_t i
    
    do
        int64_t j_1 = 3
        int64_t* rbx_1 = rsi_1
        int64_t j
        
        do
            rbx_1 -= 0x18
            sub_1405d1550(rbx_1)
            j = j_1
            j_1 -= 1
        while (j != 1)
        rsi_1 = &rsi_1[0xc]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall

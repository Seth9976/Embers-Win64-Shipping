// 函数: sub_141415920
// 地址: 0x141415920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143ed4aa8 = 0
*arg1 = &data_142f7e2a8
int32_t i_1 = arg1[0x13].d
int64_t* rbx = arg1[0x12]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            rcx[9].d -= 1
            
            if (rcx[9].d == 1)
                sub_140a2f6e0(rcx)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1

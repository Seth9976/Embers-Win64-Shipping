// 函数: sub_141a000e0
// 地址: 0x141a000e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg1 = &data_14301ec08

if (arg1[2].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rcx = *(rsi_1 + arg1[1])
        (*(*rcx + 0x30))(rcx)
        int64_t* rcx_1 = *(rsi_1 + arg1[1])
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[2].d)

int64_t rcx_2 = arg1[1]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1

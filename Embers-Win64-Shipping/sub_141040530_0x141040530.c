// 函数: sub_141040530
// 地址: 0x141040530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg1 = &data_142f01e00

if (arg1[5].d s> 0)
    int64_t rsi_1 = 0
    
    do
        void* rbp_1 = *(arg1[4] + rsi_1 + 0x10)
        
        if (rbp_1 != 0)
            sub_141059a80(rbp_1, arg2)
            arg2 = j_sub_140a74f90(rbp_1)
        
        i += 1
        rsi_1 += 0x38
    while (i s< arg1[5].d)

arg1[5].d = 0

if (*(arg1 + 0x2c) != 0)
    sub_1408cf3a0(&arg1[4], 0)

int64_t rcx_3 = arg1[4]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return sub_14081c9d0(&arg1[3]) __tailcall

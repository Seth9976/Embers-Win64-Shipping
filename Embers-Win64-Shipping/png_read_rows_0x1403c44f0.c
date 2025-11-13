// 函数: png_read_rows
// 地址: 0x1403c44f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (arg2 == 0 || arg3 == 0)
    if (arg2 == 0)
        if (arg3 != 0 && arg4 != 0)
            int64_t rsi_3 = 0
            
            do
                png_read_row(arg1, nullptr, *(arg3 + (rsi_3 << 3)))
                rsi_3 += 1
            while (arg4 != rsi_3.d)
    else if (arg4 != 0)
        int64_t rsi_2 = 0
        
        do
            png_read_row(arg1, *(arg2 + (rsi_2 << 3)), nullptr)
            rsi_2 += 1
        while (arg4 != rsi_2.d)
else if (arg4 != 0)
    int64_t rsi_1 = 0
    
    do
        png_read_row(arg1, *(arg2 + (rsi_1 << 3)), *(arg3 + (rsi_1 << 3)))
        rsi_1 += 1
    while (arg4 != rsi_1.d)

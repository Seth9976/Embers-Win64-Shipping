// 函数: sub_142cfda00
// 地址: 0x142cfda00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = data_143f3d210
int32_t i_1 = data_143f3d218

if (i_1 != 0)
    int32_t i
    
    do
        int32_t j_1 = rsi[1].d
        int64_t* rbx_1 = *rsi
        
        if (j_1 != 0)
            int32_t j
            
            do
                sub_140745b20(rbx_1)
                rbx_1 = &rbx_1[2]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rbx_1 = *rsi
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        rsi = &rsi[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rsi = data_143f3d210

if (rsi == 0)
    return 

return sub_140a74f90(rsi) __tailcall

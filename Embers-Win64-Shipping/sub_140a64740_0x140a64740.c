// 函数: sub_140a64740
// 地址: 0x140a64740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a64ab0(arg1, arg2, arg3)

if ((arg1[5].b & 1) != 0)
    int64_t rsi_1 = arg2[8]
    
    if (rsi_1 != 0)
        int64_t* rcx = data_143ddb3f0
        
        if (rcx == 0)
            sub_140a750a0()
            rcx = data_143ddb3f0
        
        arg2[8] = (*(*rcx + 0x20))(rcx, rsi_1, 0, 0)
    
    arg2[9].d = 0
    sub_140a6d820(arg2, arg2[1].d - *(arg2 + 0x34), 0)

return arg1

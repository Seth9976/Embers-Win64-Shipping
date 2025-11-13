// 函数: sub_140cdda70
// 地址: 0x140cdda70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e1d7a0 != 0)
    int64_t* rcx = data_143e1d798
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        if ((*(*arg1 + 0x188))(arg1) != 0)
        label_140cddacb:
            int64_t* rcx_4 = nullptr
            
            if (data_143e1d7a0 != 0)
                rcx_4 = data_143e1d798
            
            (*(*rcx_4 + 0x48))(rcx_4, arg2, arg1)
            return arg2
        
        if (((arg1[1].d u>> 4).b & 1) != 0 && ((*(arg1[2] + 0xcc) u>> 7).b & 1) == 0)
            goto label_140cddacb

*arg2 = 0
arg2[1] = 0
return arg2

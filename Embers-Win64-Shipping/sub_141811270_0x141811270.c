// 函数: sub_141811270
// 地址: 0x141811270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rcx = &data_142d40450
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

if (arg1[8].d != 0)
    rcx = arg1[7]

int32_t result = sub_140a54510(rcx, rdx)

if (result != 0)
    result = (*(*arg1 + 0x20))(arg1)
    
    if (&arg1[7] != arg2)
        int16_t* rcx_2 = arg1[7]
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        arg1[7] = *arg2
        *arg2 = nullptr
        arg1[8].d = arg2[1].d
        result = *(arg2 + 0xc)
        *(arg1 + 0x44) = result
        arg2[1] = 0

return result

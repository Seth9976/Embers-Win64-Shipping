// 函数: sub_141f22070
// 地址: 0x141f22070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ef13d0(arg1, arg2)
char* result = (*(*arg1 + 0x450))(arg1)

if ((arg1[0x1d].b & 4) != 0 && arg2 != 0 && (*(arg1 + 0x3a) & 2) != 0)
    void* rcx_1 = arg1[0x14]
    
    if (rcx_1 != 0 && (*(rcx_1 + 0x32) & 2) != 0)
        return sub_1423bc410(rcx_1 + 0x28, arg1, &arg1[6])

return result

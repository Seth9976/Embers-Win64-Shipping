// 函数: sub_142c521f0
// 地址: 0x142c521f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = data_14401af40

if (result != 0)
    int32_t result_1 = result
    result -= 1
    data_14401af40 = result
    
    if (result_1 == 1)
        void (* rcx_1)()
        result, rcx_1 = sub_142c5a030()
        
        if ((data_14401af44 & 1) != 0)
            sub_142c5b0b0(rcx_1)
        
        if ((data_14401af44 & 2) != 0)
            result = WSACleanup()
        
        data_14401af44.d = 0

return result

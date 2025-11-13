// 函数: sub_140b617e0
// 地址: 0x140b617e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e05138 != 0)
    int32_t rax_1 = data_143df1a30
    data_143df1a30 += 1
    
    if (rax_1 == 0)
        data_143df1c98 = arg1
        data_143df1ca0 = GetCurrentThreadId()
        HANDLE rax_4 = GetCurrentThread()
        HANDLE hEvent = data_143df1c88
        data_143df1ca8 = rax_4
        SetEvent(hEvent)
    
    WaitForSingleObject(data_143df1c90, 0xea60)

return 1

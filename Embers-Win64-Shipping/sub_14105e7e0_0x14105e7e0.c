// 函数: sub_14105e7e0
// 地址: 0x14105e7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

do
    if (arg1[0xa] != arg1[0xb])
        int64_t* i = arg1[1] + modu.dp.q(0:(arg1[0xa]), *arg1) * 0x18
        arg1[0xa] += 1
        
        while (i != 0)
            sub_141064eb0(arg1, i)
            
            if (SetEvent(arg1[0x17]) == 0)
                GetLastError()
            
            if (arg1[0xa] == arg1[0xb])
                break
            
            i = arg1[1] + modu.dp.q(0:(arg1[0xa]), *arg1) * 0x18
            arg1[0xa] += 1
    
    WaitForSingleObject(arg1[2], 0xffffffff)
    
    if (ResetEvent(arg1[2]) == 0)
        GetLastError()
while (arg1[9].b == 0)

return 0

// 函数: sub_140ffd5f0
// 地址: 0x140ffd5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e2b8b6 == 0 || *(arg1 + 0x168) == 0 || *(arg1 + 0x150) == 0 || *(arg1 + 0x158) != 0
        || *(arg1 + 0x17f30) == 0)
    return 

if ((GFSDK_Aftermath_DX11_Initialize(0x13, 3) & 0xfff00000) != 0xbad00000
        && (GFSDK_Aftermath_DX11_CreateContextHandle(*(arg1 + 0x150), arg1 + 0x158) & 0xfff00000)
        != 0xbad00000)
    return sub_140b00890(1) __tailcall

data_143e2b8b6 = 0

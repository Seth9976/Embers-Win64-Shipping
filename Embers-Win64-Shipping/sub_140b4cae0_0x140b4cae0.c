// 函数: sub_140b4cae0
// 地址: 0x140b4cae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = arg2
*arg1 = &data_142e79060
int64_t rax = TlsGetValue(data_143de8490)
uint32_t dwTlsIndex = data_143de8490
arg1[2] = rax
TlsSetValue(dwTlsIndex, arg1)
return arg1

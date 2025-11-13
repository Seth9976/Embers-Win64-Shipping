// 函数: ??0WriteableMemMap@@QEAA@PEAGW4MappingMode@@KK@Z
// 地址: 0x140b0b350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e74828
sub_140b19bc0()
void* rbx = &data_1439a4950
int64_t rsi = sx.q(data_1439a4998)
int32_t r8 = (rsi + 1).d
data_1439a4998 = r8

if (r8 s> data_1439a499c)
    sub_140809370(&data_1439a4950, rsi.d)

void* rcx = data_1439a4990

if (rcx != 0)
    rbx = rcx

*(rbx + (rsi << 3)) = arg1
*arg1 = &data_142e74838
arg1[1] = arg2
return arg1

// 函数: sub_140941580
// 地址: 0x140941580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xe8) = sub_140a491d0(0)
void* rcx = data_143ddb400
int32_t arg_8 = 0x32

if (sub_140af3c10(rcx, u"OnlineSubsystem", u"PollingIntervalInMs", &arg_8, &data_143de5780).b != 0)
    *(arg1 + 0xf0) = arg_8

int32_t result
result.b = *(arg1 + 0xe8) != 0
return result

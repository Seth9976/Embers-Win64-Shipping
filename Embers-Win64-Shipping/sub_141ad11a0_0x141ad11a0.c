// 函数: sub_141ad11a0
// 地址: 0x141ad11a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d3c6e0(arg1 + 0x78)

if (result == 0)
    return result

wchar16* i_2 = nullptr
wchar16* i_3 = nullptr

for (wchar16* i = wcsstr(&UPlayMontageCallbackProxy::OnNotifyBeginReceived", ::"); i != 0; 
        i = wcsstr(&i[1], ::"))
    i_3 = i

int64_t arg_8
sub_140b58260(&arg_8, &i_3[2], 1)
sub_141a8a870(result + 0x248, arg1, sub_141ac84c0, arg_8)

for (wchar16* i_1 = wcsstr(&UPlayMontageCallbackProxy::OnNotifyEndReceived", ::"); i_1 != 0; 
        i_1 = wcsstr(&i_1[1], ::"))
    i_2 = i_1

sub_140b58260(&arg_8, &i_2[2], 1)
return sub_141a8a870(result + 0x258, arg1, sub_141ac84f0, arg_8)

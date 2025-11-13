// 函数: sub_141d41d70
// 地址: 0x141d41d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140b3db50()
void arg_10
void* result = sub_140b3dbe0(*sub_140b58170(&arg_10, "ChaosSolvers", 1))

if (result == 0 || *(result + 0x30) == 0 || arg1[1].d == 0)
    return result

int64_t* rbx_1 = *arg1
int16_t* const rbx_2

if (rbx_1[1].d == 0)
    rbx_2 = &data_142d40450
else
    rbx_2 = *rbx_1

if (sub_140a54510(rbx_2, u"DedicatedThread") == 0)
    return sub_141d36130(0) __tailcall

if (sub_140a54510(rbx_2, u"TaskGraph") == 0)
    return sub_141d36130(1) __tailcall

char rcx_9 = 4

if (sub_140a54510(rbx_2, u"SingleThread") == 0)
    rcx_9 = 2

return sub_141d36130(rcx_9)

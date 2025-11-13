// 函数: sub_140ce4270
// 地址: 0x140ce4270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t* result = EnterCriticalSection(arg1 + 0x1c0)

if (arg2 != 0)
    void arg_8
    result = sub_1408296b0(arg1 + 0x170, &arg_8, arg2)
    
    if (*result == 0xffffffff)
        void arg_18
        sub_140ca9be0(arg1 + 0x170, &arg_18, &arg_10, nullptr)
        int32_t result_1 = *(arg1 + 0x1e8)
        *(arg1 + 0x1e8) = 1
        result = zx.q(result_1)

if (arg1 == -0x1c0)
    return result

return LeaveCriticalSection(arg1 + 0x1c0) __tailcall

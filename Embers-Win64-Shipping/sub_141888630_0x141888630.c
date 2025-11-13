// 函数: sub_141888630
// 地址: 0x141888630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x78)
int128_t result = sub_141831760((arg1 + 0x78)->__offset(0x30).q)

if ((arg1 + 0x78)->__offset(0x38).b != 0 && (arg1 + 0x78)->__offset(0x39).b == 0)
    result.q =
        result.q f+ sub_141831760(_Query_perf_frequency() - (arg1 + 0x78)->__offset(0x28).q).q

LeaveCriticalSection(arg1 + 0x78)
return result

// 函数: sub_141853a30
// 地址: 0x141853a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm9 = 0x4170000000000000
int128_t result_1
result_1.q = float.d(performanceCount)
result_1.q = result_1.q f* data_143d796f8
result_1.q = result_1.q f+ zmm9.q
int128_t result = result_1

if ((*(*arg1 + 0x60))(arg1) != 0)
    char i
    
    do
        sub_140b73230(0x3dcccccd)
        QueryPerformanceCounter(&performanceCount)
        result.q = float.d(performanceCount)
        result.q = result.q f* data_143d796f8
        result.q = result.q f+ zmm9.q
        i = (*(*arg1 + 0x60))(arg1)
    while (i != 0)

result.q = result.q f- result_1.q
return result

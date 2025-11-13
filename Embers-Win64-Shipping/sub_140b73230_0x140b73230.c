// 函数: sub_140b73230
// 地址: 0x140b73230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
int128_t zmm6
zmm6.d = arg1.d f* 1000f
int32_t dwMilliseconds = (int.q(zmm6.d)).d

if (dwMilliseconds != 0)
    Sleep(dwMilliseconds)
else
    SwitchToThread()

char arg_8 = 0
char* var_20 = &arg_8
void*** (* var_28)() = sub_140a3f720
void* rax = sub_140a756e0(&var_28, &data_14399e8cc)
int64_t performanceCount
int64_t result = QueryPerformanceCounter(&performanceCount)
*(rax + 0x10) += performanceCount.d - performanceCount_1
return result

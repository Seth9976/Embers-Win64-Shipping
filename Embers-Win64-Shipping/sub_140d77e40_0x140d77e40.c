// 函数: sub_140d77e40
// 地址: 0x140d77e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
int32_t rcx

if (data_143e20398 != 0)
    result = zx.q(data_143e2039c)
    rcx = data_143e203a0
else
    result = 0
    data_143e20398 = 1
    rcx = 0x60
    data_143e2039c = 0
    data_143e203a0 = 0x60

if (rcx == 0)
    *arg2 = 0
    return result

arg1.d = _mm_cvtepi32_ps(zx.o(rcx)).d f* arg1.d
*arg2 = arg1.d
return result

// 函数: sub_14095dff0
// 地址: 0x14095dff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1
char rax
int64_t r8
rax, r8 = sub_140b0f6c0(&arg_18, u"SOCKETS")

if (rax != 0)
    return sub_140964d70(arg1 - 0x28, arg_18, arg4)

r8.b = 1

if (sub_140b0f6c0(&arg_18, u"PauseReceive") == 0)
    return sub_1405949a0()

int64_t var_28 = arg_18
uint64_t _String_1 = 0
int32_t var_10 = 0
char rax_4 = sub_140b295a0(&var_28, &_String_1, 0)
int32_t rax_5

if (rax_4 != 0)
    int16_t* const _String = &data_142d40450
    
    if (var_10 != 0)
        _String = _String_1
    
    rax_5 = _wtoi(_String)

if (rax_4 == 0 || rax_5 == 0)
    sub_140b1f640(arg4, u"Must specify a pause time, in seconds.")
else
    sub_140b1f700(arg4, u"Pausing Socket Receives for '%i' seconds.", zx.q(rax_5))
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    double zmm1[0x2] = zx.o(0)
    zmm1[0] = float.d(performanceCount)
    zmm1[0] = zmm1[0] f* data_143d796f8
    zmm1[0] = zmm1[0] + 16777216.0
    zmm1[0] = zmm1[0] + float.d(zx.q(rax_5))
    *(arg1 + 0x730) = _mm_cvtpd_ps(zmm1).d

uint64_t _String_2 = _String_1

if (_String_2 != 0)
    sub_140a74f90(_String_2)

uint64_t result
result.b = 1
return result

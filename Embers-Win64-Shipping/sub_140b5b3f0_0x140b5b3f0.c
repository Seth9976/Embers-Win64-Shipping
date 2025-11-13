// 函数: sub_140b5b3f0
// 地址: 0x140b5b3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int32_t rsi = arg2[1].d
int64_t rbp = *arg2
int16_t* var_248 = nullptr

if (rsi != 0)
    sub_1405a4c70(&var_248, rsi, 0)
    memcpy(var_248, rbp, rsi * 2)
else
    int32_t var_23c_1 = rsi

sub_140a306e0(&var_248, &(*U"{}[\nt")[3], &data_142d5a024, 1)
void name
memset(&name, 0, 0x208)
int16_t* const rcx_4 = &data_142d40450

if (rsi != 0)
    rcx_4 = var_248

int16_t* r8_2 = &name - rcx_4
int16_t i

do
    i = *rcx_4
    *(r8_2 + rcx_4) = i
    rcx_4 = &rcx_4[1]
while (i != 0)
HANDLE rax_2 = CreateMutexW(nullptr, 1, &name)
*arg1 = rax_2

if (rax_2 != 0 && GetLastError() == ERROR_ALREADY_EXISTS)
    enum WAIT_EVENT rax_4
    
    if (arg3 != 0)
        void* hHandle = *arg1
        double zmm0_1[0x2] = zx.o(0)
        zmm0_1[0] = float.d(arg3)
        zmm0_1[0] = zmm0_1[0] * 0.0001
        rax_4 = WaitForSingleObject(hHandle, int.d(_mm_cvtpd_ps(zmm0_1)))
    
    if (arg3 == 0 || (rax_4 & 0xffffff7f) != 0)
        CloseHandle(*arg1)
        *arg1 = nullptr

int16_t* rcx_6 = var_248

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

__security_check_cookie(rax_1 ^ &var_268)
return arg1

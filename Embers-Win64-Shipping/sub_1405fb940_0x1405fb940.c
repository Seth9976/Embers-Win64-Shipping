// 函数: sub_1405fb940
// 地址: 0x1405fb940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
CRITICAL_SECTION* arg_18 = arg1 + 8
EnterCriticalSection(arg1 + 8)
int32_t rsi = 0
int64_t* arg_8 = nullptr
char rax
int64_t zmm1
rax, zmm1 = sub_1405f8240(arg1 - 0x18, &arg_8)
int64_t* rbx = arg_8
int64_t entry_zmm2
int64_t entry_zmm3

if (rax == 0)
    rsi = (*(*(arg1 - 8) + 0x30))(arg1 - 8, 0x131, &data_1434cb1d0, 0, 0)
else
    sub_1405fea10(arg1 - 0x18, rbx, entry_zmm2, entry_zmm3, zmm1)

if (rbx != 0)
    int64_t rdx_2 = *rbx
    (*(rdx_2 + 0x10))(rbx, rdx_2)

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return zx.q(rsi)

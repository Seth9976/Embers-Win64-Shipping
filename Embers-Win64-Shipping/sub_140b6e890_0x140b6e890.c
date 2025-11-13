// 函数: sub_140b6e890
// 地址: 0x140b6e890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
SYSTEM_POWER_STATUS systemPowerStatus
GetSystemPowerStatus(&systemPowerStatus)
uint32_t BatteryFlag = zx.d(systemPowerStatus.BatteryFlag)

if (BatteryFlag.b u<= 8 && test_bit(0x116, zx.d(BatteryFlag.b)))
    BatteryFlag.b = 1
    __security_check_cookie(rax_1 ^ &var_48)
    return BatteryFlag

BatteryFlag.b = 0
__security_check_cookie(rax_1 ^ &var_48)
return BatteryFlag

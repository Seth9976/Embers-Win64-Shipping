// 函数: sub_142a85e80
// 地址: 0x142a85e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
sub_142a85df0()
int32_t code = _Mtx_lock(&data_144015ae0)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

*arg1 = 2
int32_t code_1 = _Mtx_unlock(&data_144015ae0)

if (code_1 != 0)
    std::_Throw_C_error(code_1)
    noreturn

sub_142a85d70()
int32_t code_2 = _Cnd_broadcast(&data_144015b40)

if (code_2 == 0)
    return code_2

std::_Throw_C_error(code_2)
noreturn

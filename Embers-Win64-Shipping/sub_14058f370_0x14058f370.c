// 函数: sub_14058f370
// 地址: 0x14058f370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* var_30 = arg1 + 0xa0
char var_28 = 0
int32_t code = _Mtx_lock(arg1 + 0xa0)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_28_1 = 1

while (*(arg1 + 0x90) != 0)
    _Cnd_wait(arg1 + 0xf0, arg1 + 0xa0)

sub_140593a10(std::wcerr, arg3)

if (arg4 != 0)
    sub_140593c70(std::wostream::operator<<(sub_140593c70(std::wcerr, 0x22), arg4), 0x22)

void** rax_2 = sub_140593a10(std::wcerr, ": ")
int64_t rdx_5 = *arg2
sub_140593c70(sub_140593a10(rax_2, (*(rdx_5 + 8))(arg2, rdx_5)), 0x2e)
char rax_5 = *(arg1 + 0x148)

if (rax_5 == 0)
    sub_140593a10(std::wcerr, " Try again...")
else if (rax_5 == 2 && *(arg1 + 0x38) != 0)
    sub_14058f290(arg1)
    sub_1405932b0(arg1 + 0x70)

std::wostream::operator<<(std::wcerr, sub_140593eb0)
return _Mtx_unlock(arg1 + 0xa0)

// 函数: sub_14281d030
// 地址: 0x14281d030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t result = *(arg1 + 0x10)

if (result == 0 || result == 1)
    *(arg1 + 0x10) = 3
    sub_14281d14c(arg1)
    result = *(arg1 + 0x10)

if (result != 3)
    struct std::exception::VTable* exceptionObject
    sub_14281c7e8(&exceptionObject)
    _CxxThrowException(&exceptionObject, &data_143946310)
    noreturn

int64_t var_78 = arg2
int64_t* rdx = *(arg1 + 0x68)

if (rdx == *(arg1 + 0x70))
    result = sub_14281c4cc(arg1 + 0x60, rdx, &var_78)
else
    *rdx = arg2
    *(arg1 + 0x68) += 8

__security_check_cookie(rax_1 ^ &var_98)
return result

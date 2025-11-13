// 函数: sub_1406c3cf0
// 地址: 0x1406c3cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x22]

if (rcx == 0)
    sub_1406aec80()
    noreturn

sub_1406afdf0(rcx)
void* mtx = &arg1[4]
char var_40 = 0
int32_t code = _Mtx_lock(&arg1[4])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_40_1 = 1

if (arg2 != 0 && arg1[0x17].b != code.b)
    void var_18
    std::_Throw_future_error(std::make_error_code(&var_18, 2))
    noreturn

uint8_t rax = __ExceptionPtrToBool(&arg1[2])

if (rax != 0)
    void var_38
    std::_Rethrow_future_exception(std::exception_ptr::exception_ptr(&var_38, &arg1[2]))
    noreturn

arg1[0x17].b = 1

if (*(arg1 + 0xc2) == rax)
    *(arg1 + 0xc2) = 1
    (*(*arg1 + 0x20))(arg1, &mtx)

while (*(arg1 + 0xbc) == 0)
    _Cnd_wait(&arg1[0xe], mtx)

uint8_t rax_2 = __ExceptionPtrToBool(&arg1[2])

if (rax_2 != 0)
    void var_28
    std::_Rethrow_future_exception(std::exception_ptr::exception_ptr(&var_28, &arg1[2]))
    noreturn

if (var_40_1 != rax_2)
    _Mtx_unlock(mtx)

return arg1 + 0xc

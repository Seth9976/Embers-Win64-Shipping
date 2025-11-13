// 函数: sub_1406adab0
// 地址: 0x1406adab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x26]

if (rcx == 0)
    sub_1406aec80()
    noreturn

sub_1406afdf0(rcx)
void* mtx = &arg1[8]
int32_t code = _Mtx_lock(&arg1[8])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_40 = 1

if (arg2 != 0 && arg1[0x1b].b != code.b)
    void var_38
    std::_Throw_future_error(std::make_error_code(&var_38, 2))
    noreturn

uint8_t rax = __ExceptionPtrToBool(&arg1[6])

if (rax != 0)
    void var_28
    std::_Rethrow_future_exception(std::exception_ptr::exception_ptr(&var_28, &arg1[6]))
    noreturn

arg1[0x1b].b = 1

if (*(arg1 + 0xe2) == rax)
    int64_t rax_1 = *arg1
    *(arg1 + 0xe2) = 1
    (*(rax_1 + 0x20))(arg1, &mtx)

while (*(arg1 + 0xdc) == 0)
    _Cnd_wait(&arg1[0x12], mtx)

uint8_t rax_2 = __ExceptionPtrToBool(&arg1[6])

if (rax_2 != 0)
    void var_18
    std::_Rethrow_future_exception(std::exception_ptr::exception_ptr(&var_18, &arg1[6]))
    noreturn

if (var_40 != rax_2)
    _Mtx_unlock(mtx)

return &arg1[2]

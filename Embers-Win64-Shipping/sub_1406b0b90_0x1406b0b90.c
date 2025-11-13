// 函数: sub_1406b0b90
// 地址: 0x1406b0b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* _Chore_1 = j_sub_140a82f30(0x28)
struct Concurrency::details::_Threadpool_chore* _Chore = _Chore_1

if (_Chore_1 == 0)
    _Chore = nullptr
else
    *_Chore_1 = 0
    _Chore->_M_callback = sub_1406aaaf0
    _Chore->_M_data = _Chore
    _Chore->__offset(0x18).q = arg2
    _Chore->__offset(0x20).q = arg3

int32_t result = Concurrency::details::_Schedule_chore(_Chore)

if (result == 0)
    return result

if (_Chore != 0)
    sub_1406988c0(_Chore, 1)

struct std::exception::VTable* var_18
sub_140610be0(sub_14058e8a0(&var_18, "Fail to schedule the chore!"))
noreturn

// 函数: sub_1408965b0
// 地址: 0x1408965b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143cea5d0 != 0)
    return 

int32_t* _ArgList_1 = j_sub_140a82f30(0x40)
int32_t* _ArgList = _ArgList_1

if (_ArgList_1 == 0)
    _ArgList = nullptr
else
    *_ArgList_1 = arg4.d
    sub_140596d10(&_ArgList_1[2], arg3)
    sub_140596d10(&_ArgList[6], arg2)
    sub_140596d10(&_ArgList[0xa], arg1)
    *(_ArgList + 0x38) = sub_1408966c0

uint32_t _ThrdAddr
uintptr_t rax = _beginthreadex(nullptr, 0, sub_140895c70, _ArgList, 0, &_ThrdAddr)

if (rax == 0)
    _ThrdAddr = 0
    std::_Throw_Cpp_error(6)
    noreturn

if (_ThrdAddr == 0)
    std::_Throw_Cpp_error(1)
    noreturn

int96_t zmm0_1 = rax.12
struct _Thrd_t thr
thr._Hnd = zmm0_1.q
thr._Id = zmm0_1:8.d
int32_t code = _Thrd_detach(&thr)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

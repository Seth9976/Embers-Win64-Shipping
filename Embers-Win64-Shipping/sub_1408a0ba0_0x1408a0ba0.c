// 函数: sub_1408a0ba0
// 地址: 0x1408a0ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x98) & 1) == 0)
    return 

class std::streambuf* rcx = *(arg1 + 0x78)

if (rcx == 0)
    return 

class std::locale __return
std::wstreambuf::pubimbue(rcx, &__return, arg2)
class std::locale::_Locimp* _Ptr = __return._Ptr

if (_Ptr == 0)
    return 

class std::locale* rax = _Ptr->vtable->_Decref(_Ptr)

if (rax != 0)
    int64_t r8_2 = rax->__offset(0x0).q
    (*r8_2)(rax, 1, r8_2)

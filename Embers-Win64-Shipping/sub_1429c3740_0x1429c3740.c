// 函数: sub_1429c3740
// 地址: 0x1429c3740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
struct IlmThread_2_3::Thread::VTable* const result = &IlmThread_2_3::Thread::`vftable'
*arg1 = &IlmThread_2_3::Thread::`vftable'

if (arg1[2].d != 0)
    int32_t rax = arg1[2].d
    
    if (rax == 0)
        std::_Throw_Cpp_error(rax + 1)
        noreturn
    
    int32_t rax_1 = _Thrd_id()
    
    if (arg1[2].d == rax_1)
        std::_Throw_Cpp_error(5)
        noreturn
    
    int96_t zmm0_1 = (*(arg1 + 8)).12
    struct _Thrd_t thr
    thr._Hnd = zmm0_1.q
    thr._Id = zmm0_1:8.d
    
    if (_Thrd_join(&thr, nullptr) != 0)
        std::_Throw_Cpp_error(2)
        noreturn
    
    result = nullptr
    arg1[1] = 0
    arg1[2].d = 0

if (arg1[2].d == 0)
    return result

terminate()
noreturn

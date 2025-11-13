// 函数: sub_1406b7e20
// 地址: 0x1406b7e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void* rbx = *(arg1 + 8)
EnterCriticalSection(rbx + 0x28)
*(rbx + 0x20) = 1
int64_t* rcx_1 = *(rbx + 0x50)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

LeaveCriticalSection(rbx + 0x28)
EnterCriticalSection(arg2 + 0x98)
int64_t* rcx_4 = *(arg2 + 0xc0)

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)

LeaveCriticalSection(arg2 + 0x98)
int128_t* rbx_1 = *(arg1 + 0x50)

if (*(rbx_1 + 8) != 0)
    int32_t rax_3 = _Thrd_id()
    
    if (*(rbx_1 + 8) == rax_3)
        std::_Throw_Cpp_error(5)
        noreturn
    
    int96_t zmm0_1 = (*rbx_1).12
    struct _Thrd_t thr
    thr._Hnd = zmm0_1.q
    thr._Id = zmm0_1:8.d
    
    if (_Thrd_join(&thr, nullptr) != 0)
        std::_Throw_Cpp_error(2)
        noreturn
    
    *rbx_1 = zx.o(0)

void* rcx_7 = *(arg1 + 0x50)

if (rcx_7 != 0)
    if (*(rcx_7 + 8) != 0)
        terminate()
        noreturn
    
    j_sub_140a74f90(rcx_7)

return sub_1406bbec0(*(arg1 + 8)) __tailcall

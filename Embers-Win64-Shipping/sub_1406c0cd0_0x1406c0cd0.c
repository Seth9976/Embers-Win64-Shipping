// 函数: sub_1406c0cd0
// 地址: 0x1406c0cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void* var_28 = arg2
int128_t** rbx = *(arg1 + 8)
EnterCriticalSection(&rbx[5])
rbx[4].b = 0
sub_1406be960(rbx, sub_1406bbf50())
LeaveCriticalSection(&rbx[5])
int64_t* _ArgList_2 = j_sub_140a82f30(0x48)
int64_t* _ArgList = _ArgList_2
int64_t* _ArgList_3 = _ArgList_2

if (_ArgList_2 == 0)
    _ArgList = nullptr
else
    *_ArgList_2 = arg3
    void* var_38_1 = &_ArgList_2[1]
    _ArgList_2[8] = 0
    int64_t* rcx_4 = *(arg2 + 0x38)
    
    if (rcx_4 != 0)
        _ArgList_2[8] = (**rcx_4)(rcx_4, &_ArgList_2[1])

int64_t* _ArgList_1 = _ArgList
uint32_t _ThrdAddr
uintptr_t rax_5 = _beginthreadex(nullptr, 0, sub_1406b4b70, _ArgList, 0, &_ThrdAddr)

if (rax_5 == 0)
    _ThrdAddr = 0
    std::_Throw_Cpp_error(6)
    noreturn

int128_t* rax_6
int64_t rdx_2
rax_6, rdx_2 = j_sub_140a82f30(0x10)

if (rax_6 == 0)
    *(arg1 + 0x50) = 0
    
    if (_ThrdAddr == 0)
        int64_t* rcx_8 = *(arg2 + 0x38)
        
        if (rcx_8 != 0)
            rdx_2.b = rcx_8 != arg2
            (*(*rcx_8 + 0x20))(rcx_8, rdx_2)
            *(arg2 + 0x38) = 0
        
        __security_check_cookie(rax_1 ^ &var_78)
        return 0xfffffff4
else
    uintptr_t var_48
    var_48.o = zx.o(0)
    *rax_6 = rax_5.o
    *(arg1 + 0x50) = rax_6
    
    if (_ThrdAddr == 0)
        int64_t* rcx_5 = *(arg2 + 0x38)
        
        if (rcx_5 != 0)
            rdx_2.b = rcx_5 != arg2
            (*(*rcx_5 + 0x20))(rcx_5, rdx_2)
            *(arg2 + 0x38) = 0
        
        __security_check_cookie(rax_1 ^ &var_78)
        return 0

terminate()
noreturn

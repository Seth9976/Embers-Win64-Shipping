// 函数: sub_141827580
// 地址: 0x141827580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x20)
TEB* gsbase

if (data_143efabb8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efabb8)
    
    if (data_143efabb8 == 0xffffffff)
        InitializeCriticalSection(&data_143efab90)
        SetCriticalSectionSpinCount(&data_143efab90, 0xfa0)
        atexit(sub_142cec3b0)
        _Init_thread_footer(&data_143efabb8)

EnterCriticalSection(&data_143efab90)
void*** rax_2 = j_sub_140a82f30(0x2b8)
void*** rbx

if (rax_2 == 0)
    rbx = nullptr
else
    rbx = sub_14181e1b0(rax_2)

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1].d = 1
    *rax_4 = &data_142d42ea8
    *(rax_4 + 0xc) = 1
    rax_4[2] = rbx

LeaveCriticalSection(&data_143efab90)
int128_t var_38

if ((*rbx)[0x27](rbx, arg1) == 0)
    var_38 = zx.o(0)
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t rax_9 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (rax_9 == 1)
                (*rax_4)[1](rax_4, 1)
else
    var_38 = rbx.o
    int64_t var_20_1 = 0
    int64_t var_28_1 = 0

if (arg2 != &var_38)
    *arg2 = var_38.q
    var_38.q = 0
    sub_1405aeff0(&arg2[1], &var_38:8)

void* rcx_6 = var_38:8.q

if (rcx_6 != 0)
    int32_t rax_12 = *(rcx_6 + 8)
    *(rcx_6 + 8) -= 1
    
    if (rax_12 == 1)
        int64_t* rbx_2 = var_38:8.q
        (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_8 = var_38:8.q
            (*(*rcx_8 + 8))(rcx_8, zx.q(rdi_1))

sub_140597df0(&arg2[2], arg1)
return arg2

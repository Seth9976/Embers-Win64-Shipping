// 函数: sub_141422110
// 地址: 0x141422110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t rbx = 0
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ed4af8 s> *rdi_1)
    _Init_thread_header(&data_143ed4af8)
    
    if (data_143ed4af8 == 0xffffffff)
        int64_t* rcx_8 = data_143db18d0
        
        if (rcx_8 == 0)
            sub_140a53c40()
            rcx_8 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_10 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.SupportSimpleForwardShading", r8_1)
        int64_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0
        else
            int64_t rdx_1 = *rax_10
            rax_11 = (*(rdx_1 + 0x58))(rax_10, rdx_1)
        
        data_143ed4af0 = rax_11
        _Init_thread_footer(&data_143ed4af8)

uint32_t rax_4

if (data_143ed4b08 s> *rdi_1)
    int64_t r8_2
    rax_4, r8_2 = _Init_thread_header(&data_143ed4b08)
    
    if (data_143ed4b08 == 0xffffffff)
        int64_t* rcx_10 = data_143db18d0
        
        if (rcx_10 == 0)
            sub_140a53c40()
            rcx_10 = data_143db18d0
        
        r8_2.b = 1
        int64_t* rax_13 = (*(*rcx_10 + 0xb0))(rcx_10, u"r.SimpleForwardShading", r8_2)
        int64_t rax_8
        
        if (rax_13 == 0)
            rax_8 = 0
        else
            int64_t rdx_2 = *rax_13
            rax_8 = (*(rdx_2 + 0x58))(rax_13, rdx_2)
        
        data_143ed4b00 = rax_8
        _Init_thread_footer(&data_143ed4b08)

int64_t rsi = data_143ed4b00
rdi_1.b = data_143ed4aa0 != 0
int64_t rcx_1

if (data_143de5480 == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

rax_4.b = *(rsi + (rcx_1 << 2)) != 0

if (rdi_1.b != rax_4.b)
    int64_t rdi_2 = data_143ed4af0
    int64_t rcx_2
    
    if (data_143de5480 == 0)
        rcx_2 = 0
    else
        rcx_2.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rdi_2 + (rcx_2 << 2)) != 0 && sub_1419a8260(data_143f0f1a0) != 0)
        void var_78
        sub_141ed2300(&var_78)
        sub_141ed40e0(&var_78)

int64_t rdi_3 = data_143ed4b00

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

int32_t result = *(rdi_3 + (rbx << 2))
data_143ed4aa0 = result
__security_check_cookie(rax_1 ^ &var_98)
return result

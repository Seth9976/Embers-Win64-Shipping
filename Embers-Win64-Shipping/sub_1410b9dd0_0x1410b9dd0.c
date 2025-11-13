// 函数: sub_1410b9dd0
// 地址: 0x1410b9dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* rsi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e2cef0 s> *rsi_1)
    _Init_thread_header(&data_143e2cef0)
    
    if (data_143e2cef0 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.SupportStationarySkylight", r8_1)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_1 = *rax_5
            rax_6 = (*(rdx_1 + 0x58))(rax_5, rdx_1)
        
        data_143e2cee8 = rax_6
        _Init_thread_footer(&data_143e2cef0)

uint32_t rax_2

if (data_143e2cf00 s> *rsi_1)
    int64_t r8_2
    rax_2, r8_2 = _Init_thread_header(&data_143e2cf00)
    
    if (data_143e2cf00 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        r8_2.b = 1
        int64_t* rax_8 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.SupportAllShaderPermutations", r8_2)
        int64_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0
        else
            int64_t rdx_2 = *rax_8
            rax_9 = (*(rdx_2 + 0x58))(rax_8, rdx_2)
        
        data_143e2cef8 = rax_9
        _Init_thread_footer(&data_143e2cf00)

int64_t rbp = data_143e2cef8
uint16_t rsi_2
rsi_2.b = (arg1[3].w u>> 0xa).b & 1
int64_t r15
r15.b = arg1[4] u> 1
int64_t rcx

if (rbp != 0)
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

if (rbp == 0 || *(rbp + (rcx << 2)) == 0)
    rbp.b = 0
else
    rbp.b = 1

int64_t r14 = data_143e2cee8

if (r14 != 0 && data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

if (r14 == 0 || *(r14 + (rbx << 2)) != 0 || rbp.b != 0)
    rax_2.b = 1
else
    rax_2.b = 0

if (r15.b != 0 || rsi_2.b != 0)
label_1410b9ed0:
    
    if (sub_1405fba70(*arg1, 3) != 0 && sub_1410be160(arg1) != 0)
        return 1
else
    char rax_3
    
    if (rax_2.b == 0)
        rax_3 = sub_1410a09e0(*arg1)
    
    if ((rax_2.b != 0 || rax_3 != 0) && (not.b(arg1[3].b) & 1) != 0)
        goto label_1410b9ed0

return 0

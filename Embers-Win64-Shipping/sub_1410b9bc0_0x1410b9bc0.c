// 函数: sub_1410b9bc0
// 地址: 0x1410b9bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e2d450 s> *rdi_1)
    _Init_thread_header(&data_143e2d450)
    
    if (data_143e2d450 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.SupportStationarySkylight", r8_1)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_1 = *rax_5
            rax_6 = (*(rdx_1 + 0x58))(rax_5, rdx_1)
        
        data_143e2d448 = rax_6
        _Init_thread_footer(&data_143e2d450)

uint32_t rax_2

if (data_143e2d460 s> *rdi_1)
    int64_t r8_2
    rax_2, r8_2 = _Init_thread_header(&data_143e2d460)
    
    if (data_143e2d460 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        r8_2.b = 1
        int64_t* rax_8 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.SupportAllShaderPermutations", r8_2)
        int64_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0
        else
            int64_t rdx_2 = *rax_8
            rax_9 = (*(rdx_2 + 0x58))(rax_8, rdx_2)
        
        data_143e2d458 = rax_9
        _Init_thread_footer(&data_143e2d460)

int64_t rsi = data_143e2d458
uint16_t rdi_2
rdi_2.b = (arg1[3].w u>> 0xa).b & 1
int64_t r15
r15.b = arg1[4] u> 1
int64_t rcx

if (rsi != 0)
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

if (rsi == 0 || *(rsi + (rcx << 2)) == 0)
    rsi.b = 0
else
    rsi.b = 1

int64_t rbp = data_143e2d448

if (rbp != 0 && data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

if (rbp == 0 || *(rbp + (rbx << 2)) != 0 || rsi.b != 0)
    rax_2.b = 1
else
    rax_2.b = 0

if (r15.b != 0 || rdi_2.b != 0)
label_1410b9cc4:
    
    if (sub_1405fba70(*arg1, 3) != 0)
        return 1
else
    char rax_3
    
    if (rax_2.b == 0)
        rax_3 = sub_1410a09e0(*arg1)
    
    if ((rax_2.b != 0 || rax_3 != 0) && (not.b(arg1[3].b) & 1) != 0)
        goto label_1410b9cc4

return 0

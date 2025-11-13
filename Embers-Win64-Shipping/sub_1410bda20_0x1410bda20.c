// 函数: sub_1410bda20
// 地址: 0x1410bda20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
int64_t rcx

if (data_143e2cc60 s> *rdi_1)
    int64_t r8_1
    rcx, r8_1 = _Init_thread_header(&data_143e2cc60)
    
    if (data_143e2cc60 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_7 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.SupportAtmosphericFog", r8_1)
        int64_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0
        else
            int64_t rdx_1 = *rax_7
            rax_8 = (*(rdx_1 + 0x58))(rax_7, rdx_1)
        
        data_143e2cc58 = rax_8
        _Init_thread_footer(&data_143e2cc60)

if (data_143e2cc70 s> *rdi_1)
    int64_t r8_2
    rcx, r8_2 = _Init_thread_header(&data_143e2cc70)
    
    if (data_143e2cc70 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        r8_2.b = 1
        int64_t* rax_10 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.SupportAllShaderPermutations", r8_2)
        int64_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0
        else
            int64_t rdx_2 = *rax_10
            rax_11 = (*(rdx_2 + 0x58))(rax_10, rdx_2)
        
        data_143e2cc68 = rax_11
        _Init_thread_footer(&data_143e2cc70)

int64_t rdi_2 = data_143e2cc68

if (rdi_2 != 0)
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

if (rdi_2 == 0 || *(rdi_2 + (rcx << 2)) == 0)
    rdi_2.b = 0
else
    rdi_2.b = 1

int64_t rbp = data_143e2cc58

if (rbp != 0 && data_143de5480 != 0)
    uint32_t rax_4
    rax_4, rcx = GetCurrentThreadId()
    rbx.b = rax_4 != data_143de5470

if (rbp == 0 || *(rbp + (rbx << 2)) != 0 || rdi_2.b != 0)
    rbx.b = 1
else
    rbx.b = 0

char rax_5

if ((not.b(arg1[3].b) & 1) != 0 && arg1[4] u> 1)
    rax_5, rcx = sub_1405fba70(*arg1, 3)

if ((not.b(arg1[3].b) & 1) == 0 || arg1[4] u<= 1 || rax_5 == 0)
    rcx.b = 0
else
    rcx.b = 1

if (rbx.b == 0 || arg1[4] u<= 1)
    rax_5 = 0
else
    rax_5 = 1

if ((rcx.b & rax_5) != 0 && sub_1405fba70(*arg1, 3) != 0)
    return 1

return 0

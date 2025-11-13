// 函数: sub_1414a4e70
// 地址: 0x1414a4e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t rbp = *arg1
TEB* gsbase

if (data_143ed9080 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ed9080)
    
    if (data_143ed9080 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_6 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.SupportAllShaderPermutations", r8_1)
        int64_t rax_7
        
        if (rax_6 == 0)
            rax_7 = 0
        else
            int64_t rdx_1 = *rax_6
            rax_7 = (*(rdx_1 + 0x58))(rax_6, rdx_1)
        
        data_143ed9078 = rax_7
        _Init_thread_footer(&data_143ed9080)

int64_t rdi = data_143ed9078
int64_t rcx

if (rdi != 0)
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

if (rdi == 0 || *(rdi + (rcx << 2)) == 0)
    rdi.b = 0
else
    rdi.b = 1

int64_t rsi = data_143ed91e8

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

if (*(rsi + (rbx << 2)) != 0 || rdi.b != 0)
    rbx.b = 1
else
    rbx.b = 0

char rax_4

if (sub_14122e130(rbp) != 0)
    rax_4 = 1
else
    rax_4 = sub_14131f330(rbp)
    
    if (rax_4 != 0)
        rax_4 = 1

if (rbx.b != 0 && rax_4 != 0)
    int64_t rbx_1 = *(arg1 + 0x30)
    
    if (((rbx_1.b & 2) != 0 || not(test_bit(rbx_1, 9)) || test_bit(rbx_1, 0xe))
            && sub_1405fba70(rbp, 3) != 0 && (rbx_1.b & 0x20) != 0)
        return 1

return 0

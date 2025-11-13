// 函数: sub_1414a5610
// 地址: 0x1414a5610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *arg1
char rax = sub_1405fba70(rbp, 3)

if (rax == 0)
    return rax

int64_t rbx = 0
uint32_t rax_2
TEB* gsbase

if (data_143ed8fb0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    rax_2, r8_1 = _Init_thread_header(&data_143ed8fb0)
    
    if (data_143ed8fb0 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.LightPropagationVolume", r8_1)
        int64_t rax_5
        
        if (rax_4 == 0)
            rax_5 = 0
        else
            int64_t rdx_1 = *rax_4
            rax_5 = (*(rdx_1 + 0x58))(rax_4, rdx_1)
        
        data_143ed8fa8 = rax_5
        _Init_thread_footer(&data_143ed8fb0)

int64_t rdi = data_143ed8fa8

if (rdi != 0)
    if (data_143de5480 != 0)
        rbx.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rdi + (rbx << 2)) != 0 && (arg1[0xc].b & 0xe0) != 0)
        goto label_1414a56a1
    
    rax_2.b = 0
else if ((arg1[0xc].b & 0xe0) == 0)
    rax_2.b = 0
else
label_1414a56a1:
    
    if (sub_1405fba70(rbp, 3).b == 0)
        rax_2.b = 0
    else
        rax_2.b = 1

return rax_2

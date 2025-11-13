// 函数: sub_140b1da90
// 地址: 0x140b1da90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = sub_140a4fcd0()
int16_t* rbp = nullptr
int32_t rdi = 0
int16_t* var_18 = nullptr
int32_t rax_1 = 0
int64_t var_10 = 0

if (rax != 0 && *rax != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rax[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rax_1 = var_10:4.d
        rdi = var_10.d
        rbp = var_18
    
    rdi += rbx_1.d + 1
    var_10.d = rdi
    
    if (rdi s> rax_1)
        sub_140594770(&var_18)
        rdi = var_10.d
        rbp = var_18
    
    UnDecorator::getReferenceType(rbp, rax, (rbx_1.d + 1) * 2)

TEB* gsbase

if (data_143de69b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int32_t rcx_7 = _Init_thread_header(&data_143de69b0)
    
    if (data_143de69b0 == 0xffffffff)
        var_18 = nullptr
        var_10.d = rdi
        sub_1405a4c70(&var_18, sbb.d(rcx_7, rcx_7, rdi != 0) + 0x25 + rdi, 0)
        memcpy(var_18, rbp, rdi * 2)
        sub_140a2cf70(&var_18, u"Engine/Build/SourceDistribution.txt", 0x23)
        sub_140a464c0()
        int16_t* const rdx_7 = &data_142d40450
        
        if (var_10.d != 0)
            rdx_7 = var_18
        
        char const (* r8_5)[0x4] = data_14399ea08
        char rax_7 = (*(r8_5 + 0x48))(&data_14399ea08, rdx_7, r8_5)
        int16_t* rcx_12 = var_18
        data_143de69ac = rax_7
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        _Init_thread_footer(&data_143de69b0)

char rbx_3 = data_143de69ac

if (rbp != 0)
    sub_140a74f90(rbp)

return zx.q(rbx_3)

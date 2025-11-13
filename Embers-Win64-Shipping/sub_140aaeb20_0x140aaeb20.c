// 函数: sub_140aaeb20
// 地址: 0x140aaeb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dba238 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dba238)
    
    if (data_143dba238 == 0xffffffff)
        atexit(sub_142cbd9a0)
        _Init_thread_footer(&data_143dba238)

if (data_143dba23c != 0)
    return &data_143dba228

sub_140af2c50(data_143ddb400, Internationalization", DisabledLocalizationTargets", &data_143dba228, 
    &data_143de5780)
void* rcx_3 = data_143ddb400
int64_t* var_18 = nullptr
int32_t var_10 = 0
sub_140af2c50(rcx_3, Internationalization", DisabledLocalizationTargets", &var_18, &data_143de5830)
int64_t rdi = sx.q(var_10)

if (rdi.d != 0)
    int32_t rax_2 = data_143dba230
    int32_t rdx_1 = rdi.d + rax_2
    
    if (rdx_1 s> data_143dba234)
        sub_14061cd70(&data_143dba228, rdx_1)
        rax_2 = data_143dba230
    
    memmove((sx.q(rax_2) << 4) + data_143dba228, var_18, (rdi << 4).d)
    data_143dba230 += rdi.d
    rdi = 0
    var_10 = 0

int64_t* rbx = var_18

if (rdi.d != 0)
    int32_t i
    
    do
        int64_t rcx_7 = *rbx
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rbx = &rbx[2]
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)
    rbx = var_18

if (rbx != 0)
    sub_140a74f90(rbx)

data_143dba23c = 1
return &data_143dba228

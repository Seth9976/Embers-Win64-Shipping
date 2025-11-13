// 函数: sub_140686600
// 地址: 0x140686600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t rbx = 0
char* rdx = nullptr
char* var_78 = nullptr
int16_t* rdi

if (arg1[1].d == 0)
    rdi = &data_142d40450
label_140686652:
    int64_t rax_2 = -1
    
    do
        rax_2 += 1
    while (rdi[rax_2] != 0)
    
    int32_t rsi_1 = (rax_2 + 1).d
    int32_t var_68_1 = rax_2.d
    
    if (rsi_1 u> 0x80 && rsi_1 != 0)
        char* rax_3 = sub_140a84c80(0, sx.q(rsi_1), 0)
        rdx = rax_3
        var_78 = rax_3
    
    void var_f8
    char* rcx = &var_f8
    
    if (rdx != 0)
        rcx = rdx
    
    sub_14060abb0(rcx, rsi_1, rdi, rsi_1, 0x3f)
    rdx = rcx
else
    rdi = *arg1
    
    if (rdi != 0)
        goto label_140686652
    
    int64_t var_70 = 0
    int32_t var_68 = 0
char var_138
int512_t entry_zmm2
sub_14281d528(&var_138, rdx, entry_zmm2)

if (var_78 != 0)
    sub_140a74f90(var_78)

if (var_138 == 0)
    void* var_130
    struct std::exception::std::runtime_error::VTable* exceptionObject
    sub_140686070(&exceptionObject, &var_130)
    _CxxThrowException(&exceptionObject, &data_143945ea0)
    noreturn

int64_t* var_100

if (var_100 != 0)
    rbx = sub_14281d1e4(**var_100)

sub_140686270(&var_138)
int64_t result
result.b = rbx != 0
__security_check_cookie(rax_1 ^ &var_168)
return result

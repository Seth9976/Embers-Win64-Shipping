// 函数: sub_141c79a80
// 地址: 0x141c79a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t rbx_1 = (arg1 + 3) & 0xfffffffffffffffc
int64_t result
char const* const rax_3

if (rbx_1 != 0)
    if (rbx_1 u<= 0x7fff0000)
        goto label_141c79ab5
    
    rax_3 = "crnd_malloc: size too big"
label_141c79af7:
    char const* const var_230_1 = rax_3
    int64_t var_238
    var_238.d = 0x7a1
    char _Buffer[0x200]
    _fwprintf_s_l(&_Buffer, 0x200, "%s(%u): Assertion failure: "%s"\n", 
        "ThirdParty\Crunch\include\crn_decomp.h")
    puts(&_Buffer)
    result = 0
else
    rbx_1 = 4
label_141c79ab5:
    int64_t rax_2 = data_143f353f0
    int64_t r9
    r9.b = 1
    int64_t var_228 = rbx_1
    result = data_143a16d80(0, rbx_1, &var_228, r9, rax_2)
    int64_t rcx = var_228
    
    if (arg2 != 0)
        *arg2 = rcx
    
    if (result == 0 || rcx u< rbx_1)
        rax_3 = "crnd_malloc: out of memory"
        goto label_141c79af7
__security_check_cookie(rax_1 ^ &var_258)
return result

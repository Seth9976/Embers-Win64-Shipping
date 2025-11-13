// 函数: sub_140cdd5d0
// 地址: 0x140cdd5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t rax_2 = sub_140d3cb50(arg1)
uint64_t result
int128_t var_48
void* rcx_5

if (rax_2 != 0)
label_140cdd65c:
    rcx_5 = rax_2 + 0xb8
    var_48 = *arg2
label_140cdd66d:
    int128_t* rax_7 = sub_140b50ef0(rcx_5, &var_48)
    
    if (rax_7 != 0)
        result = zx.q(rax_7[1].d)
    else
        result = 0xffffffff
else
    void* rax_3 = sub_140d21d80(arg1)
    
    if (rax_3 == arg1)
        rax_2 = sub_140cba0e0(arg1)
    
    if (rax_3 == arg1 && rax_2 != 0)
        goto label_140cdd65c
    
    void* rax_4 = sub_140d21d80(arg1)
    void* rax_5
    
    if (rax_4 != 0)
        rax_5 = sub_140d21d80(arg1)
    
    if (rax_4 != 0 && *(rax_5 + 0x80) != 0)
        var_48 = *arg2
        rcx_5 = sub_140d21d80(arg1) + 0x78
        goto label_140cdd66d
    
    void var_38
    result = zx.q(sub_140b50890(&var_38, arg2)[1].d)
__security_check_cookie(rax_1 ^ &var_68)
return result

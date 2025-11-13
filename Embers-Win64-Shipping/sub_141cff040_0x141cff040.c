// 函数: sub_141cff040
// 地址: 0x141cff040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
sub_141d04230()
int64_t result
int128_t var_78

if (data_143f36880 == 0)
label_141cff0cb:
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x20)
    sub_141d050e0()
    EnterCriticalSection(&data_143a21100)
    int32_t var_88
    sub_141d02ac0(&data_143a210b0, &var_88, arg3)
    int64_t rcx_2 = sx.q(var_88)
    int64_t* rdi_1 = nullptr
    void* const rcx_4
    
    if (rcx_2.d == 0xffffffff)
        rcx_4 = nullptr
    else
        rcx_4 = rcx_2 * 0x38 + data_143a210b0
    
    int128_t* rax_5 = rcx_4 + 0x10
    
    if (rcx_4 == 0)
        rax_5 = nullptr
    
    if (rax_5 == 0)
        LeaveCriticalSection(&data_143a21100)
        
        if ((*(arg3 + 0xc) | *(arg3 + 8) | *(arg3 + 4) | *arg3) != 0)
        label_141cff1c4:
            sub_140b291e0(arg3, &var_78, 0)
            int16_t* const r9_2 = &data_142d40450
            
            if (var_78:8.d != 0)
                r9_2 = var_78.q
            
            sub_140af98a0("Unknown", 0x111, u"Failed to find requested encryption key %s", r9_2)
            int64_t rcx_8 = var_78.q
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            sub_140afbb40()
        else
            sub_140af4c70()
            
            if (data_143de5ce8 == 0)
                goto label_141cff1c4
            
            int64_t* rcx_5 = data_143de5ce0
            
            if (rcx_5 == 0)
                goto label_141cff1c4
            
            if ((*(*rcx_5 + 0x28))(rcx_5) == 0)
                goto label_141cff1c4
            
            sub_140af4c70()
            
            if (data_143de5ce8 != 0)
                rdi_1 = data_143de5ce0
            
            (*(*rdi_1 + 0x48))(rdi_1, &var_68)
    else
        var_68.o = *rax_5
        int64_t var_58
        var_58.o = rax_5[1]
        LeaveCriticalSection(&data_143a21100)
    
    result = sub_140aed600(arg1, arg2, &var_68)
else
    int64_t* rcx = data_143f36878
    
    if (rcx == 0)
        goto label_141cff0cb
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_141cff0cb
    
    int128_t zmm6 = *arg3
    sub_141d04230()
    int64_t* rdi
    
    if (data_143f36880 == 0)
        rdi = nullptr
    else
        rdi = data_143f36878
    
    int64_t rax_4 = *rdi
    var_78 = zmm6
    result = (*(rax_4 + 0x48))(rdi, arg1, zx.q(arg2), &var_78)
__security_check_cookie(rax_1 ^ &var_a8)
return result

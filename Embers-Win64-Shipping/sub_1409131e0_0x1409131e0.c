// 函数: sub_1409131e0
// 地址: 0x1409131e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x80) != 0)
    int64_t result
    result.b = 1
    return result

EnterCriticalSection(arg1 + 0xc8)
int64_t arg_8
int64_t* rax
int512_t zmm1
rax, zmm1 = sub_140b58260(&arg_8, u"WINDOWS", 1)
sub_140fc6160(rax)
int64_t* rcx_3 = *(arg1 + 0x88)
char rdi = 0

if ((*(*rcx_3 + 0x78))(rcx_3, 1, 0) != 0)
    arg_8 = 0
    void** const var_c8
    memset(&var_c8, 0, 0x90)
    sub_140b4c2a0(&var_c8)
    int64_t var_38_1 = 0
    var_c8 = &data_142d6ad48
    int64_t var_20
    int64_t* var_30_1 = &var_20
    int64_t var_28_1 = 0
    sub_140b552b0(&var_c8, 1)
    var_c8[0x1b](&var_c8, 0)
    int128_t zmm0_1 = *(arg1 + 0x60)
    var_c8 = &data_142d6b000
    var_20 = 0
    int128_t var_e0 = zmm0_1
    int64_t var_18_1 = 0
    int32_t var_e8
    __builtin_strncpy(&var_e8, "CIPE", 4)
    int32_t var_e4 = 1
    int64_t* var_c0
    int32_t* rdx_2 = *var_c0
    char var_9f
    
    if (&rdx_2[1] u> var_c0[1])
        int32_t* rdx_3 = &var_e8
        void** const* rcx_9 = &var_c8
        
        if ((var_9f & 0x20) != 0)
            sub_140b54070(rcx_9, rdx_3, zmm1)
        else
            zmm1 = sub_14063a3c0(rcx_9, rdx_3, 4)
    else
        var_e8 = *rdx_2
        *var_c0 += 4
    
    int32_t* rdx_4 = *var_c0
    
    if (&rdx_4[1] u> var_c0[1])
        int32_t* rdx_5 = &var_e4
        void** const* rcx_11 = &var_c8
        
        if ((var_9f & 0x20) != 0)
            sub_140b54070(rcx_11, rdx_5, zmm1)
        else
            var_c8[0x2a](rcx_11, rdx_5, 4)
    else
        var_e4 = *rdx_4
        *var_c0 += 4
    
    sub_1409ac860(&var_c8, &var_e0, zmm1)
    
    if (sub_14090e900(arg1, var_20, 0x18) != 0)
        *(arg1 + 0xa0) += 0x18
        rdi = 1
        *(arg1 + 0x80) = 1
    
    int64_t rcx_14 = var_20
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    sub_140b4cb40(&var_c8)
else
    rdi = 1

if (arg1 != -0xc8)
    LeaveCriticalSection(arg1 + 0xc8)

return zx.q(rdi)

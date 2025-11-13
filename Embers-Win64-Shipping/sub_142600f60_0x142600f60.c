// 函数: sub_142600f60
// 地址: 0x142600f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* rcx = *(*(arg1 + 0x90) + 0x90)

if (rcx == 0)
    if ((*(**(arg1 + 0x10) + 0x16e) & 2) == 0)
        goto label_1426010af
    
    goto label_142600fc4

int32_t rax_8
wchar16 const* const rdx_1
int64_t rbx_1
int32_t var_a8

if ((*(*rcx + 0x38))(rcx) != 0 || (*(**(arg1 + 0x10) + 0x16e) & 2) != 0)
label_142600fc4:
    int32_t zmm1 = arg2[1]
    int64_t* rax_6 = *(arg1 + 0x80)
    int64_t* rcx_2 = *(arg1 + 0x98)
    var_a8 = *arg2
    int64_t var_78
    var_78:4.d = arg2[2]
    int64_t var_50
    var_50:4.d = arg2[3]
    int128_t var_48
    var_48:0xc.d = arg2[4]
    int128_t var_88
    var_88.d = zmm1
    int64_t var_24
    var_24:4.d = arg2[5]
    int64_t var_a4
    __builtin_memset(&var_a4, 0, 0x1c)
    var_88:4.q = 0
    var_88:0xc.q = 0
    int32_t var_70
    __builtin_memset(&var_70, 0, 0x24)
    var_48.q = 0
    var_48:8.d = 0
    int32_t var_38
    __builtin_memset(&var_38, 0, 0x18)
    int32_t var_1c = 0
    rbx_1 = *rax_6
    rax_8 = (*(*rcx_2 + 0x80))(rcx_2, *(arg1 + 0xb4), 6, 6, &var_a8, 0, var_a8)
    rdx_1 = u"SetOutputMatrix (6 channel OGG)"
else
label_1426010af:
    int64_t* rax_9 = *(arg1 + 0x80)
    int64_t* rcx_3 = *(arg1 + 0x98)
    var_a8 = *arg2
    int32_t var_8c_1 = arg2[1]
    int32_t var_70_1 = arg2[2]
    int32_t var_54_1 = arg2[3]
    int32_t zmm0 = arg2[5]
    int128_t var_88_1
    __builtin_memset(&var_88_1, 0, 0x18)
    int32_t var_1c_1 = zmm0
    int32_t var_38_1 = arg2[4]
    int64_t var_a4_1
    __builtin_memset(&var_a4_1, 0, 0x18)
    int32_t var_6c
    __builtin_memset(&var_6c, 0, 0x18)
    int64_t var_50_1
    __builtin_memset(&var_50_1, 0, 0x18)
    int64_t var_34
    __builtin_memset(&var_34, 0, 0x18)
    rbx_1 = *rax_9
    rax_8 = (*(*rcx_3 + 0x80))(rcx_3, *(arg1 + 0xb4), 6, 6, &var_a8, 0, var_a8)
    rdx_1 = u"SetOutputMatrix (6 channel)"
int64_t result = (*(rbx_1 + 0xa8))(*(arg1 + 0x80), rdx_1, zx.q(rax_8))
__security_check_cookie(rax_1 ^ &var_d8)
return result

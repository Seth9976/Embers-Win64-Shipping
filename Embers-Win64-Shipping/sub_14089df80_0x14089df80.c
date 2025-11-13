// 函数: sub_14089df80
// 地址: 0x14089df80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* var_58 = arg1
uint32_t rcx = zx.d(arg1[0xa].b)
int32_t rax_2

if (rcx == 0)
    int64_t* rcx_2 = *(*arg1 + 0xb8)
    int64_t* rdx_1 = rcx_2[0x13]
    int64_t* rcx_4
    
    if (rdx_1 == 0)
        int64_t* rcx_5 = *(*(*rcx_2 + 8))(arg2, rdx_1)
        rcx_4 = (*(*rcx_5 + 0x38))(rcx_5)
    else
        rcx_4 = (*(*rdx_1 + 0x10))(rdx_1)
    
    void var_50
    (*(*rcx_4 + 0x50))(rcx_4, &var_50)
    uint32_t var_40
    rax_2.b = sub_14089ea60(var_40) == 2
else if (rcx == 1 || rcx != 2)
    rax_2 = 0
else
    rax_2 = 1

int32_t var_68 = rax_2
int64_t result = sub_14089fc00(*arg1, &arg1[1], arg1[9].d, *(arg1 + 0x4c))
__security_check_cookie(rax_1 ^ &var_88)
return result

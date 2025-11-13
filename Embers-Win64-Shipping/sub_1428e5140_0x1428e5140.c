// 函数: sub_1428e5140
// 地址: 0x1428e5140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t rbp = sx.q(arg4)
int64_t rax_2 = sub_1428e4f50(nullptr, nullptr, *arg3, rbp, arg1)
int64_t result

if (rax_2 == 0)
    result = 0
else if (rax_2 u<= 8)
    char var_38[0x8]
    sub_1428e4f50(&var_38, arg2, *arg3, rbp, arg1)
    int64_t rax_3 = 0
    int64_t rdx_1 = 0
    
    if (rax_2 != 0)
        do
            uint64_t rcx_1 = zx.q(var_38[rdx_1])
            rdx_1 += 1
            rax_3 = rax_3 << 8 | rcx_1
        while (rdx_1 u< rax_2)
    
    *arg1 = rax_3
    result = 1
else
    sub_1428a5670(0xd, 0x65, 0xdf, "crypto\asn1\a_int.c", 0x267)
    result = 0

__security_check_cookie(rax_1 ^ &var_68)
return result

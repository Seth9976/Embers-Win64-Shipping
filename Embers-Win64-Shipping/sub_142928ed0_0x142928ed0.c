// 函数: sub_142928ed0
// 地址: 0x142928ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
__chkstk(0x20)
int32_t* result = nullptr

if (arg1 != 0)
    if (strcmp(arg1, "X509 CRL") != 0)
        return 0
    
    *arg5 = 1

int64_t rax_3 = sub_1428e46d0(nullptr, &arg_18, arg4)
int32_t* result_1

if (rax_3 != 0)
    *arg5 = 1
    result_1 = sub_1429692f0(rax_3)
    result = result_1

if (rax_3 == 0 || result_1 == 0)
    sub_1428e4430(rax_3)

return result

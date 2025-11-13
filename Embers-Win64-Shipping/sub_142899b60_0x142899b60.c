// 函数: sub_142899b60
// 地址: 0x142899b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
__chkstk(0x40)

if (arg1 == 0)
    return 0

void* rax_1 = *arg1

if (rax_1 == 0 || *(rax_1 + 0x58) == 0 || arg2 != 0xe)
    sub_1428a5670(0x20, 0x83, 0x79, "crypto\bio\bio_lib.c", 0x222)
    return 0xfffffffe

int64_t r10 = arg1[1]

if (r10 == 0 && arg1[2] == 0)
    goto label_142899c1a

int64_t rax_2 = arg1[2]
int64_t* r8 = &arg_18
int32_t var_18
int64_t var_10
int32_t result

if (rax_2 == 0)
    result = r10(arg1, 6, r8, 0xe, 0, 1)
else
    var_10 = 0
    var_18 = 1
    result = rax_2(arg1, 6, r8, 0, 0xe, 0, 1, 0)

if (result s> 0)
    arg3 = arg_18
label_142899c1a:
    result = (*(*arg1 + 0x58))(arg1, 0xe, arg3)
    int64_t r11_1 = arg1[1]
    
    if (r11_1 != 0 || arg1[2] != 0)
        int64_t r10_1 = arg1[2]
        int64_t* r8_1 = &arg_18
        
        if (r10_1 == 0)
            return r11_1(arg1, 0x86, r8_1, 0xe, 0, result, var_18, var_10)
        
        return r10_1(arg1, 0x86, r8_1, 0, 0xe, 0, result, 0)

return result

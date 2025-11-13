// 函数: sub_1403d0e00
// 地址: 0x1403d0e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = arg1
void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int32_t var_10
__builtin_strncpy(&var_10, "bKGD", 5)
int64_t result
char var_16

if (arg3 == 3)
    uint32_t rax_2 = zx.d(*(r10 + 0x250))
    
    if (rax_2 != 0 || (*(r10 + 0x418) & 1) == 0)
        arg1 = zx.q(*arg2)
        
        if (arg1.d u< rax_2)
            goto label_1403d0f13
        
        result = png_warning(r10, "Invalid background palette index", arg3)
    else
        arg1.b = *arg2
    label_1403d0f13:
        var_16 = arg1.b
        result = png_write_chunk(r10, &var_10, &var_16, 1)
else if ((arg3.b & 2) != 0)
    uint32_t rax_4 = zx.d(*(arg2 + 2))
    arg3 = rax_4 u>> 8
    var_16 = arg3.b
    char var_15_2 = rax_4.b
    uint32_t rcx = zx.d(*(arg2 + 4))
    uint16_t rax_6 = (rcx u>> 8).w
    char var_14_1 = rax_6.b
    char var_13_1 = rcx.b
    uint32_t rcx_1 = zx.d(*(arg2 + 6))
    uint16_t rdx_4 = (rcx_1 u>> 8).w
    char var_12_1 = rdx_4.b
    char var_11_1 = rcx_1.b
    
    if (*(r10 + 0x25f) != 8 || (rax_6 | arg3.w | rdx_4) == 0)
        result = png_write_chunk(r10, &var_10, &var_16, 6)
    else
        result = png_warning(r10, 
            "Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8", arg3)
else
    uint32_t rax_3 = zx.d(*(arg2 + 8))
    arg1.b = *(r10 + 0x25f)
    
    if (1 << arg1.b s<= rax_3)
        result = png_warning(r10, 
            "Ignoring attempt to write bKGD chunk out-of-range for bit_depth", arg3)
    else
        var_16 = rax_3:1.b
        char var_15_1 = rax_3.b
        result = png_write_chunk(r10, &var_10, &var_16, 2)
__security_check_cookie(rax_1 ^ &var_38)
return result

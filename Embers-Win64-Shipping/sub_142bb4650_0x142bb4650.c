// 函数: sub_142bb4650
// 地址: 0x142bb4650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
uint64_t result = *arg1
int64_t* rcx = *(*(result + 0xd0) + 0x50)

if (rcx != 0)
    void* r10_1 = *rcx
    
    if (*(r10_1 + 0x10) != 0)
        int32_t var_28 = arg1[9].d
        int32_t rax_3 = *(arg1 + 0x4c)
        int32_t var_24_1 = 0
        int32_t var_1c_1 = 0
        result = (*(r10_1 + 0x10))(rcx[1], zx.q(arg2), 0, &var_28, var_28, rax_3, rax_1)
        
        if (result.d == 0)
            arg1[9].d = sx.d(var_28.w)
            result = zx.q(rax_3.w)
            *(arg1 + 0x4c) = result.d
            arg1[0x21] = 0
            
            if (*(arg1 + 0x54) == 0)
                *(arg1 + 0x54) = 1
                arg1[0xa].d = result.d

__security_check_cookie(rax_1 ^ &var_48)
return result

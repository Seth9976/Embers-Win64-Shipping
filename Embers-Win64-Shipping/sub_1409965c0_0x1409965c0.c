// 函数: sub_1409965c0
// 地址: 0x1409965c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = __security_cookie ^ &var_18
int32_t* result

if (arg4 - 1 u<= 1 || arg4 != 4)
    result = *arg3
    *(arg3 + 0x24) = 0
    arg3[4].d = 0
    arg3[3] = 1
else
    int64_t rax_4 = sx.q(arg2[3].d) << 2
    int64_t rcx = rax_4 + 0xf
    
    if (rcx u<= rax_4)
        rcx = 0xffffffffffffff0
    
    int64_t rcx_1 = rcx & 0xfffffffffffffff0
    __chkstk(rcx_1)
    void var_38
    sub_1409c44d0(arg2, &var_38 - rcx_1 + 0x20)
    int64_t r8 = sx.q(arg2[3].d)
    int32_t rcx_3 = 0
    
    if (not(0f f< *(&var_38 - rcx_1 + 0x20)))
        int64_t rax_6
        
        do
            rax_6 = sx.q(rcx_3)
            rcx_3 += 1
        while (0f f>= *(&var_38 - rcx_1 + 0x20 + (rax_6 << 2) + 4))
    
    int32_t rcx_4 = (r8 - 1).d
    
    if (not(0f f< *(&var_38 - rcx_1 + 0x20 + (r8 << 2) - 4)))
        int64_t rax_7
        
        do
            rax_7 = sx.q(rcx_4)
            rcx_4 -= 1
        while (0f f>= *(&var_38 - rcx_1 + 0x20 + (rax_7 << 2) - 4))
    
    result = *arg3
    arg3[3] = 1
    arg3[4].d = 0
    *(arg3 + 0x24) = 0

*result = 0x3f800000
__security_check_cookie(var_18 ^ &var_18)
return result

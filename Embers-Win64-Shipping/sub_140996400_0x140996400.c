// 函数: sub_140996400
// 地址: 0x140996400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = __security_cookie ^ &var_18
void* rax_11
int64_t* rcx_6

if (arg6 - 1 u<= 1 || arg6 != 4)
    int32_t* rax_12 = *arg3
    rcx_6 = arg5
    arg3[3] = 1
    arg3[4].d = 0
    *(arg3 + 0x24) = 0
    *rax_12 = 0x3f800000
    arg4[3].d = 1
    *(arg4 + 0x1c) = 2
    *(arg4 + 0x24) = 0
    rcx_6[3].d = 1
    *(rcx_6 + 0x1c) = 2
    *(rcx_6 + 0x24) = 0
    **arg4 = 0xbf800000
    *arg4[1] = 0x3f800000
    rax_11 = arg4[1]
else
    int64_t rax_4 = sx.q(arg2[3].d) << 2
    int64_t rcx_1 = rax_4 + 0xf
    
    if (rcx_1 u<= rax_4)
        rcx_1 = 0xffffffffffffff0
    
    int64_t rcx_2 = rcx_1 & 0xfffffffffffffff0
    __chkstk(rcx_2)
    void var_38
    sub_1409c44d0(arg2, &var_38 - rcx_2 + 0x20)
    int64_t r8 = sx.q(arg2[3].d)
    int32_t rcx_4 = 0
    
    if (not(0f f< *(&var_38 - rcx_2 + 0x20)))
        int64_t rax_6
        
        do
            rax_6 = sx.q(rcx_4)
            rcx_4 += 1
        while (0f f>= *(&var_38 - rcx_2 + 0x20 + (rax_6 << 2) + 4))
    
    int32_t rcx_5 = (r8 - 1).d
    
    if (not(0f f< *(&var_38 - rcx_2 + 0x20 + (r8 << 2) - 4)))
        int64_t rax_7
        
        do
            rax_7 = sx.q(rcx_5)
            rcx_5 -= 1
        while (0f f>= *(&var_38 - rcx_2 + 0x20 + (rax_7 << 2) - 4))
    
    int32_t* rax_8 = *arg3
    rcx_6 = arg5
    arg3[3] = 1
    arg3[4].d = 0
    *(arg3 + 0x24) = 0
    *rax_8 = 0x3f800000
    arg4[3].d = 1
    *(arg4 + 0x1c) = 2
    *(arg4 + 0x24) = 0
    rcx_6[3].d = 1
    *(rcx_6 + 0x1c) = 2
    *(rcx_6 + 0x24) = 0
    **arg4 = 0xbf800000
    *arg4[1] = 0x3f800000
    rax_11 = arg4[1]

*(rax_11 + 4) = 0
**rcx_6 = 0xbf800000
*rcx_6[1] = 0
void* result = rcx_6[1]
*(result + 4) = 0x3f800000
__security_check_cookie(var_18 ^ &var_18)
return result

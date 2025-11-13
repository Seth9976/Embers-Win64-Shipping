// 函数: sub_1409962d0
// 地址: 0x1409962d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
int64_t rax_1 = __security_cookie ^ &var_18
int64_t result

if (arg4 - 1 u<= 1)
    result = sub_14099f500(arg1, arg2, arg3)
else if (arg4 != 4)
    result = *arg3
    arg3[3] = 1
    arg3[4].d = 0
    *(arg3 + 0x24) = 0
    *result = 0x3f800000
else
    int64_t rax_4 = sx.q(arg2[3].d) << 2
    int64_t rdx = rax_4 + 0xf
    
    if (rdx u<= rax_4)
        rdx = 0xffffffffffffff0
    
    int64_t rdx_1 = rdx & 0xfffffffffffffff0
    __chkstk(rdx_1)
    void var_38
    sub_1409c44d0(arg2, &var_38 - rdx_1 + 0x20)
    int32_t rcx_1 = 0
    bool cond:0_1 = 0f f< *(&var_38 - rdx_1 + 0x20)
    int64_t rdx_3 = sx.q(arg2[3].d)
    var_18 = 0
    
    if (not(cond:0_1))
        int64_t rax_6
        
        do
            rax_6 = sx.q(rcx_1)
            rcx_1 += 1
        while (0f f>= *(&var_38 - rdx_1 + 0x20 + (rax_6 << 2) + 4))
        var_18 = rcx_1
    
    int32_t rcx_2 = (rdx_3 - 1).d
    int32_t var_14_1 = rcx_2
    
    if (not(0f f< *(&var_38 - rdx_1 + 0x20 + (rdx_3 << 2) - 4)))
        int64_t rax_7
        
        do
            rax_7 = sx.q(rcx_2)
            rcx_2 -= 1
        while (0f f>= *(&var_38 - rdx_1 + 0x20 + (rax_7 << 2) - 4))
        int32_t var_14_2 = rcx_2
    
    result = sub_14099e8b0(arg1, arg2, arg3, &var_18)

__security_check_cookie(rax_1 ^ &var_18)
return result

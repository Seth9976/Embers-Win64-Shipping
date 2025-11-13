// 函数: sub_140995ec0
// 地址: 0x140995ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int32_t var_28
int64_t rax_1 = __security_cookie ^ &var_28
void* result

if (arg6 - 1 u<= 1)
    sub_14099f290(arg1, arg2, arg3)
    result = sub_14099f6f0(arg1, arg2, arg4, arg5)
else if (arg6 != 4)
    int32_t* rax_8 = *arg3
    arg3[4].d = 0
    *(arg3 + 0x24) = 0
    arg3[3] = 1
    *rax_8 = 0x3f800000
    result = sub_14099e510(arg1, arg2, arg4, arg5)
else
    int64_t rax_4 = sx.q(arg2[3].d) << 2
    int64_t rcx = rax_4 + 0xf
    
    if (rcx u<= rax_4)
        rcx = 0xffffffffffffff0
    
    int64_t rcx_1 = rcx & 0xfffffffffffffff0
    __chkstk(rcx_1)
    void var_58
    void* rsp_1 = &var_58 - rcx_1
    sub_1409c44d0(arg2, rsp_1 + 0x30)
    int32_t rcx_3 = 0
    bool cond:0_1 = 0f f< *(rsp_1 + 0x30)
    int64_t rdx_2 = sx.q(arg2[3].d)
    var_28 = 0
    
    if (not(cond:0_1))
        int64_t rax_6
        
        do
            rax_6 = sx.q(rcx_3)
            rcx_3 += 1
        while (0f f>= *(rsp_1 + 0x30 + (rax_6 << 2) + 4))
        var_28 = rcx_3
    
    int32_t rcx_4 = (rdx_2 - 1).d
    int32_t var_24_1 = rcx_4
    
    if (not(0f f< *(rsp_1 + 0x30 + (rdx_2 << 2) - 4)))
        int64_t rax_7
        
        do
            rax_7 = sx.q(rcx_4)
            rcx_4 -= 1
        while (0f f>= *(rsp_1 + 0x30 + (rax_7 << 2) - 4))
        int32_t var_24_2 = rcx_4
    
    sub_14099e8b0(arg1, arg2, arg3, &var_28)
    *(rsp_1 + 0x20) = &var_28
    result = sub_14099e9d0(arg1, arg2, arg4, arg5)

__security_check_cookie(rax_1 ^ &var_28)
return result

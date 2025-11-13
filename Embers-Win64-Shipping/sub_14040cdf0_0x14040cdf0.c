// 函数: sub_14040cdf0
// 地址: 0x14040cdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
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
int32_t var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t var_80 = arg4
*(arg2 + 0x1110) = sx.d(*(arg3 + 0x22))
int32_t var_94 = *(arg2 + 0x1104)
int32_t r9
r9.b = *(arg3 + 0x1f) != 4
int32_t rax_5 =
    sx.d(*(&data_1436fc948 + ((sx.q(*(arg3 + 0x1e)) + (sx.q(*(arg3 + 0x1d)) s>> 1 << 1)) << 1)))
int32_t r8 = *(arg1 + 0x1208)
int32_t var_84 = r9
int64_t rdx = sx.q(*(arg1 + 0x1200) + r8)
int64_t rax_8 = rdx << 2
int64_t rcx_3 = rax_8 + 0xf

if (rcx_3 u<= rax_8)
    rcx_3 = 0xffffffffffffff0

int64_t rcx_4 = rcx_3 & 0xfffffffffffffff0
__chkstk(rcx_4)
void var_138
void* rsp_1 = &var_138 - rcx_4
int64_t rax_11 = rdx * 2
int64_t rcx_5 = rax_11 + 0xf

if (rcx_5 u<= rax_11)
    rcx_5 = 0xffffffffffffff0

int64_t rcx_6 = rcx_5 & 0xfffffffffffffff0
__chkstk(rcx_6)
void* rsp_2 = rsp_1 - rcx_6
int64_t rax_15 = sx.q(*(arg1 + 0x1204)) << 2
int64_t rcx_7 = rax_15 + 0xf

if (rcx_7 u<= rax_15)
    rcx_7 = 0xffffffffffffff0

int64_t rcx_8 = rcx_7 & 0xfffffffffffffff0
__chkstk(rcx_8)
void* rsp_3 = rsp_2 - rcx_8
*(arg2 + 0x110c) = r8
int32_t i = 0
*(arg2 + 0x1108) = *(arg1 + 0x1208)
void* var_60 = arg2 + (sx.q(*(arg1 + 0x1208)) << 1)

if (*(arg1 + 0x11fc) s> 0)
    int32_t* r11_2 = arg9 - arg13
    int32_t rcx_10 = 0
    int32_t rdx_1 = 0
    int32_t* r15 = arg13
    int32_t r8_1 = 1 - r9
    arg9 = r11_2
    int32_t var_88_1 = r8_1
    int32_t var_90_1 = 0
    var_98 = 0
    
    do
        int64_t r10_1 = arg6 + (sx.q((i s>> 1 | r8_1) << 4) << 1)
        int32_t rax_31 = *(r11_2 + r15)
        *(arg2 + 0x1118) = 0
        
        if (*(arg3 + 0x1d) == 2)
            int32_t rdx_3 = *r15
            var_94 = rdx_3
            
            if ((i & (3 - r9 * 2)) == 0)
                int32_t r8_3 = *(arg1 + 0x1238)
                int32_t r9_1 = *(arg1 + 0x1208)
                int32_t rax_35 = *(arg1 + 0x1204) * i
                *(rsp_3 + 0x20) = r8_3
                sub_1403e77a0(rsp_2 + 0xa0 + (sx.q(r9_1 - r8_3 - rdx_3 - 2) << 1), 
                    arg2 + (sx.q(rax_35 + r9_1 - r8_3 - rdx_3 - 2) << 1), r10_1, 
                    zx.q(r9_1 - (r9_1 - r8_3 - rdx_3 - 2)))
                *(arg2 + 0x1118) = 1
                *(arg2 + 0x1108) = *(arg1 + 0x1208)
        
        *(rsp_3 + 0x50) = sx.d(*(arg3 + 0x1d))
        *(rsp_3 + 0x48) = arg13
        *(rsp_3 + 0x40) = arg12
        *(rsp_3 + 0x38) = arg15
        *(rsp_3 + 0x30) = i
        *(rsp_3 + 0x28) = rsp_1 + 0xa0
        *(rsp_3 + 0x20) = rsp_2 + 0xa0
        sub_14040dd40(arg1, arg2, var_80, rsp_3 + 0xa0)
        *(rsp_3 + 0x90) = *(arg1 + 0x1238)
        uint64_t rdx_6 = zx.q(sx.d(*(arg3 + 0x1d)))
        *(rsp_3 + 0x88) = *(arg1 + 0x1234)
        *(rsp_3 + 0x80) = *(arg1 + 0x1204)
        *(rsp_3 + 0x78) = rax_5
        *(rsp_3 + 0x70) = arg14
        *(rsp_3 + 0x68) = *(arg12 - arg13 + r15)
        *(rsp_3 + 0x60) = *(arg11 - arg13 + r15)
        *(rsp_3 + 0x58) = *(arg10 - arg13 + r15)
        *(rsp_3 + 0x50) = rax_31 s>> 1 << 0x10 | rax_31 s>> 2
        *(rsp_3 + 0x48) = var_94
        *(rsp_3 + 0x40) = arg8 + (sx.q(rcx_10) << 1)
        *(rsp_3 + 0x38) = arg7 + (sx.q(rdx_1) << 1)
        *(rsp_3 + 0x30) = r10_1
        *(rsp_3 + 0x28) = rsp_1 + 0xa0
        *(rsp_3 + 0x20) = var_60
        sub_14040d270(arg2, rdx_6, rsp_3 + 0xa0, arg5)
        int64_t rax_61 = sx.q(*(arg1 + 0x1204))
        arg5 += rax_61
        r9 = var_84
        r8_1 = var_88_1
        r11_2 = arg9
        rdx_1 = var_98 + 5
        var_80 += rax_61 << 2
        rcx_10 = var_90_1 + 0x10
        i += 1
        r15 = &r15[1]
        var_60 += rax_61 << 1
        var_98 = rdx_1
        var_90_1 = rcx_10
    while (i s< *(arg1 + 0x11fc))

*(arg2 + 0x1104) = arg13[sx.q(*(arg1 + 0x11fc)) - 1]
memmove(arg2, arg2 + (sx.q(*(arg1 + 0x1200)) << 1), *(arg1 + 0x1208) * 2)
int64_t result =
    memmove(arg2 + 0x500, arg2 + ((sx.q(*(arg1 + 0x1200)) + 0x140) << 2), *(arg1 + 0x1208) << 2)
__security_check_cookie(rax_1 ^ &var_98)
return result

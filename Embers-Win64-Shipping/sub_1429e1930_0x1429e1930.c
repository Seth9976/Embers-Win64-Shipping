// 函数: sub_1429e1930
// 地址: 0x1429e1930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg3)
void* rdi_2 = (r12 << 7) + arg2
int64_t rdx = sx.q(arg6)
int64_t r15_2 = sx.q(*(arg15 + 8) * arg7) + rdx + *arg15
int32_t arg_10
int32_t arg_18
int64_t rax_4

if (arg3 != 0)
    arg_10 = *(arg17 + 0x4c)
    arg_18 = *(arg17 + 0x50)
    
    if (r12.d != 1)
        rax_4 = *(arg17 + 0x78)
    else
        rax_4 = *(arg17 + 0x70)
else
    arg_10 = *(arg17 + 0x38)
    arg_18 = *(arg17 + 0x3c)
    rax_4 = *(arg17 + 0x68)

int32_t rax_15
int32_t rdx_11
int32_t rbx_4
int32_t rbp_2
int32_t rsi
int32_t rdi_5
int32_t r9_2
int32_t* r10_1
int32_t r13_1

if (arg18 == 0)
    rax_15 = 0x10
    char r8_3 = (*(rdi_2 + 8)).b
    r10_1 = arg13
    rsi = (neg.d(*(arg2 + 0x1d0)) s>> (r8_3 + 3)) + rdx.d
    char rdx_12 = (*(rdi_2 + 0xc)).b
    rdi_5 = 0x10
    rbx_4 = rsi << 4
    rbp_2 = (neg.d(*(arg2 + 0x1d8)) s>> (rdx_12 + 3)) + arg7
    r13_1 = rbp_2 << 4
    r9_2 = sx.d(*arg16) << (1 - rdx_12)
    rdx_11 = sx.d(arg16[1]) << (1 - r8_3)
else
    int32_t rax_9 = sub_142a289b0(arg2, arg16, arg4, arg5, (*(rdi_2 + 8)).b, *(rdi_2 + 0xc))
    int32_t rbx_2 = neg.d(*(arg2 + 0x1d8)) s>> ((*(rdi_2 + 0xc)).b + 3)
    int32_t rdi_4 = arg6 + (neg.d(*(arg2 + 0x1d0)) s>> ((*(rdi_2 + 8)).b + 3))
    int32_t var_58 = rax_9
    int32_t rax_10 = (*(arg13 + 0x10))(zx.q(rdi_4 << 4), arg13)
    int32_t rbx_3 = rbx_2 + arg7
    r13_1 = (*(arg13 + 0x18))(zx.q(rbx_3 << 4), arg13)
    rsi = (*(arg13 + 0x10))(zx.q(rdi_4), arg13)
    rbp_2 = (*(arg13 + 0x18))(zx.q(rbx_3), arg13)
    int64_t rax_14 = sub_142a24cc0(&var_58, arg6 + arg10, arg7 + arg11, arg13)
    r10_1 = arg13
    rbx_4 = rax_10
    rdx_11 = rax_14:4.d
    rax_15 = r10_1[2]
    rdi_5 = r10_1[3]
    r9_2 = rax_14.d

int32_t rsi_4 = rsi + (rdx_11 s>> 4)
int32_t r8_5 = rdx_11 & 0xf
int32_t rbp_6 = rbp_2 + (r9_2 s>> 4)
int64_t var_60
var_60.d = r8_5
int32_t r11_1 = r9_2 & 0xf
int32_t r13_3 = r13_1 + r9_2
int32_t var_64 = r11_1
int32_t rax_21 = *(arg14 + 8)
arg14.d = rax_21
int64_t rcx_17 = sx.q(rax_21 * rbp_6)
int64_t rbx_8 = sx.q(rsi_4) + rax_4 + rcx_17
int32_t rsi_5
int32_t rdi_6
int32_t r13_4

if (arg18 != 0 || rdx_11 != 0 || r9_2 != 0 || ((arg_18.b | arg_10.b) & 7) != 0)
    int32_t rdx_18 = arg9
    rcx_17 = 0
    arg18 = 0
    r13_4 = rax_15
    int32_t rbx_16 = (((rdx_18 - 1) * rdi_5 + r13_3) s>> 4) + 1
    arg7 = 0
    int32_t rdi_12 = (((arg8 - 1) * r13_4 + rbx_4 + rdx_11) s>> 4) + 1
    
    if (r8_5 != 0 || r10_1[2] != 0x10)
        rsi_4 -= 3
        arg18 = 1
        rdi_12 += 4
    
    if (r11_1 != 0 || r10_1[3] != 0x10)
        rbp_6 -= 3
        arg7 = 1
        rbx_16 += 4
    
    if (arg1 != 0)
        int32_t r8_9 = 0
        
        if (rbx_16 + 7 s>= 0)
            r8_9 = rbx_16 + 7
        
        rcx_17.b = r12.d != 0
        rcx_17 = sub_1429e7480(arg1, arg17, r8_9 << rcx_17.b)
        r11_1 = var_64
        rdx_18 = arg9
    
    if (rsi_4 s< 0 || rsi_4 s> arg_10 - 1 || rdi_12 s< 0 || rdi_12 s> arg_10 - 1 || rbp_6 s< 0
            || rbp_6 s> arg_18 - 1 || rbx_16 s< 0 || rbx_16 s> arg_18 - 1)
        uint64_t rdi_14 = zx.q(rdi_12 - rsi_4 + 1)
        int32_t var_c0
        var_c0.q = r15_2
        return sub_1429e3890(sx.q(arg14.d * rbp_6) + rax_4 + sx.q(rsi_4), arg14.d, rsi_4, rbp_6, 
            rdi_14, rdi_14.d, rbx_16 - rbp_6 + 1, arg_10, arg_18, (rdi_14.d * arg7 + arg18) * 3, 
            var_c0, *(arg15 + 8), var_60.d, r11_1, arg12, arg13, arg8, rdx_18, arg19, r13_4, rdi_5)
    
    rdi_6 = arg9
    rsi_5 = rdi_5
else
    rdi_6 = arg9
    rsi_5 = rdi_5
    
    if (arg1 != 0)
        int32_t r8_6 = 0
        int32_t rax_30 = ((rdi_6 - 1) * rsi_5 + r13_3) s>> 4
        
        if (rax_30 + 7 s>= 0)
            r8_6 = rax_30 + 7
        
        rcx_17 = sub_1429e7480(arg1, arg17, r8_6 << (r12.d != 0))
    
    r13_4 = rax_15

int32_t r9_5 = var_60.d
int64_t rbx_9 = 4

if (var_64 != 0)
    rbx_9 = 6

int32_t var_d8
var_d8.q = (zx.q(var_64) << 4) + arg12
int32_t var_e8
var_e8.q = (zx.q(r9_5) << 4) + arg12
return (*(arg13 + ((rbx_9 + (zx.q((sbb.q(rcx_17, rcx_17, r9_5 != 0)).d) & 4) + sx.q(arg19)) << 3)))(
    rbx_8, sx.q(arg14.d), r15_2, sx.q(*(arg15 + 8)), var_e8, r13_4, var_d8, rsi_5, arg8, rdi_6)

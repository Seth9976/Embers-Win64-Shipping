// 函数: opus_encoder_ctl
// 地址: 0x140384620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t r9
int64_t arg_20 = r9
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t result_1 = 0
void* rbp_1 = sx.q(*arg1) + arg1
uint64_t result

if (arg2 s> 0x271f)
    if (arg2 == 0x2728)
        uint64_t r8_7 = zx.q(arg3.d)
        arg1[0x29] = r8_7.d
        result = zx.q(sub_1403fbd70(rbp_1, 0x2728, r8_7))
    else if (arg2 == 0x272a)
        *(arg1 + 0xe8) = arg3
        result = zx.q(sub_1403fbd70(rbp_1, 0x272a, arg3))
    else if (arg2 == 0x2afa)
        int32_t rcx_36 = arg3.d
        
        if (rcx_36 - 0x3e8 u<= 2 || rcx_36 == 0xfffffc18)
            arg1[0x1f] = rcx_36
            result = zx.q(result_1)
        else
            result = 0xffffffff
    else if (arg2 == 0x2b0a)
        int32_t rcx_35 = arg3.d
        
        if (rcx_35 + 1 u> 0x65)
            result = 0xffffffff
        else
            arg1[0x20] = rcx_35
            result = zx.q(result_1)
    else if (arg2 != 0x2b0b)
        result = -5
    else if (arg3 == 0)
        result = 0xffffffff
    else
        *arg3 = arg1[0x20]
        result = zx.q(result_1)
else if (arg2 == 0x271f)
    if (arg3 == 0)
        result = 0xffffffff
    else
        result = zx.q(sub_1403fbd70(rbp_1, 0x271f, arg3))
else
    int32_t rcx_7
    
    if (arg2 - 0xfa0 u> 0x2b)
        result = -5
    else
        switch (arg2)
            case 0xfa0
                int32_t rcx_2 = arg3.d
                
                if (((rcx_2 - 0x800) & 0xfffffffc) != 0 || rcx_2 == 0x802
                        || (arg1[0x38] == 0 && arg1[0x18] != rcx_2))
                    result_1 = -1
                else
                    arg1[0x18] = rcx_2
                
                result = zx.q(result_1)
            case 0xfa1
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0x18]
                    result = zx.q(result_1)
            case 0xfa2
                int32_t rcx_4 = arg3.d
                
                if (rcx_4 == 0xfffffc18 || rcx_4 == 0xffffffff)
                    arg1[0x26] = rcx_4
                    result = zx.q(result_1)
                else if (rcx_4 s<= 0)
                    result = 0xffffffff
                else if (rcx_4 s> 0x1f4)
                    int32_t rax_6 = arg1[0x19] * 0x493e0
                    
                    if (rcx_4 s> rax_6)
                        rcx_4 = rax_6
                    
                    arg1[0x26] = rcx_4
                    result = zx.q(result_1)
                else
                    arg1[0x26] = 0x1f4
                    result = zx.q(result_1)
            case 0xfa3
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = sub_140385fd0(arg1, arg1[0x35], 0x4fc)
                    result = zx.q(result_1)
            case 0xfa4
                rcx_7 = arg3.d
                
                if (rcx_7 - 0x44d u> 4)
                    result = 0xffffffff
                else
                    arg1[0x1e] = rcx_7
                label_14038479f:
                    
                    if (rcx_7 != 0x44d)
                        int32_t rax_11 = 0x3e80
                        
                        if (rcx_7 == 0x44e)
                            rax_11 = 0x2ee0
                        
                        arg1[5] = rax_11
                        result = zx.q(result_1)
                    else
                        arg1[5] = 0x1f40
                        result = zx.q(result_1)
            case 0xfa5
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0x1e]
                    result = zx.q(result_1)
            case 0xfa6
                int32_t rcx_16 = arg3.d
                
                if (rcx_16 u> 1)
                    result = 0xffffffff
                else
                    arg1[0x22] = rcx_16
                    arg1[0xe] = 1 - rcx_16
                    result = zx.q(result_1)
            case 0xfa7
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0x22]
                    result = zx.q(result_1)
            case 0xfa8
                rcx_7 = arg3.d
                
                if (rcx_7 - 0x44d u<= 4 || rcx_7 == 0xfffffc18)
                    arg1[0x1d] = rcx_7
                    goto label_14038479f
                
                result = 0xffffffff
            case 0xfa9
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0x36]
                    result = zx.q(result_1)
            case 0xfaa
                int32_t* r8 = zx.q(arg3.d)
                
                if (r8.d u> 0xa)
                    result = 0xffffffff
                else
                    arg1[0xb] = r8.d
                    sub_1403fbd70(rbp_1, 0xfaa, r8)
                    result = zx.q(result_1)
            case 0xfab
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0xb]
                    result = zx.q(result_1)
            case 0xfac
                int32_t rax_18 = arg3.d
                
                if (rax_18 u> 1)
                    result = 0xffffffff
                else
                    arg1[0xc] = rax_18
                    result = zx.q(result_1)
            case 0xfad
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0xc]
                    result = zx.q(result_1)
            case 0xfae
                int32_t* r8_1 = zx.q(arg3.d)
                
                if (r8_1.d u> 0x64)
                    result = 0xffffffff
                else
                    arg1[0xa] = r8_1.d
                    sub_1403fbd70(rbp_1, 0xfae, r8_1)
                    result = zx.q(result_1)
            case 0xfaf
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0xa]
                    result = zx.q(result_1)
            case 0xfb0
                int32_t rax_15 = arg3.d
                
                if (rax_15 u> 1)
                    result = 0xffffffff
                else
                    arg1[0xd] = rax_15
                    result = zx.q(result_1)
            case 0xfb1
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0xd]
                    result = zx.q(result_1)
            case 0xfb2, 0xfb3, 0xfba, 0xfbe, 0xfc0, 0xfc1, 0xfc2, 0xfc3, 0xfc6, 0xfc7
                result = -5
            case 0xfb4
                int32_t rax_23 = arg3.d
                
                if (rax_23 u> 1)
                    result = 0xffffffff
                else
                    arg1[0x23] = rax_23
                    result = zx.q(result_1)
            case 0xfb5
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0x23]
                    result = zx.q(result_1)
            case 0xfb6
                int32_t rax_8 = arg3.d
                
                if (rax_8 s< 1)
                    if (rax_8 != 0xfffffc18)
                        result = 0xffffffff
                    else
                        arg1[0x1b] = rax_8
                        result = zx.q(result_1)
                else if (rax_8 s<= arg1[0x19] || rax_8 == 0xfffffc18)
                    arg1[0x1b] = rax_8
                    result = zx.q(result_1)
                else
                    result = 0xffffffff
            case 0xfb7
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0x1b]
                    result = zx.q(result_1)
            case 0xfb8
                int32_t rcx_19 = arg3.d
                
                if (rcx_19 == 0xfffffc18 || rcx_19 - 0xbb9 u<= 1)
                    arg1[0x1c] = rcx_19
                    result = zx.q(result_1)
                else
                    result = 0xffffffff
            case 0xfb9
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0x1c]
                    result = zx.q(result_1)
            case 0xfbb
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    int32_t temp5_1
                    int32_t temp6_1
                    temp5_1:temp6_1 = muls.dp.d(0x51eb851f, arg1[0x21])
                    int32_t rdx_3 = temp5_1 s>> 7
                    int32_t rdx_4 = rdx_3 + (rdx_3 u>> 0x1f)
                    *arg3 = rdx_4
                    
                    if (arg1[0x18] != 0x803)
                        *arg3 = arg1[0x1a] + rdx_4
                    
                    result = zx.q(result_1)
            case 0xfbc
                void* rbx_2 = sx.q(arg1[1]) + arg1
                sub_1403fbd70(rbp_1, 0xfbc, memset(&arg1[0x2a], 0, 0x4690))
                void var_98
                sub_1403def20(rbx_2, arg1[0x11cc], &var_98)
                int32_t rax_37 = arg1[0x19]
                arg1[0x2d] = 0x3f800000
                arg1[0x2a] = rax_37
                arg1[0x32] = 0x3e9
                arg1[0x2b].w = 0x4000
                arg1[0x36] = 0x451
                arg1[0x38] = 1
                arg1[0x2c] = sub_1403df070(0x3c) << 8
                result = zx.q(result_1)
            case 0xfbd
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0x21]
                    result = zx.q(result_1)
            case 0xfbf
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0x11cb]
                    result = zx.q(result_1)
            case 0xfc4
                int32_t rcx_25 = arg3.d
                
                if (rcx_25 - 8 u> 0x10)
                    result = 0xffffffff
                else
                    arg1[0x27] = rcx_25
                    result = zx.q(result_1)
            case 0xfc5
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0x27]
                    result = zx.q(result_1)
            case 0xfc8
                int32_t* r8_2 = zx.q(arg3.d)
                
                if ((&r8_2[-0x4e2]).d u<= 6 || r8_2.d == 0x1392)
                    arg1[0x24] = r8_2.d
                    sub_1403fbd70(rbp_1, 0xfc8, r8_2)
                    result = zx.q(result_1)
                else
                    result = 0xffffffff
            case 0xfc9
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0x24]
                    result = zx.q(result_1)
            case 0xfca
                int32_t rax_35 = arg3.d
                
                if (rax_35 u> 1)
                    result = 0xffffffff
                else
                    arg1[0x12] = rax_35
                    result = zx.q(result_1)
            case 0xfcb
                if (arg3 == 0)
                    result = 0xffffffff
                else
                    *arg3 = arg1[0x12]
                    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result

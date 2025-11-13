// 函数: sub_1428b41d0
// 地址: 0x1428b41d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rax_2 = sub_142890ec0(arg1)
uint64_t result

if (*(rax_2 + 0x118) == 0)
    result = 0xffffffff
else if (*(rax_2 + 0x130) s>= 0)
    result = sub_1428b45f0(arg1, arg2, arg3, arg4)
else if (arg3 == 0 && arg2 != 0)
    result = 0
else if (*(rax_2 + 0x11c) == 0)
    result = 0xffffffff
else
    int32_t rax_3 = sub_142890eb0(arg1)
    
    if (rax_3 == 0 && *(rax_2 + 0x120) == rax_3)
        result = 0xffffffff
    else if (arg2 != 0)
        if (*(rax_2 + 0x124) != 0)
            goto label_1428b432c
        
        int32_t rax_9
        rax_9, arg5 =
            sub_1428d3b90(rax_2 + 0x138, sub_1406219d0(arg1), sx.q(0xf - *(rax_2 + 0x128)), arg4)
        
        if (rax_9 != 0)
            result = 0xffffffff
        else
            *(rax_2 + 0x124) = 1
        label_1428b432c:
            int32_t rax_10 = sub_142890eb0(arg1)
            int64_t rcx_8 = *(rax_2 + 0x170)
            
            if (rax_10 == 0)
                int32_t result_1 = -1
                int32_t rax_12
                
                if (rcx_8 == 0)
                    rax_12 = sub_1428d31b0(rax_2 + 0x138, arg3, arg2, arg4, arg5)
                else
                    rax_12 = sub_1428d3390(rax_2 + 0x138, arg3, arg2, arg4, arg5, rcx_8)
                
                int32_t rcx_13
                rcx_13.b = rax_12 == 0
                void var_68
                
                if (rcx_13 == 0)
                    sub_1428b8960(arg2, arg4)
                else if (sub_1428d3c40(rax_2 + 0x138, &var_68, sx.q(*(rax_2 + 0x12c))) == 0)
                    sub_1428b8960(arg2, arg4)
                else if (sub_1428bc500(&var_68, sub_142890ea0(arg1), sx.q(*(rax_2 + 0x12c))) != 0)
                    sub_1428b8960(arg2, arg4)
                else
                    result_1 = arg4.d
                    
                    if (arg4.d == 0xffffffff)
                        sub_1428b8960(arg2, arg4)
                *(rax_2 + 0x11c) = 0
                result = zx.q(result_1)
                *(rax_2 + 0x124) = 0
            else
                int32_t rax_11
                
                if (rcx_8 == 0)
                    rax_11 = sub_1428d3560(rax_2 + 0x138, arg3, arg2, arg4, arg5.o)
                else
                    rax_11 = sub_1428d3870(rax_2 + 0x138, arg3, arg2, arg4, arg5.o, rcx_8)
                
                if (rax_11 != 0)
                    result = 0xffffffff
                else
                    *(rax_2 + 0x120) = 1
                    result = zx.q(arg4.d)
    else if (arg3 == 0)
        if (sub_1428d3b90(rax_2 + 0x138, sub_1406219d0(arg1), sx.q(0xf - *(rax_2 + 0x128)), arg4)
                != 0)
            result = 0xffffffff
        else
            *(rax_2 + 0x124) = 1
            result = zx.q(arg4.d)
    else if (*(rax_2 + 0x124) != 0 || arg4 == 0)
        sub_1428d3020(rax_2 + 0x138, arg3, arg4, arg5)
        result = zx.q(arg4.d)
    else
        result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_98)
return result

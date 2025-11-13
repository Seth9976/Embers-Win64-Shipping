// 函数: sub_142861600
// 地址: 0x142861600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb8)
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rax_3 = sub_1428916c0(arg3)
void* rcx_1 = arg1
int64_t result
int64_t var_d0
void var_98

if (rax_3 s>= 0)
    int64_t rax_4 = sx.q(rax_3)
    int64_t var_b8_1 = rax_4
    
    if (sub_1428628c0(rcx_1, arg3, arg5, arg7, arg8, arg6, rax_4, arg9) == 0)
        sub_1428b8960(&var_98, 0x40)
        result = 0
    else
        int64_t r13_1 = sx.q(sub_140611e60(arg4))
        int32_t rax_9 = sub_142890eb0(arg4) & 0xf0007
        int64_t rbx_1
        uint64_t rbp_1
        
        if (rax_9 != 7)
            rbp_1 = sx.q(sub_140611e40(arg4))
            rbx_1 = 0
        else
            rbp_1 = zx.q(rax_9 + 5)
            void* rcx_4 = *(*(arg1 + 0xa8) + 0x238)
            
            if (rcx_4 == 0)
                rcx_4 = *(*(arg1 + 0x508) + 0x128)
            
            rbx_1 = 8
            
            if ((*(rcx_4 + 0x24) & 0x30000) == 0)
                rbx_1 = 0x10
        
        int64_t var_b8_2 = r13_1
        
        if (sub_1428628c0(arg1, arg3, arg9, &data_1434dc190, 3, 0, 0, &var_98) == 0)
            sub_1428b8960(&var_98, 0x40)
            result = 0
        else
            uint64_t var_b8_3 = rbp_1
            
            if (sub_1428628c0(arg1, arg3, arg9, &data_1434dc194, 2, 0, 0, arg10) == 0)
                sub_1428b8960(&var_98, 0x40)
                result = 0
            else
                var_d0.d = arg2
                
                if (sub_142892480(arg11, arg4, nullptr, 0, nullptr, var_d0.d) s<= 0)
                label_142861826:
                    var_d0.d = 0x17a
                    rcx_1 = arg1
                    goto label_14286184d
                
                if (sub_142892150(arg11) == 0)
                    goto label_142861826
                
                int32_t rax_20
                
                if (rbx_1 != 0)
                    rax_20 = sub_142892150(arg11)
                
                if (rbx_1 != 0 && rax_20 == 0)
                    goto label_142861826
                
                var_d0.d = 0xffffffff
                
                if (sub_142892480(arg11, nullptr, nullptr, &var_98, nullptr, var_d0.d) s<= 0)
                    goto label_142861826
                
                result = 1
else
    var_d0.d = 0x14e
label_14286184d:
    sub_142856580(rcx_1, 0x50, 0x202, 6, "ssl\tls13_enc.c", var_d0.d)
    sub_1428b8960(&var_98, 0x40)
    result = 0
__security_check_cookie(rax_1 ^ &var_f8)
return result

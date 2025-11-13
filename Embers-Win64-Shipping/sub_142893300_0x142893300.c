// 函数: sub_142893300
// 地址: 0x142893300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb0)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t r11 = *(*arg1[4] + 0xd8)
uint64_t result

if (r11 == 0)
    if (sub_142891c10(arg1, arg4, arg5) s> 0)
        bool cond:0_1 = (arg1[2].d & 0x200) == 0
        int64_t* rcx = arg1[4]
        int32_t var_98 = 0
        int64_t rbp_1 = *(*rcx + 0x88)
        int32_t result_1
        void var_88
        
        if (cond:0_1)
            int64_t* rax_8 = sub_142891ee0()
            
            if (rax_8 == 0)
                result_1 = -1
            else
                if (sub_142891c70(rax_8, arg1) != 0)
                    int32_t result_2
                    
                    if (rbp_1 == 0)
                        result_2 = sub_1428918e0(rax_8, &var_88, &var_98)
                    else
                        int64_t* rcx_4 = rax_8[4]
                        result_2 = (*(*rcx_4 + 0x88))(rcx_4, arg2, zx.q(arg3.d), rax_8)
                    
                    result_1 = result_2
                    sub_142891ea0(rax_8)
                    goto label_142893439
                
                sub_142891ea0(rax_8)
                result_1 = -1
        else if (rbp_1 == 0)
            result_1 = sub_1428918e0(arg1, &var_88, &var_98)
        label_14289343e:
            
            if (result_1 != 0)
                result_1 = sub_1428bdbe0(arg1[4], arg2, arg3, &var_88, zx.q(var_98))
        else
            result_1 = rbp_1(rcx, arg2, zx.q(arg3.d), arg1)
        label_142893439:
            
            if (rbp_1 == 0)
                goto label_14289343e
        result = zx.q(result_1)
    else
        result = 0xffffffff
else
    int64_t var_a8_1 = arg5
    result = r11()

__security_check_cookie(rax_1 ^ &var_c8)
return result

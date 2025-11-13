// 函数: sub_1428930f0
// 地址: 0x1428930f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* rdi = arg1[4]
void* rsi = *rdi
int32_t result

if ((*(rsi + 4) & 4) == 0)
    int64_t rsi_1 = *(rsi + 0x78)
    int32_t rax_9
    
    if (arg2 != 0)
        bool cond:0_1 = (arg1[2].d & 0x200) == 0
        int32_t var_88 = 0
        void var_78
        int32_t result_2
        
        if (cond:0_1)
            int64_t* rax_5 = sub_142891ee0()
            
            if (rax_5 == 0)
                result = 0
            else
                if (sub_142891c70(rax_5, arg1) != 0)
                    int32_t result_3
                    
                    if (rsi_1 == 0)
                        result_3 = sub_1428918e0(rax_5, &var_78, &var_88)
                    else
                        int64_t* rcx_7 = rax_5[4]
                        result_3 = (*(*rcx_7 + 0x78))(rcx_7, arg2, arg3, rax_5)
                    
                    result_2 = result_3
                    sub_142891ea0(rax_5)
                    goto label_142893230
                
                sub_142891ea0(rax_5)
                result = 0
        else if (rsi_1 == 0)
            result_2 = sub_1428918e0(arg1, &var_78, &var_88)
            
            if (result_2 != 0)
            label_142893251:
                rax_9 = sub_1428bda10(arg1[4], arg2, arg3, &var_78, zx.q(var_88))
                goto label_142893256
            
            result = result_2
        else
            result_2 = rsi_1(rdi, arg2, arg3, arg1)
        label_142893230:
            
            if (rsi_1 == 0 && result_2 != 0)
                goto label_142893251
            
            result = result_2
    else if (rsi_1 == 0)
        int32_t rax_10 = sub_1428916c0(*arg1)
        
        if (rax_10 s< 0)
            result = 0
        else if (sub_1428bda10(rdi, 0, arg3, 0, sx.q(rax_10)) s<= 0)
            result = 0
        else
            result = 1
    else
        rax_9 = rsi_1(rdi, 0, arg3, arg1)
    label_142893256:
        
        result = rax_9 s> 0 ? 1 : 0
else if (arg2 == 0)
    result = (*(rsi + 0x78))(rdi, arg4, arg5, arg1)
else if ((arg1[2].d & 0x200) == 0)
    int64_t* rax_2 = sub_1428bcc60(rdi)
    
    if (rax_2 == 0)
        result = 0
    else
        int32_t result_1 = (*(*rax_2 + 0x78))(rax_2, arg2, arg3, arg1)
        sub_1428bcda0(rax_2)
        result = result_1
else
    result = (*(rsi + 0x78))(rdi, arg2, arg3, arg1)

__security_check_cookie(rax_1 ^ &var_b8)
return result

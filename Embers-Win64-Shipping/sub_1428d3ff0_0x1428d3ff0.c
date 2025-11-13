// 函数: sub_1428d3ff0
// 地址: 0x1428d3ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint64_t result

if ((arg5.b & 7) != 0 || arg5 - 0x10 u> 0x7fffffef)
    result = 0
else
    int64_t var_48
    uint64_t rsi_1
    
    if (arg5 != 0x10)
        rsi_1 = arg5 - 8
        
        if (rsi_1 == sub_1428d44e0(arg1, &var_48, arg3, arg4, arg5, arg6))
            goto label_1428d40aa
        
        sub_1428b8960(arg3, arg5)
        result = 0
    else
        int64_t var_40
        arg6(arg4, &var_40, arg1)
        var_48 = var_40
        rsi_1 = zx.q((arg5 - 8).d)
        int64_t var_38
        *arg3 = var_38
        sub_1428b8960(&var_40, arg5)
    label_1428d40aa:
        int32_t* const rdx_3 = &data_143511d78
        
        if (arg2 != 0)
            rdx_3 = arg2
        
        if (sub_1428bc500(&var_48, rdx_3, 4) != 0)
            sub_1428b8960(arg3, arg5)
            result = 0
        else
            int64_t rcx_4 = arg5 & 0xfffffffffffffff8
            uint64_t result_1 =
                zx.q(((zx.d(var_48:4.b) << 8 | zx.d(var_48:5.b)) << 8 | zx.d(var_48:6.b)) << 8)
                | zx.q(var_48:7.b)
            
            if (rcx_4 - 0x10 u>= result_1 || result_1 u> rcx_4 - 8)
                sub_1428b8960(arg3, arg5)
                result = 0
            else if (sub_1428bc500(arg3 + result_1, &data_143fecc20, rsi_1 - result_1) != 0)
                sub_1428b8960(arg3, arg5)
                result = 0
            else
                result = result_1

__security_check_cookie(rax_1 ^ &var_78)
return result

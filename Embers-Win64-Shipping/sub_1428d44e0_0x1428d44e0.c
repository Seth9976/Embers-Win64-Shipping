// 函数: sub_1428d44e0
// 地址: 0x1428d44e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t result

if (((arg5 - 8).b & 7) != 0 || arg5 - 0x18 u> 0x7ffffff0)
    result = 0
else
    uint64_t rbx_2 = ((arg5 - 8) u>> 3) * 6
    int64_t var_60 = *arg4
    memmove(arg3, &arg4[1], (arg5 - 8).d)
    int64_t i_1 = 6
    int64_t i
    
    do
        int64_t* rdi_2 = arg3 - 8 + arg5 - 8
        
        if (arg5 != 8)
            int64_t j_1 = ((arg5 - 9) u>> 3) + 1
            int64_t j
            
            do
                var_60:7.b ^= rbx_2.b
                
                if (rbx_2 u> 0xff)
                    var_60:6.b ^= (rbx_2 u>> 8).b
                    var_60:5.b ^= (rbx_2 u>> 0x10).b
                    var_60:4.b ^= (rbx_2 u>> 0x18).b
                
                int64_t rax_12 = *rdi_2
                arg6(&var_60, &var_60, arg1)
                rbx_2 -= 1
                *rdi_2 = rax_12
                rdi_2 -= 8
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    *arg2 = var_60
    result = arg5 - 8

__security_check_cookie(rax_1 ^ &var_88)
return result

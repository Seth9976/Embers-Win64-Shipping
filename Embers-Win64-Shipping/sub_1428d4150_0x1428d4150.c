// 函数: sub_1428d4150
// 地址: 0x1428d4150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t result

if ((arg5.b & 7) != 0 || arg5 - 0x10 u> 0x7ffffff0)
    result = 0
else
    int64_t rbx_1 = 1
    memmove(&arg3[1], arg4, arg5.d)
    void* const rax_3 = &data_143511d70
    int64_t i_1 = 6
    
    if (arg2 != 0)
        rax_3 = arg2
    
    int64_t var_50 = *rax_3
    int64_t i
    
    do
        int64_t* rdi_1 = &arg3[1]
        
        if (arg5 != 0)
            int64_t j_1 = ((arg5 - 1) u>> 3) + 1
            int64_t j
            
            do
                int64_t rax_5 = *rdi_1
                arg6(&var_50, &var_50, arg1)
                var_50:7.b ^= rbx_1.b
                
                if (rbx_1 u> 0xff)
                    var_50:6.b ^= (rbx_1 u>> 8).b
                    var_50:5.b ^= (rbx_1 u>> 0x10).b
                    var_50:4.b ^= (rbx_1 u>> 0x18).b
                
                rbx_1 += 1
                *rdi_1 = rax_5
                rdi_1 = &rdi_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    *arg3 = var_50
    result = arg5 + 8

__security_check_cookie(rax_1 ^ &var_78)
return result

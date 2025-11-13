// 函数: sub_1428d42c0
// 地址: 0x1428d42c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* r15_1 = (arg5 + 7) & 0xfffffffffffffff8
uint64_t count = r15_1 - arg5
int64_t result

if (arg5 - 1 u> 0x7ffffffe)
    result = 0
else
    int32_t rax_3 = -0x59a6a65a
    
    if (arg2 != 0)
        rax_3 = *arg2
    
    void* rbx_1 = arg5 + arg3
    char var_69_1 = arg5.b
    uint8_t var_6c_1 = (arg5 u>> 0x18).b
    uint8_t var_6b_1 = (arg5 u>> 0x10).b
    uint8_t var_6a_1 = (arg5 u>> 8).b
    
    if (r15_1 != 8)
        memmove(arg3, arg4, arg5.d)
        memset(rbx_1, 0, count)
        
        if (r15_1 - 0x10 u> 0x7ffffff0)
            result = 0
        else
            int64_t rbx_2 = 1
            memmove(&arg3[1], arg3, r15_1.d)
            int64_t i_1 = 6
            int64_t var_68 = rax_3.q
            int64_t i
            
            do
                void* rdi_1 = &arg3[1]
                
                if (r15_1 != 0)
                    int64_t j_1 = ((r15_1 - 1) u>> 3) + 1
                    int64_t j
                    
                    do
                        int64_t rax_14 = *rdi_1
                        arg6(&var_68, &var_68, arg1)
                        var_68:7.b ^= rbx_2.b
                        
                        if (rbx_2 u> 0xff)
                            var_68:6.b ^= (rbx_2 u>> 8).b
                            var_68:5.b ^= (rbx_2 u>> 0x10).b
                            var_68:4.b ^= (rbx_2 u>> 0x18).b
                        
                        rbx_2 += 1
                        *rdi_1 = rax_14
                        rdi_1 += 8
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                i = i_1
                i_1 -= 1
            while (i != 1)
            *arg3 = var_68
            result = sx.q(r15_1.d + 8)
    else
        memmove(&arg3[1], arg4, arg5.d)
        *arg3 = rax_3.q
        memset(rbx_1 + 8, 0, count)
        arg6(arg3, arg3, arg1)
        result = 0x10

__security_check_cookie(rax_1 ^ &var_98)
return result

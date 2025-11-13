// 函数: sub_14293c760
// 地址: 0x14293c760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t result_1 = 0
int64_t rdi = 0
int64_t rcx_1 = sx.q(sub_142890ee0(*(arg5 + 0x30)))
int64_t var_90 = rcx_1
uint64_t result

if (rcx_1 u<= 0x40)
    void var_88
    
    if (sub_1428bd400(*(arg5 + 0x28), &var_88, &var_90) s> 0
            && sub_142892480(*(arg5 + 0x30), nullptr, nullptr, &var_88, nullptr, arg6) != 0)
        void* var_a8_1
        var_a8_1.d = arg4
        int32_t var_98
        
        if (sub_1428927c0(*(arg5 + 0x30), 0, &var_98, arg3, var_a8_1.d) != 0)
            int64_t rax_7 = sub_1428a6730(sx.q(var_98))
            rdi = rax_7
            
            if (rax_7 != 0)
                var_a8_1.d = arg4
                
                if (sub_1428927c0(*(arg5 + 0x30), rax_7, &var_98, arg3, var_a8_1.d) != 0)
                    int64_t rax_9 = sx.q(var_98)
                    result_1 = 1
                    *arg1 = rdi
                    *arg2 = rax_9
    
    sub_1428b8960(&var_88, var_90)
    
    if (result_1 == 0)
        sub_1428a6780(rdi)
    
    sub_1428922e0(*(arg5 + 0x30))
    sub_1428bcda0(*(arg5 + 0x28))
    result = zx.q(result_1)
    *(arg5 + 0x28) = 0
else
    result = 0

__security_check_cookie(rax_1 ^ &var_c8)
return result

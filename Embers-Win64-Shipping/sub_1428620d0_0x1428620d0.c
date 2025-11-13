// 函数: sub_1428620d0
// 地址: 0x1428620d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x130)
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t* rax_2 = sub_14285b130(arg1)
int64_t* rax_3 = sub_142891ee0()
int32_t rdi = 0

if (rax_3 != 0 && sub_142856560(arg1) != 0 && sub_1428919c0(rax_3, rax_2, nullptr) s> 0)
    int64_t r8 = 0
    
    if (arg8 != 0)
        r8 = arg7
    
    int32_t var_118
    int32_t var_114
    void var_108
    void var_c8
    
    if (sub_142891c10(rax_3, arg6, r8) s> 0 && sub_1428918e0(rax_3, &var_c8, &var_118) s> 0
            && sub_1428919c0(rax_3, rax_2, nullptr) s> 0
            && sub_1428918e0(rax_3, &var_108, &var_114) s> 0)
        uint64_t var_128_1 = zx.q(var_118)
        void var_88
        
        if (sub_1428628c0(arg1, rax_2, arg1 + 0x3ac, arg4, arg5, &var_108, zx.q(var_114), &var_88)
                != 0)
            int64_t var_128_2 = arg3
            
            if (sub_1428628c0(arg1, rax_2, &var_88, "exporter", 8, &var_c8, zx.q(var_118), arg2)
                    != 0)
                rdi = 1

sub_142891ea0(rax_3)
__security_check_cookie(rax_1 ^ &var_168)
return zx.q(rdi)

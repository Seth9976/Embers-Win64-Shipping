// 函数: sub_1429840d0
// 地址: 0x1429840d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int64_t var_18 = *(arg1 + 8)
int64_t rax_2 = var_18
var_18.b = rax_2.b
var_18:1.b = (rax_2 u>> 8).b
var_18:4.b = (rax_2 u>> 0x20).b
var_18:2.b = (rax_2 u>> 0x10).b
var_18:5.b = (rax_2 u>> 0x28).b
var_18:7.b = (rax_2 u>> 0x38).b
var_18:3.b = (rax_2 u>> 0x18).b
var_18:6.b = (rax_2 u>> 0x30).b
int64_t result = (*(*arg2 + 8))(arg2, &var_18, 8)
__security_check_cookie(rax_1 ^ &var_38)
return result

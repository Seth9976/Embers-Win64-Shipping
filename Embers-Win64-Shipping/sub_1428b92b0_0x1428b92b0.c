// 函数: sub_1428b92b0
// 地址: 0x1428b92b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* result_1 = nullptr
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(sub_142890560(arg3) + 7)
int64_t rdi = sx.q((temp1 + (temp0 & 7)) s>> 3)
int32_t rax_7

if (arg1 != arg3)
    rax_7 = sub_1428909a0(arg1, arg3)

int32_t rax_8

if ((arg1 == arg3 || rax_7 s< 0) && arg2 != arg3)
    rax_8 = sub_1428909a0(arg2, arg3)

int64_t* result

if ((arg1 == arg3 || rax_7 s< 0) && (arg2 == arg3 || rax_8 s< 0))
    uint64_t r15_1 = sx.q((rdi * 2).d)
    void* rax_10 = sub_1428a6730(r15_1)
    char var_48[0x18]
    
    if (rax_10 != 0 && sub_14288fbc0(arg1, rax_10, rdi.d) s>= 0
            && sub_14288fbc0(arg2, rax_10 + rdi, rdi.d) s>= 0
            && sub_142891710(rax_10, r15_1, &var_48, nullptr, &data_1434e9110, nullptr) != 0)
        result_1 = sub_14288fa60(&var_48, 0x14, nullptr)
    
    sub_1428a6780(rax_10)
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_78)
return result

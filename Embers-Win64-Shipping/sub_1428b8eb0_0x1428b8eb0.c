// 函数: sub_1428b8eb0
// 地址: 0x1428b8eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* result_1 = nullptr
int64_t* rax_2

if (arg1 != 0 && arg2 != 0 && arg3 != 0)
    rax_2 = sub_142891ee0()

int64_t* result

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || rax_2 == 0)
    result = nullptr
else
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(sub_142890560(arg1) + 7)
    void* rax_8 = sub_1428a6730(sx.q((temp1_1 + (temp0_1 & 7)) s>> 3))
    
    if (rax_8 != 0 && sub_1428919c0(rax_2, &data_1434e9110, nullptr) != 0)
        char* rbx_1 = -ffffffffffffffff
        int64_t r8_1 = -1
        
        do
            r8_1 += 1
        while (arg2[r8_1] != 0)
        
        if (sub_142891c10(rax_2, arg2, r8_1) != 0 && sub_142891c10(rax_2, &data_142d6bc34, 1) != 0)
            do
                rbx_1 = &rbx_1[1]
            while (rbx_1[arg3] != 0)
            
            char var_58[0x18]
            
            if (sub_142891c10(rax_2, arg3, rbx_1) != 0
                    && sub_1428918e0(rax_2, &var_58, nullptr) != 0
                    && sub_1428919c0(rax_2, &data_1434e9110, nullptr) != 0)
                sub_14288fba0(arg1, rax_8)
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(sub_142890560(arg1) + 7)
                
                if (sub_142891c10(rax_2, rax_8, sx.q((temp3_1 + (temp2_1 & 7)) s>> 3)) != 0
                        && sub_142891c10(rax_2, &var_58, 0x14) != 0
                        && sub_1428918e0(rax_2, &var_58, nullptr) != 0)
                    result_1 = sub_14288fa60(&var_58, 0x14, nullptr)
    
    sub_1428a6780(rax_8)
    sub_142891ea0(rax_2)
    result = result_1

__security_check_cookie(rax_1 ^ &var_78)
return result

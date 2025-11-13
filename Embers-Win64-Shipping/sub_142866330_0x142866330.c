// 函数: sub_142866330
// 地址: 0x142866330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc0)
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t result_1 = 0
int64_t var_a8 = 0
int32_t result = sub_1428a40b0(arg2, 0x3a, 1, sub_1428631d0, &var_a8)

if (result != 0)
    if (arg1 != 0)
        int64_t r14_1 = var_a8
        uint64_t rbp_1 = r14_1 * 2
        int64_t rax_3 = sub_1428a6730(rbp_1)
        
        if (rax_3 != 0)
            void var_a0
            memcpy(rax_3, &var_a0, rbp_1.d)
            
            if (arg3 == 0)
                sub_1428a6780(*(arg1 + 0x198))
                *(arg1 + 0x198) = rax_3
                *(arg1 + 0x1a0) = r14_1
            else
                sub_1428a6780(*(arg1 + 0x1a8))
                *(arg1 + 0x1a8) = rax_3
                *(arg1 + 0x1b0) = r14_1
            
            result_1 = 1
        else
            int64_t* var_b8
            var_b8.d = 0x7ae
            sub_1428a5670((rax_3 + 0x14).d, 0x276, (rax_3 + 0x41).d, "ssl\t1_lib.c", var_b8.d)
        
        result = result_1
    else
        result = (arg1 + 1).d

__security_check_cookie(rax_1 ^ &var_d8)
return result

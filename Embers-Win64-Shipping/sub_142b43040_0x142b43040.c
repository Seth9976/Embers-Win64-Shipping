// 函数: sub_142b43040
// 地址: 0x142b43040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint64_t result

if (sub_142b46530(arg1, 0).w == 0x40)
    int32_t rbx_1 = 0
    int32_t rbp_1 = 0
    
    if (sub_142b467c0(arg1) s> 0)
        int32_t rax_4
        
        do
            if (sub_142b46530(arg1, rbx_1) != 0x40)
                break
            
            rbp_1 += 1
            rbx_1 += 1
            rax_4 = sub_142b467c0(arg1)
        while (rbx_1 s< rax_4)
    
    if (rbx_1 s>= sub_142b467c0(arg1).d)
        *arg3 = 0x10113
        result.b = 0
    else
        int32_t rsi_1
        
        if (sub_142b46530(arg1, rbx_1).w != 0x2b)
            if (rbp_1 s<= 1)
                rsi_1 = rbp_1
                
                if (rbx_1 s< sub_142b467c0(arg1))
                    int32_t rax_7
                    
                    do
                        if (sub_142b46530(arg1, rbx_1) != 0x23)
                            break
                        
                        rsi_1 += 1
                        rbx_1 += 1
                        rax_7 = sub_142b467c0(arg1)
                    while (rbx_1 s< rax_7)
                
                goto label_142b43115
            
            *arg3 = 0x10113
            result.b = 0
        else
            rsi_1 = -1
            rbx_1 += 1
        label_142b43115:
            
            if (rbx_1 s>= sub_142b467c0(arg1).d)
                void var_58
                int128_t* rdx_3 = &var_58
                
                if (rsi_1 != 0xffffffff)
                    result = sub_142b45f20(arg2 + 0x40, rdx_3, rsi_1)
                else
                    result = sub_142b45fa0(arg2 + 0x40, rdx_3, rbp_1)
                
                *(arg2 + 0x40) = *result
                int128_t zmm1_1 = *(result + 0x10)
                result.b = 1
                *(arg2 + 0x50) = zmm1_1
            else
                *arg3 = 0x10113
                result.b = 0
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_78)
return result

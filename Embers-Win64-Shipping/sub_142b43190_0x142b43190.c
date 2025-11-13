// 函数: sub_142b43190
// 地址: 0x142b43190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t rbx = 1
int32_t rbp = 0

if (sub_142b467c0(arg1) s> 1)
    int32_t rax_4
    
    do
        if (sub_142b46530(arg1, rbx) != 0x30)
            break
        
        rbp += 1
        rbx += 1
        rax_4 = sub_142b467c0(arg1)
    while (rbx s< rax_4)

int32_t rsi

if (rbx s>= sub_142b467c0(arg1))
    rsi = rbp
else if (sub_142b46530(arg1, rbx) != 0x2b)
    rsi = rbp
    
    if (rbx s< sub_142b467c0(arg1))
        int32_t rax_9
        
        do
            if (sub_142b46530(arg1, rbx) != 0x23)
                break
            
            rsi += 1
            rbx += 1
            rax_9 = sub_142b467c0(arg1)
        while (rbx s< rax_9)
else
    rsi = -1
    rbx += 1

uint64_t result = sub_142b467c0(arg1)

if (rbx s>= result.d)
    void var_58
    int32_t* rcx_8 = &var_58
    
    if (rsi != 0xffffffff)
        result = sub_142b45bc0(rcx_8, rbp, rsi)
    else
        result = sub_142b45b60(rcx_8, rbp)
    
    *(arg2 + 0x40) = *result
    *(arg2 + 0x50) = *(result + 0x10)
else
    *arg3 = 0x10113

__security_check_cookie(rax_1 ^ &var_78)
return result

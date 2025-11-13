// 函数: sub_140b36860
// 地址: 0x140b36860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t rax_2 = arg1[6].d
int64_t result

if (rax_2 == 0 || rax_2 - 1 s<= 0)
label_140b369c8:
    int64_t r8_4 = arg1[1]
    void* rdx_7 = *arg1
    void var_78
    void* var_38_1 = &var_78
    int32_t var_f8
    __builtin_memcpy(&var_f8, 
        "\x01\x23\x45\x67\x89\xab\xcd\xef\xfe\xdc\xba\x98\x76\x54\x32\x10\xf0\xe1\xd2\xc3", 0x14)
    int64_t var_e4_1 = 0
    sub_140b4ad80(&var_f8, rdx_7, r8_4)
    result = sub_140b39010(&var_f8)
else
    int16_t* rsi_1 = arg1[5]
    int32_t rdx_1 = 0
    int64_t var_138 = 0
    int32_t rcx = 0
    int32_t var_12c_1 = 0
    int32_t var_130_1 = 0
    
    if (rsi_1 != 0 && *rsi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rsi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_138, rbx_1.d + 1)
            rcx = var_12c_1
            rdx_1 = var_130_1
        
        int32_t rax_4 = rbx_1.d + 1 + rdx_1
        int32_t var_130_2 = rax_4
        
        if (rax_4 s> rcx)
            sub_140594770(&var_138)
        
        UnDecorator::getReferenceType(var_138, rsi_1, (rbx_1.d + 1) * 2)
    
    int32_t result_1
    int64_t var_120
    int64_t var_110
    sub_1408f1b50(&data_1439a9250, &result_1, 
        sub_140a35790(sub_140b187e0(&var_110, &var_138), &var_120))
    result = sx.q(result_1)
    void* const rcx_8
    
    if (result.d == 0xffffffff)
        rcx_8 = nullptr
    else
        rcx_8 = (result << 5) + data_1439a9250
    
    int64_t* rbx_3 = rcx_8 + 0x10
    int64_t rcx_9 = var_120
    
    if (rcx_8 == 0)
        rbx_3 = nullptr
    
    if (rcx_9 != 0)
        result = sub_140a74f90(rcx_9)
    
    int64_t rcx_10 = var_110
    
    if (rcx_10 != 0)
        result = sub_140a74f90(rcx_10)
    
    int64_t rcx_11 = var_138
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    if (rbx_3 != 0)
        if (arg1 != -0x10)
            int128_t* rax_7 = *rbx_3
            *(arg1 + 0x10) = *rax_7
            arg1[4].d = rax_7[1].d
        
        goto label_140b369c8

if (*(arg1 + 0x39) != 0)
    result = sub_140a74f90(*arg1)

__security_check_cookie(rax_1 ^ &var_158)
return result

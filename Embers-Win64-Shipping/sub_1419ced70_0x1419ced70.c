// 函数: sub_1419ced70
// 地址: 0x1419ced70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t r15 = 0
int64_t r13 = sx.q(arg2)
int64_t* var_138 = nullptr
int32_t i_4 = 0
int32_t rcx = 0
int32_t i_2 = 0
int64_t* r14 = nullptr
int32_t var_12c = 0
int64_t rdi = -1

if (arg1 != 0 && *arg1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_138, rbx_1.d + 1)
        rcx = var_12c
        i_4 = i_2
        r14 = var_138
    
    int32_t i_3 = rbx_1.d + 1 + i_4
    i_2 = i_3
    
    if (i_3 s> rcx)
        sub_140594770(&var_138)
        r14 = var_138
    
    UnDecorator::getReferenceType(r14, arg1, (rbx_1.d + 1) * 2)

int32_t var_128
sub_1419cdde0(r13 * 0x60 + &data_143f1efa0, &var_128, &var_138)
int64_t rax_2 = sx.q(var_128)
int64_t rbx_4

if (rax_2.d != 0xffffffff)
    rbx_4 = rax_2 * 0x30

int128_t* result

if (rax_2.d == 0xffffffff || rbx_4 == neg.q(*(r13 * 0x60 + &data_143f1efa0)))
    result = nullptr
else
    result = rbx_4 + *(r13 * 0x60 + &data_143f1efa0) + 0x10

if (r14 != 0)
    sub_140a74f90(r14)

if (result == 0)
    void var_118
    sub_140b2f110(&var_118)
    var_138 = nullptr
    i_2.q = 0
    sub_140af98a0("Unknown", 0x32c, u"Couldn't find source file of virtual shader path '%s'", arg1)
    sub_140afbb40()
    sub_140b4ae70(&var_118, &data_142d40450, 0)
    int32_t i_1 = i_2
    int64_t* rbx_6 = var_138
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_8 = *rbx_6
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            rbx_6 = &rbx_6[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_6 = var_138
    
    if (rbx_6 != 0)
        sub_140a74f90(rbx_6)
    
    sub_140b39010(&var_118)
    var_138 = nullptr
    int32_t rcx_11 = 0
    int32_t var_12c_1 = 0
    int32_t var_130 = 0
    
    if (arg1 != 0 && *arg1 != 0)
        do
            rdi += 1
        while (arg1[rdi] != 0)
        
        if (rdi.d + 1 s> 0)
            sub_1405947f0(&var_138, rdi.d + 1)
            rcx_11 = var_12c_1
            r15 = var_130
        
        int32_t rax_3 = rdi.d + 1 + r15
        int32_t var_130_1 = rax_3
        
        if (rax_3 s> rcx_11)
            sub_140594770(&var_138)
        
        UnDecorator::getReferenceType(var_138, arg1, (rdi.d + 1) * 2)
    
    int128_t* result_1 = sub_1419c5400(&data_143f1ef90, r13.d, &var_138)
    int64_t* rcx_15 = var_138
    result = result_1
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    sub_140b3da80(&var_118, result)
    sub_140b30ae0(&var_118)

__security_check_cookie(rax_1 ^ &var_158)
return result

// 函数: sub_1406cd700
// 地址: 0x1406cd700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
char** result = arg1
char* var_138 = arg1
int64_t* var_110 = arg2
int64_t* var_108 = arg3

if (arg2[1].d s<= 1)
    *arg1 = 0
    arg1[1] = 0
    int64_t rcx = *arg2
    
    if (rcx != 0)
        sub_140a74f90(rcx)
else if (arg3[1].d s> 1)
    int64_t var_130 = 0
    int32_t var_128_1 = 0
    sub_1405947f0(&var_130, 7)
    int32_t r15_1 = var_128_1 + 7
    
    if (r15_1 s> 0)
        sub_140594770(&var_130)
    
    int64_t r13_1 = var_130
    sub_1405a7220(r13_1, 7, "EL@$@!", 7, 0x3f)
    int32_t r8 = r15_1 - 1
    
    if (r15_1 == 0)
        r8 = 0
    
    sub_140a20ba0(arg2, r13_1, r8)
    int16_t* rdx_2
    
    if (arg3[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *arg3
    
    char** result_1
    int64_t* rax_2 = sub_1406cfbb0(&result_1, rdx_2)
    
    if (arg3 != rax_2)
        int64_t rcx_7 = *arg3
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        *arg3 = *rax_2
        *rax_2 = 0
        arg3[1].d = rax_2[1].d
        *(arg3 + 0xc) = *(rax_2 + 0xc)
        rax_2[1] = 0
    
    char** result_2 = result_1
    
    if (result_2 != 0)
        sub_140a74f90(result_2)
    
    int16_t* r15_3 = *arg3
    char* rdx_3 = nullptr
    char* var_68_1 = nullptr
    char* r12_2
    
    if (r15_3 == 0)
        r12_2 = nullptr
        int64_t var_60_2 = 0
        int32_t var_58_2 = 0
    else
        int64_t rax_6 = -1
        
        do
            rax_6 += 1
        while (r15_3[rax_6] != 0)
        
        int32_t var_58_1 = rax_6.d
        int32_t r12_1 = (rax_6 + 1).d
        
        if (r12_1 u> 0x80 && r12_1 != 0)
            char* rax_7 = sub_140a84c80(0, sx.q(r12_1), 0)
            rdx_3 = rax_7
            var_68_1 = rax_7
        
        void var_e8
        char* rcx_8 = &var_e8
        
        if (rdx_3 != 0)
            rcx_8 = rdx_3
        
        int16_t var_148_1
        var_148_1.b = 0x3f
        sub_14060abb0(rcx_8, r12_1, r15_3, r12_1, var_148_1.b)
        r12_2 = rcx_8
        rdx_3 = var_68_1
    
    if (rdx_3 != 0)
        sub_140a74f90(rdx_3)
    
    int32_t rax_8 = arg2[1].d
    int32_t r15_4 = rax_8 - 1
    
    if (rax_8 == 0)
        r15_4 = 0
    
    char* rax_9 = j_sub_140a82f30(zx.q((r15_4 & 0xfffffff0) + 0x10))
    char* rdx_6 = rax_9
    var_138 = rax_9
    result_1 = &var_138
    int32_t i = 0
    
    if (arg2[1].d == 0)
        goto label_1406cd9e7
    
    int16_t* rcx_11 = *arg2
    
    if (*rcx_11 == 0)
        goto label_1406cd9e7
    
    while (i s< (r15_4 & 0xfffffff0) + 0x10)
        *rdx_6 = *rcx_11 - 1
        rcx_11 = &rcx_11[1]
        i += 1
        rdx_6 = &rdx_6[1]
        
        if (*rcx_11 == 0)
            break
    
    if (i == 0)
        rdx_6 = var_138
    label_1406cd9e7:
        *result = nullptr
        result[1] = 0
        j_sub_140a74f90(rdx_6)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        int64_t rcx_21 = *arg2
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
    else
        sub_140aef420(var_138, (r15_4 & 0xfffffff0) + 0x10, r12_2)
        int64_t var_100
        sub_140597da0(arg2, sub_140a241e0(&var_100, var_138, (r15_4 & 0xfffffff0) + 0x10))
        int64_t rcx_15 = var_100
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        result_1 = result
        *result = nullptr
        *result = *arg2
        *arg2 = 0
        result[1].d = arg2[1].d
        *(result + 0xc) = *(arg2 + 0xc)
        arg2[1] = 0
        j_sub_140a74f90(var_138)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        int64_t rcx_18 = *arg2
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
else
    *arg1 = 0
    arg1[1] = 0
    int64_t rcx_1 = *arg2
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

int64_t rcx_22 = *arg3

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

__security_check_cookie(rax_1 ^ &var_168)
return result

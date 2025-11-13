// 函数: sub_1406cc0c0
// 地址: 0x1406cc0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
char* var_148 = arg1
int64_t* var_110 = arg2
int64_t* var_108 = arg3

if (arg2[1].d s<= 1)
    *arg1 = 0
    arg1[1] = 0
    int64_t rcx = *arg2
    
    if (rcx != 0)
        sub_140a74f90(rcx)
else if (arg3[1].d s> 1)
    int64_t var_140 = 0
    int32_t var_138_1 = 0
    sub_1405947f0(&var_140, 7)
    int32_t rax_2 = var_138_1 + 7
    var_138_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_140)
    
    int64_t r13_1 = var_140
    sub_1405a7220(r13_1, 7, "EL@$@!", 7, 0x3f)
    int16_t* rdx_1
    
    if (arg3[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg3
    
    int64_t var_130
    int64_t* rax_3 = sub_1406cfbb0(&var_130, rdx_1)
    
    if (arg3 != rax_3)
        int64_t rcx_6 = *arg3
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        *arg3 = *rax_3
        *rax_3 = 0
        arg3[1].d = rax_3[1].d
        *(arg3 + 0xc) = *(rax_3 + 0xc)
        rax_3[1] = 0
    
    int64_t rcx_7 = var_130
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int16_t* r15_2 = *arg3
    char* rdx_2 = nullptr
    char* var_68_1 = nullptr
    int16_t var_158_1
    char* r12_2
    
    if (r15_2 == 0)
        r12_2 = nullptr
        int64_t var_60_2 = 0
        int32_t var_58_2 = 0
    else
        int64_t rax_7 = -1
        
        do
            rax_7 += 1
        while (r15_2[rax_7] != 0)
        
        int32_t var_58_1 = rax_7.d
        int32_t r12_1 = (rax_7 + 1).d
        
        if (r12_1 u> 0x80 && r12_1 != 0)
            char* rax_8 = sub_140a84c80(0, sx.q(r12_1), 0)
            rdx_2 = rax_8
            var_68_1 = rax_8
        
        void var_e8
        char* rcx_8 = &var_e8
        
        if (rdx_2 != 0)
            rcx_8 = rdx_2
        
        var_158_1.b = 0x3f
        sub_14060abb0(rcx_8, r12_1, r15_2, r12_1, var_158_1.b)
        r12_2 = rcx_8
        rdx_2 = var_68_1
    
    if (rdx_2 != 0)
        sub_140a74f90(rdx_2)
    
    int32_t rax_9 = arg2[1].d
    int32_t r15_3 = rax_9 - 1
    
    if (rax_9 == 0)
        r15_3 = 0
    
    char* rax_10 = j_sub_140a82f30(zx.q((r15_3 & 0xfffffff0) + 0x10))
    var_148 = rax_10
    char** var_100_1 = &var_148
    
    if (sub_140a35650(arg2, rax_10, (r15_3 & 0xfffffff0) + 0x10) == 0)
        *arg1 = 0
        arg1[1] = 0
        j_sub_140a74f90(var_148)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        int64_t rcx_26 = *arg2
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
    else
        sub_140aed610(var_148, (r15_3 & 0xfffffff0) + 0x10, r12_2)
        sub_140597da0(arg2, sub_1406cb760(&var_130, var_148, (r15_3 & 0xfffffff0) + 0x10))
        int64_t rcx_15 = var_130
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        __builtin_memset(&var_130, 0, 0x1c)
        var_158_1.d = 0
        int64_t var_120
        sub_14060a620(arg2, &var_140, &var_120, &var_130, var_158_1, 0)
        int64_t r12_3 = var_120
        
        if (arg2 != &var_120)
            int32_t r8_5 = *(arg2 + 0xc)
            int32_t var_118
            arg2[1].d = var_118
            
            if (var_118 != 0 || r8_5 != 0)
                sub_1405a4c70(arg2, var_118, r8_5)
                memcpy(*arg2, r12_3, var_118 * 2)
            else
                *(arg2 + 0xc) = 0
        
        int64_t* var_f8_1 = arg1
        *arg1 = 0
        *arg1 = *arg2
        *arg2 = 0
        arg1[1].d = arg2[1].d
        *(arg1 + 0xc) = *(arg2 + 0xc)
        arg2[1] = 0
        int64_t rcx_19 = var_130
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        if (r12_3 != 0)
            sub_140a74f90(r12_3)
        
        j_sub_140a74f90(var_148)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        int64_t rcx_23 = *arg2
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
else
    *arg1 = 0
    arg1[1] = 0
    int64_t rcx_1 = *arg2
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

int64_t rcx_27 = *arg3

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

__security_check_cookie(rax_1 ^ &var_178)
return arg1

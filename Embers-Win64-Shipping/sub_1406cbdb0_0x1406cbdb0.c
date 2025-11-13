// 函数: sub_1406cbdb0
// 地址: 0x1406cbdb0
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
    
    int64_t r12_1 = var_140
    sub_1405a7220(r12_1, 7, "EL@$@!", 7, 0x3f)
    int16_t* r15_1 = *arg3
    char* rdx_1 = nullptr
    char* var_68_1 = nullptr
    int16_t var_158_1
    char* r13_2
    
    if (r15_1 == 0)
        r13_2 = nullptr
        int64_t var_60_2 = 0
        int32_t var_58_2 = 0
    else
        int64_t rax_3 = -1
        
        do
            rax_3 += 1
        while (r15_1[rax_3] != 0)
        
        int32_t var_58_1 = rax_3.d
        int32_t r13_1 = (rax_3 + 1).d
        
        if (r13_1 u> 0x80 && r13_1 != 0)
            char* rax_4 = sub_140a84c80(0, sx.q(r13_1), 0)
            rdx_1 = rax_4
            var_68_1 = rax_4
        
        void var_e8
        char* rcx_5 = &var_e8
        
        if (rdx_1 != 0)
            rcx_5 = rdx_1
        
        var_158_1.b = 0x3f
        sub_14060abb0(rcx_5, r13_1, r15_1, r13_1, var_158_1.b)
        r13_2 = rcx_5
        rdx_1 = var_68_1
    
    if (rdx_1 != 0)
        sub_140a74f90(rdx_1)
    
    int32_t rax_5 = arg2[1].d
    int32_t r15_2 = rax_5 - 1
    
    if (rax_5 == 0)
        r15_2 = 0
    
    char* rax_6 = j_sub_140a82f30(zx.q((r15_2 & 0xfffffff0) + 0x10))
    var_148 = rax_6
    char** var_100_1 = &var_148
    int16_t* rcx_8
    
    if (arg2[1].d == 0)
        rcx_8 = &data_142d40450
    else
        rcx_8 = *arg2
    
    if (sub_140ae4700(rcx_8, (r15_2 & 0xfffffff0) + 0x10, rax_6) == 0)
        *arg1 = 0
        arg1[1] = 0
        j_sub_140a74f90(var_148)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        int64_t rcx_21 = *arg2
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
    else
        sub_140aed610(var_148, (r15_2 & 0xfffffff0) + 0x10, r13_2)
        int64_t var_130
        sub_140597da0(arg2, sub_1406cb760(&var_130, var_148, (r15_2 & 0xfffffff0) + 0x10))
        int64_t rcx_12 = var_130
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        __builtin_memset(&var_130, 0, 0x20)
        var_158_1.d = 0
        int64_t var_120
        sub_14060a620(arg2, &var_140, &var_130, &var_120, var_158_1, 0)
        int64_t* var_f8_1 = arg1
        *arg1 = 0
        *arg1 = *arg2
        *arg2 = 0
        arg1[1].d = arg2[1].d
        *(arg1 + 0xc) = *(arg2 + 0xc)
        arg2[1] = 0
        int64_t rcx_14 = var_120
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int64_t rcx_15 = var_130
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        j_sub_140a74f90(var_148)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
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

__security_check_cookie(rax_1 ^ &var_178)
return arg1

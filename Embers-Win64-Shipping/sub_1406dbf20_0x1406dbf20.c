// 函数: sub_1406dbf20
// 地址: 0x1406dbf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140b3db50()
int32_t var_88
int64_t rbx = *sub_140b58170(&var_88, "RegularExpressionBlueprints", 1)
j_sub_140b3db50()
void* rax_1 = sub_140b3da90(&data_143de7d78, rbx)
int32_t arg_8 = 0xffffffff
int64_t arg_38
sub_1406da470(rax_1, arg1, arg_38, &arg_8, arg7)
int32_t rcx_3
rcx_3.b = sub_140b5b8a0(arg_38.d, 0) == 0
char var_c8
int32_t r8_1

if ((arg_38:4.d != 0 | rcx_3.b) != 0)
    int64_t rbx_1 = 0
    int64_t var_98 = 0
    int64_t var_90_1 = 0
    sub_1405947f0(&var_98, 3)
    int32_t r13_1 = var_90_1:4.d
    int32_t rdi_1 = var_90_1.d + 3
    var_90_1.d = rdi_1
    
    if (rdi_1 s> r13_1)
        sub_140594770(&var_98)
        r13_1 = var_90_1:4.d
        rdi_1 = var_90_1.d
    
    int64_t r12_1 = var_98
    var_88.q = r12_1
    var_c8.w = 0x3f
    sub_1405a7220(r12_1, 3, "] ", 3, 0x3f)
    int64_t var_a8 = 0
    int64_t var_a0_1 = 0
    sub_1405947f0(&var_a8, 2)
    int32_t r15_1 = var_a0_1.d + 2
    var_a0_1.d = r15_1
    
    if (r15_1 s> 0)
        sub_140594770(&var_a8)
        r15_1 = var_a0_1.d
    
    int64_t rax_3 = var_a8
    var_c8.w = 0x3f
    int64_t var_58_1 = rax_3
    sub_1405a7220(rax_3, 2, U"[", 2, 0x3f)
    int64_t var_50
    int64_t* rax_4 = sub_140b63b70(&arg_38, &var_50)
    int32_t rax_5
    int64_t r15_2
    
    if (r15_1 s> 1)
        int32_t rax_6 = rax_4[1].d
        int32_t r12_2 = rax_6 - 1
        
        if (rax_6 == 0)
            r12_2 = 0
        
        int32_t rcx_11
        
        if (r15_1 == 0)
            rcx_11 = r15_1 + 1
        
        if (r15_1 != 0 || r12_2 == 0)
            rcx_11 = 0
        
        int64_t var_80 = var_a8
        int32_t rdx_6 = r12_2 + r15_1 + rcx_11
        int32_t rax_8 = var_a0_1:4.d
        var_58_1 = 0
        
        if (rdx_6 s> rax_8)
            sub_1405947f0(&var_80, rdx_6)
        
        sub_140a20ba0(&var_80, *rax_4, r12_2)
        rax_5 = r15_1
        r8_1 = rax_8
        r15_2 = var_80
        r12_1 = var_98
        int32_t var_78_1
        var_78_1.q = 0
        var_80 = 0
    else
        r15_2 = *rax_4
        *rax_4 = 0
        rax_5 = rax_4[1].d
        r8_1 = *(rax_4 + 0xc)
        rax_4[1] = 0
    
    var_a8 = r15_2
    
    if (rax_5 s> 1)
        int32_t rdi_2
        
        if (rdi_1 == 0)
            rdi_2 = 0
        else
            rdi_2 = rdi_1 - 1
        
        int32_t rcx_14
        
        if (rax_5 == 0)
            rcx_14 = rax_5 + 1
        
        if (rax_5 != 0 || rdi_2 == 0)
            rcx_14 = 0
        
        var_98 = r15_2
        int32_t rdx_9 = rcx_14 + rax_5 + rdi_2
        var_a8 = 0
        var_90_1.d = rax_5
        r15_2 = 0
        var_90_1:4.d = r8_1
        
        if (rdx_9 s> r8_1)
            sub_1405947f0(&var_98, rdx_9)
        
        sub_140a20ba0(&var_98, r12_1, rdi_2)
        r12_1 = var_98
        rdi_1 = var_90_1.d
        r13_1 = var_90_1:4.d
        var_98 = 0
        int64_t var_90_2 = 0
    else
        var_88.q = 0
    
    int32_t rsi_2 = arg1[1].d
    int32_t rdi_4
    
    if (rdi_1 s> 1)
        int32_t r15_3 = rsi_2 - 1
        
        if (rsi_2 == 0)
            r15_3 = 0
        
        int32_t rax_9
        
        if (rdi_1 == 0)
            rax_9 = rdi_1 + 1
        
        if (rdi_1 != 0 || r15_3 == 0)
            rax_9 = 0
        
        int64_t var_70 = r12_1
        int32_t rdx_14 = rax_9 + r15_3 + rdi_1
        r12_1 = 0
        
        if (rdx_14 s> r13_1)
            sub_1405947f0(&var_70, rdx_14)
        
        sub_140a20ba0(&var_70, *arg1, r15_3)
        int64_t rax_10 = var_70
        rsi_2 = rdi_1
        rdi_4 = r13_1
        r15_2 = var_a8
        var_70 = 0
        int32_t var_68_1
        var_68_1.q = 0
        rbx_1 = rax_10
    else
        int64_t rdi_3 = *arg1
        var_a8 = 0
        var_a0_1.d = rsi_2
        
        if (rsi_2 != 0)
            sub_1405a4c70(&var_a8, rsi_2, 0)
            rbx_1 = var_a8
            memcpy(rbx_1, rdi_3, rsi_2 * 2)
            rdi_4 = var_a0_1:4.d
            rsi_2 = var_a0_1.d
        else
            rdi_4 = 0
    
    if (arg1 != &var_a8)
        int64_t rcx_21 = *arg1
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        *arg1 = rbx_1
        arg1[1].d = rsi_2
        *(arg1 + 0xc) = rdi_4
    else if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
    
    if (r15_2 != 0)
        sub_140a74f90(r15_2)
    
    int64_t rcx_25 = var_50
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    int64_t rax_12 = var_88.q
    
    if (rax_12 != 0)
        sub_140a74f90(rax_12)

r8_1.b = 1
int32_t var_60
char* result
int512_t zmm2
result, zmm2 = sub_140ae16d0(arg4, &var_60, r8_1.b)

if (arg2 != 0)
    result = &var_88
    zmm2.o = arg6
    data_143f5b298
    int32_t* var_b8_1 = &var_88
    char var_c0_1 = 1
    var_c8.q = arg1
    var_88 = arg5
    int32_t var_84_1 = arg5

int64_t rcx_30 = *arg1

if (rcx_30 == 0)
    return result

return sub_140a74f90(rcx_30)

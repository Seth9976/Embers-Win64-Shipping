// 函数: sub_1425e3270
// 地址: 0x1425e3270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg4
*arg1 = *arg7
int32_t arg_20 = 0
*(arg1 + 8) = *arg2
sub_140596d10(&arg1[3], arg3)
bool rdx_1 = sub_140b5b8a0(*arg7, 0) == 0
uint64_t var_68
int64_t* var_58
int64_t var_48
int64_t* rdx_8
int32_t rbx_2
int64_t* rsi

if ((*(arg7 + 4) != 0 | rdx_1) == 0)
    int32_t rbx_3 = arg5[1].d
    int64_t rsi_1 = *arg5
    var_58 = nullptr
    int32_t var_50_2 = rbx_3
    
    if (rbx_3 != 0)
        sub_1405a4c70(&var_58, rbx_3, 0)
        memcpy(var_58, rsi_1, rbx_3 * 2)
    else
        int32_t var_4c_2 = 0
    
    rsi = arg7
    rdx_8 = &var_58
    rbx_2 = 8
else
    int64_t* rax_2
    rax_2, zmm6 = sub_140b63b70(arg7, &var_48)
    int64_t* rcx_3 = *rax_2
    int32_t rdx_3 = rax_2[1].d
    int32_t rdx_4 = neg.d(rdx_3)
    *rax_2 = 0
    int32_t r8 = rax_2[1].d
    int64_t* var_78 = rcx_3
    int32_t rcx_4 = *(rax_2 + 0xc)
    int32_t rdx_7 = sbb.d(rdx_4, rdx_4, rdx_3 != 0) + 3 + r8
    rax_2[1] = 0
    
    if (rdx_7 s> rcx_4)
        sub_1405947f0(&var_78, rdx_7)
    
    sub_140a20ba0(&var_78, &data_142d85f5c, 2)
    rsi = var_78
    int32_t rbx_1 = arg5[1].d
    var_78 = nullptr
    int32_t var_70_1
    var_70_1.q = 0
    
    if (r8 s> 1)
        int32_t r14_2 = rbx_1 - 1
        
        if (rbx_1 == 0)
            r14_2 = 0
        
        int32_t rcx_9
        
        if (r8 == 0)
            rcx_9 = r8 + 1
        
        if (r8 != 0 || r14_2 == 0)
            rcx_9 = 0
        
        var_58 = rsi
        int32_t rdx_12 = r8 + rcx_9 + r14_2
        rsi = nullptr
        
        if (rdx_12 s> rcx_4)
            sub_1405947f0(&var_58, rdx_12)
        
        sub_140a20ba0(&var_58, *arg5, r14_2)
        rdx_8 = &var_68
        rbx_2 = 7
        var_68 = var_58
        int32_t var_60_2 = r8
        int32_t var_5c_2 = rcx_4
    else
        int64_t r14_1 = *arg5
        var_68 = 0
        int32_t var_60_1 = rbx_1
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_68, rbx_1, 0)
            memcpy(var_68, r14_1, rbx_1 * 2)
            rdx_8 = &var_68
            rbx_2 = 7
        else
            rdx_8 = &var_68
            int32_t var_5c_1 = 0
            rbx_2 = 7

sub_140596d10(&arg1[5], rdx_8)

if ((rbx_2.b & 8) != 0)
    int64_t* rcx_15 = var_58
    rbx_2 &= 0xfffffff7
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

if ((rbx_2.b & 4) != 0)
    uint64_t rcx_16 = var_68
    rbx_2 &= 0xfffffffb
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)

if ((rbx_2.b & 2) != 0)
    rbx_2 &= 0xfffffffd
    
    if (rsi != 0)
        sub_140a74f90(rsi)

if ((rbx_2.b & 1) != 0)
    int64_t rcx_18 = var_48
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

sub_140b21590(&arg1[7])
arg1[9].b = arg6
arg1[8] = fconvert.d(zmm6.d)
return arg1

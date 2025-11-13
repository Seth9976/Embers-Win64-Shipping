// 函数: sub_14212ec40
// 地址: 0x14212ec40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8

if (arg2[8].d s< 0x104)
    int64_t* var_b8 = nullptr
    int32_t i_2 = 0
    int512_t zmm1 = sub_140a3cdd0(arg2, &var_b8, arg4)
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x2c)
    int32_t var_4c_1 = 0x80
    int32_t var_48_1 = 0xffffffff
    int32_t var_44_1 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    arg4 = sub_14211bd20(arg2, &var_78, zmm1)
    int64_t* rcx_2 = arg2[1]
    int32_t* rdx_2 = *rcx_2
    int32_t var_bc
    
    if (&rdx_2[1] u> rcx_2[1])
        int32_t* rdx_3 = &var_bc
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_3, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_3, 4)
    else
        var_bc = *rdx_2
        *rcx_2 += 4
    *(arg1 + 0x1c) = 2
    arg1[3].d = 1
    int64_t var_a8 = 0
    int64_t var_a0_1 = 0
    sub_1409ac860(arg2, &var_a8, arg4)
    uint64_t var_88 = 0
    int64_t var_80_1 = 0
    sub_1408dc5a0(arg2, &var_88, arg4)
    int64_t* rcx_6 = arg2[1]
    int64_t rax_6 = *rcx_6 + 4
    char var_c8
    int32_t var_c0
    
    if (rax_6 u> rcx_6[1])
        int32_t rax_7
        rax_7.b = var_c8 != 0
        var_c0 = rax_7
        (*(*arg2 + 0x150))(arg2, &var_c0, 4)
    else
        *rcx_6 = rax_6
    
    int64_t* rcx_8 = arg2[1]
    int64_t rax_10 = *rcx_8 + 4
    
    if (rax_10 u> rcx_8[1])
        int32_t rax_11
        rax_11.b = var_c8 != 0
        var_c0 = rax_11
        (*(*arg2 + 0x150))(arg2, &var_c0, 4)
    else
        *rcx_8 = rax_10
    
    uint64_t var_98 = 0
    int64_t var_90_1 = 0
    sub_1418d6bc0(arg2, &var_98, arg4)
    int64_t* rcx_11 = arg2[1]
    int32_t var_c4 = 0
    int32_t* rdx_9 = *rcx_11
    
    if (&rdx_9[1] u> rcx_11[1])
        int32_t* rdx_10 = &var_c4
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_10, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_10, 4)
    else
        var_c4 = *rdx_9
        *rcx_11 += 4
    
    uint64_t rcx_13 = var_98
    
    if (rcx_13 != 0)
        arg4 = sub_140a74f90(rcx_13)
    
    uint64_t rcx_14 = var_88
    
    if (rcx_14 != 0)
        arg4 = sub_140a74f90(rcx_14)
    
    int32_t var_30_2 = 0
    
    if (var_38_1 != 0)
        arg4 = sub_140a74f90(var_38_1)
    
    int64_t var_70
    var_70.d = 0
    int32_t var_48_2 = 0xffffffff
    int32_t var_44_2 = 0
    int64_t var_68
    sub_14059a8e0(&var_68, 0)
    int64_t var_58
    
    if (var_58 != 0)
        arg4 = sub_140a74f90(var_58)
    
    int64_t rcx_19 = var_78
    
    if (rcx_19 != 0)
        arg4 = sub_140a74f90(rcx_19)
    
    int32_t i_1 = i_2
    int64_t* rdi_1 = var_b8
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_20 = *rdi_1
            
            if (rcx_20 != 0)
                arg4 = sub_140a74f90(rcx_20)
            
            rdi_1 = &rdi_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (var_b8 != 0)
        arg4 = sub_140a74f90(var_b8)

void* result = sub_142130fa0(arg1, arg2, arg3, arg4)
__security_check_cookie(rax_1 ^ &var_e8)
return result

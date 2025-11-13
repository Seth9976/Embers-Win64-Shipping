// 函数: sub_141c91480
// 地址: 0x141c91480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x48)
int64_t* rbx = arg2

if (arg2 != 0)
    void* rax_1 = sub_140bdf2e0()
    void* rdx = rbx[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t* rax_4 = rbx[0x1c]
        
        if (rax_4 != 0 && arg3 == 0)
            rbx = rax_4
    
    void* rax_5 = sub_140d21d80(rbx)
    arg1[1] = *(rax_5 + 0x18)
    int64_t arg_8 = *(rax_5 + 0x18)
    int64_t var_58
    sub_140b63b70(&arg_8, &var_58)
    int64_t var_48
    int64_t* rax_6 = sub_140baa480(&var_48, &var_58)
    int16_t* const rdi_1 = &data_142d40450
    int16_t* rdx_3
    
    if (rax_6[1].d == 0)
        rdx_3 = &data_142d40450
    else
        rdx_3 = *rax_6
    
    void arg_10
    arg1[2] = *sub_140b58260(&arg_10, rdx_3, 1)
    int64_t rcx_8 = var_48
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t rcx_9 = var_58
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    arg1[3] = rbx[3]
    arg1[4] = *(rbx[2] + 0x18)
    int16_t** rax_10 = sub_140d21e10(rbx, &var_48, 0)
    
    if (rax_10[1].d != 0)
        rdi_1 = *rax_10
    
    *arg1 = *sub_140b58260(&arg_8, rdi_1, 1)
    int64_t rcx_14 = var_48
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int32_t* i_2 = nullptr
    int32_t i_4 = 0
    (*(*rbx + 0x180))(rbx, &i_2)
    int32_t* i = i_2
    var_58 = 0
    int64_t var_50_1 = 0
    
    for (; i != &i[sx.q(i_4) * 8]; i = &i[8])
        int32_t rcx_16
        rcx_16.b = sub_140b5b8a0(*i, 0) == 0
        
        if ((i[1] != 0 | rcx_16.b) != 0 && i[4] s> 1)
            sub_141c8f680(&var_58, i, &i[2])
    
    sub_140de18c0(&arg1[5], sub_141c922a0(&var_48, &var_58))
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp1_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    sub_14090a0d0(&arg1[7], rax_5 + 0x40)
    arg1[9].d = *(rax_5 + 0x50)
    sub_1408464b0(&var_58)
    int32_t i_3 = i_4
    
    if (i_3 != 0)
        void* rbx_3 = &i_2[2]
        int32_t i_1
        
        do
            int64_t rcx_24 = *rbx_3
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            rbx_3 += 0x20
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    int32_t* i_5 = i_2
    
    if (i_5 != 0)
        sub_140a74f90(i_5)

return arg1

// 函数: sub_140da4220
// 地址: 0x140da4220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98
sub_140d93c00(&var_98, arg2, arg4, arg3)
int32_t arg_8
sub_140da07e0(arg1 + 0x40, &arg_8, &var_98)
int64_t rax = sx.q(arg_8)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x90 + *(arg1 + 0x40)

int64_t* rdi = rax_3 + 0x78

if (rax_3 == 0)
    rdi = nullptr

int64_t* var_60
int64_t result

if (rdi == 0)
    int64_t* rax_4 = j_sub_140a82f30(0xe8)
    int64_t* rbx_1 = rax_4
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        void* rcx_2 = &rax_4[2]
        *rax_4 = 0
        rax_4[1] = 0
        *(rcx_2 + 0x10) = 0
        *(rcx_2 + 0x18) = 0
        *(rcx_2 + 0x1c) = 0x80
        void* rax_5 = *(rcx_2 + 0x10)
        
        if (rax_5 != 0)
            rcx_2 = rax_5
        
        int64_t rax_6 = var_98
        *rcx_2 = 0
        *(rcx_2 + 8) = 0
        rbx_1[6].d = 0xffffffff
        *(rbx_1 + 0x34) = 0
        rbx_1[8] = 0
        rbx_1[9].d = 0
        rbx_1[0xa] = 0
        rbx_1[0xb] = 0
        rbx_1[0xc] = rax_6
        int64_t var_90
        rbx_1[0xd] = var_90
        int128_t var_88
        *(rbx_1 + 0x70) = var_88
        int128_t var_78
        *(rbx_1 + 0x80) = var_78
        int64_t var_68
        rbx_1[0x12] = var_68
        rbx_1[0x13] = var_60
        
        if (var_60 != 0)
            var_60[1].d += 1
        
        int64_t var_58
        rbx_1[0x14] = var_58
        int32_t var_50
        rbx_1[0x15].d = var_50
        char var_4c
        *(rbx_1 + 0xac) = var_4c
        int128_t var_48
        *(rbx_1 + 0xb0) = var_48
        int32_t var_24
        *(rbx_1 + 0xd4) = var_24
        int32_t var_28
        rbx_1[0x1a].d = var_28.d
        int128_t var_38
        *(rbx_1 + 0xc0) = var_38
        rbx_1[0x1b] = arg1
        rbx_1[0x1c] = 0x100
    
    void*** rax_14 = j_sub_140a82f30(0x18)
    
    if (rax_14 == 0)
        rax_14 = nullptr
    else
        rax_14[1].d = 1
        *rax_14 = &data_142ec7b28
        *(rax_14 + 0xc) = 1
        rax_14[2] = rbx_1
    
    int64_t* var_a8 = rbx_1
    int64_t* var_a0_1 = rax_14
    result = *sub_140d8c430(arg1 + 0x40, &var_98, &var_a8)
    
    if (var_a0_1 != 0)
        var_a0_1[1].d -= 1
        
        if (var_a0_1[1].d == 1)
            (**var_a0_1)(var_a0_1)
            int32_t temp3_1 = *(var_a0_1 + 0xc)
            *(var_a0_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_a0_1 + 8))(var_a0_1, 1)
else
    result = *rdi

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp1_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_5 = *var_60
            (*(r8_5 + 8))(var_60, 1, r8_5)

return result

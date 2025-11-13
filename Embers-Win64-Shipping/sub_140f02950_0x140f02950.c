// 函数: sub_140f02950
// 地址: 0x140f02950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_a0
sub_140efd250(*arg1, &var_a0, arg2, arg4)
char arg_8
sub_140da7e40(var_a0, &arg_8, arg3)
int64_t* var_98
uint32_t rdi

if (arg5 != 0)
    rdi = zx.d(arg_8)
    arg5 = 0
else
    int16_t var_6c_1 = arg2[3].w
    int64_t var_68_1 = *(arg2 + 0x10)
    int64_t var_60_1 = *(arg2 + 0x18)
    int32_t var_70_1 = arg2[2].d
    int64_t var_38_1 = *(arg2 + 0x40)
    int64_t* rax_5 = *(arg2 + 0x48)
    int128_t var_58_1 = *(arg2 + 0x20)
    int128_t var_48_1 = *(arg2 + 0x30)
    
    if (rax_5 != 0)
        rax_5[1].d += 1
    
    int64_t* rcx_2 = *arg1
    int64_t var_28_1 = *(arg2 + 0x50)
    int32_t var_20_1 = arg2[0x16]
    char var_1c_1 = arg2[0x17].b
    int32_t var_8c_1 = arg3 + 2
    uint32_t var_90 = arg3
    int64_t var_78 = var_90.q
    int64_t* rax_11 = sub_140efd250(rcx_2, &var_90, &var_78, arg4)
    int64_t* rdx_3 = var_a0
    var_a0 = *rax_11
    *rax_11 = rdx_3
    int64_t* rdx_4 = var_98
    var_98 = rax_11[1]
    rax_11[1] = rdx_4
    int64_t* var_88
    
    if (var_88 != 0)
        var_88[1].d -= 1
        
        if (var_88[1].d == 1)
            (**var_88)(var_88)
            int32_t temp3_1 = *(var_88 + 0xc)
            *(var_88 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_88 + 8))(var_88, 1)
    
    void var_a8
    char* rax_14 = sub_140da7e40(var_a0, &var_a8, arg3)
    
    if (rax_14 != &arg_8)
        arg5 = 0
        
        if (rax_14[1] != 0)
            arg_8 = *rax_14
            arg5 = 1
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t temp5_1 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rax_5 + 8))(rax_5, 1)
    
    if (arg5 != 0)
        rdi = zx.d(arg_8)
        arg5 = 0
    else
        rdi.b = 0

if (var_98 != 0)
    var_98[1].d -= 1
    
    if (var_98[1].d == 1)
        (**var_98)(var_98)
        int32_t temp2_1 = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_5 = *var_98
            (*(r8_5 + 8))(var_98, 1, r8_5)

return zx.q(rdi.b)

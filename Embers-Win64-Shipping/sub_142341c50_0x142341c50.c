// 函数: sub_142341c50
// 地址: 0x142341c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_34
int32_t var_34_1 = var_34 & 0xffffff00
int64_t var_e0 = 0
int64_t var_d8 = 0
char var_c8 = 0
int64_t var_c0
__builtin_memset(&var_c0, 0, 0x88)
char var_e8 = 1
int32_t var_38 = 0x20702
sub_1405979f0(arg1 + 0x10, &var_e8)
sub_140597700(&var_e8)
sub_140d96150(arg1 + 0x120, arg3)
uint128_t zmm0 = sub_142348be0(arg1 - 0xd0, arg3, arg4)

if (*(arg1 - 0x98) != 0)
    int64_t* rbx_1 = *(arg1 + 0x188)
    int64_t rcx_4 = 0
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 == 0)
            rbx_1 = nullptr
        else
            rbx_1[1].d = rax_1 + 1
            
            if (rbx_1 != 0)
                rcx_4 = *(arg1 + 0x180)
    
    int64_t var_f8 = rcx_4
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void* r8
    r8.b = 2
    sub_140e892d0(data_143e29f28, &var_f8, r8.b, zmm0)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rcx_10 = *(arg1 - 0x98)
    void* rdx_4 = arg1 - 0xc8
    
    if (arg1 == 0xd0)
        rdx_4 = nullptr
    
    if ((*(*rcx_10 + 0x68))(rcx_10, rdx_4, zx.q(*(arg4 + 0x5d)), arg4 + 0x60, *(arg4 + 0x68)) == 0)
        int32_t var_34_2 = var_34_1 & 0xffffff00
        var_e8 = 0
        int64_t var_e0_1 = 0
        int64_t var_d8_1 = 0
        char var_c8_1 = 0
        int64_t var_c0_1
        __builtin_memset(&var_c0_1, 0, 0x88)
        int32_t var_38_1 = 0x20702
        sub_1405979f0(arg1 + 0x10, &var_e8)
        sub_140597700(&var_e8)

sub_140596b00(arg2, arg1 + 0x10)
return arg2

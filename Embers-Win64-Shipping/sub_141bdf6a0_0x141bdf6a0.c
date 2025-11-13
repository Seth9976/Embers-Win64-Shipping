// 函数: sub_141bdf6a0
// 地址: 0x141bdf6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int128_t var_100
int128_t var_c8
void** var_b0
void*** rax
int32_t rdi

if (arg2 == 0)
    uint128_t zmm1 = data_14399f5c0
    void** var_138
    rax = &var_138
    char var_b8
    char var_b8_1 = var_b8 & 0xfc
    rdi = 2
    int128_t var_130_1 = data_142e05200
    var_138 = &data_142d8ad18
    int64_t var_120_1 = 0
    __builtin_memset(&var_100, 0, 0x20)
    char var_108_1 = 0
    uint128_t var_118_1 = zmm1
    zmm1 = zx.o(data_143dbb1f0)
    arg_8.q = zmm1.q
    int128_t zmm0 = arg3
    int32_t var_d4_1 = zmm0.d
    int32_t var_dc_1 = zmm0.d
    var_c8 = zx.o(0)
    int32_t var_d8_1 = zmm1.d
    int32_t var_e0_1 = zmm1.d
    char var_d0_1 = 0
    int32_t var_cc_1 = 3
else
    rax = sub_14068e310(&var_b0, arg2 + 0x28)
    rdi = 1

uint64_t result = sub_140693270(arg1 + 0x158, rax)

if ((rdi.b & 2) != 0)
    int64_t* rbx_1 = var_c8:8.q
    rdi &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rbx_2 = var_100:8.q
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                result = (*(*rbx_2 + 8))(rbx_2, 1)

if ((rdi.b & 1) != 0)
    var_b0 = &data_142d8ad18
    int64_t* var_38
    
    if (var_38 != 0)
        var_38[1].d -= 1
        
        if (var_38[1].d == 1)
            result = (**var_38)(var_38)
            int32_t temp5_1 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (temp5_1 == 1)
                result = (*(*var_38 + 8))(var_38, 1)
    
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            result = (**var_70)(var_70)
            int32_t temp7_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*var_70 + 8))(var_70, 1)

int64_t* rcx_10 = *(arg1 + 0x260)

if (rcx_10 == 0)
    return result

void* var_158 = arg1 + 0x158
char var_150_1 = 1
int64_t var_148 = 0
int32_t var_140_1 = 0
sub_140f5d380(rcx_10, &var_158)
return sub_140745b20(&var_148)

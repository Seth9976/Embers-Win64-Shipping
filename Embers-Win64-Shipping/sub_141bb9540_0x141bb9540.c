// 函数: sub_141bb9540
// 地址: 0x141bb9540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x39] == 0)
    (*(*arg1 + 0x468))()
    int64_t result = arg1[0x39]
    
    if (result == 0)
        return result

int64_t* (* var_78)(void* arg1, int32_t* arg2) = sub_141bbeac0
int32_t var_bc_1 = 0xffffffff
int128_t var_b8
__builtin_memset(&var_b8, 0, 0x31)
int128_t zmm6 = *arg5
int32_t var_70_1 = 0
int64_t* rax_4 = sub_141bac1d0(&var_b8)
int64_t* rax_5 = sub_140a84c80(0, 0x40, 0)

if (rax_5 != 0)
    *rax_5 = &data_143084880
    sub_140d3a3a0(&rax_5[1], arg1)
    *(rax_5 + 0x10) = var_78.o
    *(rax_5 + 0x20) = zmm6
    rax_5[6] = sub_140a387b0()
    *rax_5 = &data_1430848d8

if (&var_78 != rax_4)
    if (rax_5 != 0)
        (*(*rax_5 + 0x40))(rax_5, rax_4)
    else if (rax_4[1].d != 0)
        int64_t* rcx_3 = *rax_4
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3, 0)
            int64_t rcx_4 = *rax_4
            
            if (rcx_4 != 0)
                *rax_4 = sub_140a84c80(rcx_4, 0, 0)
            
            rax_4[1].d = 0

if (rax_5 != 0)
    (*(*rax_5 + 0x38))(rax_5, 0)
    int64_t rax_11 = sub_140a84c80(rax_5, 0, 0)
    
    if (rax_11 != 0)
        sub_140a74f90(rax_11)

char var_c8
char var_68 = (var_c8 & 0xfc) | arg4
char var_66_1 = arg3
int64_t var_64_1 = arg2
int32_t var_5c_1 = 0xffffffff
int64_t var_58_1 = var_b8.q
void* rax_17 = var_b8:8.q
char var_c7
char var_67
char var_67_1 = var_67 ^ ((var_67 ^ (var_c7 & 0xfe)) & 1)
void* var_50_1 = rax_17

if (rax_17 != 0)
    *(rax_17 + 8) += 1

int128_t var_a8
int64_t var_48_1 = var_a8.q
void* rax_19 = var_a8:8.q
void* var_40_1 = rax_19

if (rax_19 != 0)
    *(rax_19 + 8) += 1

int128_t var_98
int64_t var_38_1 = var_98.q
void* rax_21 = var_98:8.q
void* var_30_1 = rax_21

if (rax_21 != 0)
    *(rax_21 + 8) += 1

char var_88
char var_28_1 = var_88
sub_141f06fc0(arg1[0x39], &var_68)
return sub_141b84450(&var_b8)

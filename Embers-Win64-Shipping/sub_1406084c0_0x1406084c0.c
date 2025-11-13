// 函数: sub_1406084c0
// 地址: 0x1406084c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x80)

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)
    *(arg1 + 0x80) = 0

int64_t* rcx_1 = *(arg1 + 0x88)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)
    *(arg1 + 0x88) = 0

int64_t* rcx_2 = *(arg1 + 0x90)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)
    *(arg1 + 0x90) = 0

*(arg1 + 0xe0) = 0

if (*(arg1 + 0xe4) != 0)
    sub_1405a5410(arg1 + 0xd8, 0)

*(arg1 + 0xf0) = 0

if (*(arg1 + 0xf4) != 0)
    sub_1405a5410(arg1 + 0xe8, 0)

*(arg1 + 0x10) = 0
int64_t* rcx_5 = *(arg1 + 0x60)

if (rcx_5 == 0)
    return 

int64_t* arg_18 = nullptr

if ((*(*rcx_5 + 0x70))(rcx_5, &arg_18) s>= 0)
    int64_t* rcx_6 = arg_18
    (**rcx_6)(rcx_6, &data_142d5fe60, arg1 + 0x80)

if (MFGetService(*(arg1 + 0x60), &data_142d5b2e8, &data_142d5fe70, arg1 + 0x88) s>= 0)
    int64_t* rcx_8 = *(arg1 + 0x88)
    
    if ((*(*rcx_8 + 0x20))(rcx_8, 0, arg1 + 0xc0) s< 0)
        *(arg1 + 0xc0) = 0x3f800000

MFGetService(*(arg1 + 0x60), &data_142d5b2e8, &data_142d5fe80, arg1 + 0x90)
int64_t* rcx_10 = *(arg1 + 0x90)

if (rcx_10 != 0)
    int512_t zmm2
    zmm2.o = zx.o(0)
    int32_t rax_11
    rax_11.b = (*(*rcx_10 + 0x28))(rcx_10, 1, zmm2, 0) s>= 0
    *(arg1 + 0x10) = rax_11.b
    int32_t arg_10 = 0
    int32_t arg_8 = 0
    int64_t* rcx_11 = *(arg1 + 0x90)
    char var_68
    int64_t var_58
    int32_t arg_24
    
    if ((*(*rcx_11 + 0x18))(rcx_11, 0, 1, &arg_8) s>= 0)
        int64_t* rcx_12 = *(arg1 + 0x90)
        
        if ((*(*rcx_12 + 0x20))(rcx_12, 0, 1, &arg_10) s>= 0)
            var_68 = 1
            int32_t var_64_1 = arg_10.d
            arg_24 = arg_8
            var_58 = 1.q
            int64_t var_50_1 = var_68.q
            var_58.o = var_58.o
            sub_1405d62f0(arg1 + 0xd8, &var_58)
    
    int64_t* rcx_14 = *(arg1 + 0x90)
    
    if ((*(*rcx_14 + 0x18))(rcx_14, 1, 1, &arg_8, var_68, -2) s>= 0)
        int64_t* rcx_15 = *(arg1 + 0x90)
        
        if ((*(*rcx_15 + 0x20))(rcx_15, 1, 1, &arg_10) s>= 0)
            var_68 = 1
            int32_t var_64_2 = arg_8.d
            arg_24 = arg_10
            var_58 = 1.q
            int64_t var_50_2 = var_68.q
            var_58.o = var_58.o
            sub_1405d62f0(arg1 + 0xd8, &var_58)
    
    int64_t* rcx_17 = *(arg1 + 0x90)
    
    if ((*(*rcx_17 + 0x18))(rcx_17, 0, 0, &arg_8, var_68) s>= 0)
        int64_t* rcx_18 = *(arg1 + 0x90)
        
        if ((*(*rcx_18 + 0x20))(rcx_18, 0, 0, &arg_10) s>= 0)
            var_68 = 1
            int32_t var_64_3 = arg_10.d
            arg_24 = arg_8
            var_58 = 1.q
            int64_t var_50_3 = var_68.q
            var_58.o = var_58.o
            sub_1405d62f0(arg1 + 0xe8, &var_58)
    
    int64_t* rcx_20 = *(arg1 + 0x90)
    
    if ((*(*rcx_20 + 0x18))(rcx_20, 1, 0, &arg_8, var_68) s>= 0)
        int64_t* rcx_21 = *(arg1 + 0x90)
        
        if ((*(*rcx_21 + 0x20))(rcx_21, 1, 0, &arg_10) s>= 0)
            var_68 = 1
            int32_t var_64_4 = arg_8.d
            arg_24 = arg_10
            var_58 = 1.q
            int64_t var_50_4 = var_68.q
            var_58.o = var_58.o
            sub_1405d62f0(arg1 + 0xe8, &var_58)
    
    int64_t* rcx_23 = *(arg1 + 0x90)
    zmm2.o = zx.o(0)
    
    if ((*(*rcx_23 + 0x28))(rcx_23, 0, zmm2, 0, var_68) s>= 0
            && sub_1405f2790(arg1 + 0xd8, (zx.o(0)).d).b == 0
            && sub_1405f2790(arg1 + 0xe8, (zx.o(0)).d).b == 0)
        int32_t var_64_5 = 0
        arg_24 = 0
        var_58 = 1.q
        int64_t var_50_5 = 1.q
        var_58.o = var_58.o
        sub_1405d62f0(arg1 + 0xe8, &var_58)

int64_t* rcx_27 = arg_18

if (rcx_27 != 0)
    (*(*rcx_27 + 0x10))(rcx_27)

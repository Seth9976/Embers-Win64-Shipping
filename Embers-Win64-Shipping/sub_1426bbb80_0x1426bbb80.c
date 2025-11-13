// 函数: sub_1426bbb80
// 地址: 0x1426bbb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int16_t arg_12 = *(arg2 + 0x50)
int16_t arg_10 = *(arg1 + 0x118) - 1
int32_t var_30_1 = 0
int64_t (* var_38)(int64_t* arg1, void* arg2, int64_t* arg3) = sub_1426bb9e0
int32_t* var_48 = nullptr
int32_t* rax_3 = sub_140a84c80(0, 0x30, 0)
var_48 = rax_3
int32_t var_40_1 = 3

if (rax_3 != 0)
    *rax_3 = &data_143084628
    sub_140d3a3a0(&rax_3[2], arg2)
    *(rax_3 + 0x10) = var_38.o
    *(rax_3 + 0x28) = sub_140a387b0()
    *rax_3 = &data_143084680

var_38 = &arg_10
void var_28
var_30_1.q = sub_1426ce680(&var_28, arg1, arg3, &var_48)
void arg_20
sub_1426a2330(arg1 + 0x1c0, &arg_20, &var_38, nullptr)
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

int32_t* rax

if (var_40_1 == 0)
    rax = var_48
label_1426bbcdd:
    
    if (rax != 0)
        sub_140a74f90(rax)
    
    return 

int32_t* rcx_5 = var_48

if (rcx_5 == 0)
    return 

(*(*rcx_5 + 0x38))(rcx_5, 0)
rax = var_48

if (rax != 0)
    rax = sub_140a84c80(rax, 0, 0)
    var_48 = rax

int32_t var_40_2 = 0
goto label_1426bbcdd

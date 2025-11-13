// 函数: sub_14224fb90
// 地址: 0x14224fb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb8) == 0)
    return 

int32_t var_10_1 = 0
int64_t (* var_18_1)(void* arg1) = sub_14224ff80
int64_t* var_28 = nullptr
int64_t* rax_1 = sub_140a84c80(0, 0x30, 0)
var_28 = rax_1
void*** rdi_1 = rax_1
int32_t var_20_1 = 3

if (rax_1 != 0)
    *rdi_1 = &data_142e33ea8
    sub_140d3a3a0(&rdi_1[1], arg1)
    *(rdi_1 + 0x10) = var_18_1.o
    rdi_1[5] = sub_140a387b0()
    *rdi_1 = &data_142e33f00

void arg_8
*(arg1 + 0xe0) = *sub_141f45ba0(*(arg1 + 0xb8), &arg_8, &var_28)
int64_t* rax_5

if (var_20_1 == 0)
    rax_5 = var_28
label_14224fc87:
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)
else
    int64_t* rcx_3 = var_28
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x38))(rcx_3, 0)
        rax_5 = var_28
        
        if (rax_5 != 0)
            rax_5 = sub_140a84c80(rax_5, 0, 0)
            var_28 = rax_5
        
        int32_t var_20_2 = 0
        goto label_14224fc87
void* rdx_3 = *(arg1 + 0xb8)
sub_1423bc410(arg1 + 0x30, rdx_3, rdx_3 + 0x30)
*(arg1 + 0xe8) = 1

// 函数: sub_140daa170
// 地址: 0x140daa170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_1 = arg4 - arg3
int64_t* (* var_38)(int64_t* arg1, int64_t* arg2) = nullptr
int64_t var_30 = 0

if (rdi_1 s> 0)
    sub_1405fdf40(&var_38, rdi_1)

int64_t* var_40 = &var_38
int64_t** var_20 = &var_40
int64_t* (* var_28)(int64_t* arg1, int64_t* arg2) = sub_140d9b1f0

if (sub_140d9f5a0(arg1, arg3, arg4, &var_28) != 2)
    *arg2 = nullptr
    arg2[1] = 0
else
    int64_t* rax_1 = j_sub_140a82f30(0x70)
    int64_t*** rdi_2
    
    if (rax_1 == 0)
        rdi_2 = nullptr
    else
        int16_t r9_1 = *(arg1 + 0x12)
        int16_t r8_1 = arg1[2].w
        var_28 = var_38
        var_20.d = var_30.d
        var_20:4.d = var_30:4.d
        int64_t rax_3 = arg1[3]
        int32_t var_48 = arg3
        int32_t var_44_1 = rdi_1
        var_38 = nullptr
        int64_t var_30_1 = 0
        rdi_2 = sub_140d92a40(rax_1, &var_28, r8_1, r9_1, rax_3, &arg1[4], &var_48)
    
    void*** rax_5 = j_sub_140a82f30(0x18)
    
    if (rax_5 == 0)
        rax_5 = nullptr
    else
        rax_5[1].d = 1
        *rax_5 = &data_142ec7b38
        *(rax_5 + 0xc) = 1
        rax_5[2] = rdi_2
    
    *arg2 = rdi_2
    arg2[1] = rax_5

sub_140d949f0(&var_38)
return arg2

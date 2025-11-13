// 函数: sub_142038250
// 地址: 0x142038250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg1 + 0x150))()
void*** var_18 = nullptr
void*** rax_2 = sub_140a84c80(0, 0x30, 0)
var_18 = rax_2
int32_t var_10 = 3

if (rax_2 != 0)
    *rax_2 = &data_1432a4bb8
    sub_140d3a3a0(&rax_2[1], arg1)
    rax_2[2] = sub_14201b3d4
    rax_2[4] = sub_140a387b0()
    *rax_2 = &data_1432a4c10

int64_t* rax_4 = sub_142168400()
void*** rbx
rbx.b = (*(*rax_4 + 0x2c0))(rax_4, rax_1, 0, &var_18) != 0
void*** rax_7

if (var_10 == 0)
    rax_7 = var_18
label_142038334:
    
    if (rax_7 != 0)
        sub_140a74f90(rax_7)
else
    void*** rcx_2 = var_18
    
    if (rcx_2 != 0)
        (*rcx_2)[7](rcx_2, 0)
        rax_7 = var_18
        
        if (rax_7 != 0)
            rax_7 = sub_140a84c80(rax_7, 0, 0)
            var_18 = rax_7
        
        int32_t var_10_1 = 0
        goto label_142038334
return zx.q(rbx.b)

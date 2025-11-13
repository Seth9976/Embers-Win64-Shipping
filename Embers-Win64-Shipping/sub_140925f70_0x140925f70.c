// 函数: sub_140925f70
// 地址: 0x140925f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int32_t result = sub_140926420(arg1 + 8, sub_14093c750(&var_58, 1))
int64_t* var_28

if (var_28 != 0)
    result = var_28[1].d
    var_28[1].d -= 1
    
    if (result == 1)
        result = (**var_28)(var_28)
        int32_t rdi_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*var_28 + 8))(var_28, zx.q(rdi_1))

int64_t var_40

if (var_40 != 0)
    result = sub_140a74f90(var_40)

int64_t var_50

if (var_50 == 0)
    return result

return sub_140a74f90(var_50)

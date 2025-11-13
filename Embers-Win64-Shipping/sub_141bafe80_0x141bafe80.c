// 函数: sub_141bafe80
// 地址: 0x141bafe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28
sub_141bab3c0(arg1, &var_28)
void* rax = var_28
int128_t zmm6

if (rax == 0)
    zmm6 = *(arg1 + 0xc4)
else
    zmm6 = *(rax + 0x1c0)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

int512_t result
result.o = zmm6
return result

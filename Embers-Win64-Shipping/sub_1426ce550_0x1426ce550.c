// 函数: sub_1426ce550
// 地址: 0x1426ce550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3
int64_t* rbx = arg2
int64_t* result
bool z_1

if (*(arg3 + 0x14) != 0)
    if (arg2[0x59].d s<= 2)
        result = nullptr
        z_1 = *rdi == 0
    else
        result, arg2 = sub_140d3c6e0(arg2[0x58] + 0x28)
        z_1 = *rdi == result
    
    goto label_1426ce5ba

arg3.b = 2
void var_18
result, arg2 = sub_1426b1cc0(rbx, &var_18, arg3.b)

if (not(*result f!= rdi[1].d) && not(*(result + 4) f!= *(rdi + 0xc)))
    float zmm0 = result[1].d
    float temp2_1 = rdi[2].d
    zmm0 - temp2_1
    z_1 = zmm0 == temp2_1
label_1426ce5ba:
    
    if (z_1)
        arg2.b = 2
        return (*(*rbx + 0x7e8))(rbx, arg2)

return result

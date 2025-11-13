// 函数: sub_1405bf690
// 地址: 0x1405bf690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* result = sub_140d2dfc0(sub_1405c8830(), rax, 0, 0, 0, 0, 0, 0, 0)
char arg_28
*(result + 0x78) = arg_28
*(result + 0x68) = arg1
*(result + 0x70) = arg2
sub_140d15810(&arg_28)
int128_t zmm1 = data_14399f5e0
int32_t var_38 = 0xbf800000
int32_t var_34 = 0xbf800000
int128_t var_30 = zmm1
sub_1405a9f90(result + 0x48, &var_38)
(*(*result + 0x278))(result)
sub_140d16250(&arg_28)
int64_t* rbx_1 = *(arg3 + 8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result

// 函数: sub_14069c280
// 地址: 0x14069c280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* rax_2 = sub_140d2dfc0(sub_1406b18a0(), rax, 0, 0, 0, 0, 0, 0, 0)
sub_140597df0(rax_2 + 0x148, arg2)
sub_140597df0(rax_2 + 0x2c8, arg3)
float zmm2 = arg6
*(rax_2 + 0x158) = arg4
*(rax_2 + 0x2dc) = arg5

if (not(zmm2 != 0f))
    zmm2 = 1f

int64_t rax_3 = *arg1
*(rax_2 + 0x2d8) = zmm2
*(rax_2 + 0x2e0) = rax_3
*(rax_2 + 0x2e8) = arg1[1]
int64_t rbx_1 = **(data_143f5b298 + 0x788)
void var_28
int64_t* rax_6 = sub_141befe60(rax_2, &var_28)
return (*(rbx_1 + 0x288))(*(data_143f5b298 + 0x788), rax_6, zx.q(arg7))

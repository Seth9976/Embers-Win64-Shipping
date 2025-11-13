// 函数: sub_142121d50
// 地址: 0x142121d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2

if (arg2 == 0)
    rdi = sub_140cde0b0()

uint32_t rcx_2
rcx_2.b = (arg3 u>> 0x20).d == 0

if ((rcx_2.b & sub_140b5b8a0(arg3.d, 0)) != 0)
    sub_140d19010(rdi, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* result
int32_t zmm0
result, zmm0 = sub_140d2dfc0(sub_142542e20(), rdi, arg3, 0, 0, 0, 0, 0, 0)
sub_142131a30(result, arg1, 0, zmm0)
return result

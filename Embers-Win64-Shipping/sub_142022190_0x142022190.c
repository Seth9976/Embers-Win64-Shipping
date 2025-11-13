// 函数: sub_142022190
// 地址: 0x142022190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_8 = arg1
uint64_t arg_18
PDBCommon::QueryLastError(&arg_18, &arg_8)
uint64_t rbx = arg_8
int32_t rcx_1
rcx_1.b = rbx:4.d == 0

if ((rcx_1.b & sub_140b5b8a0(rbx.d, 0)) != 0)
    sub_140d19010(0, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_2 = sub_140d2dfc0(sub_140cddea0(), nullptr, rbx, 0x40, 0, 0, 0, 0, 0)
*arg2 = rax_2
*(rax_2 + 0x50) |= 0x20000
uint64_t rbx_1 = arg_18
void* rdi_1 = *arg2
int32_t rcx_3
rcx_3.b = rbx_1:4.d == 0

if ((rcx_3.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
    sub_140d19010(rdi_1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_5 = sub_140d2dfc0(sub_1425be5e0(), rdi_1, rbx_1, 0, 0, 0, 0, 0, 0)
int32_t var_28 = var_28 & 0xfffffc00
*arg3 = rax_5
int64_t var_20 = 0
int128_t zmm0 = var_28.o
*(rax_5 + 0x11a) = 6
var_28.o = zmm0
return sub_14243a740(*arg3, &var_28)

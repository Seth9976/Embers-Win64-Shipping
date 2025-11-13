// 函数: sub_14104e510
// 地址: 0x14104e510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void* r9 = *(arg1 + 0x20)
*(arg1 + 0x18) = 1

if (r9 == 0)
    __security_check_cookie(rax_1 ^ &var_68)
    return 0

uint64_t rbx = zx.q(arg2)
uint64_t var_28 = rbx
uint64_t var_20 = zx.q(arg3 + arg2)
int64_t* rcx_1 = *(r9 + 0x20)
int32_t rax_3 = (*(*rcx_1 + 0x40))(rcx_1, 0, &var_28, r9 + 0x110)

if (rax_3 s< 0)
    int64_t var_38
    int64_t* var_40_1 = &var_38
    int64_t* var_48_1 = nullptr
    var_38 = 0
    int64_t var_30_1 = 0
    sub_14106a020(rax_3, "Resource->Map(0, ReadRange, &ResourceBaseAddress)", 
        "d:\build\++ue4\sync\engine\source\runtime\d3d12rhi\private\../Public/D3D12Resources.h", 
        0x96, var_48_1)

int64_t result = *(r9 + 0x110) + rbx
__security_check_cookie(rax_1 ^ &var_68)
return result

// 函数: sub_141014320
// 地址: 0x141014320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
uint64_t rsi = zx.q(arg3)
*(arg1 + 8) = 1
sub_14105ac70(arg1, arg2)
*(arg1 + 0x58) = rsi
int32_t rax_2 = *(arg2 + 0x100)

if (rax_2 != 1 && (rax_2 != 4 || *4 != 1))
    int64_t var_48 = 0
    
    if (rax_2 == 2 || (rax_2 == 4 && *4 - 2 u<= 1))
        rax_2.b = 1
    else
        rax_2.b = 0
    
    int64_t* rcx = *(arg2 + 0x20)
    
    if (rax_2.b != 0)
        rsi = 0
    
    uint64_t var_40_1 = zx.q(rsi.d)
    int32_t rax_6 = (*(*rcx + 0x40))(rcx, 0, &var_48, arg2 + 0x110)
    
    if (rax_6 s< 0)
        int64_t var_58 = 0
        int64_t* var_60_1 = &var_58
        int64_t var_50_1 = 0
        sub_14106a020(rax_6, "Resource->Map(0, ReadRange, &ResourceBaseAddress)", 
            "d:\build\++ue4\sync\engine\source\runtime\d3d12rhi\private\../Public/D3D12Resources.h", 
            0x96, nullptr)
    
    *(arg1 + 0x40) = *(arg2 + 0x110)

int64_t result = *(arg2 + 0x108)
*(arg1 + 0x48) = result
*(arg1 + 0x60) = arg4
__security_check_cookie(rax_1 ^ &var_88)
return result

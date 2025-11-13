// 函数: sub_142b8f390
// 地址: 0x142b8f390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

pdb_internal::Array<struct PortablePDB::MethodInfo>::reset(arg1 + 0x1c18)
pdb_internal::Array<struct PortablePDB::MethodInfo>::reset(arg1 + 0x1c38)
int32_t rdx = *(arg1 + 0x1cc8)
*(arg1 + 0x1c80) = 0

if ((*(arg1 + 0x1c90) & 1) != 0 && rdx == 0)
    return sub_142a4afe0(arg1 + 0x1c88) __tailcall

int16_t result = *(arg1 + 0x1c90)
int32_t rcx_4

if (result s< 0)
    rcx_4 = *(arg1 + 0x1c94)
else
    rcx_4 = sx.d(result) s>> 5

if (rdx u< rcx_4)
    if (rdx s<= 0x3ff)
        rdx.w <<= 5
        result = (result & 0x1f) | rdx.w
        *(arg1 + 0x1c90) = result
        return result
    
    result |= 0xffe0
    *(arg1 + 0x1c94) = rdx
    *(arg1 + 0x1c90) = result

return result

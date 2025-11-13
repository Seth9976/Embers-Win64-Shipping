// 函数: sub_142137b30
// 地址: 0x142137b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x24)
*(arg1 + 0x24) = 0xff
__builtin_memset(arg1 + 0x28, 0, 0x14)
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0x2c
sub_1407c36f0(arg1 + 0x40, 0)
void* rcx_1 = *(arg1 + 0x40)

if ((rcx_1.b & 1) != 0)
    rcx_1 = (rcx_1 s>> 1) + arg1 + 0x40

UnDecorator::getReferenceType(rcx_1, u"MaterialParameterCollectionInstanceResource", 0x58)
*(arg1 + 0x50) = 0
return arg1

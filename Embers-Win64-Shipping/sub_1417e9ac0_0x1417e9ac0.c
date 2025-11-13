// 函数: sub_1417e9ac0
// 地址: 0x1417e9ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r8
r8.b = rax != 0
*(arg2 + 0x20) = r8 + rax

if ((*(*arg1 + 0xde0))() != 0)
    jump(*(*arg1 + 0xde8))

return sub_140be4120(u"ServerMarkReadyForReceiving_Validate") __tailcall

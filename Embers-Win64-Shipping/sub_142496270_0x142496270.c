// 函数: sub_142496270
// 地址: 0x142496270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r8
r8.b = rax != 0
*(arg2 + 0x20) = r8 + rax

if ((*(*arg1 + 0x260))() != 0)
    jump(*(*arg1 + 0x268))

return sub_140be4120(u"ServerToggleAILogging_Validate") __tailcall

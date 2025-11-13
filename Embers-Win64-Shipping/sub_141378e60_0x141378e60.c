// 函数: sub_141378e60
// 地址: 0x141378e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
wchar16 const* const var_30 = u"FSceneTexturesUniformParameters"
int32_t var_20 = 0
void* var_10 = &data_143ec50a0
int32_t rax = (rdi + 1).d
char var_24 = 0x13
int32_t var_1c = 1
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405c4f50(arg2)

int64_t rax_1 = *arg2
int64_t rcx_2 = rdi * 6
*(rax_1 + (rcx_2 << 3)) = u"SceneUniformBuffer".o
*(rax_1 + (rcx_2 << 3) + 0x10) = 0x10.o
*(rax_1 + (rcx_2 << 3) + 0x20) = 1.o
return sub_141378f10

// 函数: sub_1411aad10
// 地址: 0x1411aad10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_24 = 0x12
wchar16 const* const var_30 = u"ShaderDrawDebug::FShaderDrawDebugParameters"
int32_t var_20 = 0
int32_t var_1c = 1
sub_141190580(arg1)
int64_t rdi = sx.q(arg2[1].d)
void* var_10 = &data_143e6e0e0
int32_t rax = (rdi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405c4f50(arg2)

int64_t rax_1 = *arg2
int64_t rcx_2 = rdi * 6
*(rax_1 + (rcx_2 << 3)) = u"ShaderDrawUniformBuffer".o
*(rax_1 + (rcx_2 << 3) + 0x10) = 0x90.o
*(rax_1 + (rcx_2 << 3) + 0x20) = 1.o
return sub_1411aadc0

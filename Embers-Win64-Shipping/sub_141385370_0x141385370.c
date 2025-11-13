// 函数: sub_141385370
// 地址: 0x141385370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1414415d0(arg1, arg2)
__builtin_memset(arg1 + 0x140, 0, 0x20)
sub_1419c75a0(arg1 + 0x138, arg2[3], data_143ec50b0, 0)
int64_t* rax = arg2[3]
sub_1419c7530(arg1 + 0x140, rax, u"VertexPositions", 0)
int16_t* var_38 = nullptr
int64_t var_30 = 0
sub_1405947f0(&var_38, 3)
int32_t r14 = var_30:4.d
int32_t rdi = var_30.d + 3
var_30.d = rdi

if (rdi s> r14)
    sub_140594770(&var_38)
    r14 = var_30:4.d
    rdi = var_30.d

int16_t* rbx = var_38
UnDecorator::getReferenceType(rbx, &data_142da77e8, 6)
var_38 = rbx
var_30.d = rdi
int32_t rsi
rsi.b = rdi == 0
var_30:4.d = r14
int32_t rdx_4 = rdi + 0xf + rsi

if (rdx_4 s> r14)
    sub_1405947f0(&var_38, rdx_4)

sub_140a20ba0(&var_38, u"VertexPositions", 0xf)
int16_t* r8_1 = &data_142d40450
int16_t* rbx_1 = var_38

if (var_30.d != 0)
    r8_1 = rbx_1

sub_1419c7530(arg1 + 0x144, rax, r8_1, 0)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

sub_1419c6ab0(arg1 + 0x148, arg2[3], u"VertexBufferSize", 0)
sub_1419c6ab0(arg1 + 0x14e, arg2[3], u"NumVertices", 0)
sub_1419c6ab0(arg1 + 0x154, arg2[3], u"MinVertexIndex", 0)
sub_1419c6ab0(arg1 + 0x15a, arg2[3], u"PrimitiveId", 0)
return arg1

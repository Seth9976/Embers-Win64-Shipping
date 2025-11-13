// 函数: sub_141ebb030
// 地址: 0x141ebb030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x298))()
int64_t* rbx = nullptr
int64_t* rsi = nullptr

if (((arg1[1].d u>> 4).b & 1) == 0)
    rsi = arg1[4]

int64_t* r14 = rsi[0x4a]
int64_t var_28

if (r14 != 0)
    (*(*r14 + 0x4f0))(r14, arg2, arg3, 0, 0)
    arg4.o = zx.o(0)
    int64_t var_20
    var_20.d = arg3[1].d
    int64_t rax_5 = *r14
    var_28 = *arg3
    (*(rax_5 + 0x6f0))(r14, &var_28, arg4)

(*(*rsi + 0x668))(rsi, arg3, arg4)
(*(*arg1 + 0x298))(arg1)
var_28 = 0
int32_t var_20_1 = 0
sub_1405947f0(&var_28, 0x1a)
int32_t rax_8 = var_20_1 + 0x1a
var_20_1 = rax_8

if (rax_8 s> 0)
    sub_140594770(&var_28)

UnDecorator::getReferenceType(var_28, u"BugItGo: Ghost mode is ON", 0x34)

if (((arg1[1].d u>> 4).b & 1) == 0)
    rbx = arg1[4]

int64_t result = sub_1425692d0(rbx, &var_28, 0, zx.o(0))
int64_t rcx_8 = var_28

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)

// 函数: sub_141fbe8d0
// 地址: 0x141fbe8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0xae].d
int64_t var_38
int64_t var_28

if ((rax.b & 2) != 0)
    var_38 = 0
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, 0x10)
    int32_t rax_1 = var_30_1 + 0x10
    var_30_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"FreezeRendering", 0x20)
    int64_t r9_1
    r9_1.b = 1
    (*(*arg1 + 0xc20))(arg1, &var_28, &var_38, r9_1)
    int64_t rcx_4 = var_28
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = var_38
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    rax = arg1[0xae].d & 0xfffffffd

arg1[0xae].d = rax & 0xfffffffb
sub_141f49a80(arg1[0xaf], 0, 1)
var_38 = 0
int32_t var_30_2 = 0
sub_1405947f0(&var_38, 0x11)
int32_t rax_5 = var_30_2 + 0x11
var_30_2 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"show camfrustums", 0x22)
int64_t r9_2
r9_2.b = 1
(*(*arg1 + 0xc20))(arg1, &var_28, &var_38, r9_2)
int64_t rcx_11 = var_28

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = var_38

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_141efdf10(arg1[0xaf])
int64_t rdx_4
rdx_4.b = 1
(*(*arg2 + 0x2f8))(arg2, rdx_4)
int64_t* rcx_15 = arg2[0x57]
int64_t rdx_5
rdx_5.b = 1
(*(*rcx_15 + 0x2f8))(rcx_15, rdx_5)
arg1[0xc3] = 0
arg1[0xc4] = 0
int32_t arg_14 = 0
void arg_8
(*(*arg1 + 0x658))(arg1, (*sub_140b5e500(&arg_8, 0x145)).q)
sub_142440bd0((*(*arg1 + 0x150))(arg1), arg1)
return sub_14249d130(arg1, arg2) __tailcall

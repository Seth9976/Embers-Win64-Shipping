// 函数: sub_140cffaf0
// 地址: 0x140cffaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax_1 = (*(*arg1 + 0x60))(arg1, &var_18, 0, 0)

if (arg3 != rax_1)
    int64_t rcx = *arg3
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg3 = *rax_1
    *rax_1 = 0
    arg3[1].d = rax_1[1].d
    *(arg3 + 0xc) = *(rax_1 + 0xc)
    rax_1[1] = 0

int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 7)
int32_t rax_4 = arg2[1].d + 7
arg2[1].d = rax_4

if (rax_4 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"STRUCT", 0xe)
return arg2

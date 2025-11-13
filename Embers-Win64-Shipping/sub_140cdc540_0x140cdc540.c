// 函数: sub_140cdc540
// 地址: 0x140cdc540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x78)
int64_t var_18
int64_t* rax_1 = (*(*rcx + 0x60))(rcx, &var_18, 0, 0)

if (arg3 != rax_1)
    int64_t rcx_1 = *arg3
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg3 = *rax_1
    *rax_1 = 0
    arg3[1].d = rax_1[1].d
    *(arg3 + 0xc) = *(rax_1 + 0xc)
    rax_1[1] = 0

int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 7)
int32_t rax_4 = arg2[1].d + 7
arg2[1].d = rax_4

if (rax_4 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"TARRAY", 0xe)
return arg2

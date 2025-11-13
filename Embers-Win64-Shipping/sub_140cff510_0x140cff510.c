// 函数: sub_140cff510
// 地址: 0x140cff510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x80)
int64_t var_18
int64_t* rax_1 = (*(*rcx + 0x60))(rcx, &var_18, 0, 0)
int16_t* const rsi = &data_142d40450

if (rax_1[1].d != 0)
    *rax_1

int64_t* rcx_1 = *(arg1 + 0x78)
int64_t var_28
int16_t** rax_3 = (*(*rcx_1 + 0x60))(rcx_1, &var_28, 0, 0)

if (rax_3[1].d != 0)
    rsi = *rax_3

int64_t var_38
sub_140a2e390(&var_38, u"%s,%s", rsi)

if (arg3 == &var_38)
    int64_t rcx_4 = var_38
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
else
    int64_t rcx_3 = *arg3
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *arg3 = var_38
    int32_t var_30
    arg3[1].d = var_30
    int32_t var_2c
    *(arg3 + 0xc) = var_2c
    var_30.q = 0
    var_38 = 0

int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 5)
int32_t rax_7 = arg2[1].d + 5
arg2[1].d = rax_7

if (rax_7 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"TMAP", 0xa)
return arg2

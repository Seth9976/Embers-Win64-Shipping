// 函数: sub_141974920
// 地址: 0x141974920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"NullDrv", 1)
j_sub_140b3db50()
int64_t* rax_1 = j_sub_140b407e0(&data_143de7d78, rbx)
char rax_2

if (rax_1 != 0)
    int64_t rdx_1 = *rax_1
    rax_2 = (*(rdx_1 + 0x40))(rax_1, rdx_1)

if (rax_1 == 0 || rax_2 == 0)
    void var_28
    sub_140b21610(0, _vfprintf_p_l(&var_28, u"NullDrv failure?", u"DynamicRHI"), nullptr)
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rdi_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_20 + 8))(var_20, zx.q(rdi_1))
    
    sub_140b721f0(1)

int64_t* rax_8 = (*(*rax_1 + 0x48))(rax_1, 4)
data_143f0f180 = rax_8
int64_t rdx_4 = *rax_8
(*(rdx_4 + 8))(rax_8, rdx_4)
int64_t* rcx_8 = data_143f0f180
int64_t rax_10 = (*(*rcx_8 + 0x468))(rcx_8)
int64_t* rcx_9 = data_143f0f180
data_143f02bb8 = rax_10
data_143f02bc0 = rax_10
int64_t rax_12 = (*(*rcx_9 + 0x470))(rcx_9)
data_143f0f1d4 = 1
data_143f02d88 = rax_12
data_143f0f1f6 = 0
int64_t var_38 = 0
int32_t var_30 = 0
sub_1405947f0(&var_38, 8)
int32_t rax_13 = var_30 + 8
var_30 = rax_13

if (rax_13 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"NullRHI", 0x10)
int64_t var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 0xc)
int32_t rax_14 = var_40 + 0xc
var_40 = rax_14

if (rax_14 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"RHI.RHIName", 0x18)
int64_t result = sub_140a53700(&var_48, &var_38)
int64_t rcx_17 = var_48

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t rcx_18 = var_38

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)

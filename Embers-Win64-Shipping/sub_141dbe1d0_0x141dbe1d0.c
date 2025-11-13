// 函数: sub_141dbe1d0
// 地址: 0x141dbe1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = arg3
sub_140b33630("InstanceActorComponent")
void* result = nullptr

if (arg2 != 0 && arg2[3] != 0)
    int32_t r14 = arg3:4.d
    char arg_10
    
    if ((r14 == 0 & sub_140b5b8a0(rbx.d, 0)) == 0)
        sub_141dbc050(arg1, rbx)
    else
        rbx = *sub_141dc3420(&arg_10, arg1, (arg2[2]).d)
        r14 = rbx:4.d
    
    uint32_t r15_1 = zx.d(arg2[4].b)
    int64_t* r12_1 = arg2[3]
    
    if ((r14 == 0 & sub_140b5b8a0(rbx.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* result_1 = sub_140d2dfc0(r12_1, arg1, rbx, r15_1 & 0xffb7ffd6, 0, 0, 0, 0, 0)
    result = result_1
    *(result_1 + 8) |= 0x3000
    int64_t rax_4 = sub_141ea1810(arg2)
    void** var_d8
    memset(&var_d8, 0, 0x90)
    sub_140b4c2a0(&var_d8)
    int64_t var_48_1 = 0
    void* var_40_1 = &arg2[7]
    var_d8 = &data_14305cdc0
    sub_140b55290(&var_d8, 1)
    var_d8[0x1b](&var_d8, 0)
    char var_ae
    char var_ae_1 = var_ae & 0xf7
    char var_af
    char var_af_1 = var_af & 0xbf
    char var_ad
    char var_ad_1 = var_ad | 0x10
    var_d8 = &data_14323c5b8
    int64_t var_70_1 = rax_4
    sub_140b55650(&var_d8, 1)
    int32_t var_a8
    int32_t var_a8_1 = var_a8 | 0x40001000
    (*(*result + 0xa0))(result, &var_d8)
    (*(*result + 0xc0))(result, 0)
    arg_10 = 0
    char* var_e0_1 = &arg_10
    void*** (* var_e8)() = sub_140884c50
    void* rax_8 = sub_140a756e0(&var_e8, &data_14397f5f0)
    char rbx_2 = *(rax_8 + 0x20)
    *(rax_8 + 0x20) = 1
    sub_140cd85e0(result)
    *(rax_8 + 0x20) = rbx_2
    sub_141dd11e0(arg1, result)
    sub_140b4cb40(&var_d8)

sub_140b37f60("InstanceActorComponent")
return result

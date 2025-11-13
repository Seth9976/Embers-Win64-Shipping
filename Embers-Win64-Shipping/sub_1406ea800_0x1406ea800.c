// 函数: sub_1406ea800
// 地址: 0x1406ea800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return zx.q((arg3 + 4).d)

void* rax_1 = j_sub_140a82f30(0x348)
void* const rbx_2

if (rax_1 == 0)
    rbx_2 = nullptr
else
    memset(rax_1, 0, 0x348)
    rbx_2 = sub_1406e8d80(rax_1)

*arg3 = rbx_2
int64_t var_e8
memset(&var_e8, 0, 0xe0)
int32_t var_c0_1 = 1
void** var_b8_1 = &data_14396df60
int32_t var_b0_1 = 1
void** var_98_1 = &data_14396df70
int32_t var_a0_1 = 1
void** var_88_1 = &data_14396df90
int32_t var_90_1 = 1
void** var_78_1 = &data_14396dfa0
void** var_68_1 = &data_14396df30
void** var_58_1 = &data_14396df40
void** var_38_1 = &data_14396df50
void** var_28_1 = &data_14396df68
void** var_18_1 = &data_14396df48
int32_t var_80_1 = 1
int32_t var_70_1 = 1
int32_t var_60_1 = 1
int32_t var_50_1 = 1
int32_t var_40_1 = 1
int32_t var_30_1 = 1
int32_t var_20_1 = 1
int32_t var_10_1 = 1
var_e8 = arg1
int64_t var_e0_1 = arg2
int64_t var_d8_1 = 0
void* const var_d0_1 = rbx_2
int32_t rax_3 = DiscordCreate(2, &var_e8, rbx_2)

if (rax_3 != 0 || **arg3 == 0)
    int64_t* rbx_3 = *arg3
    
    if (rbx_3 != 0)
        int64_t rdx_1 = *rbx_3
        
        if (rdx_1 != 0)
            (*rdx_1)(rdx_1, rdx_1)
            *rbx_3 = 0
        
        sub_1406e9a30(&rbx_3[0x65])
        sub_1406e9a30(&rbx_3[0x60])
        sub_1406e9a30(&rbx_3[0x5b])
        sub_1406e9a30(&rbx_3[0x57])
        sub_1406e9a30(&rbx_3[0x51])
        sub_1406e9a30(&rbx_3[0x4c])
        sub_1406e9a30(&rbx_3[0x48])
        sub_1406e9bc0(&rbx_3[0x26])
        sub_1406e9a30(&rbx_3[0x22])
        sub_1406e9a30(&rbx_3[0x1e])
        sub_1406e9a30(&rbx_3[0x19])
        sub_1406e9a30(&rbx_3[0x15])
        sub_1406e9a30(&rbx_3[0x11])
        sub_1406e9a30(&rbx_3[0xd])
        sub_1406e9a30(&rbx_3[7])
        sub_1406e9a30(&rbx_3[2])
        j_sub_140a74f90(rbx_3)
    
    *arg3 = nullptr

return zx.q(rax_3)

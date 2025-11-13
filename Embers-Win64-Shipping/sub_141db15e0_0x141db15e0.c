// 函数: sub_141db15e0
// 地址: 0x141db15e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_30 = 1
int16_t var_10 = 1
int64_t* rcx = *(arg1 + 8)
int32_t var_34 = arg3.d
int32_t var_18 = 0xbf800000
int32_t var_14 = 0
uint32_t var_38 = (arg3 u>> 0x20).d
int64_t r9
int64_t var_20 = r9
int32_t var_28 = arg4
int32_t* rax_2 = (*(*rcx + 0x10))(rcx, (zx.o(0)).d)
int32_t var_88 = *rax_2
int32_t var_84 = rax_2[1].d
int32_t var_80 = rax_2[2]
int32_t var_7c = rax_2[3].d
int32_t var_78 = rax_2[4]
char var_74 = rax_2[5].b
char var_73 = *(rax_2 + 0x15)
int64_t* rcx_5 = *(arg1 + 8)
char var_72 = *(rax_2 + 0x16)
int64_t var_70 = *(rax_2 + 0x18)
int32_t var_68 = rax_2[8]
int32_t var_64 = rax_2[9]
int32_t var_60 = rax_2[0xa]
int32_t var_5c = rax_2[0xb].d
int32_t var_58 = rax_2[0xc]
int64_t var_54 = *(rax_2 + 0x34)
int32_t var_4c = rax_2[0xf]
int32_t var_48 = rax_2[0x10]
var_88 = 0
(*(*rcx_5 + 8))(rcx_5, &var_88)
int64_t* rcx_6 = *(arg1 + 8)
void** const var_98 = &data_142fcaad8
int64_t var_a8 = 0
int64_t* var_90 = &var_a8
uint32_t count = 0
void** const result

if ((*(*rcx_6 + 0x58))(rcx_6, &var_38, &var_98) == 0 || count s<= 0)
    int64_t rcx_11 = var_a8
    var_98 = &data_142d40888
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    result.b = 0
else
    int32_t rax_12 = arg5[1].d
    int32_t rdx_3 = rax_12 + count
    
    if (rdx_3 s> *(arg5 + 0xc))
        sub_1405c5510(arg5, rdx_3)
        rax_12 = arg5[1].d
    
    memcpy(sx.q(rax_12) + *arg5, var_a8, count)
    int64_t rcx_10 = var_a8
    arg5[1].d += count
    var_98 = &data_142d40888
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    result.b = 1

return result

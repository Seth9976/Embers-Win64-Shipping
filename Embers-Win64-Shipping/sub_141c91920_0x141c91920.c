// 函数: sub_141c91920
// 地址: 0x141c91920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14320fe38
InitializeCriticalSection(&arg1[1])
int32_t rdx = SetCriticalSectionSpinCount(&arg1[1], 0xfa0)
arg1[6] = 0
arg1[7] = 0
arg1[8].b = arg3
*(arg1 + 0x41) = 0
__builtin_memset(&arg1[9], 0, 0x44)
arg1[0x12] = 0
int32_t rax = arg2[1].d

if (rax s> *(arg1 + 0x54))
    rdx = sub_14061cd70(&arg1[9], rax)
    rax = arg2[1].d

for (int64_t* i = *arg2; i != &i[sx.q(rax) * 2]; i = &i[2])
    int32_t rdi_1 = i[1].d
    int64_t rsi_1 = *i
    int64_t var_38 = 0
    int64_t var_30_1 = 0
    int64_t var_48 = 0
    int32_t var_40_1 = rdi_1
    sub_1405a4c70(&var_48, sbb.d(rdx, rdx, rdi_1 != 0) + 2 + rdi_1, 0)
    memcpy(var_48, rsi_1, rdi_1 * 2)
    sub_140a2cf70(&var_48, &data_142d40450, 0)
    int64_t var_28
    int64_t* rax_3
    rax_3, rdx = sub_140baee70(&var_28, &var_48, &var_38)
    int64_t rsi_2 = sx.q(arg1[0xa].d)
    int32_t rcx_7 = (rsi_2 + 1).d
    arg1[0xa].d = rcx_7
    
    if (rcx_7 s> *(arg1 + 0x54))
        rdx = sub_1405a4f90(&arg1[9])
    
    int64_t* rcx_11 = &arg1[9][rsi_2 * 2]
    *rcx_11 = 0
    *rcx_11 = *rax_3
    *rax_3 = 0
    rcx_11[1].d = rax_3[1].d
    *(rcx_11 + 0xc) = *(rax_3 + 0xc)
    rax_3[1] = 0
    int64_t rcx_12 = var_28
    
    if (rcx_12 != 0)
        rdx = sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_48
    
    if (rcx_13 != 0)
        rdx = sub_140a74f90(rcx_13)
    
    int64_t rcx_14 = var_38
    
    if (rcx_14 != 0)
        rdx = sub_140a74f90(rcx_14)

if (arg1[8].b == 0 && sub_140a54810() == 0)
    arg1[8].b = 1

if (arg1[8].b == 0)
    arg1[0x12] = sub_140a6e140(arg1, u"FAssetDataDiscovery", 0, 2, -1, 0)
else
    sub_141cacd50(arg1)

return arg1

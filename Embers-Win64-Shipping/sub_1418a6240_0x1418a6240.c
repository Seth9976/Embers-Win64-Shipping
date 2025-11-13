// 函数: sub_1418a6240
// 地址: 0x1418a6240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418aa4c0(arg1 + 0x30, *arg2)
int64_t result

if (arg2[6].b == 0 || arg2[7] - 0xc8 u> 6)
    *(arg1 + 0x2c) += 1
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 0xd)
    int32_t rax_6 = var_20_1 + 0xd
    var_20_1 = rax_6
    
    if (rax_6 s> 0)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"DownloadFail", 0x1a)
    int64_t* rcx_9 = *(arg1 + 0x18)
    result = (*(*rcx_9 + 8))(rcx_9, &arg2[2], zx.q(arg2[7]), &var_28)
    int64_t rcx_10 = var_28
    
    if (rcx_10 != 0)
        return sub_140a74f90(rcx_10)
else
    *(arg1 + 0x20) += *(arg2 + 0x30)
    *(arg1 + 0x28) += 1
    int64_t* rcx_1 = *(arg1 + 8)
    (*(*rcx_1 + 8))(rcx_1, &arg2[8])
    int64_t rcx_2 = *(arg2 + 0x28)
    int128_t zmm6 = zx.o(0)
    
    if (rcx_2 != *(arg2 + 0x20))
        int64_t rax_5 = *(arg2 + 0x30)
        zmm6.q = float.d(rax_5)
        
        if (rax_5 s< 0)
            zmm6.q = zmm6.q f+ 1.8446744073709552e+19
        
        zmm6.q = zmm6.q f/ sub_141831760(rcx_2 - *(arg2 + 0x20))
    
    result = EnterCriticalSection(arg1 + 0x90)
    zmm6.q = zmm6.q f+ *(arg1 + 0x80)
    *(arg1 + 0x88) += 1
    *(arg1 + 0x80) = zmm6.q
    
    if (arg1 != -0x90)
        return LeaveCriticalSection(arg1 + 0x90)

return result

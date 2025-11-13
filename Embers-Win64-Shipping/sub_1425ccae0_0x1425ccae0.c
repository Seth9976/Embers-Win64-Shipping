// 函数: sub_1425ccae0
// 地址: 0x1425ccae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_4 = (arg2[3] ^ arg1[3]) | (arg2[2] ^ arg1[2]) | (arg2[1] ^ arg1[1]) | (*arg2 ^ *arg1)
uint64_t result

if (r8_4 == 0 && *(arg1 + 0x10) == *(arg2 + 0x10))
    int16_t* const rcx = &data_142d40450
    int16_t* rdx
    
    if (arg2[8] == r8_4)
        rdx = &data_142d40450
    else
        rdx = *(arg2 + 0x18)
    
    if (arg1[8] != 0)
        rcx = *(arg1 + 0x18)
    
    if (sub_140a54510(rcx, rdx).d == 0 && _Current_set(&arg1[0xa], &arg2[0xa], 0).b != 0
            && not(arg2[0x10][0] f!= arg1[0x10]) && not(arg2[0x11][0] f!= arg1[0x11])
            && not(arg2[0x12][0] f!= arg1[0x12]) && not(arg2[0x14][0] f!= arg1[0x14])
            && not(arg2[0x15][0] f!= arg1[0x15]) && not(arg2[0x16][0] f!= arg1[0x16])
            && not(arg2[0x17][0] f!= arg1[0x17]) && not(arg2[0x18][0] f!= arg1[0x18])
            && not(arg2[0x19][0] f!= arg1[0x19]) && not(arg2[0x1a][0] f!= arg1[0x1a])
            && zx.d(_mm_movemask_ps(__cmpps_xmmps_memps_immb(*(arg2 + 0x70), *(arg1 + 0x70), 0)))
            == 0xf && arg1[0x20] == arg2[0x20])
        result.b = 1
        return result

result.b = 0
return result

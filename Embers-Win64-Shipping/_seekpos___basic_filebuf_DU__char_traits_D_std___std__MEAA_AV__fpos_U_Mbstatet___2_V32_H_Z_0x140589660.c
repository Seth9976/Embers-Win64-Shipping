// 函数: ?seekpos@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z
// 地址: 0x140589660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x10] == 0
fpos_t _Position = *(arg3 + 8) + *arg3

if (not(cond:0) && sub_14058a900(arg1) != 0 && fsetpos(arg1[0x10], &_Position) == 0)
    int64_t* r8 = arg1[3]
    int64_t rcx_1 = *(arg3 + 0x10)
    *(arg1 + 0x74) = rcx_1
    
    if (*r8 == &arg1[0xe])
        int64_t rcx_2 = arg1[0x11]
        int32_t rdx_1 = (arg1[0x12]).d
        *r8 = rcx_2
        *arg1[7] = rcx_2
        *arg1[0xa] = rdx_1 - rcx_2.d
        rcx_1 = *(arg1 + 0x74)
    
    *arg2 = _Position
    arg2[1] = 0
    arg2[2] = rcx_1
    return arg2

*arg2 = -1
arg2[1] = 0
arg2[2] = 0
return arg2

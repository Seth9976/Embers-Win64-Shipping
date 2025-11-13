// 函数: ?seekoff@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z
// 地址: 0x140589740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _Offset = arg3

if (*arg1[7] == &arg1[0xe] && arg4 == 1 && arg1[0xd] == 0)
    _Offset -= 1

int64_t rax_7

if (arg1[0x10] == 0)
    *arg2 = -1
    rax_7 = 0
else if (sub_14058a900(arg1) == 0)
    *arg2 = -1
    rax_7 = 0
else
    int32_t rax_2
    
    if (_Offset != 0 || arg4 != 1)
        rax_2 = _fseeki64(arg1[0x10], _Offset, arg4)
    
    fpos_t _Position
    
    if ((_Offset != 0 || arg4 != 1) && rax_2 != 0)
        *arg2 = -1
        rax_7 = 0
    else if (fgetpos(arg1[0x10], &_Position) != 0)
        *arg2 = -1
        rax_7 = 0
    else
        int64_t* rax_4 = arg1[3]
        
        if (*rax_4 == &arg1[0xe])
            int64_t rcx_2 = arg1[0x11]
            int32_t rdx_2 = (arg1[0x12]).d
            *rax_4 = rcx_2
            *arg1[7] = rcx_2
            *arg1[0xa] = rdx_2 - rcx_2.d
        
        rax_7 = *(arg1 + 0x74)
        *arg2 = _Position

arg2[1] = 0
arg2[2] = rax_7
return arg2

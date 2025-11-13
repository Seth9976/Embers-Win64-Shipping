// 函数: sub_140fb4d50
// 地址: 0x140fb4d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9 = 0

if (arg3 u> 6)
    return 

int64_t rdx_3

switch (arg3)
    case 0
        rdx_3 = 0
    case 1
        rdx_3 = 4
    case 2
        rdx_3 = 8
    case 3
        rdx_3 = 0xc
    case 4
        r9 = 1
        rdx_3 = 0
    case 5
        r9 = 1
        rdx_3 = 4
    case 6
        r9 = 1
        rdx_3 = 8

void* rcx = ((zx.q(r9) ^ 1) << 4) + arg1
arg2[0] = arg2[0] f- *(rdx_3 + rcx + 0x3b8)

if (__andps_xmmxud_memxud(arg2, data_142d3f770)[0] f<= 9.99999975e-05f)
    return 

*(rdx_3 + rcx + 0x3b8) = arg2[0]
char rax_4 = *(arg1 + 0x504)

if (r9 == 0)
    arg3.b = rax_4 == 0
    return sub_140fc31d0(arg1, rcx + 0x3b8, arg3.b) __tailcall

arg3.b = rax_4 == 0
return sub_140fc3180(arg1, rcx + 0x3b8, arg3.b) __tailcall

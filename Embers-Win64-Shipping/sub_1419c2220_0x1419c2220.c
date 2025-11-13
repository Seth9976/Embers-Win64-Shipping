// 函数: sub_1419c2220
// 地址: 0x1419c2220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg4
*arg1 = &data_14300df90
void*** arg_28
int16_t* rdx = arg_28
int64_t arg_30
arg1[3] = arg_30
arg1[2] = rdx
sub_140b4c820(&arg1[4], rdx)
arg1[5].d = arg5
*(arg1 + 0x2c) = arg2
arg1[6].d = 0
*(arg1 + 0x34) = 0xff
__builtin_memset(&arg1[7], 0, 0x14)
arg1[0xa] = 0
arg1[0xb] = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    arg1[0xb].d = rbx_1.d + 1
    
    if (rbx_1.d + 1 s> 0)
        sub_1407c36f0(&arg1[0xa], 0)
    
    void* rcx_3 = arg1[0xa]
    
    if ((rcx_3.b & 1) != 0)
        rcx_3 = (rcx_3 s>> 1) + &arg1[0xa]
    
    UnDecorator::getReferenceType(rcx_3, arg3, (rbx_1.d + 1) * 2)

arg1[0xc].d = 0
arg1[0xd] = 0
int64_t rsi_1 = sx.q(arg6[1].d)
int64_t rbp = *arg6
arg1[0xe].d = rsi_1.d

if (rsi_1.d != 0)
    sub_1405a4b40(&arg1[0xd], rsi_1.d, 0)
    memcpy(arg1[0xd], rbp, (rsi_1 * 0x30).d)
else
    __builtin_memset(arg1 + 0x74, 0, 0x14)

arg1[0x11] = arg1
arg1[0x12].d &= 0xfffffffe
bool cond:0 = *(arg1 + 0x2c) != 1
*(arg1 + 0x94) = 0

if (cond:0)
    sub_1419d1650(arg1)
else
    void* rcx_6 = data_143f1d998
    
    if (rcx_6 != 0)
        *(rcx_6 + 8) = &arg1[0xf]
        rcx_6 = data_143f1d998
    
    arg1[0xf] = rcx_6
    arg1[0x10] = &data_143f1d998
    data_143f1d998 = &arg1[0xf]
    sub_140b58260(&arg_30, arg1[1], 1)
    arg_28 = arg1
    sub_1419ce790()
    sub_1419be530(&data_1439c96d0, &arg1[4], &arg_28)

return arg1

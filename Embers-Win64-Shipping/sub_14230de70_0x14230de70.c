// 函数: sub_14230de70
// 地址: 0x14230de70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x28)
int128_t zmm6 = arg4

if (rbx == 0)
    return 

int32_t rax_1 = *(rbx + 0xc)
int32_t* rax

if (rax_1 s>= data_143e1d9b4)
    rax = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    arg2 = sx.q(zx.d(rax_3.w) - rdx_1) * 3
    rax = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + (arg2 << 3)

if ((rax[2] & 0x30000000) != 0)
    return 

(*(*rbx + 0x390))(rbx, arg2)

if ((rbx[0x11].b & 1) == 0)
    return 

int64_t* rbx_1 = rbx[0x14]

if (arg3 != 1)
label_14230df1b:
    
    if (rbx_1 == 0)
        arg4 = 0x3f800000
    else
        arg4 = rbx_1[0x13].d
    
    int64_t* rcx_6 = *(arg1 + 0x28)
    
    if (rcx_6[0x86] != 0 && rcx_6[0x116] != 0 && *data_143f57910 != 0)
        if (*(rcx_6 + 0x5a4) u< 3 || (*(rcx_6 + 0x5a7) & 0x20) != 0)
            arg4.d = arg4.d f* zmm6.d
            sub_142320530(rcx_6, arg4, arg1)
        else
            *(rcx_6 + 0x716) = 2
else if (rbx_1 != 0 && (*(*rbx_1 + 0x458))(rbx_1).b != 0)
    goto label_14230df1b

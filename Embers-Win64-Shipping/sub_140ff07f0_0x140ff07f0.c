// 函数: sub_140ff07f0
// 地址: 0x140ff07f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void*** rax_2 = j_sub_140a82f30(0x28)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    *rbx = &data_142d3ff08
    rbx[1].d = 0
    *rbx = &data_142ef5840
    *(rbx + 0xc) = 0
    rbx[2].w = 0x100
    rbx[3] = 0
    rbx[4].d = 0

char rdx = arg3[1]
char rcx = *arg3
int16_t var_56 = 0
int64_t var_40 = 0
int32_t var_68

if (rdx != 7 || rcx != 0)
    var_68 = 1
else
    var_68 = 0

int32_t rax_3
rax_3.b = rcx != 0
int32_t var_64 = rax_3
int32_t rax_4 = sub_140ffdf00(zx.d(rdx))
char r9 = arg3[7]
int32_t var_60 = rax_4

if (arg3[2] != 0 || r9 != 0)
    int32_t var_5c_1 = 1
else
    int32_t var_5c = 0

char rbp = arg3[0xd]
char var_58 = arg3[0xc]
char var_57 = rbp
int32_t rax_6 = sub_140ffdf00(zx.d(arg3[3]))
uint32_t r10 = zx.d(arg3[4])
int32_t var_48 = rax_6
int32_t rax_7 = sub_140ffdf70(r10)
uint32_t r11 = zx.d(arg3[5])
int32_t rax_8 = sub_140ffdf70(r11)
uint32_t rsi = zx.d(arg3[6])
int32_t var_50 = rax_8
int32_t var_4c = sub_140ffdf70(rsi)

if (r9 == 0)
    int128_t var_44_1 = rax_7.o
else
    int32_t var_38_1 = sub_140ffdf00(zx.d(arg3[8]))
    int128_t var_44
    var_44.d = sub_140ffdf70(zx.d(arg3[9]))
    var_40.d = sub_140ffdf70(zx.d(arg3[0xa]))
    var_40:4.d = sub_140ffdf70(zx.d(arg3[0xb]))

int32_t rax_9

if (r10.b != 0 || r11.b != 0 || rsi.b != 0 || arg3[9] != rsi.b || arg3[0xa] != rsi.b
        || arg3[0xb] != rsi.b)
    rax_9.b = 0
else
    rax_9.b = 1

char rdx_1

if (rbp == 0 || rax_9.b != 0)
    rdx_1 = 0
else
    rdx_1 = 1

int32_t rcx_10 = 0
rbx[4].d = 0

if (*arg3 != 0)
    rcx_10 = 2
    rbx[4].d = 2

if (rdx_1 != 0)
    rbx[4].d = rcx_10 | 0x20

int64_t* rcx_12 = rbx[3]
int64_t* rsi_1 = *(arg1 + 0x168)
rbx[3] = 0

if (rcx_12 != 0)
    (*(*rcx_12 + 0x10))(rcx_12)

int32_t rax_16 = (*(*rsi_1 + 0xa8))(rsi_1, &var_68, &rbx[3])

if (rax_16 s< 0)
    int64_t var_78_1 = *(arg1 + 0x168)
    sub_140fff020(rax_16, 
        "Direct3DDevice->CreateDepthStencilState(&DepthStencilDesc,DepthStencilState->Resource."
    "GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11State.cpp", 0x103)

*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

__security_check_cookie(rax_1 ^ &var_98)
return arg2

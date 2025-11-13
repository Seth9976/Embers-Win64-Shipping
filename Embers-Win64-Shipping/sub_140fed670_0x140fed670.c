// 函数: sub_140fed670
// 地址: 0x140fed670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_78 = arg2
int64_t* rcx = *(arg1 + 0xb0)
int32_t rdi = 0
uint64_t rsi
rsi.b = 1

if (rcx == 0)
    goto label_140fed6c2

char rax_3 = (*(*rcx + 0x18))(rcx, &var_78)
rsi = zx.q(rax_3)

if (rax_3 != 0)
    arg2 = var_78
label_140fed6c2:
    int64_t* rcx_1 = *(arg1 + 0x70)
    
    if (rcx_1 != 0)
        (data_1439b4aa4 & 0x800) != 0 && arg2 == 0 && *(arg1 + 0x68) != 0
        rdi = (*(*rcx_1 + 0x40))()
    
    int64_t* rcx_2 = *(arg1 + 0xb0)
    
    if (rcx_2 != 0)
        int64_t rdx_1 = *rcx_2
        (*(rdx_1 + 0x20))(rcx_2, rdx_1)

sub_140a845e0(sub_140a753a0())
int64_t var_88

if (rdi s>= 0)
    *(arg1 + 0x58) = 0
else
    int64_t* rcx_4 = *(arg1 + 0x70)
    *(arg1 + 0x58) += 1
    void var_68
    (*(*rcx_4 + 0x60))(rcx_4, &var_68)
    
    if (*(arg1 + 0x58) u<= 0xa)
        *(arg1 + 0x5c)
        *(arg1 + 0x5c) = 3
    else
        var_88 = *(*(arg1 + 0x18) + 0x168)
        sub_140fff020(rdi, "Result", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp", 
            0x1a7)

sub_140a845e0(sub_140a753a0())
int64_t* rcx_8 = *(*(arg1 + 0x18) + 0x150)
(*(*rcx_8 + 0x108))(rcx_8, 0, 0, 0, var_88)
__security_check_cookie(rax_1 ^ &var_a8)
return zx.q(rsi.b)

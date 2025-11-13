// 函数: sub_14265aec0
// 地址: 0x14265aec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af98a0("d:\build\++ue4\sync\engine\source\runtime\navigationsystem\public\NavigationData.h", 
    0x32b, Pure virtual not implemented (%s)", ANavigationData::GetRandomPoint")
sub_140afbb40()
int64_t* rbx_1 = *(arg3 + 8)
int32_t rax = data_143dbb200
*arg2 = data_143dbb1f8.q
arg2[1].d = rax
arg2[2] = 0

if (rbx_1 == 0)
    return arg2

rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    (**rbx_1)(rbx_1)
    int32_t rsi_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return arg2

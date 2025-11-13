// 函数: sub_142649c80
// 地址: 0x142649c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af98a0("d:\build\++ue4\sync\engine\source\runtime\navigationsystem\public\NavigationData.h", 
    0x329, Pure virtual not implemented (%s)", ANavigationData::BatchRaycast")
int32_t result = sub_140afbb40()
int64_t* rbx_1 = *(arg3 + 8)

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result

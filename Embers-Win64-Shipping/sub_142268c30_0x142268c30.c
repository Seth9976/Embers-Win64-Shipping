// 函数: sub_142268c30
// 地址: 0x142268c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int64_t* rcx = *(arg1 + 0x98)
*(arg1 + 0x98) = 0

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

int64_t* rcx_1 = *(arg1 + 0x60)

if (rcx_1 != 0)
    int64_t* rax_3 = (*(*rcx_1 + 0x30))(rcx_1)
    rbx = rax_3
    
    if (rax_3 != 0)
        int64_t r9_1 = *rax_3
        (*(r9_1 + 0x358))(rax_3, 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysScene_PhysX.cpp", 
            0x609, r9_1)

int64_t result = sub_1422667e0(arg1)

if (rbx == 0)
    return result

return (*(*rbx + 0x360))(rbx)

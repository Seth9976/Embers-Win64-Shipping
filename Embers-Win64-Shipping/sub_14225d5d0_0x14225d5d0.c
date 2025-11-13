// 函数: sub_14225d5d0
// 地址: 0x14225d5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x60)

if (rcx == 0)
    return 

int64_t* rax = (*(*rcx + 0x30))(rcx)

if (rax == 0)
    return 

int64_t r9_1 = *rax
(*(r9_1 + 0x358))(rax, 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysScene_PhysX.cpp", 
    0x230, r9_1)
int64_t* rcx_2 = *arg2

if (rcx_2 != 0)
    int64_t rdx = *rcx_2
    
    if ((*(rdx + 0x48))(rcx_2, rdx) != 0)
        (*(*rax + 0x78))(rax, *arg2)

(*(*rax + 0x360))(rax)

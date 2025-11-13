// 函数: sub_14227a5c0
// 地址: 0x14227a5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x74) = arg3
*(arg1 + 0x78) = arg4

if (arg2 == 0)
    return 

int64_t* rcx = *(arg1 + 0x60)

if (rcx == 0)
    return 

int64_t* rax = (*(*rcx + 0x30))(rcx)

if (rax == 0)
    return 

int64_t r9_1 = *rax
(*(r9_1 + 0x358))(rax, 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysScene_PhysX.cpp", 
    0x5b0, r9_1)
int32_t zmm1 = arg2[1]
int64_t rax_2 = *rax
int32_t var_18 = *arg2
int32_t var_10_1 = arg2[2]
int32_t var_14_1 = zmm1
(*(rax_2 + 0x210))(rax, &var_18)
(*(*rax + 0x360))(rax)

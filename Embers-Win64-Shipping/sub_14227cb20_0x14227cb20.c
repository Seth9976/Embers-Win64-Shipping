// 函数: sub_14227cb20
// 地址: 0x14227cb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xd0)
*(arg1 + 0xd0) = 0

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

if (*(arg1 + 0xc4) u>= *(arg1 + 0xa0))
    jump(*(**(arg1 + 0xb0) + 0x20))

int32_t arg_8 = 0
int64_t* rbx = *(arg1 + 0xe0)
int64_t* rcx_1 = rbx

if (rbx != 0)
    (*(*rbx + 0x108))(rcx_1, 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysSubstepTasks.cpp", 
        0x207)
    rcx_1 = *(arg1 + 0xe0)

int64_t* rax_5 = (*(*rcx_1 + 0x30))(rcx_1)
int64_t r8 = *rax_5
(*(r8 + 0x2c8))(rax_5, 2, r8)
int64_t* rcx_3 = *(arg1 + 0xe0)
int64_t rdx
rdx.b = 1
int64_t r9 = *rcx_3
(*(r9 + 0x48))(rcx_3, rdx, &arg_8, r9)
int64_t r8_2 = *rax_5
(*(r8_2 + 0x2c8))(rax_5, 0, r8_2)

if (rbx != 0)
    (*(*rbx + 0x118))(rbx)

return sub_14227cc20(arg1)

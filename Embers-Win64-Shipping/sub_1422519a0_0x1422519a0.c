// 函数: sub_1422519a0
// 地址: 0x1422519a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xb0)

if (rcx == 0)
    return 

int64_t* rdx_1 = *(arg1 + 0x148)

if (rdx_1 != 0)
    int64_t* rax_2 = (*(*rdx_1 + 0xe0))(rdx_1)
    
    if (rax_2 != 0)
        int64_t r9_1 = *rax_2
        (*(r9_1 + 0x358))(rax_2, 
            "D:"
        "/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysicsHandleComponent."
        "cpp", 
            0xf0, r9_1)
        int64_t* rcx_3 = *(arg1 + 0x148)
        int64_t rdx_2 = *rcx_3
        (*rdx_2)(rcx_3, rdx_2)
        int64_t* rcx_4 = *(arg1 + 0x150)
        int64_t rdx_3 = *rcx_4
        (*rdx_3)(rcx_4, rdx_3)
        (*(*rax_2 + 0x360))(rax_2)
    
    rcx = *(arg1 + 0xb0)
    *(arg1 + 0x150) = 0
    *(arg1 + 0x148) = 0

*(arg1 + 0xc0) &= 0xfffffffe
(*(*rcx + 0x608))(rcx, *(arg1 + 0xb8))
*(arg1 + 0xb0) = 0
int64_t arg_8 = 0
*(arg1 + 0xb8) = 0

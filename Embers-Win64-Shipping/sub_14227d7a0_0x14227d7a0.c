// 函数: sub_14227d7a0
// 地址: 0x14227d7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2

if (rcx == 0)
    return 

int64_t* rdx

if (arg1 != 0)
    rdx = *(arg1 + 0x60)

int64_t* r14_1

if (arg1 == 0 || rdx == 0)
    r14_1 = nullptr
else
    int64_t* rax_2 = (*(*rdx + 0x30))(rdx)
    rcx = *arg2
    r14_1 = rax_2

if (r14_1 == 0 || (*(*rcx + 0x30))(rcx) == 0)
    if (arg3 != 0)
        int64_t* rcx_17 = *arg2
        (**rcx_17)(rcx_17)
    
    *arg2 = 0
    return 

(*(*r14_1 + 0x358))(r14_1, 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysicsInterfacePhysX.cpp", 
    0xb5)
int64_t* rcx_3 = *arg2
int32_t* rbp_1 = rcx_3[2]
int64_t rbp_2

if (rbp_1 == 0 || *rbp_1 != 1)
    rbp_2 = 0
else
    rbp_2 = *(rbp_1 + 8)

if (rbp_2 != 0)
    int64_t* rbx_1 = *sub_140962f60(rbp_2)
    
    if (rbx_1 != 0)
        int64_t* rcx_6 = nullptr
        
        if ((*(*rbx_1 + 0x20))(rbx_1, "PxRigidBody") != 0)
            rcx_6 = rbx_1
        
        if (rcx_6 != 0)
            void* rbx_2 = *(arg1 + 0x110)
            bool z_1
            
            if (0 == *(rbx_2 + 0xac))
                *(rbx_2 + 0xac) = 0
                z_1 = true
            else
                *(rbx_2 + 0xac)
                z_1 = false
            
            int64_t rcx_7
            rcx_7.b = not(z_1)
            sub_142275e00(rcx_7 * 0x50 + rbx_2, rbp_2)
            bool z_2
            
            if (0 == *(rbx_2 + 0xac))
                *(rbx_2 + 0xac) = 0
                z_2 = true
            else
                *(rbx_2 + 0xac)
                z_2 = false
            
            int64_t rcx_11
            rcx_11.b = z_2
            sub_142275e00(rcx_11 * 0x50 + rbx_2, rbp_2)
    
    sub_140868c90(arg1 + 0x178, rbp_2)
    rcx_3 = *arg2

(**rcx_3)(rcx_3)
*arg2 = 0
(*(*r14_1 + 0x360))(r14_1)

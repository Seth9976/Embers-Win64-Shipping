// 函数: sub_142251a80
// 地址: 0x142251a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0xc0)

for (void* rsi_2 = &i[sx.q(*(arg1 + 0xc8)) * 2]; i != rsi_2; i = &i[2])
    void* rcx = *i
    
    if (rcx != 0)
        sub_1422352a0(rcx)
        void* rdi_1 = *i
        
        if (rdi_1 != 0)
            sub_140745b20(rdi_1 + 0x1a8)
            j_sub_140a74f90(rdi_1)
        
        *i = 0
    
    int64_t* rcx_3 = i[1]
    
    if (rcx_3 != 0)
        int64_t* rax_2 = (*(*rcx_3 + 0x30))(rcx_3)
        
        if (rax_2 != 0)
            int64_t r9_1 = *rax_2
            (*(r9_1 + 0x358))(rax_2, 
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysicalAnimationComponent."
            "cpp", 
                0x1d4, r9_1)
            int64_t r9_2 = *rax_2
            int64_t r8_1
            r8_1.b = 1
            (*(r9_2 + 0x68))(rax_2, i[1], r8_1, r9_2)
            int64_t rdx_3 = *rax_2
            (*(rdx_3 + 0x360))(rax_2, rdx_3)
        
        int64_t* rcx_7 = i[1]
        (**rcx_7)(rcx_7)
        i[1] = 0

*(arg1 + 0xc8) = 0

if (*(arg1 + 0xcc) s> 0xffffffff)
    return 

return sub_1405a5410(arg1 + 0xc0, 0) __tailcall

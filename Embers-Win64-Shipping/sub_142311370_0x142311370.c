// 函数: sub_142311370
// 地址: 0x142311370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
char rax = sub_140b5b8a0(arg2.d, 0)

if ((arg_10:4.d == 0 & rax) != 0 && arg3 != 0 && arg4 == 0)
    int64_t rdi_1 = 0
    int64_t* rbx_1 = *(arg1 + 0x800)
    uint64_t r14_2 = sx.q(*(arg1 + 0x808)) << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x808))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int64_t rcx_1 = *(arg5 + 8)
            arg_10 = *rbx_1
            (*arg5)(rcx_1, &arg_10)
            rdi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_1 != r14_2)
    
    return zx.q(*(arg1 + 0x808))

void* rax_4 = sub_141f64a80(arg1)

if (rax_4 != 0)
    void* r9 = *(arg1 + 0x430)
    
    if (r9 != 0)
        if ((*(arg1 + 0x88) & 4) != 0 && (*(arg1 + 0x719) & 0x10) != 0)
            int32_t rdx_2 = *(arg1 + 0x808)
            int32_t rdi_2 = 0
            uint64_t var_98 = 0
            int32_t var_90_1 = 0
            
            if (rdx_2 s> 0)
                sub_1405dadb0(&var_98, rdx_2)
                r9 = *(arg1 + 0x430)
            
            sub_14224d3f0(rax_4, &var_98, arg2, r9, arg3)
            uint64_t rbx_2 = var_98
            int64_t rbp_2 = 0
            int64_t rcx_5 = rbx_2 + (sx.q(var_90_1) << 2)
            uint64_t r15_4 = (rcx_5 - rbx_2 + 3) u>> 2
            
            if (rbx_2 u> rcx_5)
                r15_4 = 0
            
            if (r15_4 != 0)
                do
                    int64_t rcx_6 = sx.q(*rbx_2) << 3
                    void* rcx_7
                    
                    if (arg4 != 0)
                        rcx_7 = *(rcx_6 + *(rax_4 + 0x40))
                    
                    if (arg4 == 0 || rcx_7 == 0 || *(rcx_7 + 0x88) == 0)
                        int64_t rcx_8 = *(arg5 + 8)
                        rdi_2 += 1
                        int64_t var_88 = *(rcx_6 + *(arg1 + 0x800))
                        (*arg5)(rcx_8, &var_88)
                    
                    rbx_2 += 4
                    rbp_2 += 1
                while (rbp_2 != r15_4)
                
                rbx_2 = var_98
            
            if (rbx_2 != 0)
                sub_140a74f90(rbx_2)
            
            return zx.q(rdi_2)
        
        void var_80
        sub_140b58170(&var_80, "PIE", 1)
        void var_68
        int64_t* rax_9 = _vfprintf_p_l(&var_68, 
            Invalid Bodies : Make sure collision is enabled or root bone has body in PhysicsAsset.", 
            SkeletalMeshComponentPhysics")
        void var_78
        void var_50
        sub_140ae44d0(sub_140accdf0(&var_50, &var_80), &var_78, rax_9)
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t temp2_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_70 + 8))(var_70, 1)
        
        sub_140acd9c0(&var_50)
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t rdi_3 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rdi_3 == 1)
                    (*(*var_60 + 8))(var_60, zx.q(rdi_3))

return 0

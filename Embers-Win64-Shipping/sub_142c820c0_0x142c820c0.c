// 函数: sub_142c820c0
// 地址: 0x142c820c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0

while (true)
    void* rbx_1 = *arg1
    int32_t rcx = *(rbx_1 + 0x4ea0)
    
    if (rcx == 1)
        rbp = sub_142c81e60(arg1)
        
        if (*(rbx_1 + 0x4ea0) != 4)
            int32_t rax_18 = 2
            
            if (rbp != 0)
                rax_18 = 6
            
            *(rbx_1 + 0x4ea0) = rax_18
        
        break
    
    if (rcx == 2)
        int64_t* rcx_17 = *(rbx_1 + 0x4ed8)
        *(rbx_1 + 0x2d8) = rcx_17[1]
        arg2 = *arg1
        *(arg2 + 0x278) = rcx_17[2]
        rcx_17[1] = 0
        rcx_17[2] = 0
        *(rbx_1 + 0x4ea0) = 3
        
        if (sub_140611e40(*rcx_17) == 0)
            if (*(rbx_1 + 0x4ed0) == 0)
                *(rbx_1 + 0x4ea0) = 4
                return 0x4e
        else
            *(rbx_1 + 0x4ea0) = 4
    else if (rcx == 3)
        int64_t* rdi_1 = **(rbx_1 + 0x4eb8)
        *rdi_1
        int64_t rax_5
        int512_t zmm2
        rax_5, zmm2 = sub_142c563e0("%s%s", *(rbx_1 + 0x4ea8), arg3)
        
        if (rax_5 == 0)
            return 0x1b
        
        data_143ccb8a0(*(*arg1 + 0x4e30))
        *(*arg1 + 0x4e30) = 0
        *(*arg1 + 0x4e30) = rax_5
        *(*arg1 + 0x4e38) = rax_5
        arg2, arg3 = sub_142c64850(*arg1, "Wildcard - START of "%s"\n", *rdi_1, zmm2)
        int64_t r9_1 = *(*arg1 + 0x810)
        
        if (r9_1 != 0)
            int32_t rax_10
            rax_10, arg2 = r9_1(rdi_1, *(rbx_1 + 0x4ee8), zx.q(*(rbx_1 + 0x4ed0)))
            
            if (rax_10 == 1)
                return 0x58
            
            if (rax_10 == 2)
                arg2, arg3 = sub_142c64850(*arg1, "Wildcard - "%s" skipped by user\n", *rdi_1, arg3)
                *(rbx_1 + 0x4ea0) = 5
                continue
        
        if (rdi_1[1].d == 0)
            if ((rdi_1[0xc].b & 0x40) != 0)
                arg1[0xed] = rdi_1[5]
            
            int32_t rax_14 = sub_142c7e6d0(arg1)
            rbp = rax_14
            
            if (rax_14 != 0)
                return rax_14
            
            sub_142c6a090(rbx_1 + 0x4eb8, *(rbx_1 + 0x4eb8), 0)
            
            if (*(rbx_1 + 0x4ed0) != 0)
                break
            
            *(rbx_1 + 0x4ea0) = 4
            return 0
        
        *(rbx_1 + 0x4ea0) = 5
    else
        if (rcx == 4)
            int64_t* rcx_19 = *(rbx_1 + 0x4ed8)
            
            if (rcx_19 != 0)
                rbp = sub_140611e40(*rcx_19)
            
            *(rbx_1 + 0x4ea0) = sbb.d(arg2.d, arg2.d, rbp != 0) + 7
            break
        
        if (rcx != 5)
            break
        
        int64_t rax_1 = *(rbx_1 + 0x818)
        
        if (rax_1 != 0)
            rax_1(*(rbx_1 + 0x4ee8))
        
        int32_t rcx_7
        rcx_7, arg2 = sub_142c6a090(rbx_1 + 0x4eb8, *(rbx_1 + 0x4eb8), 0)
        *(rbx_1 + 0x4ea0) = sbb.d(rcx_7, rcx_7, *(rbx_1 + 0x4ed0) != 0) + 4

return rbp

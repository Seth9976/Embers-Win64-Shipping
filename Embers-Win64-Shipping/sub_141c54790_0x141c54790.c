// 函数: sub_141c54790
// 地址: 0x141c54790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[1].d)
int64_t rdx = *arg1
void* rbx_1 = rax * 0x2f0 + *(rdx + 0xd8)
int32_t result = *(arg1 + 0xc)
void* r9_1 = rax * 0x3f0 + *(rdx + 0xc8)

if (*(rbx_1 + 0x2d8) == result || (*(r9_1 + 0x3d1) & 1) != 0)
    *(r9_1 + 0x3d0) ^= (*(r9_1 + 0x3d0) ^ arg1[4].b) & 1
    char rcx = *(r9_1 + 0x3d0)
    *(r9_1 + 0x3d0) = (((*(arg1 + 0x21) * 2) ^ rcx) & 2) ^ rcx
    uint32_t rbp_2 = (sx.q(*(rbx_1 + 0x250)) u>> 2).d
    
    if (arg1[3].d == rbp_2)
        *(sx.q(arg1[1].d) + *(*arg1 + 0x178)) = 0
        int64_t rdi_2 = arg1[2]
        result = memcpy(rbx_1 + 0x150, rdi_2, *(rbx_1 + 0x250))
        
        if (*(rbx_1 + 0x254) == 0)
            result = memcpy(rbx_1 + 0x50, rdi_2, *(rbx_1 + 0x250))
            *(rbx_1 + 0x254) = 1
    else
        uint64_t rdi_1 = 0
        uint64_t var_18 = 0
        int64_t var_10_1 = 0
        
        if (arg1[4].b == 0)
            sub_141c5cc70(*(r9_1 + 0x3d1) u>> 7, *(arg1 + 0xc), divu.dp.d(0:rbp_2, *(arg1 + 0xc)), 
                *(arg1 + 0x21), &var_18)
            rdi_1 = var_18
        else
            var_10_1.d = rbp_2
            
            if (rbp_2 s> 0)
                sub_140775270(&var_18)
                rdi_1 = var_18
            
            memset(rdi_1, 0, sx.q(rbp_2) << 2)
            *(sx.q(arg1[1].d) + *(*arg1 + 0x178)) = 1
        
        result = memcpy(rbx_1 + 0x150, rdi_1, *(rbx_1 + 0x250))
        
        if (*(rbx_1 + 0x254) == 0)
            result = memcpy(rbx_1 + 0x50, rdi_1, *(rbx_1 + 0x250))
            *(rbx_1 + 0x254) = 1
        
        if (rdi_1 != 0)
            return sub_140a74f90(rdi_1)

return result

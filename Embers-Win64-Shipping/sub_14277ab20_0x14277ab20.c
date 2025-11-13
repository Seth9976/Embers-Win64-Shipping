// 函数: sub_14277ab20
// 地址: 0x14277ab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2
int64_t rdx = sx.q(arg2[1].d)

for (; i != &i[rdx]; i = &i[1])
    if (*i == arg1)
        return nullptr

int32_t rax_1 = (rdx + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*((rdx << 3) + *arg2) = arg1
int32_t rbx_1 = -1
int32_t rdi_1 = arg2[1].d
int32_t rdi_2 = rdi_1 - 1

if (rdi_1 - 1 s>= 0)
    int64_t r14_1 = sx.q(rdi_2) << 3
    
    while (true)
        if (rbx_1 == 0xffffffff)
            int64_t* rcx_1 = *(r14_1 + *arg2)
            
            if ((*(*rcx_1 + 0x3f0))(rcx_1) != 0)
                rbx_1 = rdi_2
            
            r14_1 -= 8
            int32_t temp1_1 = rdi_2
            rdi_2 -= 1
            
            if (temp1_1 - 1 s>= 0)
                continue
            else if (rbx_1 == 0xffffffff)
                break
        
        int64_t rbx_2 = sx.q(rbx_1) << 3
        int64_t* rcx_2 = *(rbx_2 + *arg2)
        int32_t rax_10 = (*(*rcx_2 + 0x3e8))(rcx_2)
        
        if (rax_10 == 2)
            void*** rax_11 = j_sub_140a82f30(zx.q(rax_10 + 0xe))
            
            if (rax_11 == 0)
                return nullptr
            
            rax_11[1] = 0
            *rax_11 = &data_142fc9648
            sub_140b58170(&rax_11[1], &data_1437020ab, 1)
            *rax_11 = &data_142fc9a30
            return rax_11
        
        int64_t* rcx_5 = *(rbx_2 + *arg2)
        int32_t rax_15 = (*(*rcx_5 + 0x3e8))(rcx_5)
        
        if (rax_15 == 3)
            void*** rax_16 = j_sub_140a82f30(zx.q(rax_15 + 0xd))
            
            if (rax_16 == 0)
                return nullptr
            
            rax_16[1] = 0
            *rax_16 = &data_142fc9648
            sub_140b58170(&rax_16[1], &data_1437020ab, 1)
            *rax_16 = &data_142fc9a68
            return rax_16
        
        int64_t* rcx_8 = *(rbx_2 + *arg2)
        int32_t rax_19 = (*(*rcx_8 + 0x3e8))(rcx_8)
        
        if (rax_19 == 4)
            void*** rax_20 = j_sub_140a82f30(zx.q(rax_19 + 0xc))
            
            if (rax_20 != 0)
                return sub_1417bf4c0(rax_20)
        
        break

return nullptr

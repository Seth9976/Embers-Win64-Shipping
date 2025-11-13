// 函数: sub_141f83040
// 地址: 0x141f83040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1[5] + 0x58)
(*(*rcx + 0x400))(rcx, arg1)
void* rax_2 = arg1[5]
int64_t* rcx_1 = *(rax_2 + 0x13c0)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x270))(rcx_1, arg1)
    rax_2 = arg1[5]

int64_t* rcx_2 = *(rax_2 + 0x58)
char rax_5 = (*(*rcx_2 + 0x368))(rcx_2)
int64_t* result

if (rax_5 != 0 || arg1[0x20].d s<= 0 || *(arg1 + 0x34) s< 0 || arg2 != 0)
    uint64_t rsi
    rsi.b = 0
    
    if (rax_5 == 0)
        void* rax_7 = arg1[0xe]
        
        if (rax_7 != 0)
            char rax_10
            
            if ((*(rax_7 + 0x58) & 0x40) != 0)
                int64_t* rcx_8 = *(arg1[5] + 0x58)
                rax_10 = (*(*rcx_8 + 0x390))(rcx_8)
            
            if ((*(rax_7 + 0x58) & 0x40) == 0 || rax_10 != 0)
                void* rax_16
                
                if ((arg1[6].b & 4) != 0 && arg3 == 1)
                    rax_16 = arg1[0xe]
                
                if ((arg1[6].b & 4) == 0 || arg3 != 1 || (*(rax_16 + 0x58) & 0x40) != 0)
                    int64_t* rcx_16 = arg1[0xe]
                    
                    if ((rcx_16[0xb].b & 1) == 0 && (*(*rcx_16 + 0x150))(rcx_16) != 0
                            && data_143de5432 == 0)
                        int64_t* rcx_17 = *(arg1[5] + 0x58)
                        
                        if ((*(*rcx_17 + 0x3f0))(rcx_17, arg1[0xe]) != 0)
                            sub_141f84b90(arg1)
                else
                    *(rax_16 + 0xf1) = 2
                    void* rcx_14 = arg1[5]
                    sub_14216f020(*(rcx_14 + 0x58), arg1[0xe], rcx_14)
                    rsi = zx.q(arg3)
            else if ((arg1[6].b & 0x40) == 0)
                sub_141dd9000(arg1[0xe], 3)
                sub_141dd8f90(arg1[0xe], 0)
                int64_t* rcx_11 = arg1[0xe]
                arg1[6].d |= 0x40
                
                if ((*(*rcx_11 + 0x150))(rcx_11) != 0 && data_143de5432 == rax_5)
                    int64_t* rcx_12 = arg1[0xe]
                    (*(*rcx_12 + 0x570))(rcx_12)
                
                int64_t* rcx_13 = *(arg1[5] + 0x58)
                (*(*rcx_13 + 0x408))(rcx_13, arg1[0xe])
    
    (*(*arg1 + 0x270))(arg1)
    char rdx_8
    
    if (arg2 != 0 || rax_5 != 0 || rsi.b == 0)
        rdx_8 = 0
    else
        rdx_8 = 1
    
    sub_141f83590(arg1, rdx_8)
    arg1[0x23].d = 0
    
    if (*(arg1 + 0x11c) != 0)
        sub_140638cc0(&arg1[0x22], 0)
    
    arg1[0x28].d = 0xffffffff
    *(arg1 + 0x144) = 0
    sub_14059a8e0(&arg1[0x24], 0)
    int32_t i_4 = arg1[0x2b].d
    
    if (i_4 s> 0)
        int64_t r8_3 = 0
        uint64_t i_3 = zx.q(i_4)
        uint64_t i
        
        do
            void* rcx_23 = arg1[0x2a]
            void* rax_23 = &arg1[0x29]
            int64_t rdx_11 = (sx.q(arg1[0x2b].d) - 1) & r8_3
            
            if (rcx_23 != 0)
                rax_23 = rcx_23
            
            r8_3 += 1
            *(rax_23 + (rdx_11 << 2)) = 0xffffffff
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int512_t zmm0_1
    result, zmm0_1 = sub_140eb8900(&arg1[0x49], 0)
    int32_t i_1 = 0
    
    if (arg1[0x31].d s> 0)
        int64_t rdi_4 = 0
        
        do
            int64_t* rcx_25 = *(arg1[0x30] + rdi_4)
            
            if (rcx_25 != 0)
                (**rcx_25)(rcx_25, 1)
            
            i_1 += 1
            rdi_4 += 8
        while (i_1 s< arg1[0x31].d)
    
    arg1[0x31].d = 0
    
    if (*(arg1 + 0x18c) != 0)
        result, zmm0_1 = sub_1405c5570(&arg1[0x30], 0)
    
    arg1[0x2f].d = 0
    
    if (*(arg1 + 0x17c) != 0)
        result, zmm0_1 = sub_1405dadb0(&arg1[0x2e], 0)
    
    if (arg1[0x20].d s> 0)
        int32_t i_2 = 0
        int64_t rdi_5 = 0
        
        do
            int64_t* rcx_28 = *(arg1[0x1f] + rdi_5)
            
            if (rcx_28 != 0)
                (**rcx_28)(rcx_28, 1)
            
            i_2 += 1
            rdi_5 += 8
        while (i_2 s< arg1[0x20].d)
        
        arg1[0x20].d = 0
        
        if (*(arg1 + 0x104) != 0)
            zmm0_1 = sub_1405c5570(&arg1[0x1f], 0)
        
        int64_t* rdi_6 = arg1[5][0xd]
        
        if (rdi_6 != 0)
            void* rax_27
            rax_27, zmm0_1 = sub_14254d5d0()
            void* rcx_30 = rdi_6[2]
            result = sx.q(*(rax_27 + 0x38))
            
            if (result.d s<= *(rcx_30 + 0x38) && (*(rcx_30 + 0x30))[result] == rax_27 + 0x30)
                (*(*rdi_6 + 0x2e0))(rdi_6, &arg1[0xf], 0)
    
    if (*(arg1 + 0x34) s>= 0)
        return sub_141f83430(arg1, zmm0_1)
    
    arg1[5] = 0
    result.b = 1
else
    void* rax_6
    int512_t zmm0
    rax_6, zmm0 = sub_141f78a40(arg1[5] + 0x1418, arg1[0xf].d, &arg1[0xf])
    int64_t rdi_1 = arg1[5]
    sub_141f83430(arg1, zmm0)
    arg1[5] = rdi_1
    *(arg1 + 0x191) = arg3
    int64_t rdi_2 = sx.q(*(rax_6 + 8))
    int32_t rcx_6 = (rdi_2 + 1).d
    *(rax_6 + 8) = rcx_6
    
    if (rcx_6 s> *(rax_6 + 0xc))
        sub_1405a4d70(rax_6)
    
    (*rax_6)[rdi_2] = arg1
    result.b = 0
    *(arg1 + 0x34) = 0xffffffff

return result

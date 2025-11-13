// 函数: sub_140855bb0
// 地址: 0x140855bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x28)

if (rcx != 0)
    sub_141ee8490(rcx)

*(arg1 + 0x6b8) &= 0xffffffdf
uint128_t zmm0 = zx.o(data_143dbb1f8.q)
int32_t rax = data_143dbb200
uint64_t var_4c = zmm0.q
int32_t var_50 = rax
int32_t var_44 = rax
zmm0.q = zmm0.q
*(arg1 + 0x6c8) = zmm0
void* var_58_1 = zmm0.q
*(arg1 + 0x6d8) = var_4c
*(arg1 + 0x6e0) = 1.d
sub_14084ee30(arg1 + 0xa0, 0)
void* rbp = *(arg1 + 0x28)

if (rbp != 0)
    void* rbp_1 = *(rbp + 0x408)
    
    if (rbp_1 != 0)
        int32_t r15_1 = *(rbp_1 + 0x70)
        
        if (r15_1 s> *(arg1 + 0xac))
            sub_1405a5410(arg1 + 0xa0, r15_1)
        
        int32_t r14_1 = 0
        
        if (r15_1 s> 0)
            do
                void*** rax_2 = j_sub_140a82f30(0x970)
                void*** rbx_1 = rax_2
                
                if (rax_2 == 0)
                    rbx_1 = nullptr
                else
                    rax_2[1].d = 1
                    *(rax_2 + 0xc) = 1
                    *rax_2 = &data_142ddc068
                    sub_1407e3210(&rax_2[2], arg1)
                
                var_50.q = rbx_1
                sub_140801970(&rbx_1[2], r14_1, *(arg1 + 0xe0))
                
                if ((*(rbp_1 + 0x34) & 1) != 0)
                    int32_t rax_3 = *(rbp_1 + 0x420)
                    int64_t zmm1 = *(rbp_1 + 0x418)
                    int128_t var_38 = *(rbp_1 + 0x408)
                    int64_t var_28_1 = zmm1
                    int32_t var_20_1 = rax_3
                    sub_14080cc60(&rbx_1[2], &var_38)
                
                int64_t rbx_2 = sx.q(*(arg1 + 0xa8))
                int32_t rax_4 = (rbx_2 + 1).d
                *(arg1 + 0xa8) = rax_4
                
                if (rax_4 s> *(arg1 + 0xac))
                    sub_1405a4f90(arg1 + 0xa0)
                
                void** rcx_9 = (rbx_2 << 4) + *(arg1 + 0xa0)
                *rcx_9 = &rbx_1[2]
                rcx_9[1] = var_50.q
                void* rax_7 = var_50.q
                
                if (rax_7 != 0)
                    *(rax_7 + 8) += 1
                    int64_t* rbx_3 = var_50.q
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t rax_10 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (rax_10 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                
                r14_1 += 1
            while (r14_1 s< r15_1)
        
        int64_t* i = *(arg1 + 0xa0)
        
        for (void* r9_3 = &i[sx.q(*(arg1 + 0xa8)) * 2]; i != r9_3; i = &i[2])
            void* r8_3 = *(*i + 0x788)
            
            if (r8_3 != 0)
                int32_t rax_13 = *(arg1 + 0x6b8)
                int32_t rcx_12 = 0
                
                if (*(r8_3 + 0xd8) == 1)
                    rcx_12 = 0x20
                
                *(arg1 + 0x6b8) = (((rcx_12 | rax_13) ^ rax_13) & 0x20) ^ rax_13
        
        if ((*(rbp_1 + 0x34) & 1) != 0)
            *(arg1 + 0x6c8) = *(rbp_1 + 0x408)
            *(arg1 + 0x6d8) = *(rbp_1 + 0x418)
            *(arg1 + 0x6e0) = *(rbp_1 + 0x420)

return sub_140859ab0(arg1) __tailcall

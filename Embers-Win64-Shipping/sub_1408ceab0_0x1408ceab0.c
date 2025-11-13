// 函数: sub_1408ceab0
// 地址: 0x1408ceab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r15 = *(arg1 + 0xb8)
void* r12_1 = sx.q(*(arg1 + 0xc0)) * 0x38 + r15

if (r15 != r12_1)
    int32_t* rbx_1 = &r15[0x28]
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    do
        if (*r15 == 0)
            *(rbx_1 - 0x27) = 0
            int64_t rsi_1 = 0
            int64_t rax_1 = sx.q(*rbx_1)
            int32_t* rdi_1 = *(rbx_1 - 8)
            int64_t var_68 = 0
            int64_t var_60_1 = 0
            uint64_t r14_2 = rax_1 << 2 u>> 2
            
            if (rdi_1 u> &rdi_1[rax_1])
                r14_2 = 0
            
            if (r14_2 != 0)
                do
                    uint64_t r8_1 = zx.q(*rdi_1)
                    int64_t rcx_3
                    
                    if (r8_1.d == *(*(rbx_1 - 8) + (sx.q(*rbx_1) << 2) - 4))
                        int64_t var_48
                        sub_140a2e390(&var_48, u"%i", r8_1)
                        int32_t var_40
                        int32_t r8_5
                        
                        if (var_40 == 0)
                            r8_5 = 0
                        else
                            r8_5 = var_40 - 1
                        
                        sub_140a20ba0(&var_68, var_48, r8_5)
                        rcx_3 = var_48
                    else
                        int64_t var_58
                        sub_140a2e390(&var_58, u"%i, ", r8_1)
                        int32_t var_50
                        int32_t r8_3
                        
                        if (var_50 == 0)
                            r8_3 = 0
                        else
                            r8_3 = var_50 - 1
                        
                        sub_140a20ba0(&var_68, var_58, r8_3)
                        rcx_3 = var_58
                    
                    if (rcx_3 != 0)
                        sub_140a74f90(rcx_3)
                    
                    rdi_1 = &rdi_1[1]
                    rsi_1 += 1
                while (rsi_1 != r14_2)
            
            int32_t r9_1 = rbx_1[-6]
            uint64_t rdx_3 = zx.q(rbx_1[-5])
            uint64_t r10_2 = zx.q(rbx_1[-7].b) * 0xa0
            uint64_t rax_6 = zx.q(*(rbx_1 - 0x1b))
            int32_t rcx_7 = *(r10_2 + *(arg1 + 0x58) + 0x28) - 1
            
            if (rcx_7 u<= r9_1)
                r9_1 = rcx_7
            
            rbx_1[-6] = r9_1
            uint64_t r8_7 = rax_6 * 0xa0
            int32_t rcx_9 = *(r8_7 + *(arg1 + 0x58) + 0x28) - 1
            
            if (rcx_9 u<= rdx_3.d)
                rdx_3 = zx.q(rcx_9)
            
            rbx_1[-5] = rdx_3.d
            int64_t r11_1 = *(arg1 + 0x58)
            int64_t rdi_2 = *(r10_2 + r11_1 + 0x20)
            int64_t r9_2 = *(r8_7 + r11_1 + 0x20)
            void* r14_3 = *(rdi_2 + (sx.q(r9_1) << 3))
            void* rsi_2 = *(r9_2 + (sx.q(rdx_3.d) << 3))
            
            if (*(r8_7 + r11_1) != 0)
                int64_t rax_10 = sx.q(rbx_1[3])
                
                if (rax_10.d != 0xffffffff)
                    rsi_2 = *(r9_2 + (sx.q(*(*(arg1 + 0xc8) + rax_10 * 0x30 + 0x14)) << 3))
            
            if (*(r10_2 + r11_1) != 0)
                int64_t rax_12 = sx.q(rbx_1[2])
                
                if (rax_12.d != 0xffffffff)
                    r14_3 = *(rdi_2 + (sx.q(*(*(arg1 + 0xc8) + rax_12 * 0x30 + 0x14)) << 3))
            
            int64_t r10_3 = 0
            int32_t* r9_3 = *(rbx_1 - 8)
            uint64_t r11_3 = sx.q(*rbx_1) << 2 u>> 2
            
            if (r9_3 u> &r9_3[sx.q(*rbx_1)])
                r11_3 = 0
            
            if (r11_3 != 0)
                do
                    int64_t r8_8 = sx.q(*r9_3)
                    r9_3 = &r9_3[1]
                    r10_3 += 1
                    r8_7 = r8_8 << 6
                    *((r8_8 << 6) + *(arg1 + 0x38) + 2) = rbx_1[-5].b
                    *(r8_7 + *(arg1 + 0x38) + 3) = 1
                while (r10_3 != r11_3)
            
            int64_t* rdi_3 = *(rbx_1 - 0x10)
            rdx_3.b = 1
            zmm6 = rbx_1[-8]
            int64_t* rcx_17 = *rdi_3
            (*(*rcx_17 + 0x340))(rcx_17, rdx_3, r8_7, r9_3)
            void* rcx_18 = rdi_3[1]
            rdi_3[4].d = zmm6.d
            
            if (rcx_18 != 0)
                char rax_19 = *(rcx_18 + 0x27c)
                void* rdx_5 = r14_3
                
                if (rax_19 == 0)
                    rdx_5 = rsi_2
                
                if (rax_19 == 0)
                    rsi_2 = r14_3
                
                rdi_3[2] = rdx_5
                sub_140d3a3a0(rcx_18 + 0x268, rdx_5)
                int32_t* rcx_21 = rdi_3[1] + 0x270
                rdi_3[3] = rsi_2
                sub_140d3a3a0(rcx_21, rsi_2)
                *(rdi_3[1] + 0x278) = zmm6.d
                void* rcx_22 = rdi_3[1]
                void* rax_20
                rax_20.b = *(rcx_22 + 0x27c) == 0
                *(rdi_3 + 0x24) = rax_20.b
                *(rcx_22 + 0x27c) = rax_20.b
                int64_t* rcx_23 = *rdi_3
                (*(*rcx_23 + 0x3c0))(rcx_23, rdi_3[2])
                int64_t* rcx_24 = *rdi_3
                (*(*rcx_24 + 0x3c0))(rcx_24, rdi_3[3])
            
            int64_t rcx_25 = var_68
            *r15 = 1
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
        
        r15 = &r15[0x38]
        rbx_1 = &rbx_1[0xe]
    while (r15 != r12_1)

char* i = *(arg1 + 0xc8)
uint64_t result = sx.q(*(arg1 + 0xd0))

for (void* rdx_11 = &i[result * 0x30]; i != rdx_11; i = &i[0x30])
    if (*i == 0)
        *i = 1
        result = zx.q(*(arg1 + 0x130))
        *(i + 8) = result.d

return result

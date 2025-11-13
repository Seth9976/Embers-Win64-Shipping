// 函数: sub_1420804b0
// 地址: 0x1420804b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1
void* const r13 = nullptr
void* r14 = nullptr
void* r15 = arg2
void* var_a8 = nullptr
int32_t i_4 = 0
int32_t var_9c = 0
int32_t i_3 = 0

if (*(arg1 + 0x30) s> 0)
    int64_t rcx = 0
    int64_t var_b0_1 = 0
    int32_t i
    
    do
        void* r15_1 = *(r15 + 0xa0)
        char* r14_2 = *(result + 0x28) + rcx
        int64_t var_68_1 = 0
        int64_t var_70 = 0
        char rax = r14_2[4]
        int64_t rbx_1 = *(r14_2 + 8)
        char var_77_1 = rax
        int32_t rax_1 = *r14_2
        uint8_t rcx_2 = (rax_1 u>> 1).b
        rax_1.b &= 1
        uint8_t var_78
        rcx_2 = ((rcx_2 & 1) * 2) | rax_1.b | (var_78 & 0xfc)
        var_78 = rcx_2
        void*** rax_3 = j_sub_140a82f30(0x20)
        int64_t* rsi_1 = rax_3
        
        if (rax_3 == 0)
            rsi_1 = nullptr
        else
            rax_3[1].d = 1
            *(rax_3 + 0xc) = 1
            *rax_3 = &data_1432ad958
            sub_140d3a3a0(&rax_3[2], nullptr)
            rsi_1[3] = 0
        
        uint128_t zmm0_1 = (&rsi_1[2]).o
        int64_t* rdi_1 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rdi_1 = rsi_1
        
        void* rax_4 = zmm0_1:8.q
        int32_t* rsi_2 = zmm0_1.q
        int32_t* var_60_1 = rsi_2
        
        if (rax_4 != 0)
            r13 = rax_4
        
        void* const var_58_1 = r13
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        sub_140d3a3a0(rsi_2, r15_1)
        r15 = arg2
        *(rsi_2 + 8) = rbx_1
        
        if ((*r14_2 & 4) != 0)
            int32_t rbx_2 = *(r15 + 0xc8)
            int32_t rbx_3 = rbx_2 - 1
            
            if (rbx_2 - 1 s>= 0)
                int64_t rsi_4 = sx.q(rbx_3) * 0x28
                int64_t r14_3 = rsi_4
                char rcx_8 = rax
                int64_t r15_3 = sx.q(rbx_3 + 1) * 0x28
                int32_t temp4_1
                
                do
                    void* rax_9 = *(r15 + 0xc0)
                    
                    if (*(rsi_4 + rax_9 + 1) != rcx_8)
                        sub_140e53610(rax_9 + 8 + r14_3)
                        int32_t rcx_11 = *(r15 + 0xc8)
                        int32_t rax_11 = rcx_11 - rbx_3
                        
                        if (rax_11 != 1)
                            int64_t rcx_12 = *(r15 + 0xc0)
                            memmove(rcx_12 + r14_3, r15_3 + rcx_12, (rax_11 - 1) * 0x28)
                            rcx_11 = *(r15 + 0xc8)
                        
                        *(r15 + 0xc8) = rcx_11 - 1
                        sub_1409da680(r15 + 0xc0)
                        rcx_8 = rax
                    
                    r15_3 -= 0x28
                    r14_3 -= 0x28
                    rsi_4 -= 0x28
                    temp4_1 = rbx_3
                    rbx_3 -= 1
                while (temp4_1 - 1 s>= 0)
                rsi_2 = zmm0_1.q
                r15 = arg2
        
        int64_t i_6 = sx.q(i_4)
        i_4 = (i_6 + 1).d
        
        if (i_4 s> var_9c)
            sub_1405c4ec0(&var_a8)
        
        r14 = var_a8
        int64_t rcx_16 = i_6 * 5
        *(r14 + (rcx_16 << 3)) = rcx_2
        *(r14 + (rcx_16 << 3) + 1) = rax
        *(r14 + (rcx_16 << 3) + 8) = 0
        *(r14 + (rcx_16 << 3) + 0x10) = 0
        *(r14 + (rcx_16 << 3) + 0x18) = rsi_2
        *(r14 + (rcx_16 << 3) + 0x20) = r13
        
        if (r13 != 0)
            *(r13 + 8) += 1
        
        sub_140e53610(&var_70)
        r13 = nullptr
        i = i_3 + 1
        result = arg1
        rcx = var_b0_1 + 0x10
        i_3 = i
        var_b0_1 = rcx
    while (i s< *(result + 0x30))
    
    if (i_4 s> 0)
        void* rbx_4 = r14 + 0x10
        uint64_t i_5 = zx.q(i_4)
        uint64_t i_1
        
        do
            int64_t rsi_5 = sx.q(*(r15 + 0xc8))
            int32_t rax_17 = (rsi_5 + 1).d
            *(r15 + 0xc8) = rax_17
            
            if (rax_17 s> *(r15 + 0xcc))
                sub_1405c4ec0(r15 + 0xc0)
            
            char* rdx_5 = *(r15 + 0xc0) + rsi_5 * 0x28
            *rdx_5 = *(rbx_4 - 0x10)
            rdx_5[1] = *(rbx_4 - 0xf)
            *(rdx_5 + 8) = *(rbx_4 - 8)
            void* rax_22 = *rbx_4
            *(rdx_5 + 0x10) = rax_22
            
            if (rax_22 != 0)
                *(rax_22 + 8) += 1
            
            *(rdx_5 + 0x18) = *(rbx_4 + 8)
            result = *(rbx_4 + 0x10)
            *(rdx_5 + 0x20) = result
            
            if (result != 0)
                *(result + 8) += 1
            
            rbx_4 += 0x28
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        r14 = var_a8

if (i_4 != 0)
    void* rbx_5 = r14 + 8
    int32_t i_2
    
    do
        result = sub_140e53610(rbx_5)
        rbx_5 += 0x28
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

if (r14 == 0)
    return result

return sub_140a74f90(r14)

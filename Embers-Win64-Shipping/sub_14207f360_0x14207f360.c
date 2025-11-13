// 函数: sub_14207f360
// 地址: 0x14207f360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
void* result = arg1
int32_t i_5 = 0
void* var_d0 = nullptr
int32_t var_c4 = 0
int32_t i_3 = 0

if (*(arg1 + 0x30) s> 0)
    void* rcx = nullptr
    void* var_c0_1 = nullptr
    uint8_t var_b8
    char var_b7
    int128_t var_a8
    int32_t i
    
    do
        int32_t* rcx_1 = rcx + *(result + 0x28)
        int32_t var_ac_1 = 0xffffffff
        char rax_1 = var_b7 & 0xfe
        char rbx_1 = rcx_1[3].b
        int64_t rdi_1 = *(rcx_1 + 4)
        int64_t rsi_1 = *(rcx_1 + 0x10)
        var_b7 = rax_1
        int32_t rax_2 = *rcx_1
        uint8_t rdx_1 = (rax_2 u>> 1).b
        rax_2.b &= 1
        char var_b6_1 = rbx_1
        int64_t var_b4_1 = rdi_1
        __builtin_memset(&var_a8, 0, 0x20)
        rdx_1 = ((rdx_1 & 1) * 2) | rax_2.b | (var_b8 & 0xfc)
        char var_78_1 = 3
        void* rax_4 = *(arg2 + 0xa0)
        var_b8 = rdx_1
        void*** rax_5 = j_sub_140a82f30(0x20)
        int64_t* r12_1 = rax_5
        
        if (rax_5 == 0)
            r12_1 = nullptr
        else
            rax_5[1].d = 1
            *(rax_5 + 0xc) = 1
            *rax_5 = &data_1432ad958
            sub_140d3a3a0(&rax_5[2], nullptr)
            r12_1[3] = 0
        
        uint128_t zmm0_1 = (&r12_1[2]).o
        int64_t* r14_1 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (r14_1 != 0)
            r14_1[1].d += 1
            r14_1 = r12_1
        
        void* r12_2 = nullptr
        int64_t var_88_1 = zmm0_1.q
        void* rax_7 = zmm0_1:8.q
        
        if (rax_7 != 0)
            r12_2 = rax_7
        
        void* var_80_1 = r12_2
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d == 1)
                (**r14_1)(r14_1)
                int32_t temp3_1 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*r14_1 + 8))(r14_1, 1)
        
        int32_t* r14_2 = zmm0_1.q
        sub_140d3a3a0(r14_2, rax_4)
        *(r14_2 + 8) = rsi_1
        
        if ((*rcx_1 & 4) != 0)
            int32_t rsi_2 = *(arg2 + 0x118)
            int32_t rsi_3 = rsi_2 - 1
            
            if (rsi_2 - 1 s>= 0)
                int64_t r14_4 = sx.q(rsi_3) << 4
                int32_t temp4_1
                
                do
                    void* rcx_6 = *(r14_4 + *(arg2 + 0x110))
                    
                    if (*(rcx_6 + 4) == rdi_1 && *(rcx_6 + 2) == rbx_1)
                        sub_141f22280(arg2, rsi_3)
                    
                    r14_4 -= 0x10
                    temp4_1 = rsi_3
                    rsi_3 -= 1
                while (temp4_1 - 1 s>= 0)
                r14_2 = zmm0_1.q
        
        int64_t i_6 = sx.q(i_5)
        i_5 = (i_6 + 1).d
        
        if (i_5 s> var_c4)
            sub_140775520(&var_d0)
        
        int64_t rcx_9 = i_6 * 9
        rsi = var_d0
        *(rsi + (rcx_9 << 3) + 1) &= 0xfe
        *(rsi + (rcx_9 << 3)) = rdx_1
        *(rsi + (rcx_9 << 3) + 2) = rbx_1
        *(rsi + (rcx_9 << 3) + 1) |= rax_1 & 1
        *(rsi + (rcx_9 << 3) + 4) = rdi_1
        *(rsi + (rcx_9 << 3) + 0xc) = 0xffffffff
        *(rsi + (rcx_9 << 3) + 0x10) = 0
        *(rsi + (rcx_9 << 3) + 0x18) = 0
        *(rsi + (rcx_9 << 3) + 0x20) = 0
        *(rsi + (rcx_9 << 3) + 0x28) = 0
        *(rsi + (rcx_9 << 3) + 0x30) = r14_2
        *(rsi + (rcx_9 << 3) + 0x38) = r12_2
        
        if (r12_2 != 0)
            *(r12_2 + 8) += 1
        
        *(rsi + (rcx_9 << 3) + 0x40) = 3
        sub_141b84450(&var_a8)
        i = i_3 + 1
        result = arg1
        rcx = var_c0_1 + 0x18
        i_3 = i
        var_c0_1 = rcx
    while (i s< *(result + 0x30))
    
    if (i_5 s> 0)
        void* rbx_2 = rsi + 0x38
        uint64_t i_4 = zx.q(i_5)
        uint64_t i_1
        
        do
            var_b8 = *(rbx_2 - 0x38)
            var_b7 ^= (*(rbx_2 - 0x37) ^ var_b7) & 1
            char var_b6_2 = *(rbx_2 - 0x36)
            int64_t var_b4_2 = *(rbx_2 - 0x34)
            int32_t var_ac_2 = *(rbx_2 - 0x2c)
            var_a8.q = *(rbx_2 - 0x28)
            void* rax_20 = *(rbx_2 - 0x20)
            var_a8:8.q = rax_20
            
            if (rax_20 != 0)
                *(rax_20 + 8) += 1
            
            int128_t var_98_1
            var_98_1.q = *(rbx_2 - 0x18)
            void* rax_22 = *(rbx_2 - 0x10)
            var_98_1:8.q = rax_22
            
            if (rax_22 != 0)
                *(rax_22 + 8) += 1
            
            int64_t var_88_2 = *(rbx_2 - 8)
            void* rax_24 = *rbx_2
            void* var_80_2 = rax_24
            
            if (rax_24 != 0)
                *(rax_24 + 8) += 1
            
            char var_78_2 = *(rbx_2 + 8)
            result = sub_141f06fc0(arg2, &var_b8)
            rbx_2 += 0x48
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)

if (i_5 != 0)
    void* rbx_3 = rsi + 0x10
    int32_t i_2
    
    do
        result = sub_141b84450(rbx_3)
        rbx_3 += 0x48
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)

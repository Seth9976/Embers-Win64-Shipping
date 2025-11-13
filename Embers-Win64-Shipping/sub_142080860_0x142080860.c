// 函数: sub_142080860
// 地址: 0x142080860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = arg1
void* rsi = nullptr
void* var_b8 = nullptr
int32_t i_4 = 0
int32_t var_ac = 0
int32_t i_3 = 0

if (*(arg1 + 0x30) s> 0)
    int64_t rcx = 0
    int64_t arg_20 = 0
    int32_t i
    
    do
        char* r13_2 = *(result + 0x28) + rcx
        int64_t* rbx_1 = *(r13_2 + 0x18)
        int64_t rdx = *(r13_2 + 0x10)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t var_98 = *(r13_2 + 8)
        uint8_t var_a8
        uint8_t rax = (var_a8 & 0xfd) | 1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t var_80
        __builtin_memset(&var_80, 0, 0x20)
        sub_140d6df40(&var_98)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int128_t var_78_1
        int64_t* rdi_1 = var_78_1.q
        uint8_t rcx_5 = rax ^ ((*r13_2 ^ rax) & 1)
        uint8_t var_a8_2 = rcx_5
        var_a8 = ((((*r13_2 u>> 1).b * 2) ^ rcx_5) & 2) ^ rcx_5
        void* rax_6 = *(arg2 + 0xa0)
        int64_t rbx_2 = *(r13_2 + 0x20)
        var_80 = 0
        
        if (rdi_1 != 0)
            var_78_1.q = 0
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp6_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        void*** rax_9 = j_sub_140a82f30(0x20)
        void*** rsi_1 = rax_9
        
        if (rax_9 == 0)
            rsi_1 = nullptr
        else
            rax_9[1].d = 1
            *(rax_9 + 0xc) = 1
            *rsi_1 = &data_1432ad958
            sub_140d3a3a0(&rsi_1[2], nullptr)
            rsi_1[3] = 0
        
        uint128_t zmm1 = (&rsi_1[2]).o
        int64_t var_48_1 = zmm1.q
        void*** rdi_2 = _mm_bsrli_si128(zmm1, 8).q
        int64_t* rsi_2 = _mm_bsrli_si128(zmm1, 8).q
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
            rdi_2 = rsi_1
        
        int64_t* var_68_1
        int64_t* r14_1 = var_68_1
        var_78_1:8.q = var_48_1
        
        if (rsi_2 != r14_1)
            var_68_1 = rsi_2
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d != 1)
                    rdi_2 = rsi_1
                else
                    (**r14_1)(r14_1)
                    int32_t temp11_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp11_1 != 1)
                        rdi_2 = rsi_1
                    else
                        (*(*r14_1 + 8))(r14_1, 1)
                        rdi_2 = rsi_1
        else if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d != 1)
                rdi_2 = rsi_1
            else
                (**rsi_2)(rsi_2)
                int32_t temp10_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp10_1 != 1)
                    rdi_2 = rsi_1
                else
                    (*(*rsi_2 + 8))(rsi_2, 1)
                    rdi_2 = rsi_1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp13_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*rdi_2)[1](rdi_2, 1)
        
        int32_t* rdi_3 = var_78_1:8.q
        sub_140d3a3a0(rdi_3, rax_6)
        *(rdi_3 + 8) = rbx_2
        
        if ((*r13_2 & 4) != 0)
            int32_t rbx_3 = *(arg2 + 0xf8)
            int32_t rbx_4 = rbx_3 - 1
            
            if (rbx_3 - 1 s>= 0)
                int64_t rdi_5 = sx.q(rbx_4) * 0x48
                int32_t temp14_1
                
                do
                    if (*(rdi_5 + *(arg2 + 0xf0) + 0x10) == var_98)
                        sub_14209ecd0(arg2 + 0xe0, rbx_4, 1, 1)
                    
                    rdi_5 -= 0x48
                    temp14_1 = rbx_4
                    rbx_4 -= 1
                while (temp14_1 - 1 s>= 0)
        
        int64_t i_6 = sx.q(i_4)
        i_4 = (i_6 + 1).d
        
        if (i_4 s> var_ac)
            sub_140775520(&var_b8)
        
        int64_t rcx_18 = i_6 * 9
        rsi = var_b8
        *(rsi + (rcx_18 << 3)) = var_a8
        int64_t var_a4
        *(rsi + (rcx_18 << 3) + 4) = var_a4
        int32_t var_9c
        *(rsi + (rcx_18 << 3) + 0xc) = var_9c
        *(rsi + (rcx_18 << 3) + 0x10) = var_98
        *(rsi + (rcx_18 << 3) + 0x18) = rdx
        *(rsi + (rcx_18 << 3) + 0x20) = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *(rsi + (rcx_18 << 3) + 0x28) = var_80
        *(rsi + (rcx_18 << 3) + 0x30) = var_78_1.q
        void* rax_26 = var_78_1.q
        
        if (rax_26 != 0)
            *(rax_26 + 8) += 1
        
        *(rsi + (rcx_18 << 3) + 0x38) = var_78_1:8.q
        *(rsi + (rcx_18 << 3) + 0x40) = var_68_1
        
        if (var_68_1 != 0)
            var_68_1[1].d += 1
        
        sub_140e53610(&var_80)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp16_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        i = i_3 + 1
        result = arg1
        rcx = arg_20 + 0x28
        i_3 = i
        arg_20 = rcx
    while (i s< *(result + 0x30))
    
    if (i_4 s> 0)
        uint64_t i_5 = zx.q(i_4)
        uint64_t i_1
        
        do
            int64_t rdi_6 = sx.q(*(arg2 + 0xf8))
            int32_t rax_32 = (rdi_6 + 1).d
            *(arg2 + 0xf8) = rax_32
            
            if (rax_32 s> *(arg2 + 0xfc))
                sub_140775520(arg2 + 0xf0)
            
            result = sub_142076e50(*(arg2 + 0xf0) + rdi_6 * 0x48, rsi)
            rsi += 0x48
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        rsi = var_b8

if (i_4 != 0)
    void* rdi_7 = rsi + 0x20
    int32_t i_2
    
    do
        result = sub_140e53610(rdi_7 + 8)
        int64_t* rbx_6 = *rdi_7
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                result = (**rbx_6)(rbx_6)
                int32_t temp2_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_6 + 8))(rbx_6, 1)
        
        rdi_7 += 0x48
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)

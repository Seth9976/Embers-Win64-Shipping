// 函数: sub_14207fbb0
// 地址: 0x14207fbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1
void* rsi = arg2
void* r14 = nullptr
int32_t i_5 = 0
void* var_a8 = nullptr
int32_t var_9c = 0
int32_t i_3 = 0

if (*(result + 0x30) s> 0)
    int64_t r13_1 = 0
    int32_t i
    
    do
        char* r12_1 = *(result + 0x28)
        int64_t* rbx_1 = *(r12_1 + r13_1 + 0x18)
        int64_t rdx = *(r12_1 + r13_1 + 0x10)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int32_t var_84_1 = 0
        uint8_t var_88
        uint8_t rax = (var_88 & 0xfd) | 1
        int64_t var_80 = *(r12_1 + r13_1 + 8)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int128_t var_68
        __builtin_memset(&var_68, 0, 0x20)
        sub_140d6de40(&var_80)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rdi_1 = var_68:8.q
        uint8_t rcx_4 = rax ^ ((r12_1[r13_1] ^ rax) & 1)
        uint8_t var_88_2 = rcx_4
        var_88 = ((((*(r12_1 + r13_1) u>> 1).b * 2) ^ rcx_4) & 2) ^ rcx_4
        void* rax_6 = *(rsi + 0xa0)
        int64_t rbx_2 = *(r12_1 + r13_1 + 0x20)
        var_68.q = 0
        
        if (rdi_1 != 0)
            var_68:8.q = 0
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
        int64_t var_98_1 = zmm1.q
        void*** rdi_2 = _mm_bsrli_si128(zmm1, 8).q
        int64_t* rsi_2 = _mm_bsrli_si128(zmm1, 8).q
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
            rdi_2 = rsi_1
        
        int128_t var_58_1
        int64_t* r14_1 = var_58_1:8.q
        var_58_1.q = var_98_1
        
        if (rsi_2 != r14_1)
            var_58_1:8.q = rsi_2
            
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
        
        int32_t* rdi_3 = var_58_1.q
        sub_140d3a3a0(rdi_3, rax_6)
        rsi = arg2
        *(rdi_3 + 8) = rbx_2
        
        if ((r12_1[r13_1] & 4) != 0)
            int32_t rbx_3 = *(rsi + 0xe8)
            int32_t rbx_4 = rbx_3 - 1
            
            if (rbx_3 - 1 s>= 0)
                int64_t rdi_5 = sx.q(rbx_4) << 6
                int32_t temp14_1
                
                do
                    if (*(*(rsi + 0xe0) + rdi_5 + 8) == var_80)
                        sub_14209ecd0(rsi + 0xe0, rbx_4, 1, 1)
                    
                    rdi_5 -= 0x40
                    temp14_1 = rbx_4
                    rbx_4 -= 1
                while (temp14_1 - 1 s>= 0)
                rsi = arg2
        
        int64_t i_6 = sx.q(i_5)
        i_5 = (i_6 + 1).d
        
        if (i_5 s> var_9c)
            sub_1405c4fe0(&var_a8)
        
        r14 = var_a8
        uint8_t* rcx_19 = (i_6 << 6) + r14
        *rcx_19 = var_88
        *(rcx_19 + 4) = var_84_1.d
        *(rcx_19 + 8) = var_80
        *(rcx_19 + 0x10) = rdx
        *(rcx_19 + 0x18) = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *(rcx_19 + 0x20) = var_68.q
        *(rcx_19 + 0x28) = var_68:8.q
        void* rax_24 = var_68:8.q
        
        if (rax_24 != 0)
            *(rax_24 + 8) += 1
        
        *(rcx_19 + 0x30) = var_58_1.q
        *(rcx_19 + 0x38) = var_58_1:8.q
        void* rax_27 = var_58_1:8.q
        
        if (rax_27 != 0)
            *(rax_27 + 8) += 1
        
        sub_140e53610(&var_68)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp16_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        r13_1 += 0x28
        i = i_3 + 1
        i_3 = i
        result = arg1
    while (i s< *(arg1 + 0x30))
    
    if (i_5 s> 0)
        void** rbx_6 = r14 + 0x38
        uint64_t i_4 = zx.q(i_5)
        uint64_t i_1
        
        do
            int64_t rsi_3 = sx.q(*(rsi + 0xe8))
            int32_t rax_31 = (rsi_3 + 1).d
            *(rsi + 0xe8) = rax_31
            
            if (rax_31 s> *(rsi + 0xec))
                sub_1405c4fe0(rsi + 0xe0)
            
            char* rcx_27 = (rsi_3 << 6) + *(rsi + 0xe0)
            *rcx_27 = rbx_6[-7].b
            *(rcx_27 + 4) = *(rbx_6 - 0x34)
            *(rcx_27 + 8) = rbx_6[-6]
            *(rcx_27 + 0x10) = rbx_6[-5]
            void* rax_36 = rbx_6[-4]
            *(rcx_27 + 0x18) = rax_36
            
            if (rax_36 != 0)
                *(rax_36 + 8) += 1
            
            *(rcx_27 + 0x20) = rbx_6[-3]
            void* rax_38 = rbx_6[-2]
            *(rcx_27 + 0x28) = rax_38
            
            if (rax_38 != 0)
                *(rax_38 + 8) += 1
            
            *(rcx_27 + 0x30) = rbx_6[-1]
            result = *rbx_6
            *(rcx_27 + 0x38) = result
            
            if (result != 0)
                *(result + 8) += 1
            
            rbx_6 = &rbx_6[8]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        r14 = var_a8

if (i_5 != 0)
    void* rdi_7 = r14 + 0x18
    int32_t i_2
    
    do
        result = sub_140e53610(rdi_7 + 8)
        int64_t* rbx_7 = *rdi_7
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                result = (**rbx_7)(rbx_7)
                int32_t temp2_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_7 + 8))(rbx_7, 1)
        
        rdi_7 += 0x40
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

if (r14 == 0)
    return result

return sub_140a74f90(r14)

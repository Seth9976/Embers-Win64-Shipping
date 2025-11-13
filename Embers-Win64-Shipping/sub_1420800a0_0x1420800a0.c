// 函数: sub_1420800a0
// 地址: 0x1420800a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = arg1
char* rsi = nullptr
int32_t i_4 = 0
void* r15 = arg2
char* var_e8 = nullptr
int32_t var_dc = 0
int32_t i_3 = 0

if (*(arg1 + 0x30) s> 0)
    int64_t rcx = 0
    int64_t arg_20 = 0
    int32_t i
    
    do
        int32_t* r12_2 = *(result + 0x28) + rcx
        int64_t* rbx_1 = *(r12_2 + 0x18)
        int64_t rdx = *(r12_2 + 8)
        char rdi_1 = r12_2[0xa].b
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int32_t rax = r12_2[8]
        uint8_t var_a8
        uint8_t rsi_1 = (var_a8 & 0xfd) | 1
        char var_a7_1 = rdi_1
        int64_t var_a0_1 = rdx
        int64_t var_98_1 = *(r12_2 + 0x10)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t var_80
        __builtin_memset(&var_80, 0, 0x20)
        int32_t var_88
        int32_t r14_2 = var_88 ^ ((rax ^ var_88) & 0xf)
        var_88 = r14_2
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int32_t rax_5 = *r12_2
        int64_t rbx_2 = *(r12_2 + 0x2c)
        uint8_t rcx_5 = (rax_5 u>> 1).b
        rax_5.b &= 1
        char var_50_1 = 3
        void* rax_6 = *(r15 + 0xa0)
        var_a8 = ((rcx_5 & 1) * 2) | rax_5.b | (rsi_1 & 0xfc)
        void*** rax_7 = j_sub_140a82f30(0x20)
        void*** r15_1 = rax_7
        
        if (rax_7 == 0)
            r15_1 = nullptr
        else
            rax_7[1].d = 1
            *(rax_7 + 0xc) = 1
            *r15_1 = &data_1432ad958
            sub_140d3a3a0(&r15_1[2], nullptr)
            r15_1[3] = 0
        
        uint128_t zmm0_1 = (&r15_1[2]).o
        void*** rsi_2 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rsi_2 != 0)
            rsi_2[1].d += 1
            rsi_2 = r15_1
        
        int64_t rax_8 = zmm0_1:8.q
        int64_t rcx_7 = 0
        int32_t* r15_2 = zmm0_1.q
        int32_t* var_60_1 = r15_2
        
        if (rax_8 != 0)
            rcx_7 = rax_8
        
        int64_t var_58_1 = rcx_7
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp7_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*rsi_2)[1](rsi_2, 1)
        
        sub_140d3a3a0(r15_2, rax_6)
        *(r15_2 + 8) = rbx_2
        r15 = arg2
        
        if ((*r12_2 & 4) != 0)
            int32_t rbx_3 = *(r15 + 0xb8)
            int32_t rbx_4 = rbx_3 - 1
            
            if (rbx_3 - 1 s>= 0)
                int64_t rsi_4 = sx.q(rbx_4) * 0x60
                int32_t temp10_1
                
                do
                    int64_t rdx_3 = *(r15 + 0xb0)
                    
                    if (*(rdx_3 + rsi_4 + 8) == rdx)
                        char rcx_11 = (*(rdx_3 + rsi_4 + 0x20)).b
                        
                        if (((r14_2.b ^ rcx_11) & 1) == 0 && ((r14_2.b ^ rcx_11) & 2) == 0
                                && ((r14_2.b ^ rcx_11) & 4) == 0 && ((r14_2.b ^ rcx_11) & 8) == 0
                                && *(rdx_3 + rsi_4 + 1) == rdi_1)
                            sub_14209edc0(r15 + 0xb0, rbx_4, 1, 1)
                    
                    rsi_4 -= 0x60
                    temp10_1 = rbx_4
                    rbx_4 -= 1
                while (temp10_1 - 1 s>= 0)
                r15 = arg2
        
        int64_t i_6 = sx.q(i_4)
        i_4 = (i_6 + 1).d
        
        if (i_4 s> var_dc)
            sub_14090a6a0(&var_e8)
        
        rsi = var_e8
        sub_142076d80(&rsi[i_6 * 0x60], &var_a8)
        sub_141b84450(&var_80)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp9_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        i = i_3 + 1
        result = arg1
        rcx = arg_20 + 0x38
        i_3 = i
        arg_20 = rcx
    while (i s< *(result + 0x30))
    
    if (i_4 s> 0)
        uint64_t i_5 = zx.q(i_4)
        uint64_t i_1
        
        do
            int64_t rdi_2 = sx.q(*(r15 + 0xb8))
            int32_t rax_22 = (rdi_2 + 1).d
            *(r15 + 0xb8) = rax_22
            
            if (rax_22 s> *(r15 + 0xbc))
                sub_14090a6a0(r15 + 0xb0)
            
            result = sub_142076d80(rdi_2 * 0x60 + *(r15 + 0xb0), rsi)
            rsi = &rsi[0x60]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        rsi = var_e8

if (i_4 != 0)
    void* rdi_3 = &rsi[0x18]
    int32_t i_2
    
    do
        result = sub_141b84450(rdi_3 + 0x10)
        int64_t* rbx_6 = *rdi_3
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                result = (**rbx_6)(rbx_6)
                int32_t temp2_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_6 + 8))(rbx_6, 1)
        
        rdi_3 += 0x60
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)

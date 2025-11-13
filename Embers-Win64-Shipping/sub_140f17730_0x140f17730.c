// 函数: sub_140f17730
// 地址: 0x140f17730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void* rsi = arg3 + 0x130
int64_t* rcx = arg1[2]
void* var_148 = nullptr
int32_t i_10 = 0
int64_t var_118 = 0
int64_t var_110 = 0
(*(*rcx + 8))(rcx, &var_148, arg2, &var_118)
int32_t i_12 = i_10
void* var_158 = nullptr
int64_t var_150 = 0

if (i_12 s> 0)
    sub_1405a51b0(&var_158, i_12)
    i_12 = i_10

int32_t r14 = 0
void* var_138 = nullptr
int32_t i_11 = 0
uint64_t var_98 = 0
int64_t var_90
__builtin_memset(&var_90, 0, 0x24)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
uint64_t var_e8 = 0
int64_t var_e0
__builtin_memset(&var_e0, 0, 0x24)
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0

if (i_12 s> 0)
    int64_t r15_1 = 0
    
    do
        void* rdi_1 = var_148
        int64_t* rax_3 = j_sub_140a82f30(0x10)
        int64_t* rbx_1 = rax_3
        
        if (rax_3 == 0)
            rbx_1 = nullptr
        else
            *rbx_1 = 0
            rbx_1[1] = 0
        
        void*** rax_4 = j_sub_140a82f30(0x18)
        
        if (rax_4 != 0)
            rax_4[1].d = 1
            *rax_4 = &data_142ee2130
            *(rax_4 + 0xc) = 1
            rax_4[2] = rbx_1
        
        int64_t* var_128 = rbx_1
        void* var_168 = nullptr
        int64_t var_160_1 = 0
        int64_t i = *(rdi_1 + r15_1 + 8)
        
        for (int64_t rdi_3 = sx.q(*(rdi_1 + r15_1 + 0x10)) * 0x70 + i; i != rdi_3; i += 0x70)
            (*(*arg1 + 0x38))(arg1, zx.q(r14), i, &var_118, rsi, &var_128, arg3, &var_168, 
                &var_138, &var_98, &var_e8)
        
        int64_t rbx_2 = sx.q(var_150.d)
        int32_t rax_7 = (rbx_2 + 1).d
        var_150.d = rax_7
        
        if (rax_7 s> var_150:4.d)
            sub_1405c4e40(&var_158)
        
        uint128_t zmm0_1 = var_128.o
        void* var_108 = var_168
        int32_t var_100_1 = var_160_1.d
        int64_t* rcx_6 = (rbx_2 << 5) + var_158
        uint128_t var_f8 = zmm0_1
        int32_t var_fc_1 = var_160_1:4.d
        void* rax_11 = _mm_bsrli_si128(zmm0_1, 8).q
        var_168 = nullptr
        int32_t i_9 = 0
        
        if (rax_11 != 0)
            *(rax_11 + 8) += 1
        
        sub_140ee2090(rcx_6, &var_f8, &var_108)
        int32_t i_5 = i_9
        
        if (i_5 != 0)
            int64_t* rdi_5 = var_168 + 8
            int32_t i_1
            
            do
                int64_t* rbx_3 = *rdi_5
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp9_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                rdi_5 = &rdi_5[2]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        void* rcx_9 = var_168
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        if (rax_4 != 0)
            rax_4[1].d -= 1
            
            if (rax_4[1].d == 1)
                (**rax_4)(rax_4)
                int32_t temp8_1 = *(rax_4 + 0xc)
                *(rax_4 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*rax_4)[1](rax_4, 1)
        
        r14 += 1
        rsi = arg3 + 0x130
        r15_1 += 0x18
    while (r14 s< i_10)

sub_140ee7bb0(arg3, &var_158)
sub_140f15fb0(arg3, &var_138)
int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_1407ece30(&var_e8, 0)
int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

uint64_t rcx_17 = var_e8

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t result = sub_1407ece30(&var_98, 0)
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

uint64_t rcx_21 = var_98

if (rcx_21 != 0)
    result = sub_140a74f90(rcx_21)

int32_t i_6 = i_11

if (i_6 != 0)
    int64_t* rdi_7 = var_138 + 0x18
    int32_t i_2
    
    do
        int64_t* rbx_5 = *rdi_7
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                result = (**rbx_5)(rbx_5)
                int32_t temp2_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_5 + 8))(rbx_5, 1)
        
        rdi_7 = &rdi_7[4]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

void* rcx_24 = var_138

if (rcx_24 != 0)
    result = sub_140a74f90(rcx_24)

int32_t i_7 = var_150.d
void* r14_1 = var_158

if (i_7 != 0)
    int64_t* rdi_8 = r14_1 + 8
    int32_t i_3
    
    do
        result = sub_140596d80(&rdi_8[1])
        int64_t* rbx_6 = *rdi_8
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                result = (**rbx_6)(rbx_6)
                int32_t temp10_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    result = (*(*rbx_6 + 8))(rbx_6, 1)
        
        rdi_8 = &rdi_8[4]
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)

if (r14_1 != 0)
    result = sub_140a74f90(r14_1)

int64_t rcx_29 = var_118

if (rcx_29 != 0)
    result = sub_140a74f90(rcx_29)

int32_t i_8 = i_10

if (i_8 != 0)
    int64_t* rbx_8 = var_148 + 8
    int32_t i_4
    
    do
        result = sub_140ee3b50(rbx_8)
        rbx_8 = &rbx_8[3]
        i_4 = i_8
        i_8 -= 1
    while (i_4 != 1)

void* rcx_31 = var_148

if (rcx_31 != 0)
    result = sub_140a74f90(rcx_31)

__security_check_cookie(rax_1 ^ &var_1c8)
return result

// 函数: sub_141dd5a70
// 地址: 0x141dd5a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[2]
int64_t r12 = rbx[0x23]

if (r12 == 0)
    (*(*rbx + 0x390))(rbx)
    r12 = rbx[0x23]

void* arg_8
sub_140b58260(&arg_8, u"RandomStream", 1)
void* rax_3 = (*(*arg1 + 0x150))(arg1)
void* rax_4 = sub_14252d950()
void* rcx_3 = arg1[2]
int64_t rdx = sx.q(*(rax_4 + 0x38))
int64_t rbp

if (rdx.d s> *(rcx_3 + 0x38) || *(*(rcx_3 + 0x30) + (rdx << 3)) != rax_4 + 0x30)
    rbp.b = 0
else
    rbp.b = 1

char rax_6

if (rax_3 != 0)
    rax_6 = sub_14243ae30(rax_3)

int64_t r15

if (rax_3 == 0 || rax_6 == 0)
    r15.b = 0
else
    r15.b = 1

void* rax_7 = arg1[2]
void* var_48 = rax_7
int64_t* i_2

if (rax_7 == 0)
    i_2 = nullptr
else
    i_2 = *(rax_7 + 0x50)

int32_t var_38 = 0xffffffff
int16_t var_34 = 0x101
char var_32 = 0
int64_t result = sub_1406328d0(&var_48)
int64_t* i_1

for (int64_t* i = i_2; i != 0; i = i_1)
    int64_t* i_3
    
    if (((zx.q(*(i[1] + 0x10)) u>> 0x14).b & 1) == 0)
        i_3 = nullptr
    else
        i_3 = i
    
    void* const rax_10
    void* rcx_10
    rax_10, rcx_10 = sub_140cc16a0(&i[2], sub_140bdf2e0())
    
    if (i_3 != 0)
        rcx_10 = i_3[0xf]
    
    if (i_3 != 0 && rcx_10 != 0 && *(rcx_10 + 0x18) == arg_8)
        int32_t* rcx_11 = sx.q(*(i_3 + 0x4c))
        *(rcx_11 + arg1 + 4) = *(rcx_11 + arg1)
    else if (rbp.b == 0)
        uint128_t var_58
        
        if ((i[8] & 0x8000080000) == 0)
        label_141dd5c42:
            int64_t rdx_2 = i[8]
            char r8_1
            
            if (r15.b == 0 || (0x1000000000000 & rdx_2) == 0)
                r8_1 = 0
            else
                r8_1 = 1
            
            if (test_bit(rdx_2, 0x10) || (rdx_2.b & 1) == 0)
                rcx_10.b = 0
            else
                rcx_10.b = 1
            
            if ((rdx_2.b & 4) == 0 || (rdx_2.b & 0x10) != 0)
                rax_10.b = 0
            else
                rax_10.b = 1
            
            if (r8_1 == 0 && rcx_10.b == 0 && rax_10.b != 0
                    && (zx.q(*(i[1] + 0x10)) & 0x2800000) == 0)
                int64_t rax_15 = sx.q(*(i + 0x4c))
                void* r10_1 = rax_15 + r12
                void* rcx_14 = rax_15 + arg1
                
                if (rcx_14 != r10_1)
                    if (not(test_bit(rdx_2, 0x1e)))
                        (*(*i + 0xb0))(i, rcx_14, r10_1, zx.q(i[7].d), var_58)
                    else
                        memcpy(rcx_14, r10_1, *(i + 0x3c) * i[7].d)
        else if ((*(i[1] + 0x10) & 0xc00000200000) != 0)
            uint128_t zmm0_1 = *(i + 0x10)
            var_58 = zmm0_1
            char rax_13 = _mm_bsrli_si128(zmm0_1, 8).b
            void* const rcx_12
            
            if (rax_13 != 0)
            label_141dd5c30:
                rcx_12 = var_58.q
            else
                while (true)
                    rcx_12 = var_58.q
                    
                    if (rcx_12 == 0)
                        if (rax_13 == 0)
                            rcx_12 = nullptr
                        
                        break
                    
                    zmm0_1 = *(rcx_12 + 0x10)
                    var_58 = zmm0_1
                    rax_13 = _mm_bsrli_si128(zmm0_1, 8).b
                    
                    if (rax_13 != 0)
                        goto label_141dd5c30
            
            rax_10, rcx_10 = sub_140bacc30(rcx_12)
            
            if (rax_10.b != 0)
                goto label_141dd5c42
    
    i_1 = i[4]
    result = sub_1406328d0(&var_48)

return result

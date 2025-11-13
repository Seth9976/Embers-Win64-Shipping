// 函数: sub_141c74350
// 地址: 0x141c74350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c738c0(*(arg1 + 0xa90))
int64_t* rcx_1 = *(arg1 + 0x7f0)
(*(*rcx_1 + 0x120))(rcx_1)
int64_t* rcx_2 = *(arg1 + 0x7f0)
uint64_t result = (*(*rcx_2 + 0x40))(rcx_2)
void* var_170
int32_t var_168

if (result.b != 0)
    int64_t* rcx_3 = *(arg1 + 0x7f0)
    int64_t var_78
    sub_141c51870(arg1 + 0x938, (*(*rcx_3 + 0xb8))(rcx_3, &var_78))
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rcx_7 = var_78
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    sub_141c62d20(arg1, zx.q(*(arg1 + 0x958)))
    void* rcx_9 = *(arg1 + 0xa90)
    var_168 = *(arg1 + 0x958)
    var_170 = rcx_9
    int128_t zmm0_2 = var_170.o
    void** const var_d8_1 = &data_142d42ed8
    void* (* var_f8)(int64_t* arg1) = j_sub_141c52fe0
    int128_t var_d0_1 = zmm0_2
    int64_t var_e8_1 = 0
    sub_141c56770(rcx_9, &var_f8)
    int64_t* rcx_10 = *(arg1 + 0x7f0)
    result = (*(*rcx_10 + 0x48))(rcx_10)

if ((*(arg1 + 0x359) & 2) != 0)
    int64_t* rsi_1 = *(arg1 + 0xa18)
    int64_t r14_1 = 0
    result = &rsi_1[sx.q(*(arg1 + 0xa20))]
    uint64_t r15_2 = sx.q(*(arg1 + 0xa20)) << 3 u>> 3
    
    if (rsi_1 u> result)
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            int64_t r8_1 = *rsi_1
            
            if (r8_1 != 0)
                sub_141c5eea0(arg1, &var_170, r8_1)
                void* rdi_1 = var_168.q
                
                if (rdi_1 != 0)
                    *(rdi_1 + 0xc) += 1
                    rdi_1 = var_168.q
                
                void* var_108_1 = var_170
                int64_t var_128_1 = 0
                void (* var_138)(void* arg1) = j_sub_141c53370
                void* var_110_1 = arg1
                void* var_100_1 = rdi_1
                void** const var_118_1 = &data_14320ad80
                result = sub_141e85f30(&var_138)
                
                if (rdi_1 != 0)
                    result = zx.q(*(rdi_1 + 0xc))
                    *(rdi_1 + 0xc) -= 1
                    
                    if (result.d == 1)
                        int64_t* rcx_13 = var_168.q
                        result = (*(*rcx_13 + 8))(rcx_13, 1)
            
            rsi_1 = &rsi_1[1]
            r14_1 += 1
        while (r14_1 != r15_2)
    
    uint32_t zmm1_1[0x4] = *(arg1 + 0xc0)
    uint32_t zmm0_1[0x4] = *(arg1 + 0x910)
    zmm0_1[0] = zmm0_1[0] f- zmm1_1[0]
    
    if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f<= 9.99999994e-09f))
        *(arg1 + 0x910) = zmm1_1[0]
        bool cond:0_1 = _mm_and_ps(zmm1_1, 0x7fffffff)[0] f<= 9.99999994e-09f
        int64_t var_198 = 0
        int32_t i_2 = 0
        int32_t var_188_1 = 0xffffffff
        rsi_1.b = cond:0_1
        int128_t zmm1_2
        result, zmm1_2 = sub_140d3cc80(sub_1425a1cd0(), &var_198, 1, 0x10, 0)
        int32_t i = i_2
        int32_t i_1 = var_188_1 + 1
        int64_t r9_1 = var_198
        int32_t i_3 = i_1
        
        if (i_1 s< i)
            do
                result = sx.q(i_1)
                
                if (*(r9_1 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_1 + 1)
                i_3 = result.d
                i_1 = result.d
            while (result.d s< i)
        
        while (i_1 s>= 0)
            if (i_1 s>= i)
                break
            
            void* r8_3 = *(r9_1 + (sx.q(i_1) << 3))
            
            if (r8_3 != 0 && (*(r8_3 + 0x40) & 1) != 0)
                void var_150
                int64_t* rax_11 = sub_141c5eea0(arg1, &var_150, r8_3)
                void* var_180_1 = nullptr
                int64_t* var_178
                sub_141c4d620(&var_178, &rax_11[1])
                int64_t* rbx_2 = var_178
                void* rcx_18
                
                if (rbx_2 == 0)
                    rcx_18 = var_180_1
                else
                    rcx_18 = *rax_11
                    var_180_1 = rcx_18
                    *rax_11 = 0
                
                int64_t* var_148
                
                if (var_148 != 0)
                    int32_t rax_12 = *(var_148 + 0xc)
                    *(var_148 + 0xc) -= 1
                    
                    if (rax_12 == 1 && var_148 != 0)
                        (*(*var_148 + 8))(var_148, 1)
                    
                    rcx_18 = var_180_1
                    rbx_2 = var_178
                
                if (rcx_18 != 0)
                    char var_158_1 = rsi_1.b
                    int64_t var_a8_1 = 0
                    void** const var_98_1 = &data_142d42ed8
                    int128_t var_90_1 = rcx_18.o
                    int64_t (* var_b8)(int64_t* arg1) = sub_141c571b0
                    zmm1_2 = sub_141c720f0(rcx_18, &var_b8, zmm1_2)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        int64_t* rbx_3 = var_178
                        (**rbx_3)(rbx_3)
                        int32_t rax_16 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_16 == 1)
                            int64_t* rcx_21 = var_178
                            (*(*rcx_21 + 8))(rcx_21, 1)
                
                r9_1 = var_198
                i = i_2
                i_1 = i_3
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
            
            if (result.d s< i)
                do
                    result = sx.q(i_1)
                    
                    if (*(r9_1 + (result << 3)) != 0)
                        break
                    
                    result = zx.q(i_1 + 1)
                    i_3 = result.d
                    i_1 = result.d
                while (result.d s< i)
        
        if (r9_1 != 0)
            return sub_140a74f90(r9_1)

return result

// 函数: sub_140cfd620
// 地址: 0x140cfd620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg6
void* r8 = arg1

if (test_bit(r9, 0x1c))
    return sub_140a20ba0(arg2, &data_142e14130, 2)

if (arg3[1].d == *(arg3 + 0x34))
    return sub_140a20ba0(arg2, &data_142e89958, 2)

void* rax_5 = *(arg1 + 0x78)
uint8_t rdx_1 = (r9 u>> 7).b & 1
int64_t var_80 = 0

if (rax_5 != 0 && ((zx.q(*(*(rax_5 + 8) + 0x10)) u>> 0x14).b & 1) != 0 && rdx_1 == 0)
    int64_t rax_7 = sub_140a82f30(sx.q(*(r8 + 0x88)), 0)
    var_80 = rax_7
    int64_t* r8_1 = *(arg1 + 0x78)
    
    if (not(test_bit(zx.q(r8_1[8].d), 9)))
        (*(*r8_1 + 0xf0))(r8_1, rax_7)
    else
        memset(rax_7, 0, sx.q(*(r8_1 + 0x3c) * r8_1[7].d))
    
    r9 = arg6
    r8 = arg1

int32_t i = arg3[1].d - *(arg3 + 0x34)
int64_t r14 = *arg3
int32_t rdi = 0
int64_t var_60 = *(r8 + 0x78)
int64_t result = zx.q(*(r8 + 0x90))
int64_t r15
r15.b = 1
void* var_58 = arg4
int32_t var_78 = result.d
int32_t var_40 = result.d
int32_t i_1 = i
int128_t var_50 = *(r8 + 0x80)

if (not(test_bit(r9, 0x19)))
    if (i != 0)
        int32_t rbp_1 = 1
        
        do
            if (rdi s>= 0 && rdi s< arg3[5].d)
                void* rax_25 = arg3[4]
                void* rcx_18 = &arg3[2]
                
                if (rax_25 != 0)
                    rcx_18 = rax_25
                
                int32_t rax_26 = rdi
                
                if (rdi s< 0)
                    rax_26 = rdi + 0x1f
                
                if ((*(rcx_18 + (sx.q(rax_26 s>> 5) << 2)) & rbp_1) != 0)
                    int32_t rdx_10 = arg2[1].d
                    int32_t rsi_2 = rdx_10 - 1
                    int16_t rdx_11
                    int32_t rax_29
                    
                    if (r15.b == 0)
                        rax_29.b = rdx_10 s<= 0
                        
                        if (rdx_10 s<= 0)
                            rsi_2 = 0
                        
                        int32_t rax_33 = rax_29 + 1 + rdx_10
                        arg2[1].d = rax_33
                        
                        if (rax_33 s> *(arg2 + 0xc))
                            sub_140594770(arg2)
                            r8 = arg1
                            r9 = arg6
                        
                        rdx_11 = 0x2c
                    else
                        rax_29.b = rdx_10 s<= 0
                        
                        if (rdx_10 s<= 0)
                            rsi_2 = 0
                        
                        int32_t rax_31 = rax_29 + 1 + rdx_10
                        arg2[1].d = rax_31
                        
                        if (rax_31 s> *(arg2 + 0xc))
                            sub_140594770(arg2)
                            r8 = arg1
                            r9 = arg6
                        
                        rdx_11 = 0x28
                        r15.b = 0
                    int64_t rcx_21 = sx.q(rsi_2)
                    *(*arg2 + (rcx_21 << 1)) = rdx_11
                    *(*arg2 + (rcx_21 << 1) + 2) = 0
                    int64_t* rcx_22 = *(r8 + 0x78)
                    int64_t r9_3 = r14
                    
                    if (rdx_1 == 0)
                        r9_3 = 0
                    
                    (*(*rcx_22 + 0xa0))(rcx_22, arg2, r14, r9_3, arg5, r9 | 2, arg7)
                    r8 = arg1
                    i = i_1 - 1
                    r9 = arg6
                    i_1 = i
            
            rdi += 1
            r14 += sx.q(*(r8 + 0x88))
            rbp_1 = rol.d(rbp_1, 1)
        while (i != 0)
    
    result = sub_140a20ba0(arg2, &data_142da76f4, 1)
    r8 = arg1
else if (i != 0)
    int32_t r12_1 = 1
    
    do
        if (rdi s>= 0 && rdi s< arg3[5].d)
            void* rax_10 = arg3[4]
            void* rcx_11 = &arg3[2]
            
            if (rax_10 != 0)
                rcx_11 = rax_10
            
            int32_t rax_11 = rdi
            
            if (rdi s< 0)
                rax_11 = rdi + 0x1f
            
            if ((*(rcx_11 + (sx.q(rax_11 s>> 5) << 2)) & r12_1) != 0)
                if (r15.b == 0)
                    int32_t rdx_3 = arg2[1].d
                    int32_t rax_14
                    rax_14.b = rdx_3 s<= 0
                    int32_t rsi_1 = rdx_3 - 1
                    
                    if (rdx_3 s<= 0)
                        rsi_1 = 0
                    
                    int32_t rax_16 = rax_14 + 1 + rdx_3
                    arg2[1].d = rax_16
                    
                    if (rax_16 s> *(arg2 + 0xc))
                        sub_140594770(arg2)
                    
                    int64_t rcx_13 = sx.q(rsi_1)
                    i = i_1
                    *(*arg2 + (rcx_13 << 1)) = 0xa
                    *(*arg2 + (rcx_13 << 1) + 2) = 0
                else
                    r15.b = 0
                
                int64_t rdx_6 = var_80
                
                if (rdx_6 == 0)
                    if (arg4 == 0)
                        rdx_6 = 0
                    else
                        int32_t rax_19 = sub_140cfe6e0(&var_60, r14, 0)
                        
                        if (rax_19 s< 0 || *(arg4 + 8) == *(arg4 + 0x34))
                            rdx_6 = 0
                        else
                            rdx_6 = sx.q(var_78 * rax_19) + *arg4
                
                int64_t r9_2 = r14
                
                if (rdx_1 == 0)
                    r9_2 = rdx_6
                
                int64_t* rcx_17 = *(arg1 + 0x78)
                (*(*rcx_17 + 0xa0))(rcx_17, arg2, r14, r9_2, arg5, arg6 | 2, arg7)
                r8 = arg1
                i -= 1
                i_1 = i
        
        result = sx.q(*(r8 + 0x88))
        rdi += 1
        r14 += result
        r12_1 = rol.d(r12_1, 1)
    while (i != 0)

if (var_80 == 0)
    return result

int64_t* rcx_24 = *(r8 + 0x78)

if ((not.b((rcx_24[8] u>> 0x24).b) & 1) != 0)
    (*(*rcx_24 + 0xe8))()

return sub_140a74f90(var_80)

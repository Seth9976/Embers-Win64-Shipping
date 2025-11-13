// 函数: sub_141424cc0
// 地址: 0x141424cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t var_d8
int64_t* rbx = &var_d8
int32_t rdi_1 = arg1[7].d + *(arg1 + 0x58)
__builtin_memset(&var_d8, 0, 0x90)
void* r12 = arg2
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x2aaaaaab, rdi_1)
int64_t i_3 = 6
int32_t r14_3 = (temp0 u>> 0x1f) + 1 + temp0
int64_t i

do
    if (r14_3 s> *(rbx + 0xc))
        sub_1405c5570(rbx, r14_3)
    
    rbx = &rbx[2]
    i = i_3
    i_3 -= 1
while (i != 1)
int64_t result_1
int64_t var_70

if (rdi_1 s> var_70:4.d)
    sub_1405a5130(&result_1, rdi_1)

uint64_t var_68
int32_t var_5c

if (rdi_1 s> var_5c)
    sub_1405dadb0(&var_68, rdi_1)

int64_t var_58
int64_t var_50

if (rdi_1 s> var_50:4.d)
    sub_1405c5510(&var_58, rdi_1)

sub_141423ef0(arg1, &var_d8)
int64_t* rsi = r12 + 0x3000
sub_141423160(arg1, &var_d8, rsi)
char var_f8
char rbx_1 = var_f8
int64_t* rcx_6 = &var_d8
int64_t* var_e8 = &var_d8

for (int32_t i_1 = 0; i_1 s< 0x180; )
    int64_t rax_3 = *rcx_6
    int64_t rdi_2 = sx.q(rcx_6[1].d)
    char var_f8_1 = 0
    int64_t var_f0 = rax_3
    sub_14140fcb0(rax_3, rdi_2.d, rbx_1)
    int64_t r14_4 = 0
    
    if (rdi_2.d s> 0)
        int64_t rbx_2 = var_f0
        
        do
            int64_t r8_2 = sx.q(*(rbx_2 + (r14_4 << 3)))
            int64_t rdx_8 = sx.q(*(var_68 + (r8_2 << 2)))
            int64_t* rdi_3 = result_1 + r8_2 * 0x18
            var_f0.d = rdx_8.d
            
            if (*(r8_2 + var_58) == 0)
                char* r9_3
                
                if (rsi[1].d == *(rsi + 0x34))
                label_141424eb5:
                    r9_3 = sub_14140f610(rsi, rdx_8.d, &var_f0)
                else
                    void* rcx_10 = rsi[8]
                    void* r9_1 = &rsi[7]
                    
                    if (rcx_10 != 0)
                        r9_1 = rcx_10
                    
                    int32_t rax_8 = *(r9_1 + (((sx.q(rsi[9].d) - 1) & rdx_8) << 2))
                    
                    if (rax_8 == 0xffffffff)
                    label_141424eb5_1:
                        r9_3 = sub_14140f610(rsi, rdx_8.d, &var_f0)
                    else
                        int32_t* r8_9
                        
                        while (true)
                            r8_9 = (sx.q(rax_8) << 4) + *rsi
                            
                            if (*r8_9 == rdx_8.d)
                                break
                            
                            rax_8 = r8_9[2]
                            
                            if (rax_8 == 0xffffffff)
                                goto label_141424eb5_2
                        
                        if (rax_8 == 0xffffffff || r8_9 == 0)
                        label_141424eb5_2:
                            r9_3 = sub_14140f610(rsi, rdx_8.d, &var_f0)
                        else
                            r9_3 = &r8_9[1]
                
                int32_t rcx_12 = *rdi_3
                int32_t rax_10 = 0x3f
                int32_t r8_11 = 0
                
                if (rcx_12 - i_1 s>= 0)
                    r8_11 = rcx_12 - i_1
                
                int32_t rcx_15 = rdi_3[1].d - i_1
                
                if (rcx_15 s<= 0x3f)
                    rax_10 = rcx_15
                
                int64_t rdx_10
                
                if (rax_10 - r8_11 != 0x3f)
                    rdx_10 = ((1 << (rax_10 - r8_11 + 1).b) - 1) << r8_11.b
                else
                    rdx_10 = -1
                
                int64_t rax_13 = sx.q(*(rdi_3 + 4))
                int64_t r8_12 = sx.q(*(rdi_3 + 0x14))
                
                if (rax_13 s> r8_12)
                label_141424f38:
                    rax_13.b = 0
                else
                    while ((rdx_10 & not.q(*(r12 + (rax_13 << 3)))) == 0)
                        rax_13 += 1
                        
                        if (rax_13 s> r8_12)
                            goto label_141424f38
                    
                    rax_13.b = 1
                
                *r9_3 |= rax_13.b
            else
                sub_141425100(rdi_3, r12, i_1)
            
            r14_4 += 1
        while (r14_4 s< rdi_2)
        
        rbx_1 = var_f8_1
    
    i_1 += 0x40
    rcx_6 = &var_e8[2]
    r12 += 0x800
    var_e8 = rcx_6

int64_t rax_14 = var_58

if (rax_14 != 0)
    sub_140a74f90(rax_14)

uint64_t rax_15 = var_68

if (rax_15 != 0)
    sub_140a74f90(rax_15)

int64_t result = result_1

if (result != 0)
    result = sub_140a74f90(result)

int64_t* rbx_3 = &result_1

for (int64_t i_2 = 6; i_2 != 0; )
    int64_t rcx_24 = rbx_3[-2]
    rbx_3 = &rbx_3[-2]
    i_2 -= 1
    
    if (rcx_24 != 0)
        result = sub_140a74f90(rcx_24)

__security_check_cookie(rax_1 ^ &var_118)
return result

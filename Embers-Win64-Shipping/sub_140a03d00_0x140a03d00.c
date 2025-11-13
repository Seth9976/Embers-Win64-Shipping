// 函数: sub_140a03d00
// 地址: 0x140a03d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int64_t* rdi = arg2
int32_t var_58 = 0
void* r14 = arg1
int64_t* rax = sub_142565030()
int64_t* result = rax[0x23]

if (result == 0)
    int64_t r8_1 = *rax
    (*(r8_1 + 0x390))(rax, arg3, r8_1)
    result = rax[0x23]

char r12 = result[0x16].b
char arg_20 = r12

if (r12 != 0)
    int64_t rsi_1 = sx.q(rdi[7].d)
    int32_t rax_1 = (rsi_1 + 1).d
    rdi[7].d = rax_1
    
    if (rax_1 s> *(rdi + 0x3c))
        sub_1405a4f90(&rdi[6])
    
    result = (rsi_1 << 4) + rdi[6]
    *result = 0
    result[1] = 0

int32_t i = 0
int32_t i_1 = 0

if (*(r14 + 0x20) s> 0)
    do
        int64_t* rsi_4 = (sx.q(i) << 6) + *(r14 + 0x18)
        
        if (*(rsi_4 + 0x3c) != 0)
            int32_t j = 0
            
            if (rsi_4[1].d s> 0)
                int64_t rbp_1 = 0
                
                do
                    int64_t rbx_1 = sx.q(rdi[1].d)
                    int64_t* r14_1 = *rsi_4
                    int32_t rax_4 = (rbx_1 + 1).d
                    rdi[1].d = rax_4
                    
                    if (rax_4 s> *(rdi + 0xc))
                        sub_140638a00(rdi)
                    
                    int64_t rax_5 = *rdi
                    int64_t rcx_3 = rbx_1 * 3
                    *(rax_5 + (rcx_3 << 2)) = *(r14_1 + rbp_1)
                    *(rax_5 + (rcx_3 << 2) + 8) = *(r14_1 + rbp_1 + 8)
                    
                    if (r12 != 0)
                        int64_t* rbx_2 = rdi[6]
                        int64_t r12_1 = *rsi_4
                        int64_t r14_2 = sx.q(rbx_2[1].d)
                        int32_t rax_7 = (r14_2 + 1).d
                        rbx_2[1].d = rax_7
                        
                        if (rax_7 s> *(rbx_2 + 0xc))
                            sub_1405a4d70(rbx_2)
                        
                        r12 = arg_20
                        *(*rbx_2 + (r14_2 << 3)) = *(r12_1 + rbp_1 + 0x2c)
                    
                    j += 1
                    rbp_1 += 0x4c
                while (j s< rsi_4[1].d)
                
                rbp = var_58
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = muls.dp.d(0x55555556, rsi_4[3].d)
            int32_t j_3 = temp0_1 + (temp0_1 u>> 0x1f)
            int64_t j_2 = sx.q(j_3)
            
            if (j_3 s> 0)
                int64_t r15_1 = 0
                int64_t j_1
                
                do
                    int32_t* rdx_5 = rsi_4[2]
                    int32_t rcx_6 = *(rdx_5 + r15_1) + rbp
                    int32_t r13_1 = *(rdx_5 + r15_1 + 8) + rbp
                    int64_t rbp_2 = sx.q(rdi[3].d)
                    int32_t var_4c_1 = *(rdx_5 + r15_1 + 4) + rbp
                    int32_t rax_10 = (rbp_2 + 1).d
                    rdi[3].d = rax_10
                    
                    if (rax_10 s> *(rdi + 0x1c))
                        sub_14083a7e0(&rdi[2])
                    
                    int64_t rax_11 = rdi[2]
                    int64_t rcx_11 = rbp_2 * 3
                    *(rax_11 + (rcx_11 << 2)) = rcx_6.q
                    *(rax_11 + (rcx_11 << 2) + 8) = r13_1
                    int64_t rbp_3 = sx.q(rdi[5].d)
                    int32_t rax_12 = (rbp_3 + 1).d
                    rdi[5].d = rax_12
                    
                    if (rax_12 s> *(rdi + 0x2c))
                        sub_140594770(&rdi[4])
                    
                    r15_1 += 0xc
                    *(rdi[4] + (rbp_3 << 1)) = i_1.w
                    rbp = var_58
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
                rdi = arg2
                i = i_1
            
            rbp = rdi[1].d
            r12 = arg_20
            r14 = arg1
            var_58 = rbp
        
        i += 1
        i_1 = i
    while (i s< *(r14 + 0x20))

rdi[8].d |= 7
result.b = 1
return result

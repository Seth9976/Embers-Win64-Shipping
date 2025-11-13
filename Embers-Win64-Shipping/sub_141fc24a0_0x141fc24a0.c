// 函数: sub_141fc24a0
// 地址: 0x141fc24a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) == 0 || *(arg1 + 0x40) == 0 || *(*(arg1 + 0x20) + 0x30) == 0)
    return 

int64_t rax = *(arg1 + 0x30)

if (rax == 0)
    return 

void* r15_1 = *(rax + 8)

if (r15_1 == 0)
    return 

for (int32_t i = *(r15_1 + 4); i s< *(r15_1 + 8); i += 1)
    int32_t rax_2 = i & 0x8000001f
    
    if (rax_2 s< 0)
        rax_2 = ((rax_2 - 1) | 0xffffffe0) + 1
    
    rax = sx.q(rax_2) << 5
    
    if (*(rax + r15_1 + 0x48) == 0 && *(rax + r15_1 + 0x30) s<= arg2
            && arg2 s<= *(rax + r15_1 + 0x34))
        *(rax + r15_1 + 0x48) = 1
        *(r15_1 + 0xc) += 1

int32_t r12_1 = *(r15_1 + 0x438)
int32_t r12_2 = r12_1 - 1

if (r12_1 - 1 s< 0)
    return 

int64_t rsi_1 = sx.q(r12_2)
int64_t r13_2 = rsi_1 << 5
int64_t rsi_2 = rsi_1 << 4
int64_t var_58_1 = rsi_2
int32_t temp1_1

do
    int64_t* r14_2 = *(r15_1 + 0x430) + r13_2
    int64_t* i_1 = *r14_2
    
    while (i_1 != 0)
        if (arg2 s<= *(i_1 + 0x1c))
            if (arg2 s>= i_1[3].d)
                int64_t* rdi_2 = i_1[2]
                int128_t* rcx_4 = *(r15_1 + 0x490) + rsi_2
                int64_t var_50 = i_1[1]
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                if (&var_50 != rcx_4)
                    var_50.o = *rcx_4
                    *rcx_4 = var_50.o
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp6_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
                
                int64_t* j
                
                do
                    int64_t* rdi_3 = i_1[2]
                    j = *i_1
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d -= 1
                        
                        if (rdi_3[1].d == 1)
                            (**rdi_3)(rdi_3)
                            int32_t temp7_1 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*rdi_3 + 8))(rdi_3, 1)
                    
                    j_sub_140a74f90(i_1)
                    i_1 = j
                while (j != 0)
                
                *r14_2 = j
                rsi_2 = var_58_1
                break
            
            i_1 = *i_1
        else
            *r14_2 = *i_1
            int64_t* rdi_1 = i_1[2]
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp3_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            j_sub_140a74f90(i_1)
            i_1 = *r14_2
    
    rsi_2 -= 0x10
    r13_2 -= 0x20
    temp1_1 = r12_2
    r12_2 -= 1
    var_58_1 = rsi_2
while (temp1_1 - 1 s>= 0)

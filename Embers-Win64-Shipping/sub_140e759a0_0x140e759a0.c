// 函数: sub_140e759a0
// 地址: 0x140e759a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x58) s<= 0 || *(arg1 + 0xc8) != 0)
    return 

int64_t i_1
sub_140e63a40(arg1, &i_1, arg2)
int64_t i = i_1

if (i == 0)
    sub_140e5ecc0(arg1, i.d)
else
    int64_t* r10_1 = *(arg1 + 0x50)
    int64_t* rax_1 = r10_1
    void* rcx_2 = &r10_1[sx.q(*(arg1 + 0x58)) * 2]
    int32_t rax_2
    
    if (r10_1 == rcx_2)
    label_140e75a06:
        rax_2 = -1
    else
        while (*rax_1 != i)
            rax_1 = &rax_1[2]
            
            if (rax_1 == rcx_2)
                goto label_140e75a06
        
        rax_2 = ((rax_1 - r10_1) s>> 4).d
    
    int32_t r8_2 = rax_2 + 1
    int64_t rax = sx.q(*(arg1 + 0x58))
    
    if (r8_2 s< rax.d)
        int64_t rdx_1 = sx.q(r8_2)
        int64_t* rcx_5 = &r10_1[rdx_1 * 2]
        
        do
            if (*(*rcx_5 + 0x41) != 0)
                int64_t rax_5 = sx.q(r8_2) * 2
                int64_t* rbx_1 = r10_1[rax_5 + 1]
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                int64_t r8_3 = *(arg1 + 0x50)
                rax = r8_3
                int64_t rcx_8 = (sx.q(*(arg1 + 0x58)) << 4) + r8_3
                
                if (r8_3 != rcx_8)
                    do
                        if (*rax == r10_1[rax_5])
                            rax = (rax - r8_3) s>> 4
                            
                            if (rax.d != 0xffffffff)
                                sub_140e5ecc0(arg1, rax.d)
                            
                            break
                        
                        rax += 0x10
                    while (rax != rcx_8)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp3_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                break
            
            r8_2 += 1
            rdx_1 += 1
            rcx_5 = &rcx_5[2]
        while (rdx_1 s< rax)

int64_t* var_10

if (var_10 == 0)
    return 

var_10[1].d -= 1

if (var_10[1].d != 1)
    return 

(**var_10)(var_10)
int32_t temp1_1 = *(var_10 + 0xc)
*(var_10 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*var_10 + 8))(var_10, 1)

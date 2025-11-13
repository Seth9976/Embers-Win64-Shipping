// 函数: sub_140de8e10
// 地址: 0x140de8e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t* rax

if (*(arg1 + 0x28) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx = *(rdi_1 + *(arg1 + 0x20))
        
        if (*rcx != 0)
            rax = rcx[1]
        
        if (*rcx == 0 || rax == 0 || rax[1].d s<= 0 || rcx[2] == 0)
            sub_140911e80(arg1 + 0x20, i, 1, 1)
            i -= 1
            rdi_1 -= 0x10
        
        i += 1
        rdi_1 = &rdi_1[2]
    while (i s< *(arg1 + 0x28))

int64_t** i_1 = *(arg1 + 0x10)

for (void* r15_2 = &i_1[sx.q(*(arg1 + 0x18)) * 2]; i_1 != r15_2; i_1 = &i_1[2])
    int64_t* rbx = i_1[1]
    int64_t* rsi_1 = *i_1
    
    if (rbx != 0)
        rbx[1].d += 1
    
    if (*rsi_1 == 0)
        goto label_140de8f04
    
    rax = rsi_1[1]
    
    if (rax == 0 || rax[1].d s<= 0 || rsi_1[2] == 0)
        goto label_140de8f04
    
    int64_t r14_1 = sx.q(*(arg1 + 0x28))
    int32_t rax_2 = (r14_1 + 1).d
    *(arg1 + 0x28) = rax_2
    
    if (rax_2 s> *(arg1 + 0x2c))
        sub_1405a4f90(arg1 + 0x20)
    
    rax = (r14_1 << 4) + *(arg1 + 0x20)
    *rax = rsi_1
    rax[1] = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    label_140de8f04:
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp4_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx + 8))(rbx, 1)

if (*(arg1 + 0x1c) s< 0)
    return sub_14095cd40(arg1 + 0x10, 0) __tailcall

int32_t i_3 = *(arg1 + 0x18)

if (i_3 != 0)
    int64_t* rdi_3 = *(arg1 + 0x10) + 8
    int32_t i_2
    
    do
        int64_t* rbx_1 = *rdi_3
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_3 = &rdi_3[2]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

*(arg1 + 0x18) = 0

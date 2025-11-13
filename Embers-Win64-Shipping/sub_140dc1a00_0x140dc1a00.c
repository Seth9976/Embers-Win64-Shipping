// 函数: sub_140dc1a00
// 地址: 0x140dc1a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x228)
char r12 = *(arg4 + 0x18)
void* r15_2 = &r14[sx.q(*(arg1 + 0x230)) * 2]
int64_t* rbx_2

if (r14 == r15_2)
label_140dc1a63:
    rbx_2 = nullptr
    __builtin_memset(arg2, 0, 0x2c)
    arg2[6].b = 0
else
    while (true)
        int64_t* rbx_1 = *r14
        int64_t rdi_1 = *rbx_1
        sub_140e179c0()
        
        if ((*(rdi_1 + 8))(rbx_1, &data_143e29120) != 0)
            break
        
        r14 = &r14[2]
        
        if (r14 == r15_2)
            goto label_140dc1a63
    
    rbx_2 = r14[1]
    int64_t r15_3 = *r14
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp3_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (r15_3 == 0)
        __builtin_memset(arg2, 0, 0x2c)
        arg2[6].b = 0
    else
        int64_t rdx = 0
        uint64_t rcx_5 = zx.q(r12) * 5
        int64_t* rdi_2 = *(r15_3 + (rcx_5 << 3) + 0x18)
        
        if (rdi_2 != 0)
            int32_t rax_8 = rdi_2[1].d
            
            if (rax_8 == 0)
                rdi_2 = nullptr
            else
                rdi_2[1].d = rax_8 + 1
                
                if (rdi_2 != 0)
                    rdx = *(r15_3 + (rcx_5 << 3) + 0x10)
                    rdi_2[1].d += 1
        
        char r14_1 = *(r15_3 + (rcx_5 << 3) + 8)
        *arg2 = 0
        int64_t* rax_11 = r15_3 + ((rcx_5 + 4) << 3)
        arg2[1] = 0
        arg2[2] = rdx
        arg2[3] = rdi_2
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        arg2[4] = 0
        arg2[5].d = 0
        
        if (rax_11 != &arg2[4] && rax_11[1].d != 0)
            int64_t* rcx_6 = *rax_11
            
            if (rcx_6 != 0)
                (*(*rcx_6 + 0x40))(rcx_6)
        
        arg2[6].b = r14_1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp6_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
            
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp7_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg2

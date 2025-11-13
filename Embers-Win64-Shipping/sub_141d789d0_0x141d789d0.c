// 函数: sub_141d789d0
// 地址: 0x141d789d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd9) != 0)
    sub_1422f2980(arg1 + 0x1d0, 0)

int64_t result_1
int64_t result_2 = result_1
int64_t* rax = sub_141d7a3f0()
int64_t result = sx.q(rax[4].d)

if (result.d != 0)
    int32_t rdi_1 = 0
    result_1 = result
    int32_t r12_1 = 0
    int64_t r15
    r15.b = *rax[3] != arg1
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< result_1)
            int64_t* rcx_2 = rax[3] + (rbx_1 << 3)
            
            do
                result.b = *rcx_2 != arg1
                
                if (zx.d(r15.b) != result.d)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_2 = &rcx_2[1]
            while (rbx_1 s< result_1)
        
        int32_t r14_2 = rdi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rcx_3 = rax[3]
                result = memmove(rcx_3 + (sx.q(r12_1) << 3), rcx_3 + (r9_1 << 3), r14_2 << 3)
            
            r12_1 += r14_2
        
        r15.b ^= 1
    while (rbx_1 s< result_1)
    
    rax[4].d = r12_1

if (*(arg1 + 0x1b0) != 0)
    *(arg1 + 0x1b0) = 0
    int64_t* rcx_5 = *(arg1 + 0x110)
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x10))(rcx_5)
        void var_38
        
        if (arg1 + 0x110 != &var_38)
            *(arg1 + 0x110) = 0
            int64_t* rbx_2 = *(arg1 + 0x118)
            
            if (rbx_2 != 0)
                *(arg1 + 0x118) = 0
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp2_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* rcx_8 = *(arg1 + 0x68)
    
    if (rcx_8 != 0)
        sub_141d78bf0(rcx_8)
    
    int64_t* rcx_9 = *(arg1 + 0x70)
    
    if (rcx_9 != 0)
        sub_141d78bf0(rcx_9)
    
    sub_141d79780(arg1)
    result_1.b = 0
    *(arg1 + 0x1cc) += 1
    int32_t rax_6 = *(arg1 + 0x1c0)
    int32_t rcx_11 = *(arg1 + 0x1cc)
    int64_t rdi_3 = sx.q(rax_6 - 1)
    
    if (rax_6 - 1 s>= 0)
        int64_t rbx_4 = rdi_3 << 4
        int64_t temp3_1
        
        do
            int64_t rax_8 = *(arg1 + 0x1b8)
            
            if (*(rbx_4 + rax_8 + 8) == 0)
                result_1.b = 1
            else
                int64_t* rcx_12 = *(rbx_4 + rax_8)
                
                if (rcx_12 == 0)
                    result_1.b = 1
                else if ((*(*rcx_12 + 0x50))(rcx_12) == 0)
                    result_1.b = 1
            
            rbx_4 -= 0x10
            temp3_1 = rdi_3
            rdi_3 -= 1
        while (temp3_1 - 1 s>= 0)
        rcx_11 = *(arg1 + 0x1cc)
    
    result = zx.q(rcx_11 - 1)
    *(arg1 + 0x1cc) = result.d
    
    if (result_1.b != 0)
        result = sub_140599630(arg1 + 0x1b8, 0)

*(arg1 + 0x140) = 0
return result

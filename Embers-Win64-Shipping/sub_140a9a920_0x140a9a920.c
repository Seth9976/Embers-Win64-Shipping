// 函数: sub_140a9a920
// 地址: 0x140a9a920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = *arg2
int64_t* r9 = *(*arg1 + 8)
int64_t* rcx = r9[1]
char* rdx = *rcx
int64_t* rax_4

if (&rdx[1] u> rcx[1])
    rax_4 = (*(*r9 + 0x150))(r9, &arg_8, 1)
else
    arg_8 = *rdx
    rax_4 = r9[1]
    *rax_4 += 1

int32_t rcx_2 = sx.d(arg_8)
*arg2 = rcx_2

if (rcx_2 != 0 && rcx_2 != 1)
    if (rcx_2 == 2)
        int64_t* r9_1 = *(*arg1 + 8)
        int64_t* rcx_11 = r9_1[1]
        int32_t* r8_1 = *rcx_11
        
        if (&r8_1[1] u<= rcx_11[1])
            *(arg2 + 8) = *r8_1
            int64_t* rax_16 = r9_1[1]
            *rax_16 += 4
            return rax_16
        
        if ((*(r9_1 + 0x29) & 0x20) != 0)
            return sub_140b54070(r9_1, &arg2[8], arg3)
        
        return (*(*r9_1 + 0x150))(r9_1, &arg2[8], 4)
    
    if (rcx_2 != 3)
        if (rcx_2 != 4)
            return rax_4
        
        if ((*(*(*arg1 + 8) + 0x28) & 1) != 0)
            sub_1405d9400()
            int64_t* rdi_1 = data_143cd6fe0
            int64_t rbp_1 = data_143cd6fd8
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            void var_38
            
            if (&var_38 != &arg2[0x10])
                sub_1405d57e0(&arg2[0x10])
                *(arg2 + 0x10) = rbp_1
                *(arg2 + 0x18) = rdi_1
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                
                *(arg2 + 0x20) = 0
                arg2[0x28] = 1
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t rbp_2 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (rbp_2 == 1)
                        (*(*rdi_1 + 8))(rdi_1, zx.q(rbp_2))
        
        int64_t* rcx_10 = *(*arg1 + 8)
        return (*(*rcx_10 + 0x138))(rcx_10, &arg2[0x10])

int64_t* r9_2 = *(*arg1 + 8)
int64_t* rcx_13 = r9_2[1]
int64_t* r8_2 = *rcx_13

if (&r8_2[1] u<= rcx_13[1])
    *(arg2 + 8) = *r8_2
    int64_t* rax_23 = r9_2[1]
    *rax_23 += 8
    return rax_23

if ((*(r9_2 + 0x29) & 0x20) != 0)
    return sub_140b540d0(r9_2, &arg2[8], arg3)

return (*(*r9_2 + 0x150))(r9_2, &arg2[8], 8)

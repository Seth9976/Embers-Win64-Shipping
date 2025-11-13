// 函数: sub_141cc6c70
// 地址: 0x141cc6c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1
int64_t* r15 = *(*arg2 + 8)
int32_t j
int32_t arg_10

if (r15[8].d s>= 0x178)
    arg_10 = arg1[1].d
    int64_t* rcx_16 = r15[1]
    int32_t* rdx_7 = *rcx_16
    
    if (&rdx_7[1] u> rcx_16[1])
        int32_t* rdx_8 = &arg_10
        
        if ((*(r15 + 0x29) & 0x20) != 0)
            sub_140b54070(r15, rdx_8, arg3)
        else
            (*(*r15 + 0x150))(r15, rdx_8, 4)
    else
        arg_10 = *rdx_7
        int64_t* rax_14 = r15[1]
        *rax_14 += 4
    
    if ((*(*(*arg2 + 8) + 0x28) & 1) != 0)
        sub_1418edbe0(r14, arg_10, 1)
    
    j = 0
    int32_t rdi_4 = 0
    
    if (arg_10 s> 0)
        do
            int64_t* rcx_20 = *(*arg2 + 8)
            int64_t r8_7 = *rcx_20
            (*(r8_7 + 0x140))(rcx_20, *r14 + (sx.q(rdi_4) << 3), r8_7)
            rdi_4 += 1
        while (rdi_4 s< arg_10)
else
    j = 0
    arg_10 = 0
    int64_t r14_1 = 0
    int64_t* rcx = r15[1]
    int64_t var_48 = 0
    int64_t var_40_1 = 0
    int32_t* rdx = *rcx
    
    if (&rdx[1] u> rcx[1])
        int32_t* rdx_1 = &arg_10
        
        if ((*(r15 + 0x29) & 0x20) != 0)
            sub_140b54070(r15, rdx_1, arg3)
        else
            (*(*r15 + 0x150))(r15, rdx_1, 4)
    else
        arg_10 = *rdx
        int64_t* rax_3 = r15[1]
        *rax_3 += 4
    
    int64_t rsi_1
    
    if ((*(*(*arg2 + 8) + 0x28) & 1) == 0)
        rsi_1 = zx.q(arg_10)
    else
        rsi_1 = sx.q(arg_10)
        int32_t temp0_1 = rsi_1.d
        
        if (temp0_1 s> 0)
            var_40_1.d = rsi_1.d
            sub_1405a4d70(&var_48)
            r14_1 = var_48
            memset(r14_1, 0, rsi_1 << 3)
            rsi_1 = zx.q(arg_10)
        else if (temp0_1 s< 0)
            int32_t rax_7 = neg.d(rsi_1.d)
            
            if (rax_7 != 0)
                int32_t rdi_2 = neg.d(rax_7)
                
                if (rdi_2 != rsi_1.d)
                    memmove(rsi_1 << 3, sx.q(rax_7 + rsi_1.d) << 3, (rdi_2 - rsi_1.d) << 3)
                
                var_40_1.d = rdi_2
                sub_1405c53d0(&var_48)
                r14_1 = var_48
                rsi_1 = zx.q(arg_10)
    
    int32_t rdi_3 = 0
    
    if (rsi_1.d s> 0)
        do
            int64_t* rcx_10 = *(*arg2 + 8)
            int64_t r8_5 = *rcx_10
            (*(r8_5 + 0x140))(rcx_10, r14_1 + (sx.q(rdi_3) << 3), r8_5)
            rdi_3 += 1
        while (rdi_3 s< arg_10)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    r14 = arg1
uint64_t result = zx.q(r15[5].b)

if ((result.b & 1) != 0)
    if (result.b s< 0 && (r15[6].d & 0x401000) == 0)
        void* rsi_2 = data_143f35848
        r15[0xf]
        
        if (rsi_2 == 0)
            sub_141cc3750()
            rsi_2 = data_143f35848
        
        sub_141cc60b0(rsi_2, r14)
        
        for (int64_t* i = *(rsi_2 + 0x38); i != &i[sx.q(*(rsi_2 + 0x40)) * 2]; i = &i[2])
            if (i[1].d != 0 && *i != 0)
                for (int32_t r15_1 = r14[1].d; j != r15_1; j += 1)
                    int64_t rax_19 = *r14
                    r14.b = 0
                    *(rsi_2 + 0x4c) += 1
                    int32_t rax_20 = *(rsi_2 + 0x40)
                    int32_t rcx_22 = *(rsi_2 + 0x4c)
                    int64_t rdi_5 = sx.q(rax_20 - 1)
                    
                    if (rax_20 - 1 s>= 0)
                        int64_t rbx_3 = rdi_5 << 4
                        int64_t temp3_1
                        
                        do
                            int64_t rax_22 = *(rsi_2 + 0x38)
                            
                            if (*(rbx_3 + rax_22 + 8) == 0)
                                r14.b = 1
                            else
                                int64_t* rcx_23 = *(rbx_3 + rax_22)
                                
                                if (rcx_23 == 0)
                                    r14.b = 1
                                else if ((*(*rcx_23 + 0x50))(rcx_23, rax_19 + (sx.q(j) << 3)) == 0)
                                    r14.b = 1
                            
                            rbx_3 -= 0x10
                            temp3_1 = rdi_5
                            rdi_5 -= 1
                        while (temp3_1 - 1 s>= 0)
                        rcx_22 = *(rsi_2 + 0x4c)
                    
                    *(rsi_2 + 0x4c) = rcx_22 - 1
                    
                    if (r14.b != 0)
                        sub_140599630(rsi_2 + 0x38, 0)
                    
                    r14 = arg1
                
                break
    
    sub_141cc23c0(r14)
    result = zx.q(r15[5].b)

if ((result.b & 2) != 0)
    int64_t i_1 = *r14
    
    for (int64_t rsi_3 = i_1 + (sx.q(r14[1].d) << 3); i_1 != rsi_3; i_1 += 8)
        (*(*r15 + 0x1d0))(r15, sub_141cc9450(), i_1)

result.b = 1
return result

// 函数: sub_141c97c90
// 地址: 0x141c97c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_2 = arg2
arg1[0x4c].d += 1
int64_t rax = arg2[1]
int64_t arg_8 = rax
void* rax_3 = sub_141c904b0(&arg1[0xa], sub_140b5ead0(rax.d) + arg_8:4.d, &arg2[1])
int64_t* result_3 = result_2
int64_t rcx_2 = result_3[2]
arg_8 = rcx_2
void* rax_6 = sub_141c904b0(&arg1[0x14], sub_140b5ead0(rcx_2.d) + arg_8:4.d, &result_3[2])
int64_t* result_4 = result_2
int64_t rcx_4 = result_4[4]
arg_8 = rcx_4
void* rax_9 = sub_141c904b0(&arg1[0x1e], sub_140b5ead0(rcx_4.d) + arg_8:4.d, &result_4[4])
int64_t* result_1 = result_2
int32_t var_30 = &result_2
sub_140b92a80(arg1, &arg_8, &result_1, nullptr)
int64_t r14 = sx.q(*(rax_3 + 8))
int32_t rcx_8 = (r14 + 1).d
*(rax_3 + 8) = rcx_8

if (rcx_8 s> *(rax_3 + 0xc))
    sub_1405a4d70(rax_3)

*(*rax_3 + (r14 << 3)) = result_2
int64_t rsi_1 = sx.q(*(rax_6 + 8))
int32_t rax_11 = (rsi_1 + 1).d
*(rax_6 + 8) = rax_11

if (rax_11 s> *(rax_6 + 0xc))
    sub_1405a4d70(rax_6)

*(*rax_6 + (rsi_1 << 3)) = result_2
int64_t rdi_1 = sx.q(*(rax_9 + 8))
int32_t rax_13 = (rdi_1 + 1).d
*(rax_9 + 8) = rax_13

if (rax_13 s> *(rax_9 + 0xc))
    sub_1405a4d70(rax_9)

*(*rax_9 + (rdi_1 << 3)) = result_2
int64_t* result = sub_14098ef70(&result_2[5])
result_1 = result
result_1.o = result_1.o
int64_t* result_5 = result_1
int32_t i = 0

while (i s>= 0)
    if (i s>= result_5[1].d)
        break
    
    int64_t rbx_3 = *(*result_5 + sx.q(i) * 0x18)
    arg_8 = rbx_3
    int32_t r9_2 = sub_140b5ead0(rbx_3.d) + arg_8:4.d
    void* rbx_4
    
    if (arg1[0x29].d == *(arg1 + 0x174))
    label_141c97e76:
        rbx_4 = sub_141c901d0(&arg1[0x28], r9_2, &arg_8)
    else
        void* rcx_19 = arg1[0x30]
        void* r8_4 = &arg1[0x2f]
        
        if (rcx_19 != 0)
            r8_4 = rcx_19
        
        int32_t rax_19 = *(r8_4 + (((sx.q(arg1[0x31].d) - 1) & sx.q(r9_2)) << 2))
        
        if (rax_19 == 0xffffffff)
        label_141c97e76_1:
            rbx_4 = sub_141c901d0(&arg1[0x28], r9_2, &arg_8)
        else
            int64_t* rcx_22
            
            while (true)
                rcx_22 = (sx.q(rax_19) << 5) + arg1[0x28]
                
                if (*rcx_22 == rbx_3)
                    break
                
                rax_19 = rcx_22[3].d
                
                if (rax_19 == 0xffffffff)
                    goto label_141c97e76_2
            
            if (rax_19 == 0xffffffff || rcx_22 == 0)
            label_141c97e76_2:
                rbx_4 = sub_141c901d0(&arg1[0x28], r9_2, &arg_8)
            else
                rbx_4 = &rcx_22[1]
    
    int64_t rdi_3 = sx.q(*(rbx_4 + 8))
    int32_t rcx_24 = (rdi_3 + 1).d
    *(rbx_4 + 8) = rcx_24
    
    if (rcx_24 s> *(rbx_4 + 0xc))
        sub_1405a4d70(rbx_4)
    
    i += 1
    result = result_2
    *(*rbx_4 + (rdi_3 << 3)) = result

return result

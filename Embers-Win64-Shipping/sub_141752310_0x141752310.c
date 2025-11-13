// 函数: sub_141752310
// 地址: 0x141752310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2[5].b & 1) == 0)
    return 

int32_t* var_38 = nullptr
int32_t var_30_1 = 0
sub_14152de20(arg2, &var_38, arg3)
int32_t* r13_1 = var_38
int32_t* r14_1 = r13_1
void* r12_2 = &r13_1[sx.q(var_30_1)]

if (r13_1 != r12_2)
    do
        int64_t rbp_1 = sx.q(*r14_1)
        int64_t rsi_1 = sx.q(arg1[1].d)
        
        if (rbp_1.d s>= rsi_1.d)
            int32_t i_1 = rbp_1.d - rsi_1.d + 1
            int32_t rax_1 = rsi_1.d + i_1
            arg1[1].d = rax_1
            
            if (rax_1 s> *(arg1 + 0xc))
                sub_1405a4f90(arg1)
            
            int64_t* rax_4 = (rsi_1 << 4) + *arg1
            
            if (i_1 != 0)
                int32_t i
                
                do
                    *rax_4 = -1
                    rax_4[1].d = 0xffffffff
                    *(rax_4 + 0xc) = 0
                    rax_4 = &rax_4[2]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        int64_t rcx_3 = rbp_1 << 4
        *(rcx_3 + *arg1 + 0xc) = 1
        void* rdi_4 = *arg1 + rcx_3
        int64_t* rcx_4 = arg2[1]
        int32_t* rdx_2 = *rcx_4
        
        if (&rdx_2[1] u<= rcx_4[1])
            *rdi_4 = *rdx_2
            int64_t* rax_8 = arg2[1]
            *rax_8 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdi_4, arg3)
        else
            (*(*arg2 + 0x150))(arg2, rdi_4, 4)
        
        int64_t* rcx_6 = arg2[1]
        int32_t* r8_1 = *rcx_6
        
        if (&r8_1[1] u<= rcx_6[1])
            *(rdi_4 + 4) = *r8_1
            int64_t* rax_12 = arg2[1]
            *rax_12 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdi_4 + 4, arg3)
        else
            (*(*arg2 + 0x150))(arg2, rdi_4 + 4, 4)
        
        int64_t* rcx_8 = arg2[1]
        int32_t* r8_2 = *rcx_8
        
        if (&r8_2[1] u<= rcx_8[1])
            *(rdi_4 + 8) = *r8_2
            int64_t* rax = arg2[1]
            *rax += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdi_4 + 8, arg3)
        else
            (*(*arg2 + 0x150))(arg2, rdi_4 + 8, 4)
        
        r14_1 = &r14_1[1]
    while (r14_1 != r12_2)

if (r13_1 != 0)
    sub_140a74f90(r13_1)

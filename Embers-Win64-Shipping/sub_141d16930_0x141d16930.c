// 函数: sub_141d16930
// 地址: 0x141d16930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[1].d
int32_t* r8 = *rcx

if (&r8[1] u> rcx[1])
    int32_t* rdx = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx, 4)
else
    arg_8 = *r8
    *rcx += 4

int32_t rax_4 = arg_8

if (rax_4 s> *(arg2 + 0xc))
    sub_1405c5570(arg2, rax_4)
    rax_4 = arg_8

int64_t rbx = sx.q(arg2[1].d)

if (rax_4 s> rbx.d)
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    memset(*arg2 + (rbx << 3), 0, sx.q(rax_4 - rbx.d) << 3)
    rax_4 = arg_8
else if (rax_4 s< rbx.d)
    r8, arg3 = sub_141d20ca0(arg2, rax_4, rbx.d - rax_4, 1)
    rax_4 = arg_8

int32_t rbp = 0

if (rax_4 s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t* rdx_4 = arg1[1]
        int64_t** r14_2 = *arg2 + r15_1
        int64_t rcx_6 = *rdx_4
        int32_t arg_10
        bool cond:3_1
        
        if (rcx_6 + 4 u> rdx_4[1])
            int32_t rax_8
            rax_8.b = *r14_2 != 0
            arg_10 = rax_8
            (*(*arg1 + 0x150))(arg1, &arg_10, 4)
            cond:3_1 = arg_10 != 0
        else
            cond:3_1 = *rcx_6 != 0
            *rdx_4 = rcx_6 + 4
        
        r8.b = cond:3_1
        
        if (r8.b != 0)
            if ((arg1[5].b & 1) != 0)
                int64_t* rax_10 = j_sub_140a82f30(0x10)
                int64_t* rbx_2 = rax_10
                
                if (rax_10 == 0)
                    rbx_2 = nullptr
                else
                    *rax_10 = 0
                    rax_10[1] = 0
                
                if (r14_2 != &arg_10)
                    int64_t* rsi_3 = *r14_2
                    *r14_2 = rbx_2
                    
                    if (rsi_3 != 0)
                        int64_t rcx_8 = *rsi_3
                        
                        if (rcx_8 != 0)
                            sub_140a74f90(rcx_8)
                        
                        arg3 = j_sub_140a74f90(rsi_3)
                else if (rbx_2 != 0)
                    int64_t rcx_9 = *rbx_2
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                    
                    arg3 = j_sub_140a74f90(rbx_2)
            
            sub_1409acec0(arg1, *r14_2, arg3)
        
        rbp += 1
        r15_1 += 8
    while (rbp s< arg_8)

return arg1

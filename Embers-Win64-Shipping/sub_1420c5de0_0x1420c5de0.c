// 函数: sub_1420c5de0
// 地址: 0x1420c5de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0xc8
int32_t rcx = *data_143f47fc8

if (rcx s>= 0xc8)
    r14 = 0x2000
    
    if (rcx s< 0x2000)
        r14 = rcx

int64_t* rcx_1 = data_143f0f180
int32_t rbp = 0
int64_t r8
r8.b = 1
int32_t* var_28 = nullptr
int32_t var_20 = 0
char rax_2 = (*(*rcx_1 + 0x428))(rcx_1, &var_28, r8)
int32_t* rbx = var_28
int64_t* rdi

if (rax_2 == 0)
    rdi.b = 0
else
    int64_t rdx_1 = sx.q(var_20)
    void* r15_1 = &rbx[rdx_1 * 3]
    int32_t arg_14
    
    if (rbx != r15_1)
        do
            int32_t rcx_3 = rbx[1]
            int32_t rax_4 = rcx_3
            
            if (rbp u>= rcx_3)
                rax_4 = rbp
            
            rbp = rax_4
            
            if (rcx_3 u>= r14)
                int32_t rax_5 = *rbx
                int64_t rsi_1 = sx.q(arg1[1].d)
                arg_14 = rcx_3
                int32_t rax_6 = (rsi_1 + 1).d
                arg1[1].d = rax_6
                
                if (rax_6 s> *(arg1 + 0xc))
                    sub_1405a4d70(arg1)
                
                *(*arg1 + (rsi_1 << 3)) = rax_5.q
            
            rbx = &rbx[3]
        while (rbx != r15_1)
        
        rdx_1 = zx.q(var_20)
        rbx = var_28
    
    if (arg1[1].d == 0)
        void* r14_1 = &rbx[sx.q(rdx_1.d) * 3]
        
        if (rbx != r14_1)
            do
                int32_t rcx_7 = rbx[1]
                
                if (rcx_7 == rbp)
                    int32_t rax_9 = *rbx
                    int64_t rsi_2 = sx.q(arg1[1].d)
                    arg_14 = rcx_7
                    int32_t rax_10 = (rsi_2 + 1).d
                    arg1[1].d = rax_10
                    
                    if (rax_10 s> *(arg1 + 0xc))
                        sub_1405a4d70(arg1)
                    
                    *(*arg1 + (rsi_2 << 3)) = rax_9.q
                
                rbx = &rbx[3]
            while (rbx != r14_1)
            
            rbx = var_28
    
    rdi.b = 1

if (rbx != 0)
    sub_140a74f90(rbx)

return zx.q(rdi.b)

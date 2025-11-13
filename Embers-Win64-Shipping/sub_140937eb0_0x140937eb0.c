// 函数: sub_140937eb0
// 地址: 0x140937eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg3[1].d
int64_t* r13 = arg3
int64_t rdi = *arg3
int64_t* r12 = nullptr
int64_t* var_58 = nullptr
int32_t i_4 = i_2

if (i_2 != 0)
    sub_1405a4be0(&var_58, i_2, 0)
    r12 = var_58
    int64_t* rcx_1 = r12
    void* rdi_1 = rdi - r12
    int32_t i
    
    do
        *rcx_1 = *(rdi_1 + rcx_1)
        void* rax_2 = *(rdi_1 + rcx_1 + 8)
        rcx_1[1] = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        rcx_1 = &rcx_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_2 = i_4
else
    int32_t var_4c_1 = 0

*(arg1 + 0x6c) += 1
int32_t rax_3 = *(arg1 + 0x60)
int64_t rbp
rbp.b = 0
int32_t rcx_2 = *(arg1 + 0x6c)
int64_t rsi_1 = sx.q(rax_3 - 1)

if (rax_3 - 1 s>= 0)
    int64_t rdi_3 = rsi_1 << 4
    int64_t temp2_1
    
    do
        int64_t rax_5 = *(arg1 + 0x58)
        
        if (*(rdi_3 + rax_5 + 8) == 0)
            rbp.b = 1
        else
            int64_t* r14_1 = *(rdi_3 + rax_5)
            
            if (r14_1 == 0)
                rbp.b = 1
            else
                uint64_t var_48 = 0
                int32_t i_5 = i_2
                
                if (i_2 != 0)
                    sub_1405a4be0(&var_48, i_2, 0)
                    uint64_t r8 = var_48
                    int32_t i_3 = i_2
                    int64_t* rdx_2 = r12
                    int32_t i_1
                    
                    do
                        *r8 = *rdx_2
                        void* rax_7 = rdx_2[1]
                        *(r8 + 8) = rax_7
                        
                        if (rax_7 != 0)
                            *(rax_7 + 8) += 1
                        
                        r8 += 0x10
                        rdx_2 = &rdx_2[2]
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                else
                    int32_t var_3c_1 = 0
                
                if ((*(*r14_1 + 0x50))(r14_1, zx.q(arg2), &var_48) == 0)
                    rbp.b = 1
        
        rdi_3 -= 0x10
        temp2_1 = rsi_1
        rsi_1 -= 1
    while (temp2_1 - 1 s>= 0)
    rcx_2 = *(arg1 + 0x6c)
    r13 = arg3

*(arg1 + 0x6c) = rcx_2 - 1

if (rbp.b != 0)
    sub_140599630(arg1 + 0x58, 0)

sub_140596d80(&var_58)
return sub_140596d80(r13) __tailcall

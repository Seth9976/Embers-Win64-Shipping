// 函数: sub_1405bffc0
// 地址: 0x1405bffc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2

if (arg2 != 0)
    uint32_t rsi_1 = zx.d(arg4)
    
    if (arg4 == 0 && *(arg1 + 0x500) != 0)
        void* rax_1
        int64_t rax_2
        void* rdx
        
        if (arg3 != 0)
            rax_1 = sub_1425b6f00()
            rdx = *(arg3 + 0x10)
            rax_2 = sx.q(*(rax_1 + 0x38))
        
        void* const rdx_1
        
        if (arg3 == 0 || rax_2.d s> *(rdx + 0x38)
                || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdx_1 = nullptr
        else
            rdx_1 = arg3
        
        rsi_1 = sub_1405ba3e0(*(arg1 + 0x500), rdx_1)
    
    char rdi_1 = 0
    
    if (*(arg1 + 0x468) != *(arg1 + 0x494))
        int32_t rax_6 = sub_140b5ead0(arg2.d) + arg_10:4.d
        void* r8_1 = arg1 + 0x498
        void* rcx_4 = *(r8_1 + 8)
        
        if (rcx_4 != 0)
            r8_1 = rcx_4
        
        int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0x4a8)) - 1) & sx.q(rax_6)) << 2))
        
        if (i != 0xffffffff)
            int64_t r8_2 = *(arg1 + 0x460)
            
            do
                int64_t i_1 = sx.q(i)
                int64_t rcx_6 = i_1 << 5
                
                if (*(rcx_6 + r8_2) == arg2)
                    if (i != 0xffffffff)
                        int64_t rdx_5 = i_1 << 5
                        void* rdx_6 = rdx_5 + r8_2
                        
                        if (rdx_5 != neg.q(r8_2) && rdx_6 != -8)
                            rdi_1 = (*(rdx_6 + 8)).b
                    
                    break
                
                i = *(rcx_6 + r8_2 + 0x18)
            while (i != 0xffffffff)
    
    if ((rdi_1 & 0x20) == 0)
        sub_1405bfed0(arg1 + 0x458, arg2, arg3, rsi_1)
    else
        arg_10 = 0
        sub_1405bab40(arg1 + 0x458, arg2, 0, &arg_10)

int64_t r12
r12.b = 0
*(arg1 + 0x2c4) += 1
int32_t rax_8 = *(arg1 + 0x2b8)
int32_t rcx_8 = *(arg1 + 0x2c4)
int64_t rdi_2 = sx.q(rax_8 - 1)

if (rax_8 - 1 s>= 0)
    int64_t rsi_3 = rdi_2 << 4
    int64_t temp1_1
    
    do
        int64_t rax_10 = *(arg1 + 0x2b0)
        
        if (*(rsi_3 + rax_10 + 8) == 0)
            r12.b = 1
        else
            int64_t* rcx_9 = *(rsi_3 + rax_10)
            
            if (rcx_9 == 0)
                r12.b = 1
            else if ((*(*rcx_9 + 0x50))(rcx_9, arg1, arg3, arg2) == 0)
                r12.b = 1
        
        rsi_3 -= 0x10
        temp1_1 = rdi_2
        rdi_2 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_8 = *(arg1 + 0x2c4)

*(arg1 + 0x2c4) = rcx_8 - 1

if (r12.b != 0)
    sub_140599630(arg1 + 0x2b0, 0)

void* var_48 = arg1
void* var_40 = arg3
int64_t var_38 = arg2
return sub_1405a9f90(arg1 + 0x2e8, &var_48)

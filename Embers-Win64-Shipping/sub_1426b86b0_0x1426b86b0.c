// 函数: sub_1426b86b0
// 地址: 0x1426b86b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0x11].b & 8) != 0)
    (*(*arg1 + 0x2d0))()

int32_t i = 0

if (arg1[0xe].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        char var_45 = var_45 & 0xfe
        int64_t var_50_1 = 0
        char var_46_1 = 2
        void* rax_3 = *arg2
        int64_t var_58 = *(r14_1 + arg1[0xd])
        int16_t var_48_1 = *(rax_3 + 0x260)
        sub_1426a96e0(arg2, &var_58)
        i += 1
        r14_1 = &r14_1[1]
    while (i s< arg1[0xe].d)

if ((arg1[0x11].b & 1) == 0)
    return 

void* rcx_3 = *arg2
int16_t rbp_1 = *(arg1 + 0x8c)
int16_t r13_1 = arg1[0xa].w
int16_t rdi = *(rcx_3 + 0x260)
int16_t arg_20 = rdi
int16_t arg_8 = rdi
int16_t arg_22 = r13_1
int16_t arg_a = rbp_1
sub_1426c1770(rcx_3, &arg_20, &arg_8)
int32_t rbx_1 = arg2[2].d
int32_t rbx_2 = rbx_1 - 1

if (rbx_1 - 1 s< 0)
    return 

int64_t r14_3 = sx.q(rbx_2) * 0x18
int64_t r12_1 = r14_3
int64_t r15_2 = sx.q(rbx_2 + 1) * 0x18
int32_t temp1_1

do
    int64_t* rcx_6 = arg2[1] + r14_3
    
    if (*(rcx_6 + 0x12) == 1)
        void* rax_5 = *rcx_6
        
        if (rax_5 == 0)
            rax_5 = rcx_6[1]
        
        int16_t rdx_2 = *(rax_5 + 0x50)
        uint32_t rax = zx.d(rcx_6[2].w)
        bool c_1 = rdi u< rax.w
        
        if (rdi == rax.w)
            c_1 = r13_1 u< rdx_2
        
        rcx_6.b = c_1
        
        if (rcx_6.b != 0)
            bool c_2 = rax.w u< rdi
            
            if (rax.w == rdi)
                c_2 = rdx_2 u< rbp_1
            
            rax.b = c_2
            
            if (rax.b != 0)
                int32_t rcx_7 = arg2[2].d
                int32_t rax_7 = rcx_7 - rbx_2
                
                if (rax_7 != 1)
                    int64_t rcx_8 = arg2[1]
                    memmove(rcx_8 + r12_1, r15_2 + rcx_8, (rax_7 - 1) * 0x18)
                    rcx_7 = arg2[2].d
                
                arg2[2].d = rcx_7 - 1
                sub_1405fde90(&arg2[1])
    
    r15_2 -= 0x18
    r12_1 -= 0x18
    r14_3 -= 0x18
    temp1_1 = rbx_2
    rbx_2 -= 1
while (temp1_1 - 1 s>= 0)

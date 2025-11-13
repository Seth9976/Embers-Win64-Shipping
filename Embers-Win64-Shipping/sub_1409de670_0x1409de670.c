// 函数: sub_1409de670
// 地址: 0x1409de670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_70 = 0
int64_t rbx = 0
int32_t rdx = 0
void* rsi = arg1
int64_t var_78 = 0
int32_t r15 = 0
int32_t var_6c = 0
int32_t rax = arg2[1].d

if (rax s> 0)
    sub_1405a5130(&var_78, rax)
    rax = arg2[1].d
    rdx = var_6c
    r15 = var_70
    rbx = var_78

int32_t* r13_1 = *arg2
int32_t* arg_10 = r13_1
void* rax_3 = &r13_1[sx.q(rax) * 6]

if (r13_1 != rax_3)
    int32_t* r14_1 = &r13_1[4]
    
    do
        int32_t rbx_1 = *r13_1
        int64_t rdi_1 = sx.q(r15)
        r15 = (rdi_1 + 1).d
        
        if (r15 s> rdx)
            sub_1405a4df0(&var_78)
        
        int64_t r8_1 = var_78
        int64_t rcx_3 = rdi_1 * 3
        *(r8_1 + (rcx_3 << 3)) = 0
        *(r8_1 + (rcx_3 << 3) + 8) = 0
        *(r8_1 + (rcx_3 << 3) + 0x10) = 0
        int64_t rax_5 = sx.q(r15 - 1) * 3
        *(r8_1 + (rax_5 << 3)) = rbx_1
        int64_t* r12_2 = r8_1 + 8 + (rax_5 << 3)
        int32_t rax_6 = *r14_1
        int32_t rcx_5 = rax_6
        int64_t rdx_3 = *(rsi + 0x28)
        
        if (rax_6 s> *(r12_2 + 0xc))
            sub_14090a730(r12_2, rax_6)
            rax_6 = *r14_1
            rcx_5 = rax_6
        
        void* i = *(r14_1 - 8)
        void* rsi_3 = sx.q(rax_6) * 0x60 + i
        
        if (i != rsi_3)
            do
                int64_t* var_68 = r12_2
                int64_t var_60_1 = rdx_3 + 0x150
                void* i_1 = i
                int32_t var_50_1 = rbx_1
                sub_14099d9c0(i + 0x10, &var_68)
                i += 0x60
            while (i != rsi_3)
            
            i = *(r14_1 - 8)
            rcx_5 = *r14_1
            r13_1 = arg_10
        
        for (void* rsi_6 = sx.q(rcx_5) * 0x60 + i; i != rsi_6; i += 0x60)
            sub_1409de130(arg1, rbx_1, i)
        
        rsi = arg1
        r13_1 = &r13_1[6]
        rdx = var_6c
        r14_1 = &r14_1[6]
        arg_10 = r13_1
    while (r13_1 != rax_3)
    
    rbx = var_78

void*** rax_9 = j_sub_140a82f30(0x18)

if (rax_9 == 0)
    rax_9 = nullptr
else
    var_78 = 0
    *rax_9 = &data_142e3f7f8
    rax_9[1] = rbx
    rax_9[2].d = r15
    *(rax_9 + 0x14) = var_6c
    var_70.q = 0

arg_10 = rax_9
sub_1409afc10(rsi, &arg_10)
return sub_1408464b0(&var_78)

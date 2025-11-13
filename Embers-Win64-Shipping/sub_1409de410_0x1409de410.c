// 函数: sub_1409de410
// 地址: 0x1409de410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int64_t var_88 = 0
void* r13 = arg1
int32_t var_80 = 0
int64_t rdi = 0
int32_t var_7c = 0
int32_t rax = arg2[1].d
int32_t r15 = 0

if (rax s> 0)
    sub_1405a5130(&var_88, rax)
    rax = arg2[1].d
    rdx = var_7c
    r15 = var_80
    rdi = var_88

void* r14 = *arg2
void* i = r14 + sx.q(rax) * 0x18
void*** arg_10

if (r14 != i)
    int64_t* r14_1 = r14 + 8
    
    do
        int64_t rbx_1 = sx.q(r14_1[-1].d)
        int64_t rdi_1 = sx.q(r15)
        r15 = (rdi_1 + 1).d
        
        if (r15 s> rdx)
            sub_1405a4df0(&var_88)
        
        int64_t r8_1 = var_88
        int64_t rcx_3 = rdi_1 * 3
        *(r8_1 + (rcx_3 << 3)) = 0
        *(r8_1 + (rcx_3 << 3) + 8) = 0
        *(r8_1 + (rcx_3 << 3) + 0x10) = 0
        int64_t rax_3 = sx.q(r15 - 1) * 3
        *(r8_1 + (rax_3 << 3)) = rbx_1.d
        int64_t* r12_2 = r8_1 + 8 + (rax_3 << 3)
        int64_t rdx_3 = *(r13 + 0x28)
        int32_t rcx_5 = r14_1[1].d
        
        if (rcx_5 s> *(r12_2 + 0xc))
            sub_14090a730(r12_2, rcx_5)
            rcx_5 = r14_1[1].d
        
        void* j = *r14_1
        void* rsi_3 = sx.q(rcx_5) * 0x60 + j
        
        if (j != rsi_3)
            do
                int64_t* var_68 = r12_2
                int64_t var_60_1 = rdx_3 + 0x1a8
                void* j_1 = j
                int32_t var_50_1 = rbx_1.d
                sub_14099d420(j + 0x10, &var_68)
                j += 0x60
            while (j != rsi_3)
            
            j = *r14_1
            rcx_5 = r14_1[1].d
            r13 = arg1
        
        for (void* rsi_6 = sx.q(rcx_5) * 0x60 + j; j != rsi_6; j += 0x60)
            sub_1409de350(r13, rbx_1.d, j)
        
        int32_t rbx_2 = *(*(*(r13 + 0x28) + 0x38) + rbx_1 * 0x18)
        int32_t var_78
        sub_1409afd50(r13 + 0x4c8, &var_78)
        int32_t rax_7 = var_78
        int32_t* var_70
        *var_70 = rbx_2
        var_70[1] = 0xffffffff
        sub_1409b8a30(r13 + 0x4c8, &arg_10, rbx_2, var_70, rax_7, nullptr)
        rdx = var_7c
        r14_1 = &r14_1[3]
    while (&r14_1[-1] != i)
    
    rdi = var_88

void*** rax_9 = j_sub_140a82f30(0x18)

if (rax_9 == 0)
    rax_9 = nullptr
else
    var_88 = 0
    *rax_9 = &data_142e3f838
    rax_9[1] = rdi
    rax_9[2].d = r15
    *(rax_9 + 0x14) = var_7c
    var_80.q = 0

arg_10 = rax_9
sub_1409afc10(r13, &arg_10)
return sub_1408464b0(&var_88)

// 函数: sub_1409dc390
// 地址: 0x1409dc390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_60 = 0
int64_t rbx = 0
int32_t rdx = 0
void*** r14 = arg1
int64_t var_68 = 0
int32_t r13 = 0
int32_t var_5c = 0
int32_t rax = arg2[1].d

if (rax s> 0)
    sub_1405a5130(&var_68, rax)
    rax = arg2[1].d
    rdx = var_5c
    r13 = var_60
    rbx = var_68

int32_t* rsi_1 = *arg2
void* rax_2 = &rsi_1[sx.q(rax) * 6]
void*** arg_10

if (rsi_1 != rax_2)
    int32_t* r15_1 = &rsi_1[4]
    
    do
        int32_t rbx_1 = *rsi_1
        int64_t rdi_1 = sx.q(r13)
        r13 = (rdi_1 + 1).d
        var_60 = r13
        
        if (r13 s> rdx)
            sub_1405a4df0(&var_68)
            r13 = var_60
        
        int64_t r8_1 = var_68
        int64_t rcx_3 = rdi_1 * 3
        *(r8_1 + (rcx_3 << 3)) = 0
        *(r8_1 + (rcx_3 << 3) + 8) = 0
        *(r8_1 + (rcx_3 << 3) + 0x10) = 0
        int64_t rax_4 = sx.q(r13 - 1) * 3
        *(r8_1 + (rax_4 << 3)) = rbx_1
        int64_t* r12_2 = r8_1 + 8 + (rax_4 << 3)
        int32_t rax_5 = *r15_1
        int32_t rcx_5 = rax_5
        void*** rdx_3 = r14[5]
        arg_10 = rdx_3
        
        if (rax_5 s> *(r12_2 + 0xc))
            sub_14090a730(r12_2, rax_5)
            rax_5 = *r15_1
            rcx_5 = rax_5
            rdx_3 = arg_10
        
        void* i = *(r15_1 - 8)
        void* r14_3 = sx.q(rax_5) * 0x60 + i
        
        if (i != r14_3)
            do
                int64_t* var_58 = r12_2
                void* var_50_1 = &rdx_3[0x40]
                void* i_1 = i
                int32_t var_40_1 = rbx_1
                sub_14099d9c0(i + 0x10, &var_58)
                i += 0x60
            while (i != r14_3)
            
            i = *(r15_1 - 8)
            rcx_5 = *r15_1
            r13 = var_60
        
        r14 = arg1
        
        for (void* rbx_4 = sx.q(rcx_5) * 0x60 + i; i != rbx_4; i += 0x60)
            sub_1409dbfb0(r14, *rsi_1, i)
        
        rdx = var_5c
        rsi_1 = &rsi_1[6]
        r15_1 = &r15_1[6]
    while (rsi_1 != rax_2)
    
    rbx = var_68

void*** rax_8 = j_sub_140a82f30(0x18)

if (rax_8 == 0)
    rax_8 = nullptr
else
    var_68 = 0
    *rax_8 = &data_142e3f878
    rax_8[1] = rbx
    rax_8[2].d = r13
    *(rax_8 + 0x14) = var_5c
    var_60.q = 0

arg_10 = rax_8
sub_1409afc10(r14, &arg_10)
return sub_1408464b0(&var_68)

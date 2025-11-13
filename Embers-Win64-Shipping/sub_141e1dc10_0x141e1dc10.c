// 函数: sub_141e1dc10
// 地址: 0x141e1dc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141df1e90(arg1)

if (rax == 0 || *(arg1 + 0x88) == 0)
    void* rcx_13
    
    if (*(arg1 + 0x60) s<= 0)
        rcx_13 = &arg2[1]
        
        if (arg2[8].b != 0)
            return sub_141e47c50(rcx_13, arg3) __tailcall
    else
        int64_t* rcx_12 = *(*(arg1 + 0x58) + 8)
        
        if (rcx_12 != 0)
            jump(*(*rcx_12 + 0x18))
        
        rcx_13 = &arg2[1]
        
        if (arg2[8].b != 0)
            return sub_141e47c50(rcx_13, arg3) __tailcall
    
    return sub_141e0ba30(rcx_13) __tailcall

void* rdi = *(rax + 0x20)

if (rdi != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        void* r8_1
        
        if (data_143de5480 != 0)
            rax_4, r8_1 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8_1.b = 1
            sub_141f3e990(*(rax + 0x20), 1, r8_1.b)

int64_t* r15 = *(rax + 0x240)

if (r15 == 0)
    int64_t* rax_6 = (*(*rax + 0x300))(rax)
    *(rax + 0x240) = rax_6
    r15 = rax_6

void* rcx_3 = *arg2
int32_t rbx_1 = 0
int32_t rdx_1 = 0
r15[0x86].w = *(rcx_3 + 0x430)
r15[0x85] = *(rcx_3 + 0x428)
*(r15 + 0x432) = *(rcx_3 + 0x432)
arg2[3] = &r15[0x94]
int32_t r12 = r15[0x95].d
int32_t rax_10 = *(arg2 + 0x14)

if (r12 s> rax_10)
    arg2[2].d = 0
    
    if (rax_10 != r12)
        sub_141acba60(&arg2[1], r12)
        rdx_1 = arg2[2].d

int32_t rax_11 = rdx_1 + r12
arg2[2].d = rax_11

if (rax_11 s> *(arg2 + 0x14))
    sub_141acb8e0(&arg2[1], rdx_1)

char rax_12 = arg2[8].b
int32_t rdx_3 = 0
int64_t* var_78 = r15
int64_t var_70 = 0
int32_t var_64 = 0
int64_t var_58
__builtin_memset(&var_58, 0, 0x1b)
int32_t r12_1 = r15[0x95].d

if (r12_1 s> 0)
    int32_t var_68_1 = 0
    sub_141acba60(&var_70, r12_1)
    rdx_3 = var_68_1
    rbx_1 = var_64

int32_t rax_13 = r12_1 + rdx_3

if (rax_13 s> rbx_1)
    sub_141acb8e0(&var_70, rdx_3)

int256_t zmm1 = sub_141abd4c0(&var_58, &r15[0x94])
int64_t* rcx_9 = &var_70
int512_t zmm1_1

if (rax_12 == 0)
    zmm1_1 = sub_141e0ba30(rcx_9)
else
    zmm1_1 = sub_141e47c50(rcx_9, zmm1)

sub_141df7f90(r15, &var_78, *(arg1 + 0x88), zmm1_1)
int64_t var_48
arg2[6] = var_48
int16_t var_40
arg2[7].w = var_40

if (&arg2[4] != &var_58)
    arg2[4] = var_58
    int64_t var_50
    arg2[5].d = var_50.d
    *(arg2 + 0x2c) = var_50:4.d

int64_t* result = &var_70
*(arg2 + 0x3a) = 1

if (&arg2[1] != &var_70)
    arg2[1] = var_70
    arg2[2].d = rax_13
    *(arg2 + 0x14) = var_64
    result = &r15[0x94]
    arg2[3] = result

return result

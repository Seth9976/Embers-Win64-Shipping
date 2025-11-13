// 函数: sub_142395540
// 地址: 0x142395540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[3]
int64_t* var_68 = nullptr
int64_t var_60 = 0
sub_1423b09b0(rcx, &var_68)
int64_t rdi = sx.q(arg1[0xa].d)
int32_t rax = var_60.d

if (rdi.d != 0)
    int32_t rdx_1 = rax + rdi.d
    
    if (rdx_1 s> var_60:4.d)
        sub_1405c5570(&var_68, rdx_1)
        rax = var_60.d
    
    memcpy(&var_68[sx.q(rax)], arg1[9], (rdi << 3).d)
    rax = var_60.d + rdi.d
    var_60.d = rax

int64_t rdi_1 = sx.q(arg1[0xc].d)

if (rdi_1.d != 0)
    int32_t rdx_3 = rax + rdi_1.d
    
    if (rdx_3 s> var_60:4.d)
        sub_1405c5570(&var_68, rdx_3)
        rax = var_60.d
    
    memcpy(&var_68[sx.q(rax)], arg1[0xb], (rdi_1 << 3).d)
    rax = var_60.d + rdi_1.d
    var_60.d = rax

int64_t* rdx_5 = var_68
int64_t r8_5 = 0
void* rcx_7 = &rdx_5[sx.q(rax)]
uint64_t r9_3 = (rcx_7 - rdx_5 + 7) u>> 3

if (rdx_5 u> rcx_7)
    r9_3 = 0

if (r9_3 != 0)
    do
        void* rax_6 = *rdx_5
        
        if (rax_6 != 0)
            *(rax_6 + 0x208) &= 0xf7
        
        rdx_5 = &rdx_5[1]
        r8_5 += 1
    while (r8_5 != r9_3)

if (arg2 != 0)
    sub_14239a450(&arg1[4])
    int64_t* var_58
    sub_14237e7a0(&var_58, arg1[3])
    void* var_48
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_48 + 0x18); i = i_1)
        int64_t rdi_2 = sx.q(*(arg2 + 0x68))
        int32_t rax_10 = (rdi_2 + 1).d
        int64_t r14_1 = *(*var_58 + sx.q(i) * 0x18)
        *(arg2 + 0x68) = rax_10
        
        if (rax_10 s> *(arg2 + 0x6c))
            sub_142396930(arg2, rdi_2.d)
        
        void* rax_11 = *(arg2 + 0x60)
        void* rcx_12 = arg2
        
        if (rax_11 != 0)
            rcx_12 = rax_11
        
        int32_t var_4c
        int32_t var_40 = var_40 & not.d(var_4c)
        *(rcx_12 + (rdi_2 << 3)) = r14_1
        void var_50
        sub_14059bdd0(&var_50)

arg1[8].b = 0
arg1[0xa].d = 0

if (*(arg1 + 0x54) != 0)
    sub_1405c5570(&arg1[9], 0)

arg1[0xc].d = 0

if (*(arg1 + 0x64) != 0)
    sub_1405c5570(&arg1[0xb], 0)

sub_14238b380(&arg1[0xd], 0)
void* result = *arg1
arg1[1].b = 0

if (result != 0)
    *(result + 0x1f4) &= 0xef

int64_t* rcx_17 = var_68

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)

// 函数: sub_141f69e80
// 地址: 0x141f69e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

void* r8 = *(arg1 + 0xa0)

if (r8 == 0)
    r8 = arg1

void* arg_10 = r8
int32_t arg_8
sub_140865c40(&data_143a2d830, &arg_8, r8)
int64_t rax_1 = sx.q(arg_8)
int64_t* rbx = nullptr
void* const rcx

if (rax_1.d == 0xffffffff)
    rcx = nullptr
else
    rcx = data_143a2d830 + rax_1 * 0x18

int16_t** r15 = rcx + 8

if (rcx == 0)
    r15 = nullptr

if (r15 == 0)
    void** arg_18 = &arg_10
    sub_140862d50(&data_143a2d830, &arg_8, &arg_18, nullptr)
    r15 = data_143a2d830 + ((sx.q(arg_8) * 3 + 1) << 3)
    int16_t* rax_5 = j_sub_140a82f30(0xa0)
    int16_t* rdi_1 = rax_5
    
    if (rax_5 == 0)
        rdi_1 = nullptr
    else
        rax_5[1].b &= 0xe0
        void* rcx_3 = &rax_5[0x20]
        *rax_5 = 0
        *(rax_5 + 4) = 1
        *(rax_5 + 8) = 1
        *(rax_5 + 0x10) = 0
        *(rax_5 + 0x18) = 4
        *(rax_5 + 0x1c) = 4
        __builtin_memset(&rax_5[0x10], 0, 0x20)
        *(rcx_3 + 0x10) = 0
        *(rcx_3 + 0x18) = 0
        *(rcx_3 + 0x1c) = 0x80
        void* rax_6 = *(rcx_3 + 0x10)
        
        if (rax_6 != 0)
            rcx_3 = rax_6
        
        *rcx_3 = 0
        *(rcx_3 + 8) = 0
        *(rdi_1 + 0x60) = 0xffffffff
        *(rdi_1 + 0x64) = 0
        *(rdi_1 + 0x70) = 0
        *(rdi_1 + 0x78) = 0
        *(rdi_1 + 0x80) = 0
        int64_t rbp_1 = sx.q(*(rdi_1 + 0x28))
        int32_t rax_7 = (rbp_1 + 1).d
        *(rdi_1 + 0x28) = rax_7
        
        if (rax_7 s> *(rdi_1 + 0x2c))
            sub_1406105e0(&rdi_1[0x10])
        
        *(*(rdi_1 + 0x20) + (rbp_1 << 2)) = 0x3e75c28f
        int64_t rbp_2 = sx.q(*(rdi_1 + 0x28))
        int32_t rax_9 = (rbp_2 + 1).d
        *(rdi_1 + 0x28) = rax_9
        
        if (rax_9 s> *(rdi_1 + 0x2c))
            sub_1406105e0(&rdi_1[0x10])
        
        *(*(rdi_1 + 0x20) + (rbp_2 << 2)) = 0x3df5c28f
        *(rdi_1 + 0x88) = 0
        rdi_1[0x46].b = 0
        *(rdi_1 + 0x90) = 0
        *(rdi_1 + 0x98) = 0
    
    *r15 = rdi_1

int16_t* result = *r15
int64_t r14 = sx.q(*(result + 0x98))
int32_t rax_11 = (r14 + 1).d
*(result + 0x98) = rax_11

if (rax_11 s> *(result + 0x9c))
    sub_1405a4d70(&result[0x48])

*(*(result + 0x90) + (r14 << 3)) = arg1

if (*(arg1 + 0x628) != 0)
    int64_t* rcx_7 = *(arg1 + 0x620)
    
    if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
        if (*(arg1 + 0x628) != 0)
            rbx = *(arg1 + 0x620)
        
        int64_t r8_2 = *rbx
        (*(r8_2 + 0x50))(rbx, result, r8_2)

return result

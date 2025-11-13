// 函数: sub_141da5e60
// 地址: 0x141da5e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == 0)
    return 

int64_t* rcx = *arg1

if (rcx == 0 || (*(*rcx + 0x28))(rcx) == 0)
    return 

void** const var_58 = &data_1432388c8
int64_t* rsi_1 = nullptr
int32_t var_50_1 = *(arg2 + 8)
void* rbx_1 = nullptr
void* var_48
__builtin_memset(&var_48, 0, 0x1c)
int32_t i_5 = 0
int32_t r8_1 = 0
int64_t var_40
uint64_t var_38
int32_t i_8

if (&var_38 != arg2 + 0x20)
    int32_t i_7 = *(arg2 + 0x28)
    void* rdi_2 = *(arg2 + 0x20)
    i_8 = i_7
    
    if (i_7 != 0)
        sub_1405a4be0(&var_38, i_7, 0)
        uint64_t rbx_2 = var_38
        int32_t i
        
        do
            *rbx_2 = 0
            int32_t r14_1 = *(rdi_2 + 8)
            int64_t r12_1 = *rdi_2
            *(rbx_2 + 8) = r14_1
            
            if (r14_1 != 0)
                sub_1405a4c70(rbx_2, r14_1, 0)
                memcpy(*rbx_2, r12_1, r14_1 * 2)
            else
                *(rbx_2 + 0xc) = 0
            
            rbx_2 += 0x10
            rdi_2 += 0x10
            i = i_7
            i_7 -= 1
        while (i != 1)
        r8_1 = var_40:4.d
        i_5 = var_40.d
        rbx_1 = var_48

if (&var_48 != arg2 + 0x10)
    if (i_5 != 0)
        int32_t i_1
        
        do
            int64_t rcx_4 = *(rbx_1 + 0x10)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_1 += 0x48
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        r8_1 = var_40:4.d
    
    int32_t i_6 = *(arg2 + 0x18)
    void* rdi_5 = *(arg2 + 0x10)
    var_40.d = i_6
    
    if (i_6 != 0 || r8_1 != 0)
        sub_140809010(&var_48, i_6, r8_1)
        
        if (i_6 != 0)
            void* rbx_4 = var_48 + 0x20
            void* rdi_6 = rdi_5 + 0x20
            int32_t i_2
            
            do
                sub_140596d10(rbx_4 - 0x20, rdi_6 - 0x20)
                sub_140596d10(rbx_4 - 0x10, rdi_6 - 0x10)
                int64_t rax_3 = *rdi_6
                rdi_6 += 0x48
                *rbx_4 = rax_3
                rbx_4 += 0x48
                *(rbx_4 - 0x40) = *(rdi_6 - 0x40)
                *(rbx_4 - 0x38) = *(rdi_6 - 0x38)
                *(rbx_4 - 0x34) = *(rdi_6 - 0x34)
                *(rbx_4 - 0x30) = *(rdi_6 - 0x30)
                *(rbx_4 - 0x2c) = *(rdi_6 - 0x2c)
                *(rbx_4 - 0x28) = *(rdi_6 - 0x28)
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
    else
        var_40:4.d = 0

if (arg1[1].d != 0)
    rsi_1 = *arg1

(*(*rsi_1 + 0x48))(rsi_1, &var_58)
int32_t i_4 = i_8
uint64_t rbx_5 = var_38

if (i_4 != 0)
    int32_t i_3
    
    do
        int64_t rcx_10 = *rbx_5
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rbx_5 += 0x10
        i_3 = i_4
        i_4 -= 1
    while (i_3 != 1)
    rbx_5 = var_38

if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

sub_141d8e6b0(&var_48)

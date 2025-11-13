// 函数: sub_14237dca0
// 地址: 0x14237dca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143336590
int32_t rbp = 0
int32_t arg_8 = 0
void*** rax = j_sub_140a82f30(0x1b8)
void*** rax_1

if (rax == 0)
    rax_1 = nullptr
else
    memset(rax, 0, 0x1b8)
    rax_1 = sub_14237e5e0(rax)

arg1[1] = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1

__builtin_memset(&arg1[2], 0, 0x1c)
*(arg1 + 0x2c) = -1
arg1[7] = 0
arg1[8] = 0
void*** rax_2 = j_sub_140a82f30(0x50)
void*** rdi_1 = rax_2
int32_t r15 = 2
void*** var_48
int32_t var_40

if (rax_2 == 0)
    rdi_1 = nullptr
else
    var_48 = nullptr
    void*** rax_3 = sub_140a84c80(0, 0x20, 0)
    var_48 = rax_3
    var_40 = 2
    
    if (rax_3 != 0)
        rax_3[1] = arg1
        *rax_3 = &data_143336bd8
        rax_3[3] = sub_140a387b0()
        *rax_3 = &data_143336c30
    
    rdi_1[1].d = 0
    *rdi_1 = &data_1433366e8
    sub_1423a4c20(&rdi_1[2], &var_48)
    rdi_1[9].d = 0
    rbp = 1

int64_t* rcx_3 = arg1[3]
arg1[3] = rdi_1

if (rdi_1 != 0)
    rdi_1[1].d += 1

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        (**rcx_3)(rcx_3, 1)

if ((rbp.b & 1) != 0)
    rbp &= 0xfffffffe
    void*** rax_7
    
    if (var_40 == 0)
        rax_7 = var_48
    label_14237de25:
        
        if (rax_7 != 0)
            sub_140a74f90(rax_7)
    else
        void*** rcx_4 = var_48
        
        if (rcx_4 != 0)
            (*rcx_4)[7](rcx_4, 0)
            rax_7 = var_48
            
            if (rax_7 != 0)
                rax_7 = sub_140a84c80(rax_7, 0, 0)
                var_48 = rax_7
            
            int32_t var_40_1 = 0
            goto label_14237de25

void*** rax_8 = j_sub_140a82f30(0x40)
void*** rsi_2 = rax_8
int64_t* rdi_2
int64_t* var_38

if (rax_8 == 0)
    int32_t var_30
    r15 = var_30
    rsi_2 = nullptr
    rdi_2 = var_38
else
    rbp |= 2
    int64_t* rax_9 = sub_140a84c80(0, 0x20, 0)
    var_38 = rax_9
    rdi_2 = rax_9
    int32_t var_30_1 = 2
    
    if (rax_9 != 0)
        rdi_2[1] = arg1
        *rdi_2 = &data_143336c88
        rdi_2[3] = sub_140a387b0()
        *rdi_2 = &data_143336ce0
    
    rsi_2[1].d = 0
    *rsi_2 = &data_1433366f0
    rsi_2[2] = 0
    rsi_2[3].d = 0
    
    if (&var_38 != &rsi_2[2] && rdi_2 != 0)
        (*(*rdi_2 + 0x40))(rdi_2, &rsi_2[2])
    
    __builtin_memset(&rsi_2[4], 0, 0x18)
    rsi_2[7].d = 0
int64_t* rcx_8 = arg1[2]
arg1[2] = rsi_2

if (rsi_2 != 0)
    rsi_2[1].d += 1

if (rcx_8 != 0)
    rcx_8[1].d -= 1
    
    if (rcx_8[1].d == 1)
        (**rcx_8)(rcx_8, 1)

if ((rbp.b & 2) != 0)
    if (r15 == 0)
        goto label_14237df4b
    
    if (rdi_2 != 0)
        (*(*rdi_2 + 0x38))(rdi_2, 0)
        rdi_2 = sub_140a84c80(rdi_2, 0, 0)
    label_14237df4b:
        
        if (rdi_2 != 0)
            sub_140a74f90(rdi_2)

return arg1

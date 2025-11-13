// 函数: sub_1406ca050
// 地址: 0x1406ca050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
__builtin_memset(&arg1[1], 0, 0x14)
__builtin_memset(&arg1[4], 0, 0x40)
*(arg1 + 0x28) = zx.o(0)
*(arg1 + 0x38) = zx.o(0)
*(arg1 + 0x48) = zx.o(0)
arg1[0xc] = 1
arg1[0xd].w = 0
*arg1 = &data_142d84eb0
void* arg_10 = &arg1[0xe]
arg_10 = &arg1[0xe]
arg1[0xe] = 0
int32_t rsi = arg2[1].d
int64_t rbp = *arg2
arg1[0xf].d = rsi

if (rsi != 0)
    sub_1405a4c70(&arg1[0xe], rsi, 0)
    memcpy(arg1[0xe], rbp, rsi * 2)
else
    *(arg1 + 0x7c) = 0

arg1[0x10] = 0

if (arg1[0xf].d s> 1)
    int32_t rcx_2 = arg1[0xf].d
    int32_t rax_1 = rcx_2 - 1
    
    if (rcx_2 == 0)
        rax_1 = 0
    
    int16_t* const rdi_1
    
    if (rcx_2 == 0)
        rdi_1 = &data_142d40450
    else
        rdi_1 = arg1[0xe]
    
    void* rax_2 = j_sub_140a82f30(0xb0)
    arg_10 = rax_2
    void*** rdi_2
    
    if (rax_2 == 0)
        rdi_2 = nullptr
    else
        rdi_2 = sub_1406693d0(rax_2, rdi_1, sx.q(rax_1) * 2, 0, 0)
    
    if (&arg1[0x10] != &arg_10)
        void*** rsi_3 = arg1[0x10]
        arg1[0x10] = rdi_2
        
        if (rsi_3 != 0)
            *rsi_3 = &data_142d84578
            
            if (rsi_3[0x15].b != 0)
                sub_140a74f90(rsi_3[0x12])
                rsi_3[0x12] = 0
            
            sub_140b4cb40(rsi_3)
            j_sub_140a74f90(rsi_3)
    else if (rdi_2 != 0)
        *rdi_2 = &data_142d84578
        
        if (rdi_2[0x15].b != 0)
            sub_140a74f90(rdi_2[0x12])
            rdi_2[0x12] = 0
        
        sub_140b4cb40(rdi_2)
        j_sub_140a74f90(rdi_2)
    
    arg1[4] = arg1[0x10]

return arg1

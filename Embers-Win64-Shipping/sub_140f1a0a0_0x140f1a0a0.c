// 函数: sub_140f1a0a0
// 地址: 0x140f1a0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0xb0)

if (rdi == 0)
    return 

sub_14065da90(rdi + 0x400, arg1 + 0x10)
sub_14065da90(rdi + 0x418, arg1 + 0x28)
sub_14065da90(rdi + 0x430, arg1 + 0x40)
sub_1407473e0(rdi + 0x448, arg1 + 0x58)
sub_14065da90(rdi + 0x458, arg1 + 0x68)
char rbp_1 = *(arg1 + 8)
void* rsi_1 = arg1 + 0xb0
void* rdi_1 = *(arg1 + 0xb0)

if (rbp_1 - 2 u> 1)
    rsi_1 = nullptr

EnterCriticalSection(rdi_1 + 0x4b0)
void arg_8

if (&arg_8 != rdi_1 + 0x470)
    *(rdi_1 + 0x470) = rbp_1
    *(rdi_1 + 0x471) = 1

void var_28

if (rsi_1 != 0 && rsi_1 != &var_28)
    *rsi_1 = 0
    int64_t* rdi_3 = *(rsi_1 + 8)
    
    if (rdi_3 != 0)
        *(rsi_1 + 8) = 0
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp1_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)

if (rdi_1 != -0x4b0)
    LeaveCriticalSection(rdi_1 + 0x4b0)

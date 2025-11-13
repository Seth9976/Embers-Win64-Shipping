// 函数: sub_140838130
// 地址: 0x140838130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x3c]

if (rdi != 0)
    int32_t rax_2 = (*(*arg1 + 0x58))()
    *(rdi + 0x10) -= rax_2
    int64_t* rcx = arg1[0x3c]
    arg1[0x3c] = 0
    
    if (rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**rcx)(rcx, 1)

int64_t rsi = 0
void* rax_4 = arg1[0x3f]
void* rdi_1 = &arg1[0x3d]

if (rax_4 != 0)
    rdi_1 = rax_4

int64_t rbp = sx.q(arg1[0x40].d) << 3
void* result = rdi_1 + rbp
uint64_t rbp_1 = rbp u>> 3

if (rdi_1 u> result)
    rbp_1 = 0

if (rbp_1 != 0)
    do
        int64_t* rbx_1 = *rdi_1
        (*(*rbx_1 + 0x30))(rbx_1)
        result = (**rbx_1)(rbx_1, 1)
        rsi += 1
        rdi_1 += 8
    while (rsi != rbp_1)

arg1[0x40].d = 0

if (*(arg1 + 0x204) == 0)
    return result

return sub_1408098d0(&arg1[0x3d], 0)

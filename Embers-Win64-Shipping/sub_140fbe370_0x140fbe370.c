// 函数: sub_140fbe370
// 地址: 0x140fbe370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg2 + 0x70)
void* rdi = arg2
char rax

if (rsi != 0)
    int64_t rbx_1 = *rsi
    sub_140fb4180()
    rax, arg2 = (*(rbx_1 + 0x58))(rsi, &data_143e2b7e0)

int64_t* rcx_1
int64_t* rbx_2

if (rsi == 0 || rax == 0)
    rcx_1 = nullptr
    rbx_2 = nullptr
else
    rbx_2 = *(rdi + 0x78)
    rcx_1 = *(rdi + 0x70)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1

if (rcx_1 != 0)
    arg2.b = 1
    (*(*rcx_1 + 0x38))(rcx_1, arg2)
    sub_140faa630(arg1)

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp1_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)

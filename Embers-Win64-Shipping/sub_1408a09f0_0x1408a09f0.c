// 函数: sub_1408a09f0
// 地址: 0x1408a09f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x58)
int64_t* arg_8 = rax
int64_t* rbx = nullptr
void*** result

if (rax == 0)
    result = nullptr
else
    result = sub_14089bd10(rax, arg1)

void*** result_1 = result
arg_8 = nullptr
int64_t* rax_2 = arg1 + 0x38

if (arg1 == 0)
    rax_2 = 8

int64_t* rcx_1 = *rax_2

if (rcx_1 != 0)
    int64_t* arg_10
    rbx = *(*(*rcx_1 + 0x28))(rcx_1, &arg_10)
    arg_8 = rbx
    
    if (rbx != 0)
        (*(*rbx + 0x18))(rbx)
    
    int64_t* rcx_3 = arg_10
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x20))(rcx_3)

int64_t* rax_7 = arg1 + 0x48

if (arg1 == 0)
    rax_7 = 0x18

void* rcx_4 = &result[9]

if (result == 0)
    rcx_4 = 0x18

*rcx_4 = *rax_7
int32_t* rax_9 = arg1 + 0x50

if (arg1 == 0)
    rax_9 = 0x20

void* rcx_5 = &result[0xa]

if (result == 0)
    rcx_5 = 0x20

*rcx_5 = *rax_9
void* rax_11 = arg1 + 0x40

if (arg1 == 0)
    rax_11 = 0x10

void* rcx_6 = &result[8]

if (result == 0)
    rcx_6 = 0x10

*rcx_6 = *rax_11
void* rsi_1 = &result[7]

if (result == 0)
    rsi_1 = 8

int64_t* rcx_7 = *rsi_1

if (rcx_7 != 0)
    (*(*rcx_7 + 0x20))(rcx_7, 0x10)

*rsi_1 = rbx

if (rbx != 0)
    (*(*rbx + 0x18))(rbx)

if (rbx != 0)
    (*(*rbx + 0x20))(rbx)

return result

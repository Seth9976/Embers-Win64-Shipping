// 函数: sub_140ccf810
// 地址: 0x140ccf810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = data_143e1b318

if (rax == 0)
    rax = sub_140cbc430()
    data_143e1b318 = rax

int64_t* var_28 = nullptr
int32_t result_1 = 0
sub_140cc4050(rax, &var_28)
int64_t* r14 = var_28
int64_t rdi = 0
int64_t result = sx.q(result_1)
int64_t* rsi = r14
void* rcx_1 = &r14[result]
uint64_t rbp_3 = (rcx_1 - r14 + 7) u>> 3

if (r14 u> rcx_1)
    rbp_3 = 0

if (rbp_3 != 0)
    do
        int64_t* rbx_1 = *rsi
        
        if (rbx_1 != 0)
            int64_t rcx_2 = rbx_1[2]
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            int64_t rcx_3 = *rbx_1
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            result = j_sub_140a74f90(rbx_1)
        
        rsi = &rsi[1]
        rdi += 1
    while (rdi != rbp_3)

if (r14 != 0)
    result = sub_140a74f90(r14)

int64_t* rcx_6 = data_143e1b388

if (rcx_6 != 0)
    result = (*(*rcx_6 + 0x28))(rcx_6, 1)

data_143e1b388 = 0
return result

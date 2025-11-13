// 函数: sub_140d2b280
// 地址: 0x140d2b280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_30 = &arg_8
void*** (* var_38)() = j_sub_140d16b40
void* rax = sub_140a756e0(&var_38, &data_1439aad84)
char rdx = *(arg1 + 0x228)

if ((rdx & 1) != 0 && rdx s< 0)
    int64_t rdx_1 = *(arg1 + 0x200)
    void* rax_1 = (*(rdx_1 + 0x18))(arg1 + 0x200, rdx_1)
    
    if (rax_1 != 0 && *(rax_1 + 0x98) == 1 && ((*(rax_1 + 0x290) u>> 0x14).b & 1) != 0)
        return 0

int32_t rdi = 0
void* var_48 = nullptr
int32_t var_40 = 0
sub_140d150a0(rax + 0x10, arg1, &var_48, 0)
sub_140d29d80(rax + 0x10, arg1)
int64_t rax_6 = (*(*(arg1 + 0x200) + 0x20))(arg1 + 0x200)
void* r14 = var_48
void* rbx_1 = r14
void* rbp_1 = r14 + sx.q(var_40) * 0x18

if (r14 != rbp_1)
    do
        int64_t* rax_7 = sub_140d3c6e0(rbx_1 + 0x10)
        char rcx_7
        
        if (rax_7 == 0)
            rcx_7 = 0
        else
            rcx_7 = sub_140d24d80(rbx_1, rax_7, arg1 + 0x200, 1)
        
        int32_t rax_9 = rdi + 1
        
        if (rcx_7 == 0)
            rax_9 = rdi
        
        rbx_1 += 0x18
        rdi = rax_9
    while (rbx_1 != rbp_1)

(*(*(arg1 + 0x200) + 0x178))(arg1 + 0x200, rax_6)

if (r14 != 0)
    sub_140a74f90(r14)

return zx.q(rdi)

// 函数: sub_141baf3a0
// 地址: 0x141baf3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = *arg1
int64_t result = 0
void* rax_1
int64_t rax_2
void* rdx_1

if (rbx != 0)
    rax_1 = sub_141c122a0()
    rdx_1 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

int64_t* var_18
sub_141bbc0f0(&var_18, rbx)
int64_t* rcx_2 = var_18

if (rcx_2 != 0)
    result = (*(*rcx_2 + 0x78))(rcx_2)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return result

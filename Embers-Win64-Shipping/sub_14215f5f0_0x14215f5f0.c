// 函数: sub_14215f5f0
// 地址: 0x14215f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x310)
*(rax + 0x298) += 1
*(*arg3 + 0x10) = *(rax + 0x298)
void* rdx_1 = *arg3
void* rcx = *(arg1 + 0x310)
void* var_18 = rdx_1
void arg_8
sub_14215abc0(rcx + 0x1f8, &arg_8, &var_18, nullptr)
void* rdi = *(arg1 + 0x310)
void* rbx = *arg3
sub_140598750(rdi + 0x248, &var_18)
*(rdx_1 + 0x10) = *(rbx + 0x10)
int32_t rax_4 = var_18.d
*(rdx_1 + 0x18) = rbx
*(rdx_1 + 0x20) = 0xffffffff
sub_140bdabf0(rdi + 0x248, &arg_8, *(rdx_1 + 0x10), rdx_1 + 0x10, rax_4, nullptr)
int64_t* rcx_5 = *(arg1 + 0x310) + 0x1a8
var_18 = *arg3
int64_t* var_10_1 = arg3
int32_t* result = sub_14215ad30(rcx_5, &arg_8, &var_18, nullptr)
int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result

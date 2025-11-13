// 函数: sub_141bc9f50
// 地址: 0x141bc9f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg2
int64_t var_20 = arg2[1]
void* rax_2 = arg2[2]
void* var_18 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

char rax_4 = (*(*arg1 + 0x530))(arg1, &var_28, 0)
var_28 = *arg2
int64_t var_20_1 = arg2[1]
void* rcx_2 = arg2[2]
void* var_18_1 = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

int64_t* rdi

if (rax_4 != 0 || (*(*arg1 + 0x538))(arg1, &var_28) != 0)
    rdi.b = 1
else
    rdi.b = 0

int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_2 = *rbx_1
        (*rdx_2)(rbx_1, rdx_2)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *rbx_1
            (*(r8_1 + 8))(rbx_1, 1, r8_1)

return zx.q(rdi.b)

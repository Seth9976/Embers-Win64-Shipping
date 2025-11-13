// 函数: sub_140f08970
// 地址: 0x140f08970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg2[1]
int64_t r8 = *arg2

if (rcx != 0)
    *(rcx + 8) += 1

int64_t rax = *(arg1 + 0x78)
*(arg1 + 0x78) = r8
int64_t* rbx = *(arg1 + 0x80)
int64_t var_18_1 = rax
*(arg1 + 0x80) = rcx
int64_t* var_10_1 = rbx

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t result = *arg3
*(arg1 + 0x2f0) = result
return result

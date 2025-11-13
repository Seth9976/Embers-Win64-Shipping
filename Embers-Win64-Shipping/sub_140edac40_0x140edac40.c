// 函数: sub_140edac40
// 地址: 0x140edac40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x560) = *arg2
void* rdi = arg2[1]
int64_t* rcx = *(arg1 + 0x568)

if (rdi != rcx)
    if (rdi != 0)
        *(rdi + 0xc) += 1
        rcx = *(arg1 + 0x568)
    
    if (rcx != 0)
        int32_t temp1_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x568) = rdi

*(arg1 + 0x558) = 0
int64_t var_18 = *arg2
void* rax_3 = arg2[1]
void* var_10 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

void* result = sub_140f5d950(arg1 + 8, &var_18)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result

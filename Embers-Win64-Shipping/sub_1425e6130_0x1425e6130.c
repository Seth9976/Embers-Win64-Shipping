// 函数: sub_1425e6130
// 地址: 0x1425e6130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
void var_18
int64_t* rax_1 = (*(*rcx + 0x50))(rcx, &var_18)
int64_t* rax_2
void* rdx_3

if (*rax_1 == *(arg1 + 0x60))
    rax_2 = *(arg1 + 0x50)
    rdx_3 = &rax_2[sx.q(*(arg1 + 0x58)) * 2]

void* rdi

if (*rax_1 != *(arg1 + 0x60) || rax_2 == rdx_3)
label_1425e6186:
    rdi.b = 0
else
    while (true)
        int64_t rcx_1 = *rax_2
        
        if (rcx_1 != 0 && rcx_1 == *arg2)
            rdi.b = 1
            break
        
        rax_2 = &rax_2[2]
        
        if (rax_2 == rdx_3)
            goto label_1425e6186

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        int64_t rdx_4 = *var_10
        (*rdx_4)(var_10, rdx_4)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *var_10
            (*(r8_1 + 8))(var_10, 1, r8_1)

return zx.q(rdi.b)

// 函数: sub_14226d350
// 地址: 0x14226d350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x348)
int128_t result

if (rcx == 0)
    result = zx.o(0)
else
    int64_t var_38 = *arg2
    int64_t var_30_1 = arg2[1]
    void* rax_3 = arg2[2]
    void* var_28_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
        rcx = *(arg1 + 0x348)
    
    result = sub_142411a80(rcx, &var_38)

int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return result

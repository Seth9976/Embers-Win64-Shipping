// 函数: sub_141dc89e0
// 地址: 0x141dc89e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result = zx.o(0)
void* rcx = *(arg1 + 0xf8)

if (rcx != 0)
    int64_t var_38 = *arg2
    int64_t var_30_1 = arg2[1]
    void* rax_3 = arg2[2]
    void* var_28_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
        rcx = *(arg1 + 0xf8)
    
    result = sub_141f12a30(rcx, &var_38)

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

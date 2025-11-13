// 函数: sub_141c71a70
// 地址: 0x141c71a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) += 1
int64_t* result = j_sub_140a82f30(0x18)
int64_t* result_1 = result

if (result != 0)
    *result = 0
    result[1] = *arg2
    void* rax = arg2[1]
    result_1[2] = rax
    
    if (rax != 0)
        *(rax + 8) += 1
    
    result = *(arg1 + 0x40)
    *(arg1 + 0x40) = result_1
    *result = result_1

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    result = zx.q(rbx_1[1].d)
    rbx_1[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result

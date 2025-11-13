// 函数: sub_141c83260
// 地址: 0x141c83260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int64_t* rax_1 = (*(*rcx + 8))(rcx)
void* rbx = *arg1
int32_t result_1
sub_140910250(rbx + 0x78, &result_1, rax_1)
int64_t result = sx.q(result_1)
void* const rcx_2
int64_t* rbx_2

if (result.d == 0xffffffff)
    rcx_2 = nullptr
    rbx_2 = nullptr
else
    int64_t rdx_1 = result * 5
    result = *(rbx + 0x78)
    int64_t rbx_1 = result + (rdx_1 << 3)
    
    if (rbx_1 == 0)
        rcx_2 = nullptr
        rbx_2 = nullptr
    else
        rcx_2 = *(rbx_1 + 0x10)
        rbx_2 = *(rbx_1 + 0x18)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1

if (rcx_2 != 0)
    result = arg1[3]
    *(rcx_2 + 0x20) = result

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result

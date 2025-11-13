// 函数: sub_141c84060
// 地址: 0x141c84060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[2]
int64_t var_28 = arg1[1]
int64_t* var_20 = rdi

if (rdi != 0)
    rdi[1].d += 1

void* rbx = *arg1
int32_t result_1
sub_140a73790(rbx + 0x118, &result_1, &var_28)
int64_t result = sx.q(result_1)
int64_t* rbx_2
void* const rsi

if (result.d == 0xffffffff)
    rsi = nullptr
    rbx_2 = nullptr
else
    int64_t rdx_1 = result * 5
    result = *(rbx + 0x118)
    int64_t rbx_1 = result + (rdx_1 << 3)
    
    if (rbx_1 == 0)
        rsi = nullptr
        rbx_2 = nullptr
    else
        rsi = *(rbx_1 + 0x10)
        rbx_2 = *(rbx_1 + 0x18)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1

if (rdi != 0)
    result = zx.q(rdi[1].d)
    rdi[1].d -= 1
    
    if (result.d == 1)
        result = (**rdi)(rdi)
        int32_t rbp_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rbp_1 == 1)
            result = (*(*rdi + 8))(rdi, zx.q(rbp_1))

if (rsi != 0)
    result = arg1[3]
    *(rsi + 0x78) = result

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            jump(*(*rbx_2 + 8))

return result

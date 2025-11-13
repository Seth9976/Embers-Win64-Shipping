// 函数: sub_140a8d1d0
// 地址: 0x140a8d1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_142a7dd00(0x38)
void*** rsi = rax
int64_t* rdi

if (rax == 0)
    rdi = nullptr
    rsi = nullptr
else
    sub_142a71720(rax)
    rdi = nullptr
    *rsi = &data_142e62778
    rsi[4] = 0
    rsi[5] = 0
    rsi[6] = arg2
    int32_t rcx_1 = arg2[1].d
    int32_t r8_1 = rcx_1 - 1
    
    if (rcx_1 == 0)
        r8_1 = 0
    
    if (rcx_1 == 0)
        sub_142a72230(rsi, &data_142d40450, r8_1)
    else
        sub_142a72230(rsi, *arg2, r8_1)

int64_t* rbx_1 = arg1[2]

if (rbx_1 != 0)
    int32_t rax_1 = rbx_1[1].d
    
    if (rax_1 != 0)
        rbx_1[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rdi = arg1[1]

(*(*rdi + 0x40))(rdi, rsi)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

jump(*(*arg1 + 0x38))

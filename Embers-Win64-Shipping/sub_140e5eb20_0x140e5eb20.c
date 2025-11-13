// 函数: sub_140e5eb20
// 地址: 0x140e5eb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) != 0)
    return 

int64_t rdx_1 = 0
*(arg1 + 0x40) = 1
int64_t* rbx_1 = *(arg1 + 0x10)

if (rbx_1 != 0)
    int32_t rax_1 = rbx_1[1].d
    
    if (rax_1 != 0)
        rbx_1[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rdx_1 = *(arg1 + 8)

int64_t var_18 = rdx_1
int64_t* var_10_1 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

sub_140a16840(arg1 + 0x18, &var_18)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)

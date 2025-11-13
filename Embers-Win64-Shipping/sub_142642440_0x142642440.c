// 函数: sub_142642440
// 地址: 0x142642440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *(arg2 + 0x20)
void* rax_1 = *(arg2 + 0x28)
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_142642ec0(arg1, sub_140d3c6e0(arg2), &arg2[2], &arg2[5], &var_18, arg2[0xd], arg2[0xe].b & 1, 
    arg2[0xc])
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x48) = *(arg2 + 0x48)
void* rax_5 = *(arg2 + 0x50)
*(arg1 + 0x50) = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

sub_141dde360(&arg1[0x16], &arg2[0x16])

if (*(arg1 + 0x20) == 0 && sub_140d3e110(&arg1[0x10]) != 0)
    void* rax_7 = sub_140d3c6e0(&arg1[0x10])
    int64_t* rcx_7 = *(rax_7 + 0x340)
    int64_t rdx_2 = *(rax_7 + 0x338)
    int64_t var_28 = rdx_2
    int64_t* var_20 = rcx_7
    
    if (rcx_7 != 0)
        rcx_7[1].d += 1
        rcx_7 = var_20
    
    if (&arg1[8] != &var_28)
        *(arg1 + 0x20) = rdx_2
        var_28 = 0
        sub_1405aeff0(&arg1[0xa], &var_20)
        rcx_7 = var_20
    
    if (rcx_7 != 0)
        rcx_7[1].d -= 1
        
        if (rcx_7[1].d == 1)
            int64_t* rbx_2 = var_20
            (**rbx_2)(rbx_2)
            int32_t rsi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t* rcx_10 = var_20
                (*(*rcx_10 + 8))(rcx_10, zx.q(rsi_1))

return arg1

// 函数: sub_1405fcef0
// 地址: 0x1405fcef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
void* rdx = **(arg1 + 8)

if (rdx == 0)
    int64_t* rax
    rax.b = 0
    return rax

void* rsi = *(arg1 + 8)
*(arg1 + 8) = rdx
int128_t var_20 = zx.o(0)

if (rdx + 8 != &var_20)
    *(rdx + 8) = 0
    var_20.q = 0
    sub_1405aeff0(rdx + 0x10, &var_20:8)

void* rcx_2 = var_20:8.q

if (rcx_2 != 0)
    int32_t rax_2 = *(rcx_2 + 8)
    *(rcx_2 + 8) -= 1
    
    if (rax_2 == 1)
        int64_t* rbx_1 = var_20:8.q
        (**rbx_1)(rbx_1)
        int32_t rax_4 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_4 == 1)
            int64_t* rcx_4 = var_20:8.q
            (*(*rcx_4 + 8))(rcx_4, 1)

if (rsi != 0)
    int64_t* rbx_2 = *(rsi + 0x10)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rdi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))
    
    j_sub_140a74f90(rsi)

int128_t* rax_1
rax_1.b = 1
return rax_1

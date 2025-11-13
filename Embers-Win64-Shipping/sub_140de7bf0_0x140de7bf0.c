// 函数: sub_140de7bf0
// 地址: 0x140de7bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 8)

if (rdx == 0 || *(arg1 + 0x10) == data_143e244b0)
    return 

int64_t* rbx_1 = *(rdx + 0x10)
int64_t* rsi_1 = nullptr
uint64_t rax

if (rbx_1 != 0)
    rax = zx.q(rbx_1[1].d)
    
    if (rax.d != 0)
        rbx_1[1].d = rax.d + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rsi_1 = *(rdx + 8)
        rbx_1[1].d += 1

void* rdi_1 = *(arg1 + 0x10)
*(rdi_1 + 0x268) = rsi_1
int64_t* rcx = *(rdi_1 + 0x270)

if (rbx_1 != rcx)
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        rcx = *(rdi_1 + 0x270)
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            rax, rdx = (*(*rcx + 8))(rcx, 1)
    
    *(rdi_1 + 0x270) = rbx_1

void* rdi_2 = data_143e20d08

if (rdi_2 != 0)
    int64_t* rdi_3 = *(rdi_2 + 0xb0)
    
    if (rdi_3 != 0)
        rdi_3[1].d += 1
    
    *(*(rdi_2 + 0xa8) + 0x78) = 1
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            rax, rdx = (**rdi_3)(rdi_3)
            int32_t temp5_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp5_1 == 1)
                rax, rdx = (*(*rdi_3 + 8))(rdi_3, 1)

if (rsi_1 != 0)
    rdx.b = 8
    sub_140e19ef0(rsi_1, rdx.b)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    (**rbx_1)(rbx_1)
    int32_t temp4_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (temp4_1 == 1)
        (*(*rbx_1 + 8))(rbx_1, 1)

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp6_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp6_1 == 1)
    jump(*(*rbx_1 + 8))

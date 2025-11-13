// 函数: sub_140a63790
// 地址: 0x140a63790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    sub_140a8e090(arg1)

sub_140a61dd0(&arg1[0x88])
int64_t* rsi = *(arg1 + 0x80)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t rax_3 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rsi + 8))(rsi, 1)

int64_t* rsi_1 = *(arg1 + 0x70)

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t rax_7 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* rsi_2 = *(arg1 + 0x60)

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        (**rsi_2)(rsi_2)
        int32_t rax_11 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (rax_11 == 1)
            (*(*rsi_2 + 8))(rsi_2, 1)

sub_140a61a30(&arg1[0x48])
int64_t* rsi_3 = *(arg1 + 0x40)

if (rsi_3 != 0)
    rsi_3[1].d -= 1
    
    if (rsi_3[1].d == 1)
        (**rsi_3)(rsi_3)
        int32_t rax_15 = *(rsi_3 + 0xc)
        *(rsi_3 + 0xc) -= 1
        
        if (rax_15 == 1)
            (*(*rsi_3 + 8))(rsi_3, 1)

int64_t* rsi_4 = *(arg1 + 0x30)

if (rsi_4 != 0)
    rsi_4[1].d -= 1
    
    if (rsi_4[1].d == 1)
        (**rsi_4)(rsi_4)
        int32_t rdi_1 = *(rsi_4 + 0xc)
        *(rsi_4 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rsi_4 + 8))(rsi_4, zx.q(rdi_1))

void* rdi_2 = *(arg1 + 0x20)

if (rdi_2 != 0)
    sub_140a63510(rdi_2)
    j_sub_140a74f90(rdi_2)

return sub_140596eb0(&arg1[8]) __tailcall

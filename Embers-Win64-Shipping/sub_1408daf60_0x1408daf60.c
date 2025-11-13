// 函数: sub_1408daf60
// 地址: 0x1408daf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(arg1 + 0xe0)
int64_t* rdi = *(arg1 + 0xc8)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140745b20(arg1 + 0xb0)
sub_140745b20(arg1 + 0xa0)
int64_t* rdi_1 = *(arg1 + 0x88)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rax_7 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140745b20(arg1 + 0x70)
sub_140745b20(arg1 + 0x60)
int32_t result = sub_1408dab30(arg1 + 0x28)
int64_t* rdi_2 = *(arg1 + 0x18)

if (rdi_2 != 0)
    result = rdi_2[1].d
    rdi_2[1].d -= 1
    
    if (result == 1)
        result = (**rdi_2)(rdi_2)
        int32_t rsi_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*(*rdi_2 + 8))(rdi_2, zx.q(rsi_1))

int64_t* rbx_1 = *(arg1 + 8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result

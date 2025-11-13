// 函数: sub_140ddea30
// 地址: 0x140ddea30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140627040(arg1 + 0x190)
sub_140745b20(arg1 + 0x180)
int64_t* rdi = *(arg1 + 0x168)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

if (*(arg1 + 0x158) != 0)
    *(arg1 + 0x158) = 0
    sub_140ddef20(arg1 + 0xf0)

sub_140745b20(arg1 + 0xd8)
sub_140745b20(arg1 + 0xb8)

if (*(arg1 + 0xb0) != 0)
    *(arg1 + 0xb0) = 0

sub_140745b20(arg1 + 0x80)
sub_140745b20(arg1 + 0x68)
sub_140745b20(arg1 + 0x50)

if (*(arg1 + 0x44) != 0)
    *(arg1 + 0x44) = 0

int64_t* rdi_1 = *(arg1 + 0x38)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int32_t result = sub_140745b20(arg1 + 0x20)
int64_t* rbx_1 = *(arg1 + 8)

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return result

// 函数: sub_142276a40
// 地址: 0x142276a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Physics")

if (*(arg1 + 0x68) != 0)
    int64_t* rcx = *(arg1 + 0x60)
    int64_t* rdi_1
    
    if (rcx == 0)
        rdi_1 = nullptr
    else
        rdi_1 = (*(*rcx + 0x30))(rcx)
    
    int32_t arg_8 = 0
    (*(*rdi_1 + 0x358))(rdi_1, 0, 0)
    int64_t* rcx_2 = *(arg1 + 0x60)
    int64_t rdx_1
    rdx_1.b = 1
    (*(*rcx_2 + 0x48))(rcx_2, rdx_1, &arg_8)
    data_143ef8558 = 0
    sub_14227d2a0(arg1)
    (*(*rdi_1 + 0x360))(rdi_1)
    int64_t* rcx_5 = *(arg1 + 0x88)
    *(arg1 + 0x88) = 0
    
    if (rcx_5 != 0)
        rcx_5[9].d -= 1
        
        if (rcx_5[9].d == 1)
            sub_140a2f6e0(rcx_5)
    
    *(arg1 + 0x68) = 0
    *(arg1 + 0xb0) = 0
    sub_140920c10(arg1 + 0x30, arg1)

return sub_140b37f60("Physics")

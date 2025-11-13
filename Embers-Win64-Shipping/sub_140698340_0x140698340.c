// 函数: sub_140698340
// 地址: 0x140698340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d8bf60
void* rcx = arg1[0x26]

if (rcx == 0)
    sub_1406aec80()
    noreturn

sub_1406afdf0(rcx)
int64_t* rbx = arg1[0x27]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx)

int64_t* rcx_3 = arg1[0x25]

if (rcx_3 != 0)
    int64_t rdx
    rdx.b = rcx_3 != &arg1[0x1e]
    (*(*rcx_3 + 0x20))(rcx_3, rdx)
    arg1[0x25] = 0

sub_14068fd90(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1

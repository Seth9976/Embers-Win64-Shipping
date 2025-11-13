// 函数: sub_140692cd0
// 地址: 0x140692cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1406af8f0(arg1 + 0x58)
sub_14058f000(arg1 + 0x38)
int32_t result = sub_14058f000(arg1 + 0x18)
int64_t* rbx_1 = *(arg1 + 0x10)

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1)

return result

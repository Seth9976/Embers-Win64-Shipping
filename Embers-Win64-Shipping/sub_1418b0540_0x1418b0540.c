// 函数: sub_1418b0540
// 地址: 0x1418b0540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void arg_8
sub_140b58260(&arg_8, rdx, 1)
int32_t result = sub_1418ae780(arg1 + 0x70, &arg_8, arg3)
int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result

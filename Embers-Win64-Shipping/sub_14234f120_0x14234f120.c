// 函数: sub_14234f120
// 地址: 0x14234f120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[5].d = 0xffffffff
*(arg1 + 0x2c) = 4
*arg1 = &data_14332dd20
arg1[2] = &data_14332dd40
arg1[3] = &data_14332dd88
arg1[4] = &data_14332dd98
arg1[7].d = arg6
arg1[6].d = arg2
*(arg1 + 0x34) = arg3
arg1[8] = *arg5
void* rax_2 = arg5[1]
arg1[9] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

*(arg1 + 0x54) = arg7
arg1[0xa].d = arg4
int64_t* rbx_1 = arg5[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return arg1

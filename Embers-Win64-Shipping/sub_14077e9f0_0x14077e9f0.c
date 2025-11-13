// 函数: sub_14077e9f0
// 地址: 0x14077e9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1] = *arg3
void* rax_1 = arg3[1]
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

CRITICAL_SECTION* rcx = arg1[1]

if (rcx != 0)
    sub_1407c11b0(rcx, *arg1)

int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1

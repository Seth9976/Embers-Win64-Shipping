// 函数: sub_140ee2c10
// 地址: 0x140ee2c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ee0ef0
sub_14068e310(&arg1[1], arg2)
arg1[0x12] = *arg3
arg1[0x13] = arg3[1]
*(arg1 + 0xa0) = *(arg3 + 0x10)
*(arg1 + 0xb0) = *(arg3 + 0x20)
arg1[0x18] = arg3[6]
void* rax_3 = arg3[7]
arg1[0x19] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[0x1a] = arg3[8]
arg1[0x1b].d = arg3[9].d
*(arg1 + 0xdc) = *(arg3 + 0x4c)
*(arg1 + 0xe0) = *arg4
arg1[0x1e].b = arg4[1].b
arg1[0x1f] = *(arg4 + 0x18)
void* rax_9 = arg4[2].q
arg1[0x20] = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

arg1[0x21] = arg5
*(arg1 + 0x110) = *arg6
int64_t* rdi_1 = arg4[2].q

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg1

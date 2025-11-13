// 函数: sub_140e51450
// 地址: 0x140e51450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d7f690
int16_t r10 = *arg9
*arg1 = &data_142ecfd88
arg1[1].w = r10
*(arg1 + 0xa) = 0
*(arg1 + 0xc) = arg2
arg1[2] = 0
arg1[3] = *arg4
arg1[4] = *arg5
int64_t zmm0
zmm0.d = (*arg4).d f- *arg5
*(arg1 + 0x2c) = *(arg4 + 4) f- *(arg5 + 4)
arg1[5].d = zmm0.d
arg1[6] = arg6
arg1[7] = *arg7
arg1[8] = arg7[1]
void* rax_5 = arg7[2]
arg1[9] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

arg1[0xa].d = arg3
*(arg1 + 0x54) = 0
arg1[0xb].d = 0x3f800000
*(arg1 + 0x5c) = 0
*(arg1 + 0x64) = arg8.d
arg1[0xc].d = 0
arg1[0xd].w = 0
*(arg1 + 0x6a) = 0
int64_t* rdi_1 = arg7[2]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg1

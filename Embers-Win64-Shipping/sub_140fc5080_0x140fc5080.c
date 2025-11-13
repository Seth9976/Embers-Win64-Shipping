// 函数: sub_140fc5080
// 地址: 0x140fc5080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x90)
void*** rsi_1

if (rax == 0)
    rsi_1 = nullptr
else
    int64_t r8_1 = *arg1
    void arg_8
    int64_t* rax_1 = (*(r8_1 + 0xa0))(arg1, &arg_8, r8_1)
    rsi_1 = sub_140fc4690(rax, arg1[0x11], *rax_1)

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 != 0)
    rax_3[1].d = 1
    *rax_3 = &data_142d42ea8
    *(rax_3 + 0xc) = 1
    rax_3[2] = rsi_1

*(rsi_1 + 8) = *(arg1 + 8)
*(rsi_1 + 0x18) = *(arg1 + 0x18)
*(rsi_1 + 0x28) = *(arg1 + 0x28)
*(rsi_1 + 0x38) = *(arg1 + 0x38)
*(rsi_1 + 0x48) = *(arg1 + 0x48)
*(rsi_1 + 0x58) = *(arg1 + 0x58)
*(rsi_1 + 0x68) = *(arg1 + 0x68)
*(rsi_1 + 0x78) = *(arg1 + 0x78)
*arg2 = rsi_1
arg2[1] = rax_3

if (rax_3 != 0)
    rax_3[1].d += 1
    
    if (rax_3 != 0)
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            (**rax_3)(rax_3)
            int32_t temp1_1 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax_3)[1](rax_3, 1)

return arg2

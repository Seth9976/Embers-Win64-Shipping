// 函数: sub_140a96080
// 地址: 0x140a96080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x38)
void*** rdi_1

if (rax == 0)
    rdi_1 = nullptr
else
    void*** rax_1 = j_sub_140a82f30(0x20)
    
    if (rax_1 != 0)
        rax_1[1].d = 1
        *rax_1 = &data_142df7bd8
        *(rax_1 + 0xc) = 1
        rax_1[3] = 0
        rax_1[2] = 0
        rax_1[3] = 0
    
    void*** var_10_1 = rax_1
    void* var_18 = &rax_1[2]
    rdi_1 = sub_140a95410(rax, &var_18)

*arg1 = rdi_1
void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 != 0)
    rax_3[1].d = 1
    *rax_3 = &data_142d42ea8
    *(rax_3 + 0xc) = 1
    rax_3[2] = rdi_1

arg1[1] = rax_3
arg1[2].d = 0
return arg1

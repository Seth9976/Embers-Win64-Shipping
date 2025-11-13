// 函数: sub_142640720
// 地址: 0x142640720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142640930(arg1)
arg1[0x55].d &= 0xffffffe7
*arg1 = &data_143451fe0
arg1[0x44] = &data_143452750

if (((arg1[1].d u>> 4).b & 1) != 0)
    return arg1

arg1[0x57] = sub_142652740
arg1[0x58] = sub_142652740
arg1[0x59] = sub_1405949a0
arg1[0x5a] = sub_1405949a0
void* r14 = arg1[0x67]
arg1[0x5b] = sub_14265af70
void*** rax_2 = j_sub_140a82f30(8)
void*** rsi = rax_2

if (rax_2 == 0)
    rsi = nullptr
else
    *rsi = &data_143451f58

void*** rax_3 = j_sub_140a82f30(0x18)
void*** rbx = rax_3

if (rax_3 == 0)
    rbx = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rsi

void*** var_18 = rsi
void*** var_10 = rbx

if (r14 + 0x10 != &var_18)
    *(r14 + 0x10) = rsi
    var_18 = nullptr
    sub_1405aeff0(r14 + 0x18, &var_10)
    rbx = var_10

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*rbx)[1](rbx, zx.q(rsi_1))

return arg1

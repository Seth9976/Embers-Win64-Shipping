// 函数: sub_140b30c00
// 地址: 0x140b30c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e77eb0
sub_140acd3c0(&arg1[0x4d])
sub_140acd8c0(&arg1[0x25])
sub_1405d5770(&arg1[0x23])
arg1[0x21].d = 0
int64_t rcx_3 = arg1[0x20]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int32_t result = sub_14094baa0(&arg1[0x18])

if (arg1[0x17].b != 0)
    arg1[0x17].b = 0
    int64_t rcx_5 = arg1[0x14]
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)
    
    int64_t rcx_6 = arg1[0x12]
    
    if (rcx_6 != 0)
        result = sub_140a74f90(rcx_6)

if (arg1[0x11].b != 0)
    arg1[0x11].b = 0
    result = sub_140acd7a0(&arg1[0xa])

int32_t i_1 = arg1[9].d
void* rbx = arg1[8]

if (i_1 != 0)
    int32_t i
    
    do
        result = sub_140b0bbf0(rbx)
        rbx += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[8]

if (rbx != 0)
    result = sub_140a74f90(rbx)

int64_t* rbx_1 = arg1[6]

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        (**rbx_1)(rbx_1)
        result = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg1[3]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rsi = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi == 1)
            return (*(*rbx_2 + 8))(rbx_2, zx.q(rsi))

return result

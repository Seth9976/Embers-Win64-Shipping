// 函数: sub_141df00d0
// 地址: 0x141df00d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143f390b8
data_143f390b0 = 0

if (rbx != 0)
    data_143f390b8 = 0
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

data_143f38eec = 0
char result = sub_140a80fb0(&data_143f390a0)

if (result == 0)
    return result

return sub_140a81580(&data_143f390a0) __tailcall

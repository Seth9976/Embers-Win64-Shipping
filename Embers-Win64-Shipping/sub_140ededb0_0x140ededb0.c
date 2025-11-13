// 函数: sub_140ededb0
// 地址: 0x140ededb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ebd660()
int64_t* rbx = data_143e2a078
int64_t* rcx = data_143e2a070

if (rbx != 0)
    rbx[1].d += 1

int64_t result = (*(*rcx + 0x50))(rcx)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx + 8))

return result

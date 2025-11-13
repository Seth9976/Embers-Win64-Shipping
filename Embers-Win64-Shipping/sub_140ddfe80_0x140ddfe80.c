// 函数: sub_140ddfe80
// 地址: 0x140ddfe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec9760
void* rcx = arg1[1]

if (rcx != 0)
    sub_1405a46b0(rcx + 0x40, arg1)

DeleteCriticalSection(&arg1[0x12])
sub_140596eb0(&arg1[0xf])
sub_140596eb0(&arg1[0xc])
sub_140596eb0(&arg1[9])
sub_140596eb0(&arg1[6])
int64_t result = sub_140596eb0(&arg1[3])
int64_t* rbx_1 = arg1[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_1 + 8))

return result

// 函数: sub_140d732a0
// 地址: 0x140d732a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ebf640
sub_140596eb0(&arg1[0xd])
sub_140596eb0(&arg1[0xa])
int64_t result = sub_140596eb0(&arg1[7])
int64_t* rbx = arg1[6]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg1[4]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg1[2]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result

// 函数: sub_140e53e80
// 地址: 0x140e53e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ed7fa0
arg1[0x1e].d = 0
int64_t rcx = arg1[0x1d]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140e530c0(&arg1[0x15])
arg1[0x14].d = 0
int64_t rcx_2 = arg1[0x13]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t result = sub_14095cde0(&arg1[0xb], 0)
int64_t rcx_4 = arg1[0xf]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xb]

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t* rbx = arg1[0xa]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg1[7]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rcx_10 = arg1[2]

if (rcx_10 != 0)
    int32_t temp3_1 = *(rcx_10 + 0xc)
    *(rcx_10 + 0xc) -= 1
    
    if (temp3_1 == 1)
        return (*(*rcx_10 + 8))(rcx_10, 1)

return result

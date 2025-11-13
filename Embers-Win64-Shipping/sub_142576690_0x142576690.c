// 函数: sub_142576690
// 地址: 0x142576690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143e202c8
int64_t rcx = data_143e202b8
int64_t r8 = data_143e202c0

if (rbx != 0)
    rbx[1].d += 1

int64_t result = 0
arg2[1].d = 0x3f800000
*arg2 = 0
arg2[2] = rcx
arg2[3] = r8
arg2[4] = rbx
int64_t arg_10 = 0

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            result = (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx + 8))(rbx, 1)

return result

// 函数: sub_1423f6300
// 地址: 0x1423f6300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143e202c8
int64_t r8 = data_143e202c0
int64_t rdx = data_143e202b8
int64_t var_28 = rdx
int64_t var_20 = r8
int64_t* var_18 = rbx

if (rbx != 0)
    rbx[1].d += 1

int64_t* rax = *arg1
int32_t var_10 = 0
int64_t var_38 = 0
int64_t var_30 = 0
*arg2 = *rax
arg2[1] = 0
arg2[2] = 0
arg2[3] = rdx
arg2[4] = r8
arg2[5] = rbx

if (rbx != 0)
    rbx[1].d += 1

arg2[6].d &= 0xfffffff0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_14094ab00(&var_38)
return arg2

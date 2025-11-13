// 函数: sub_140d7e9d0
// 地址: 0x140d7e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t* r14 = *arg2

if (rbx != 0)
    rbx[1].d += 1

int64_t var_28 = *arg4
int64_t* rax_1 = arg4[1]

if (rax_1 != 0)
    rax_1[1].d += 1

int64_t rsi = sx.q(*(arg1 + 0xd0))
int32_t rax_2 = (rsi + 1).d
*(arg1 + 0xd0) = rax_2

if (rax_2 s> *(arg1 + 0xd4))
    sub_1405a4f90(arg1 + 0xc8)

int64_t* rax_5 = (rsi << 4) + *(arg1 + 0xc8)
*rax_5 = r14
rax_5[1] = rbx

if (rbx != 0)
    rbx[1].d += 1

char var_30 = arg5
void* result = sub_140d7e0c0(r14, arg1, arg3, *(arg1 + 0x88), &var_28)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        result = (**rax_1)(rax_1)
        int32_t temp2_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rax_1 + 8))(rax_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result

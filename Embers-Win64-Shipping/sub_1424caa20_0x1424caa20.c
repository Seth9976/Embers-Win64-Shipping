// 函数: sub_1424caa20
// 地址: 0x1424caa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143e202c8
int64_t rdx = data_143e202b8
int64_t r8 = data_143e202c0

if (rbx != 0)
    rbx[1].d += 1

char var_40
char var_40_1 = var_40 & 0xf0
int64_t arg_20 = 0
int64_t var_48 = 0
int64_t var_38 = rdx
int64_t var_30 = r8

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_2 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_2[4]
    sub_140d30490(arg2, &var_48, r8_2)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rbx_1 = &var_48
int32_t arg_10 = 0

if (rax_4 != 0)
    rbx_1 = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_6 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_6 != 0
bool cond:2 = arg_10 != 0
*(arg2 + 0x20) = rsi + rax_6
int64_t result = sub_142401640(arg1, rbx_1, cond:2)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result

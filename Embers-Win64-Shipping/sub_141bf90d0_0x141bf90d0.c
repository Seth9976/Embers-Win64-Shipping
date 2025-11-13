// 函数: sub_141bf90d0
// 地址: 0x141bf90d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
void** var_a8
void*** rax_1 = sub_141bb18b0(arg1, &var_a8, arg3.d)
*(arg3 + 8) = rax_1[1]
*(arg3 + 0x10) = *(rax_1 + 0x10)
sub_140693390(arg3 + 0x20, &rax_1[4])
*(arg3 + 0x48) = rax_1[9]
*(arg3 + 0x50) = rax_1[0xa]
*(arg3 + 0x58) = *(rax_1 + 0x58)
*(arg3 + 0x68) = rax_1[0xd].d
*(arg3 + 0x6c) = *(rax_1 + 0x6c)
*(arg3 + 0x6d) = *(rax_1 + 0x6d)
*(arg3 + 0x6e) = *(rax_1 + 0x6e)
*(arg3 + 0x6f) = *(rax_1 + 0x6f)
int64_t* rbx = rax_1[0xf]
int64_t var_b8 = rax_1[0xe]

if (rbx != 0)
    rbx[1].d += 1

if (&var_b8 != arg3 + 0x70)
    var_b8.o = *(arg3 + 0x70)
    *(arg3 + 0x70) = var_b8.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*(arg3 + 0x80) ^= (*(arg3 + 0x80) ^ rax_1[0x10].b) & 1
char rax_11 = *(arg3 + 0x80)
char rcx_6 = ((rax_11 ^ rax_1[0x10].b) & 2) ^ rax_11
void** const result = &data_142d8ad18
var_a8 = &data_142d8ad18
*(arg3 + 0x80) = rcx_6
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        result = (**var_30)(var_30)
        int32_t temp4_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*var_30 + 8))(var_30, 1)

int64_t* var_68

if (var_68 != 0)
    var_68[1].d -= 1
    
    if (var_68[1].d == 1)
        result = (**var_68)(var_68)
        int32_t temp5_1 = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*var_68 + 8))(var_68, 1)

return result

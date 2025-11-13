// 函数: sub_1424d7990
// 地址: 0x1424d7990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = data_143e202b8
int64_t var_28 = data_143e202c0
int64_t* rax_2 = data_143e202c8

if (rax_2 != 0)
    rax_2[1].d += 1

int32_t var_18
int32_t var_18_1 = var_18 & 0xfffffff0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_30, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rdx_2 = &var_30

if (rax_4 != 0)
    rdx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
void var_48
int64_t* rax_6 = sub_1420c7cf0(&var_48, rdx_2)
int64_t rdx_3 = *arg3
*arg3 = *rax_6
*rax_6 = rdx_3
int64_t rdx_4 = arg3[1]
arg3[1] = rax_6[1]
rax_6[1] = rdx_4
int32_t result = rax_6[2].d
arg3[2].d = result
int64_t* var_40

if (var_40 != 0)
    result = var_40[1].d
    var_40[1].d -= 1
    
    if (result == 1)
        result = (**var_40)(var_40)
        int32_t rdi_2 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rdi_2 == 1)
            result = (*(*var_40 + 8))(var_40, zx.q(rdi_2))

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        result = (**rax_2)(rax_2)
        int32_t temp2_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rax_2 + 8))(rax_2, 1)

return result

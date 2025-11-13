// 函数: sub_141bb4170
// 地址: 0x141bb4170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140627710(arg1 + 0x5e8, arg2)
*(arg1 + 0x600) ^= (*(arg1 + 0x600) ^ arg2[3].d) & 1
int32_t rcx_4 = ((*(arg1 + 0x600) ^ arg2[3].d) & 2) ^ *(arg1 + 0x600)
*(arg1 + 0x600) = rcx_4
int32_t rax_6 = ((arg2[3].d ^ rcx_4) & 4) ^ rcx_4
*(arg1 + 0x600) = rax_6
int32_t rdx_3 = ((arg2[3].d ^ rax_6) & 8) ^ rax_6
*(arg1 + 0x600) = rdx_3
int64_t* rbx_1 = *(arg1 + 0x5f8)
int64_t r9 = *(arg1 + 0x5f0)

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rdx_3 = *(arg1 + 0x600)

int64_t var_28 = *(arg1 + 0x5e8)
int64_t var_20 = r9

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t var_48 = data_143e202b8
int64_t var_40 = data_143e202c0
int64_t* rax_11 = data_143e202c8

if (rax_11 != 0)
    rax_11[1].d += 1

int32_t var_30
int32_t var_30_1 = var_30 & 0xfffffff0
sub_140627710(&var_48, &var_28)
int32_t var_10
int32_t var_30_2 =
    var_30_1 ^ ((var_10 ^ ((((arg3 ^ rdx_3) & 0xf) ^ arg3 ^ var_10) & 0xf) ^ var_30_1) & 0xf)
int64_t result = sub_1405a9f90(arg1 + 0x6c0, &var_48)

if (rax_11 != 0)
    rax_11[1].d -= 1
    
    if (rax_11[1].d == 1)
        result = (**rax_11)(rax_11)
        int32_t temp2_1 = *(rax_11 + 0xc)
        *(rax_11 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rax_11 + 8))(rax_11, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result

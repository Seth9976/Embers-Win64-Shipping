// 函数: sub_142401860
// 地址: 0x142401860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = data_143f5bdd8
int64_t rdi = sx.q(data_143f5bde0)
int64_t* r8 = r9
void* rcx = &r9[rdi * 5]
int64_t rdx_3

if (r9 != rcx)
    while (*r8 != *arg1 || r8[2] != arg1[2] || not(arg1[1].d f== r8[1].d))
        r8 = &r8[5]
        
        if (r8 == rcx)
            goto label_1424018d9
    
    int64_t rax_2
    int64_t rdx_2
    rdx_2:rax_2 = muls.dp.q(0x6666666666666667, r8 - r9)
    rdx_3 = rdx_2 s>> 4

if (r9 == rcx || rdx_3.d + (rdx_3 u>> 0x3f).d == 0xffffffff)
label_1424018d9:
    int32_t rax_5 = (rdi + 1).d
    bool cond:0_1 = rax_5 s<= data_143f5bde4
    data_143f5bde0 = rax_5
    
    if (not(cond:0_1))
        sub_1405c4ec0(&data_143f5bdd8)
        r9 = data_143f5bdd8
    
    int64_t rcx_1 = rdi * 5
    r9[rcx_1] = *arg1
    r9[rcx_1 + 1].d = arg1[1].d
    r9[rcx_1 + 2] = arg1[2]
    r9[rcx_1 + 3] = arg1[3]
    void* rax_10 = arg1[4]
    r9[rcx_1 + 4] = rax_10
    
    if (rax_10 != 0)
        *(rax_10 + 8) += 1

int32_t var_18 = 0xffffffff
void* result_1 = nullptr
int32_t i_2 = 0
void* result = sub_140d3cc80(sub_142575670(), &result_1, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_18 + 1
void* result_2 = result_1
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(result_2 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    sub_14241e9d0(*(result_2 + (sx.q(i_1) << 3)) + 0x210)
    result = result_1
    void* rdx_7 = *(result + (sx.q(i_3) << 3))
    *(rdx_7 + 0x2b4) &= 0xfe
    i = i_2
    i_1 = i_3 + 1
    result_2 = result_1
    i_3 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(result_2 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (result_2 == 0)
    return result

return sub_140a74f90(result_2)

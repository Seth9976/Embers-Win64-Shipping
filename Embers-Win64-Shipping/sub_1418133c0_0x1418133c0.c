// 函数: sub_1418133c0
// 地址: 0x1418133c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140682070(&data_143efa8a8, arg2)
int64_t* i = data_143efa8a8

for (void* rbp_2 = &i[sx.q(data_143efa8b0) * 2]; i != rbp_2; i = &i[2])
    sub_140a306e0(i, &(*U"{}[\nt")[3], &data_142d5a024, 1)
    char rax = sub_140a32ae0(i, &data_142e76608, 1)
    sub_140a306e0(i, &data_142d62df8, u":////", 1)
    result = sub_140a306e0(i, &data_142e76608, &data_142d5a024, 1)
    
    if (rax != 0)
        int64_t var_28 = 0
        int32_t var_20_1 = 0
        sub_1405947f0(&var_28, 2)
        int32_t rdi_2 = var_20_1 + 2
        
        if (rdi_2 s> 0)
            sub_140594770(&var_28)
        
        int64_t rsi_1 = var_28
        result = UnDecorator::getReferenceType(rsi_1, &data_142d5a024, 4)
        
        if (rdi_2 != 0 && rdi_2 != 1)
            if (i[1].d != 0)
                result = sub_140ab3a50(i, rsi_1, rdi_2 - 1, 0)
            else
                result = sub_140a20ba0(i, rsi_1, rdi_2 - 1)
        
        if (rsi_1 != 0)
            result = sub_140a74f90(rsi_1)

int32_t i_2 = arg2[1].d
int64_t* rbx = *arg2

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_9 = *rbx
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        rbx = &rbx[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx = *arg2

if (rbx == 0)
    return result

return sub_140a74f90(rbx) __tailcall

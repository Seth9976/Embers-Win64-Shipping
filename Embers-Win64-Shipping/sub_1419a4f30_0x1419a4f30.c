// 函数: sub_1419a4f30
// 地址: 0x1419a4f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int32_t result_1 = 0
int32_t* rdx = *r8
int32_t result

if (&rdx[1] u> r8[1])
    int32_t* rdx_1 = &result_1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg2, rdx_1, arg4)
    else
        result = (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    result = *rdx
    result_1 = result
    *r8 += 4

int32_t rdi = 0

if (result_1 s> 0)
    do
        int64_t* rax_2 = j_sub_140a82f30(0x38)
        int64_t* rbx_1 = rax_2
        
        if (rax_2 == 0)
            rbx_1 = nullptr
        else
            sub_1419b6bd0()
            sub_1419c2110(rbx_1, &data_143f19610)
            *rbx_1 = &data_143009cb0
        
        result, arg4, arg3 = sub_1419d7820(rbx_1, arg2, 1, 0, arg4, arg3)
        
        if (result.b != 0)
            if (rbx_1 != 0)
                int64_t* rdx_4 = rbx_1[5] + 0x60
                int64_t* arg_18 = rbx_1
                result, arg4 = sub_141990160(arg1, rdx_4, &arg_18)
        else if (rbx_1 != 0)
            result = (**rbx_1)(rbx_1, 1)
        
        rdi += 1
    while (rdi s< result_1)

return result

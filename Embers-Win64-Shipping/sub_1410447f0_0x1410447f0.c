// 函数: sub_1410447f0
// 地址: 0x1410447f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = data_14399fa54
*arg2 = arg3
arg2[1].d = arg4
*(arg2 + 0xc) = *arg5
*(arg2 + 0x1c) = arg5[1]
*(arg2 + 0x2c) = arg5[2].d
__builtin_memset(&arg2[6], 0, 0x14)
*(arg2 + 0x44) = r10
arg2[0xa].b = 0
arg2[9] = 0
int64_t rbp = sx.q(*(arg3 + 0x3c)) * 0x28
char rax_4

if (*(data_143e2c638 + 4) != 0 && *(rbp + 0x1439c85e8) == 1 && *(rbp + &data_1439c85ec) == 1
        && *(arg3 + 0x100) != 0 && (*(arg3 + 0x40) & 0x80000) == 0)
    rax_4 = (*(*arg1 + 0x748))(arg1, arg2, &arg2[9])

if (*(data_143e2c638 + 4) == 0 || *(rbp + 0x1439c85e8) != 1 || *(rbp + &data_1439c85ec) != 1
        || *(arg3 + 0x100) == 0 || (*(arg3 + 0x40) & 0x80000) != 0 || rax_4 == 0)
    *(rbp + 0x1439c85e8)
    int32_t rax_17 = (
        divs.dp.d(sx.q(*(arg5 + 0x18) - 1 + *(rbp + 0x1439c85e8)), *(rbp + 0x1439c85e8))
        * (&data_1439c85f4)[sx.q(*(arg3 + 0x3c)) * 0xa] + 0xff) & 0xffffff00
    arg2[6].d = rax_17
    int32_t rax_18 = rax_17
        * divs.dp.d(sx.q(*(arg5 + 0x1c) - 1 + *(rbp + &data_1439c85ec)), *(rbp + &data_1439c85ec))
    *(arg2 + 0x34) = rax_18
    int32_t rbp_4 = (arg5[2].d * rax_18 + 0x1ff) & 0xfffffe00
    arg2[8].d = rbp_4
    int64_t* rax_19 = j_sub_140a82f30(0x68)
    int64_t* r9_1 = rax_19
    
    if (rax_19 == 0)
        r9_1 = nullptr
    else
        *rax_19 = *(*arg1[4] + 0x9d8)
        rax_19[1].d = 0
        __builtin_memset(&rax_19[2], 0, 0x50)
        rax_19[0xc].w = 0xff00
    
    arg2[9] = r9_1
    arg2[7] = sub_1410130c0(*(*arg1[4] + 0x9d8) + 0x7c0, rbp_4, 0x200, r9_1)

return arg2

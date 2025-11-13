// 函数: sub_1422e1d40
// 地址: 0x1422e1d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = arg2
int64_t rbx = sx.q((*U"1111")[sx.q(*(arg4 + 0x1548))])
int64_t rax_1 = data_143f025b8

if (((rbx.d u> 0x18 || not(test_bit(0x100a040, rbx.d))) && *(rbx * 0x14 + &data_143f025f0) != rax_1)
        || ((rbx.d u> 0x1e || not(test_bit(0x6562c800, rbx.d)))
        && (*(rbx * 0x14 + &data_143f025fc) & 1) == 0) || (rbx.d u<= 0x1b && test_bit(0x857c041, rbx.d)))
    arg2.b = 0
else
    int64_t r8 = rbx * 5
    arg2 = zx.q(*((r8 << 2) + &data_143f025fc))
    
    if (((arg2.d u>> 2).b & 1) != 0 || rbx.d == 0xb || rbx.d == 0x1e
            || (*((r8 << 2) + &data_143f025f0) == rax_1 && (arg2.b & 1) != 0))
        arg2.b = 0
    else
        char rax_2
        rax_2, arg2 = sub_141271090(rbx.d)
        
        if (rax_2 != 0 || rbx.d - 0x19 u<= 1 || *(arg1 + 0x476) != rax_2)
            arg2.b = 0
        else
            arg2.b = 1

void* const rcx_3 = 0x10

if (arg6 != 0)
    rcx_3 = 0x240

return sub_141e9a320(rcx_3 + arg1, r15, arg3, *(arg4 + 0x1548), arg2.b, arg4, 0, 0x3f800000, arg5)

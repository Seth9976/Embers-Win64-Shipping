// 函数: sub_1414b3ce0
// 地址: 0x1414b3ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1)
int32_t result

if (sub_1405fba70(rbx.d, 3).b != 0 && (rbx - 0x19).d u> 1)
    int64_t rdx_1 = rbx * 5
    int64_t rcx_1 = *(&data_143f025f0 + (rdx_1 << 2))
    
    if (rcx_1 != data_143f025d0 && (((rbx - 0x11).d & 0xfffffff3) != 0 || rbx.d == 0x19)
            && (rcx_1 != data_143f025c0 || (*((rdx_1 << 2) + &data_143f025fc) & 1) == 0))
        result.b = 1
        return result

result.b = 0
return result

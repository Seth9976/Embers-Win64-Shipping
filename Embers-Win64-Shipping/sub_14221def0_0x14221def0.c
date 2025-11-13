// 函数: sub_14221def0
// 地址: 0x14221def0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd1570(arg1)
int32_t rax = *(arg1 + 0xc)
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_2
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18

uint64_t result = zx.q(*(rax_7 + 8) u>> 0x1d)

if ((result.b & 1) == 0)
    void* rax_10 = (*(*arg1 + 0x150))(arg1)
    
    if (arg1[0x46].b == 0 && *(arg1 + 0x231) != 0 && arg1[0x4b] == 0 && sub_141dcdc50(arg1) != 3)
        char rax_12 = *(arg1 + 0x231)
        char rcx_4 = *(rax_10 + 0x11d)
        
        if (rax_12 == 3)
            (*(*arg1 + 0x700))(arg1)
        else if (rax_12 != 1)
            if (rax_12 == 2 && (rcx_4 & 0x10) == 0)
                (*(*arg1 + 0x700))(arg1)
        else if ((rcx_4 & 0x10) != 0)
            (*(*arg1 + 0x700))(arg1)
    
    result = (*(*arg1 + 0x628))(arg1)
    int64_t* rcx_7 = arg1[0x26]
    
    if (rcx_7 != 0 && result != 0 && (*(result + 0x124) & 1) != 0)
        int64_t rdx_4 = *rcx_7
        (*(rdx_4 + 0x498))(rcx_7, rdx_4)
        return sub_141f2a170(result, arg1)

return result

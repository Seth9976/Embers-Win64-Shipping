// 函数: sub_140fde800
// 地址: 0x140fde800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x4428)
void* rdi = *result

if (rdi != 0)
    result = sub_140fde8a0(rdi, *(arg1 + 0x43d4))
    
    if (result.b != 0)
        result = *(rdi + 0x40)
        int64_t rdx_2 = result[zx.q(*(rdi + 0x48))]
        int64_t arg_10 = rdx_2
        
        if (*(arg1 + 0x2520) != rdx_2 || *(arg1 + 0x2528) != 0 || *(arg1 + 0x252c) != 0x1000)
            *(arg1 + 0x2520) = rdx_2
            *(arg1 + 0x2528) = 0
            *(arg1 + 0x252c) = 0x1000
            int64_t* rcx_2 = *(arg1 + 0x188)
            return (*(*rcx_2 + 0x238))(rcx_2, 0, 1, &arg_10)

return result

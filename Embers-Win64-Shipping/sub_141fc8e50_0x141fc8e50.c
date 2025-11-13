// 函数: sub_141fc8e50
// 地址: 0x141fc8e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_14227a4a0(arg1, arg2)
void* rcx = arg1[0xa9]

if (rcx != 0)
    sub_141dd6600(rcx, 0)
    void* rcx_1 = arg1[0xa9]
    *(rcx_1 + 0x32) ^= ((arg1[0x9b].d u>> 2).b ^ *(rcx_1 + 0x32)) & 1
    int64_t* rcx_2 = arg1[0xa9]
    result = (*(*rcx_2 + 0x628))(rcx_2)
    void* result_1 = result
    
    if (result != 0)
        void* rax_3 = sub_1425a1340()
        void* rcx_3 = *(result_1 + 0x10)
        result = rax_3 + 0x30
        int64_t rdx = sx.q(*(result + 8))
        
        if (rdx.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rdx << 3)) == result)
            *(result_1 + 0x150) |= 1
            *(result_1 + 0x3a) ^= ((arg1[0x9b].d u>> 2).b ^ *(result_1 + 0x3a)) & 1
            *(arg1 + 0x62c) = *(result_1 + 0x138)
            arg1[0xc6].d = *(result_1 + 0x13c)
            *(arg1 + 0x634) = *(result_1 + 0x140)
            return (*(*arg1 + 0xdc0))(arg1, rdx)

return result

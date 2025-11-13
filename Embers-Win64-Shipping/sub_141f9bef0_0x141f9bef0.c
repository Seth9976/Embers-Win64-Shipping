// 函数: sub_141f9bef0
// 地址: 0x141f9bef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x280)
void* rax = sub_1425ae740()
void* rdx = *(rbx + 0x10)
int64_t result = sx.q(*(rax + 0x38))

if (result.d s<= *(rdx + 0x38))
    int64_t result_1 = result
    result = *(rdx + 0x30)
    
    if (*(result + (result_1 << 3)) == rax + 0x30)
        void* const rbx_1 = *(arg1 + 0x280)
        int128_t zmm1 = arg2[1]
        uint128_t var_58 = *arg2
        int128_t var_48_1 = zmm1
        uint128_t var_38_1 = arg2[2]
        uint64_t var_18_1 = arg2[4].q
        int128_t var_28_1 = arg2[3]
        void* rax_1
        int64_t rax_2
        void* rdx_1
        
        if (rbx_1 != 0)
            rax_1 = sub_1425ae740()
            rdx_1 = *(rbx_1 + 0x10)
            rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rbx_1 == 0 || rax_2.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx_1 = nullptr
        
        return sub_141f9bfb0(rbx_1, &var_58)

return result

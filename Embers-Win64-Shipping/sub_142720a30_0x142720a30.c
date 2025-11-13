// 函数: sub_142720a30
// 地址: 0x142720a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
int32_t zmm6_1
result, zmm6_1 = sub_1426fbdd0(arg1)
uint64_t result_1 = result

if (result != 0)
    int32_t var_48 = zmm6_1
    int64_t r8
    int64_t var_20_1 = r8
    int32_t var_3c_1 = arg3[1].d
    int64_t var_44_1 = *arg3
    int64_t zmm0_1 = *arg4
    int32_t var_30_1 = arg4[1].d
    sub_14271c0a0(&var_48)
    int64_t* rax = sub_14272b310()
    void* rax_1 = rax[0x23]
    
    if (rax_1 == 0)
        int64_t rdx = *rax
        (*(rdx + 0x390))(rax, rdx)
        rax_1 = rax[0x23]
    
    result = zx.q(*(rax_1 + 0x44))
    
    if (result.d s< *(result_1 + 0x90))
        uint64_t rcx_6 = zx.q(result.d)
        result = *(result_1 + 0x88)
        void* rdi = *(result + (rcx_6 << 3))
        
        if (rdi != 0 && arg2 != 0)
            int64_t rsi_1 = sx.q(*(rdi + 0x88))
            int32_t rax_2 = (rsi_1 + 1).d
            *(rdi + 0x88) = rax_2
            
            if (rax_2 s> *(rdi + 0x8c))
                sub_1405c4f50(rdi + 0x80)
            
            result = *(rdi + 0x80)
            int64_t rcx_9 = rsi_1 * 6
            *(result + (rcx_9 << 3)) = var_48.o
            *(result + (rcx_9 << 3) + 0x10) = zmm0_1.o
            *(result + (rcx_9 << 3) + 0x20) = arg2.o
            *(rdi + 0x40) = 0

return result

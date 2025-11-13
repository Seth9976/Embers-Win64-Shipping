// 函数: sub_142720b70
// 地址: 0x142720b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
int32_t zmm6_1
result, zmm6_1 = sub_1426fbdd0(arg1)
uint64_t result_1 = result

if (result != 0)
    int32_t rcx = arg2[1].d
    int64_t zmm1_1 = *arg2
    int32_t var_48 = 0
    int32_t var_3c_1 = rcx
    int32_t var_34_1 = arg3
    char var_20_1 = data_143b57fe0
    int64_t var_44_1 = zmm1_1
    int64_t r9
    int64_t var_30_1 = r9
    sub_14271c200(&var_48)
    int64_t* rax_2 = sub_14272b570()
    void* rax_3 = rax_2[0x23]
    
    if (rax_3 == 0)
        int64_t rdx = *rax_2
        (*(rdx + 0x390))(rax_2, rdx)
        rax_3 = rax_2[0x23]
    
    result = zx.q(*(rax_3 + 0x44))
    
    if (result.d s< *(result_1 + 0x90))
        uint64_t rcx_3 = zx.q(result.d)
        result = *(result_1 + 0x88)
        void* rdi = *(result + (rcx_3 << 3))
        
        if (rdi != 0)
            int64_t rsi_1 = sx.q(*(rdi + 0x88))
            int32_t rax_4 = (rsi_1 + 1).d
            *(rdi + 0x88) = rax_4
            
            if (rax_4 s> *(rdi + 0x8c))
                sub_1405c4f50(rdi + 0x80)
            
            result = *(rdi + 0x80)
            int64_t rcx_6 = rsi_1 * 6
            *(result + (rcx_6 << 3)) = var_48.o
            *(result + (rcx_6 << 3) + 0x10) = zmm6_1.o
            *(result + (rcx_6 << 3) + 0x20) = arg4.o
            *(rdi + 0x40) = 0

return result

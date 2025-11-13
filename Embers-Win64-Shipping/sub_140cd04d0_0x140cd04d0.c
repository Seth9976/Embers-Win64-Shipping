// 函数: sub_140cd04d0
// 地址: 0x140cd04d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x18) - 1
void* result = nullptr
int32_t i_1 = -1

if (i s> 0)
    do
        void* result_1 = nullptr
        
        if (data_143e1d7b4 == 0)
            int32_t var_38_1 = 0
            result_1 =
                sub_140d2f0c0(sub_140d41340(), result, *(*(arg1 + 0x10) + (sx.q(i) << 3)), 0, 0, 0)
        
        if (arg2 == 0 || i != *(arg1 + 0x18) - 1)
            goto label_140cd057b
        
        void* result_2 = sub_140d21d80(arg2)
        
        if (arg3 != 0)
            if (arg3 == 1 && result_2 != result_1)
            label_140cd0578:
                result_1 = result_2
            
        label_140cd057b:
            
            if (result_1 == 0)
                break
        else if (result_1 == 0)
            goto label_140cd0578
        
        i_1 = i
        result = result_1
        i -= 1
    while (i s> 0)
    
    if (result != 0)
        void* rax_3 = sub_140be01c0()
        void* rdx_1 = *(result + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
            sub_140d3a3a0(arg1 + 8, result)
            int64_t rdx_3 = sx.q(*(arg1 + 0x18))
            int32_t rdi_1 = rdx_3.d
            int32_t rdi_2 = rdi_1 - i_1
            
            if (rdi_1 != i_1)
                int32_t rax_6 = *(arg1 + 0x18)
                int32_t rcx_7 = rax_6 - rdi_2
                
                if (rcx_7 != i_1)
                    int64_t r10_1 = *(arg1 + 0x10)
                    memmove(r10_1 + (sx.q(i_1) << 3), r10_1 + (rdx_3 << 3), (rcx_7 - i_1) << 3)
                    rax_6 = *(arg1 + 0x18)
                
                *(arg1 + 0x18) = rax_6 - rdi_2
                sub_1405c53d0(arg1 + 0x10)
            
            return result

return nullptr

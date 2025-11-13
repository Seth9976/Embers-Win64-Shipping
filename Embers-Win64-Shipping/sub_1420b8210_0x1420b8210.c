// 函数: sub_1420b8210
// 地址: 0x1420b8210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_1 = sub_140d3c6e0(arg1)
uint64_t result = result_1

if (result_1 != 0)
label_1420b828b:
    void* rax_2 = sub_140d41340()
    void* rdx_2 = *(result + 0x10)
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
        return result
else if (*(arg1 + 0x10) != 0)
    if (result_1.d == data_1439aaa30)
        data_1439aaa30 = 0
    else
        result_1 = zx.q(data_1439aaa30)
    
    if (result_1.d != arg1[2] || *arg1 != 0xffffffff)
        void* rax = sub_140d2bce0(&arg1[4])
        sub_140d3a3a0(arg1, rax)
        
        if (rax != 0 || data_143e1d7b4 == 0)
            int32_t rax_1 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_1 = data_1439aaa30
            
            arg1[2] = rax_1
        
        uint64_t result_2 = sub_140d3c6e0(arg1)
        result = result_2
        
        if (result_2 != 0)
            goto label_1420b828b

return 0

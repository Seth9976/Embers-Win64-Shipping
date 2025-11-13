// 函数: sub_1427064a0
// 地址: 0x1427064a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141ee9b30(arg1, arg2)
void* rbx = arg1[0x14]

if (rbx != 0)
    void* rax = sub_142497110()
    void* rdx_1 = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        int64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax + 0x30)
            int32_t var_10_1 = 0
            result = sub_140a84c80(0, 0x30, 0)
            int64_t result_2 = result
            
            if (result != 0)
                *result_2 = &data_142fd1390
                sub_140d3a3a0(result_2 + 8, arg1)
                *(result_2 + 0x10) = sub_1426f44e0.o
                *(result_2 + 0x28) = sub_140a387b0()
                *result_2 = &data_142fd13e8
                sub_140599630(rbx + 0x270, 1)
                void arg_8
                (*(*result_2 + 0x30))(result_2, &arg_8)
                int64_t rsi_1 = sx.q(*(rbx + 0x278))
                int32_t rax_3 = (rsi_1 + 1).d
                *(rbx + 0x278) = rax_3
                
                if (rax_3 s> *(rbx + 0x27c))
                    sub_1405a4f90(rbx + 0x270)
                
                result = (rsi_1 << 4) + *(rbx + 0x270)
                *result = result_2
                *(result + 8) = 3

return result

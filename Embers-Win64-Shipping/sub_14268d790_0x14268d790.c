// 函数: sub_14268d790
// 地址: 0x14268d790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(*arg1 + 0x150))()
uint64_t result_2 = result

if (result != 0)
    int32_t rax_1 = *(result + 0xc)
    void* const rax_7
    
    if (rax_1 s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    result = zx.q(*(rax_7 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        int64_t* rbx = *(result_2 + 0x120)
        
        if (rbx != 0)
            void* rax_9 = sub_14269bba0()
            void* rcx_4 = rbx[2]
            result = sx.q(*(rax_9 + 0x38))
            
            if (result.d s<= *(rcx_4 + 0x38))
                uint64_t result_1 = result
                result = *(rcx_4 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax_9 + 0x30)
                    return (*(*rbx + 0x370))(rbx, arg1)

return result

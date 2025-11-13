// 函数: sub_140cbe960
// 地址: 0x140cbe960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *arg2
char r9 = *(arg1 + 0x28)
int64_t* rbx = *(arg1 + 0x20)

if (result u< data_143e1d660 || result u>= data_143e1d668)
    arg1.b = 0
else
    arg1.b = 1

if (result != 0 && arg1.b == 0)
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(*(result + 0xc))
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    int64_t rdx_2 = sx.q(zx.d(rax_2.w) - rdx_1) * 3
    int64_t rcx_3 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3))
    result = zx.q(*(rcx_3 + (rdx_2 << 3) + 8))
    void* r8_1 = rcx_3 + (rdx_2 << 3)
    
    if (((result.d u>> 0x1d).b & 1) != 0 && r9 != 0)
        *arg2 = 0
        return result
    
    if (((result.d u>> 0x1c).b & 1) != 0 && test_bit(result.d, 0x1c))
        while (true)
            bool z_1
            
            if (result.d == *(r8_1 + 8))
                *(r8_1 + 8) = result.d & 0xefffffff
                z_1 = true
            else
                *(r8_1 + 8)
                z_1 = false
            
            if (z_1)
                break
            
            result = zx.q(*(r8_1 + 8))
            
            if (not(test_bit(result.d, 0x1c)))
                return result
        
        int64_t rdi_1 = sx.q(rbx[1].d)
        int32_t rax_8 = (rdi_1 + 1).d
        rbx[1].d = rax_8
        
        if (rax_8 s> *(rbx + 0xc))
            sub_1405a4d70(rbx)
        
        result = *arg2
        *(*rbx + (rdi_1 << 3)) = result

return result

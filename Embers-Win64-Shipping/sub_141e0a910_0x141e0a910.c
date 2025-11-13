// 函数: sub_141e0a910
// 地址: 0x141e0a910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t var_38 = *(arg2 + 0x71a) u>> 3 & 1
int32_t var_30 = arg2.d + 0x750
int32_t var_28 = arg2[0xab].d
sub_141ea5d80(arg1 + 0x4a0, &arg2[0xfc], &var_38, arg3)
uint8_t* result = (*(*arg2 + 0x8c8))(arg2)

if (result != 0)
    int64_t rbx_1 = sx.q(*(arg1 + 0x4a8))
    void* rsi_1 = nullptr
    int32_t rbp_1 = rbx_1.d
    var_38.q = 0
    var_30 = 0
    var_30 = rbx_1.d
    
    if (rbx_1.d s> 0)
        sub_140638970(&var_38)
        rbp_1 = var_30
        rsi_1 = var_38.q
        
        if (rbx_1.d s> 0)
            int64_t r8_1 = 0
            void* rdx_2 = rsi_1 + 0x20
            
            do
                uint32_t rcx_3 = zx.d(*(*(arg1 + 0x4a0) + (r8_1 << 1)))
                int128_t zmm0_1
                
                if (rcx_3 s>= *(result + 0x18))
                    *(rdx_2 - 0x20) = data_143dbb0c0
                    *(rdx_2 - 0x10) = data_143dbb0d0
                    zmm0_1 = data_143dbb0e0
                else
                    int128_t* rcx_6 = zx.q(rcx_3.w) * 0x30 + *(result + 0x10)
                    *(rdx_2 - 0x20) = *rcx_6
                    *(rdx_2 - 0x10) = rcx_6[1]
                    zmm0_1 = rcx_6[2]
                
                *rdx_2 = zmm0_1
                r8_1 += 1
                rdx_2 += 0x30
            while (r8_1 s< rbx_1)
    
    result = &var_38
    
    if (arg1 + 0x540 != &var_38)
        int32_t r8_2 = *(arg1 + 0x54c)
        *(arg1 + 0x548) = rbp_1
        
        if (rbp_1 != 0 || r8_2 != 0)
            sub_1405a4b40(arg1 + 0x540, rbp_1, r8_2)
            result = memcpy(*(arg1 + 0x540), rsi_1, rbp_1 * 0x30)
        else
            *(arg1 + 0x54c) = rbp_1
    
    if (rsi_1 != 0)
        result = sub_140a74f90(rsi_1)

void* rbx_3 = *(arg1 + 0xe0)

if (rbx_3 != 0)
    *(rbx_3 + 0x40) = arg1 + 0x4a0
    int32_t rsi_2 = *(arg1 + 0x4a8)
    *(rbx_3 + 0x38) = 0
    
    if (rsi_2 s> *(rbx_3 + 0x3c))
        sub_1405a5220(rbx_3 + 0x30, rsi_2)
    
    result = zx.q(*(rbx_3 + 0x38) + rsi_2)
    *(rbx_3 + 0x38) = result.d
    
    if (result.d s> *(rbx_3 + 0x3c))
        result = sub_140638970(rbx_3 + 0x30)

*(arg1 + 0x6d9) |= 1
return result

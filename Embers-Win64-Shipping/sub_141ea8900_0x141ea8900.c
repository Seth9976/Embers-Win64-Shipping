// 函数: sub_141ea8900
// 地址: 0x141ea8900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14221def0(arg1)
int32_t rax = *(arg1 + 0xc)
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_2
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18

uint32_t result = *(rax_7 + 8) u>> 0x1d

if ((result.b & 1) == 0)
    void* rcx_2 = arg1[0x50]
    
    if (rcx_2 != 0)
        int32_t var_20_1 = *(rcx_2 + 0x130)
        int32_t var_10_1 = *(rcx_2 + 0x124)
        int64_t rax_11 = *arg1
        int64_t var_28 = *(rcx_2 + 0x128)
        int64_t var_18 = *(rcx_2 + 0x11c)
        result = (*(rax_11 + 0x760))(arg1, &var_18, &var_28)
        void* rcx_4 = arg1[0x50]
        
        if ((*(rcx_4 + 0x3a) & 2) != 0)
            void* rdx_5 = arg1[0x51]
            
            if (rdx_5 != 0)
                result = sub_1423bc410(rcx_4 + 0x30, rdx_5, rdx_5 + 0x30)
    
    void* rcx_6 = arg1[0x51]
    
    if (rcx_6 != 0)
        void* rdx_6 = arg1[0x52]
        
        if (rdx_6 != 0)
            result = sub_141f2a1e0(rcx_6, rdx_6)
    
    if (arg1[0x4b] == 0)
        result = sub_141dcdc50(arg1)
        
        if (result != 3)
            int64_t* rcx_8 = arg1[0x51]
            
            if (rcx_8 != 0 && (*(rcx_8 + 0x1f1) & 4) != 0)
                jump(*(*rcx_8 + 0x7d0))

return result

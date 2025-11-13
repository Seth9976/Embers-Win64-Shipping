// 函数: sub_1424432b0
// 地址: 0x1424432b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_1 = arg3
int16_t* rdx

if (*(arg1 + 0x30) == 0)
    rdx = &data_142d40450
else
    rdx = *(arg1 + 0x28)

int64_t arg_8
sub_140b58260(&arg_8, rdx, 1)
uint64_t result = sub_140943780(&data_143a305d0, arg_8)

if (*(arg1 + 0x90) != 0)
    result = sub_142435380(result_1)
    uint64_t result_2 = result
    
    if (result == 0)
        result = sub_142435740(result_1, nullptr)
        result_2 = result
        
        if (result != 0)
            result = sub_140d21d80(result)
            result_1 = result
    
    *(arg1 + 0x78) = result_1
    *(arg1 + 0x88) = result_2
    
    if (result_2 != 0)
        int32_t rax = *(result_2 + 0xc)
        int64_t rsi_1 = 0
        void* const rax_7
        
        if (rax s>= data_143e1d9b4)
            rax_7 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax)
            uint32_t rdx_3 = zx.d(temp0_1)
            int32_t rax_2 = temp1_1 + rdx_3
            rax_7 =
                *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_3) * 0x18
        
        *(rax_7 + 8) |= 0x40000000
        int64_t var_28
        
        if (*(result_2 + 0x11a) == 3 && *(result_1 + 0x58) != 0xffffffff)
            sub_140a2e390(&var_28, u"%s_%d_", u"UEDPIE")
            
            if (result_2 + 0xd0 == &var_28)
                int64_t rcx_10 = var_28
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
            else
                int64_t rcx_9 = *(result_2 + 0xd0)
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                *(result_2 + 0xd0) = var_28
                int32_t var_20
                *(result_2 + 0xd8) = var_20
                int32_t var_1c
                *(result_2 + 0xdc) = var_1c
        
        void* rcx_11 = *(result_2 + 0x30)
        
        if (rcx_11 != 0)
            sub_1420fcdf0(rcx_11)
        
        sub_14242f280(result_2)
        int64_t** r14_1 = *(result_2 + 0x98)
        result = &r14_1[sx.q(*(result_2 + 0xa0))]
        uint64_t r15_2 = sx.q(*(result_2 + 0xa0)) << 3 u>> 3
        
        if (r14_1 u> result)
            r15_2 = 0
        
        if (r15_2 != 0)
            do
                int64_t* rbx_2 = *r14_1
                
                if (rbx_2 != 0)
                    result = (*(*rbx_2 + 0x278))(rbx_2)
                    
                    if (result.b != 0 && (rbx_2[0x17].b == 3 || rbx_2[0x25] == 0))
                        result = sub_1420ebe70(rbx_2, result_2, 1, 2, var_28.d)
                
                r14_1 = &r14_1[1]
                rsi_1 += 1
            while (rsi_1 != r15_2)

return result

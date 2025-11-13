// 函数: sub_141939ed0
// 地址: 0x141939ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_14193a410(arg1 + 8, &result_1, arg2)
int64_t result = sx.q(result_1)

if (result.d != 0xffffffff)
    int64_t rbx_2 = result << 4
    
    if (rbx_2 != neg.q(*(arg1 + 8)))
        int128_t* rbx_4 = *(rbx_2 + *(arg1 + 8))
        void* rsi_1 = *(rbx_4 + 0x88)
        
        if (rbx_4 != 0)
            sub_14194b680(arg1 + 8, rbx_4)
            
            if (rbx_4 == *(arg1 + 0x58))
                *(arg1 + 0x58) = rbx_4[8].q
            
            if (rbx_4 == *(arg1 + 0x60))
                *(arg1 + 0x60) = *(rbx_4 + 0x78)
            
            void* rcx_2 = *(rbx_4 + 0x78)
            
            if (rcx_2 != 0)
                *(rcx_2 + 0x80) = rbx_4[8].q
            
            void* rcx_3 = rbx_4[8].q
            
            if (rcx_3 != 0)
                *(rcx_3 + 0x78) = *(rbx_4 + 0x78)
            
            *(rbx_4 + 0x78) = 0
            rbx_4[8].q = 0
            j_sub_140a74f90(rbx_4)
        
        return sub_141939cd0(arg1, rsi_1)

return result

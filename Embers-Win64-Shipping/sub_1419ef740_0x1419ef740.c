// 函数: sub_1419ef740
// 地址: 0x1419ef740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x2b8)

if (result != 0 && *(result + 0x30) != 0 && *(arg1 + 0x2d0) == 0)
    if (*(arg1 - 0x148) == 0)
        result = sub_141ee69e0(arg1 - 0x1f0)
    
    if (*(arg1 - 0x148) != 0 || result != 0)
        int64_t* rcx_1 = *(*(arg1 + 0x2b8) + 0x30)
        *(arg1 + 0x2c0) = (*(*rcx_1 + 0x38))(rcx_1)
        int64_t* rcx_2 = *(*(arg1 + 0x2b8) + 0x30)
        *(arg1 + 0x2c4) = (*(*rcx_2 + 0x40))(rcx_2)
        int32_t rax_7 = *(arg1 + 0x2c0)
        result = zx.q(rax_7 * rax_7)
        
        if (*(arg1 + 0x2d0) != result.d)
            int32_t rcx_3 = *(arg1 + 0x2d0)
            
            if (result.d s> rcx_3)
                *(arg1 + 0x2d0) = result.d
                
                if (result.d s> *(arg1 + 0x2d4))
                    sub_140594770(arg1 + 0x2c8)
            else if (result.d s< rcx_3 && result.d != rcx_3)
                *(arg1 + 0x2d0) = result.d
                sub_1405a50a0(arg1 + 0x2c8)
            
            int32_t rax_8 = *(arg1 + 0x2c0)
            int16_t* rdi_1 = nullptr
            int32_t i_2 = rax_8 * rax_8
            int16_t* rbp_1 = nullptr
            int16_t* var_28 = nullptr
            uint64_t i_1 = 0
            int32_t var_1c_1 = 0
            
            if (i_2 s> 0)
                sub_1405a4cf0(&var_28)
                rbp_1 = var_28
                i_1 = zx.q(i_2)
            else if (i_2 s< 0 && i_2 != 0)
                sub_1405dac90(&var_28)
                rbp_1 = var_28
                i_1 = zx.q(i_2)
            
            int64_t* rcx_8 = *(*(arg1 + 0x2b8) + 0x30)
            result = (*(*rcx_8 + 0x28))(rcx_8, rbp_1, zx.q((i_1 << 2).d))
            
            if (i_1.d s> 0)
                int16_t* rbx_1 = rbp_1
                uint64_t i
                
                do
                    *(rdi_1 + *(arg1 + 0x2c8)) = *rbx_1
                    result = sub_1405b2ba0(arg1 + 0x2d8, (rbx_1[1].b & 0x7f) == 0x7f)
                    rbx_1 = &rbx_1[2]
                    rdi_1 = &rdi_1[1]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            if (rbp_1 != 0)
                return sub_140a74f90(rbp_1)

return result

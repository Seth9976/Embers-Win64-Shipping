// 函数: sub_1419957f0
// 地址: 0x1419957f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg1[1] + 0x10)
uint64_t result = *arg1
int64_t* r15 = *(result + 0x10)

if (data_143f0f19d == 0)
    int32_t var_30_1 = 1
    int32_t i = 0
    int128_t var_68_1 = *(arg1 + 0x10)
    uint128_t var_58_1 = *(arg1 + 0x20)
    int128_t var_48_1 = *(arg1 + 0x30)
    uint64_t var_38_1 = arg1[8]
    
    if (arg1[9].d != 0)
        do
            void*** rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_16 = &rbx_8[0xc]
            
            if (rax_16 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x68)
                rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_16 = &rbx_8[0xc]
            
            *(arg2 + 0x30) = rax_16
            void**** rax_17 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_17 = rbx_8
            *(arg2 + 8) = &rbx_8[1]
            rbx_8[1] = 0
            *rbx_8 = &data_142da7788
            *(rbx_8 + 0x10) = var_68_1
            *(rbx_8 + 0x20) = var_58_1
            *(rbx_8 + 0x30) = var_48_1
            rbx_8[8] = var_38_1
            rbx_8[9].d = 1
            rbx_8[0xb] = r14
            rbx_8[0xa] = r15
            
            if ((*(*r15 + 8))(r15) == 0)
                int64_t* rcx_11 = rbx_8[0xa]
                
                if ((*(*rcx_11 + 0x10))(rcx_11) == 0)
                    int64_t* rcx_12 = rbx_8[0xa]
                    
                    if ((*(*rcx_12 + 0x18))(rcx_12) == 0)
                        int64_t* rcx_13 = rbx_8[0xa]
                        (*(*rcx_13 + 0x20))(rcx_13)
            
            int64_t* rcx_14 = rbx_8[0xb]
            
            if ((*(*rcx_14 + 8))(rcx_14) == 0)
                int64_t* rcx_15 = rbx_8[0xb]
                
                if ((*(*rcx_15 + 0x10))(rcx_15) == 0)
                    int64_t* rcx_16 = rbx_8[0xb]
                    
                    if ((*(*rcx_16 + 0x18))(rcx_16) == 0)
                        int64_t* rcx_17 = rbx_8[0xb]
                        (*(*rcx_17 + 0x20))(rcx_17)
            
            var_38_1.d += 1
            var_38_1:4.d += 1
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(var_68_1.d)
            int32_t rax_37 = (temp1_1 - temp0_1) s>> 1
            
            if (rax_37 s<= 1)
                rax_37 = 1
            
            var_68_1.d = rax_37
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(var_68_1:4.d)
            result = zx.q((temp3_1 - temp2_1) s>> 1)
            
            if (result.d s<= 1)
                result = 1
            
            i += 1
            var_68_1:4.d = result.d
        while (i u< arg1[9].d)
else
    void*** rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rbx_3[0xc]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x68)
        rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rbx_3[0xc]
    
    *(arg2 + 0x30) = rax_1
    *(arg2 + 0x14) += 1
    **(arg2 + 8) = rbx_3
    *(arg2 + 8) = &rbx_3[1]
    rbx_3[1] = 0
    *rbx_3 = &data_142da7788
    *(rbx_3 + 0x10) = *(arg1 + 0x10)
    *(rbx_3 + 0x20) = *(arg1 + 0x20)
    *(rbx_3 + 0x30) = *(arg1 + 0x30)
    rbx_3[8] = arg1[8]
    rbx_3[9].d = arg1[9].d
    rbx_3[0xa] = r15
    rbx_3[0xb] = r14
    
    if ((*(*r15 + 8))(r15) == 0)
        int64_t* rcx_2 = rbx_3[0xa]
        
        if ((*(*rcx_2 + 0x10))(rcx_2) == 0)
            int64_t* rcx_3 = rbx_3[0xa]
            
            if ((*(*rcx_3 + 0x18))(rcx_3) == 0)
                int64_t* rcx_4 = rbx_3[0xa]
                (*(*rcx_4 + 0x20))(rcx_4)
    
    int64_t* rcx_5 = rbx_3[0xb]
    result = (*(*rcx_5 + 8))(rcx_5)
    
    if (result == 0)
        int64_t* rcx_6 = rbx_3[0xb]
        result = (*(*rcx_6 + 0x10))(rcx_6)
        
        if (result == 0)
            int64_t* rcx_7 = rbx_3[0xb]
            result = (*(*rcx_7 + 0x18))(rcx_7)
            
            if (result == 0)
                int64_t* rcx_8 = rbx_3[0xb]
                return (*(*rcx_8 + 0x20))(rcx_8)

return result

// 函数: sub_142112a10
// 地址: 0x142112a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_8 = 0
int32_t r14_1 = 1 << (data_1439c7a08).b | data_143f4a12c

if (r14_1 != 0)
    int32_t rsi_3
    int32_t r15_1
    
    do
        uint64_t var_58 = 0
        int64_t var_50_1 = 0
        rsi_3 = neg.d(r14_1) & r14_1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rsi_3)
        int32_t rdi_1 = 0
        r15_1 = r14_1
        
        if (rsi_3 != 0)
            rdi_1 = temp0_1
        
        r14_1 ^= rsi_3
        sub_141972a50(rdi_1, &var_58)
        int64_t var_48 = 0
        int32_t i_2 = 0
        int32_t var_38_1 = 0xffffffff
        result = sub_140d3cc80(sub_142543940(), &var_48, 1, 0x10, 0)
        int32_t i = i_2
        int32_t i_1 = var_38_1 + 1
        int64_t rdx_3 = var_48
        int32_t i_3 = i_1
        
        if (i_1 s< i)
            do
                result = sx.q(i_1)
                
                if (*(rdx_3 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_1 + 1)
                i_3 = result.d
                i_1 = result.d
            while (result.d s< i)
        
        while (i_1 s>= 0)
            if (i_1 s>= i)
                break
            
            int64_t* rbx_2 = *(rdx_3 + (sx.q(i_1) << 3))
            int64_t* rax_3 = (*(*rbx_2 + 0x280))(rbx_2)
            int64_t arg_10 = 0
            int64_t r9_1 = *rax_3
            result = (*(r9_1 + 0x40))(rax_3, zx.q(rdi_1), &arg_10, r9_1)
            
            if (result != 0)
                result = sub_1421305b0(result)
                
                if (result.b != 0)
                    result = (*(*rbx_2 + 0x268))(rbx_2)
                    arg_8 += 1
            
            i = i_2
            i_1 = i_3 + 1
            rdx_3 = var_48
            i_3 = i_1
            
            if (i_1 s< i)
                do
                    result = sx.q(i_1)
                    
                    if (*(rdx_3 + (result << 3)) != 0)
                        break
                    
                    result = zx.q(i_1 + 1)
                    i_3 = result.d
                    i_1 = result.d
                while (result.d s< i)
        
        if (rdx_3 != 0)
            result = sub_140a74f90(rdx_3)
        
        uint64_t rcx_10 = var_58
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
    while (rsi_3 != r15_1)

return result

// 函数: sub_14202cef0
// 地址: 0x14202cef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int64_t var_268 = arg2
int16_t var_238[0x100]
int64_t result

if (sub_140b297e0(&var_268, &var_238, 0x100, 1).b == 0)
    result.b = 1
else
    void* rax_3 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, &var_238, 0)
    
    if (rax_3 == 0)
        sub_140b1f640(arg3, u"Object not found")
        result.b = 1
    else
        int64_t rax_4
        int64_t r8_1
        rax_4, r8_1 = sub_140d41340()
        r8_1.b = 1
        void var_260
        sub_1409aa070(&var_260, rax_4, r8_1, 0x10, 0)
        int32_t var_278
        void var_270
        int64_t* i_1
        
        for (int64_t* i = i_1; i != 0; i = i_1)
            void* rcx_3 = *i
            
            if (*(rcx_3 + 0xc) s> data_143e1d994)
                break
            
            void* const rax_6
            
            rax_6 = i == 0 ? nullptr : rcx_3
            
            void* rax_7 = *(rax_6 + 0x10)
            int64_t rcx_4 = sx.q(*(rax_3 + 0x38))
            
            if (rcx_4.d s<= *(rax_7 + 0x38) && *(*(rax_7 + 0x30) + (rcx_4 << 3)) == rax_3 + 0x30)
                int32_t var_274_1 = 0
                var_278 = *sub_140b5e500(&var_270, 0xf8)
                int64_t rdx_3
                
                if (i == 0)
                    rdx_3 = 0
                else
                    rdx_3 = *i
                
                int32_t var_288_1
                var_288_1.b = 1
                sub_14201c450(arg1, rdx_3, 0, &var_278, var_288_1.b)
            
            sub_140cd6aa0(&var_260)
        
        int32_t* rax_10 = sub_140b5e500(&var_270, 0xf8)
        int64_t rdx_4 = sx.q(*(arg1 + 0x50))
        int32_t var_274_2 = 0
        result = *(arg1 + 0x48)
        var_278 = *rax_10
        int64_t rdi_1 = var_278.q
        int64_t rcx_13 = (rdx_4 << 5) + result
        
        if (result == rcx_13)
        label_14202d077:
            result = zx.q((rdx_4 + 1).d)
            *(arg1 + 0x50) = result.d
            
            if (result.d s> *(arg1 + 0x54))
                sub_1405c4e40(arg1 + 0x48)
            
            void** rsi_3 = (rdx_4 << 5) + *(arg1 + 0x48)
            rsi_3[1] = 0
            rsi_3[2] = 0
            rsi_3[3].d &= 0xfffffffe
            rsi_3[3].d |= 1
            *rsi_3 = rax_3
            rsi_3[1] = 0
            rsi_3[2] = rdi_1
        else
            while (*result != rax_3 || *(result + 0x10) != rdi_1)
                result += 0x20
                
                if (result == rcx_13)
                    goto label_14202d077
        
        result.b = 1

__security_check_cookie(rax_1 ^ &var_2a8)
return result

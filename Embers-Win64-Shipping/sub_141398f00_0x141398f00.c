// 函数: sub_141398f00
// 地址: 0x141398f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t result = sx.q(*(arg2 + 0x70))

if (result.d s> 0)
    int64_t result_2 = result
    int64_t result_3 = arg2
    int64_t r12_1 = 0
    int64_t result_1 = result
    result = *(arg2 + 0x68)
    
    if (result != 0)
        result_3 = result
    
    int64_t r9_1 = 0
    
    while (true)
        int64_t r11_1
        
        if ((*(r9_1 + result_3 + 0x64) & 0x400) != 0)
            r11_1 = *(r9_1 + result_3 + 0x18)
        
        int32_t rcx_3
        
        if ((*(r9_1 + result_3 + 0x64) & 0x400) == 0 || r11_1 == 0)
            rcx_3 = *(r9_1 + result_3 + 0x48) * *(r9_1 + result_3 + 0x44)
        else
            int32_t r14_1 = *(r9_1 + result_3 + 0x48)
            int32_t rsi_1 = 0
            int32_t rbp_1 = 0
            int32_t rdi_1 = 0
            int32_t i = 0
            
            if (r14_1 u>= 2)
                int32_t r15_1 = *(r9_1 + result_3 + 0x44)
                
                do
                    uint64_t r8_1 = zx.q(i * 2)
                    i += 2
                    result = zx.q((*(r11_1 + (zx.q((r8_1 + 3).d) << 2))
                        - *(r11_1 + (zx.q((r8_1 + 2).d) << 2)) + 1) * r15_1)
                    rsi_1 +=
                        (*(r11_1 + (zx.q((r8_1 + 1).d) << 2)) - *(r11_1 + (r8_1 << 2)) + 1) * r15_1
                    rbp_1 += result.d
                while (i u< r14_1 - 1)
                
                result_2 = result_1
            
            if (i u< r14_1)
                uint64_t rcx_1 = zx.q(i * 2)
                result = zx.q((rcx_1 + 1).d)
                rdi_1 = (*(r11_1 + (result << 2)) - *(r11_1 + (rcx_1 << 2)) + 1) *
                    *(r9_1 + result_3 + 0x44)
            
            rcx_3 = rsi_1 + rbp_1 + rdi_1
        
        if (rcx_3 s<= 0 && *(r9_1 + result_3 + 0x30) == 0)
            r12_1 += 1
            r9_1 += 0x68
            
            if (r12_1 s>= result_2)
                break
            
            continue
        
        int64_t r14_2 = arg_10
        *(r14_2 + 0x80)
        void* rbp_2 = *(*(arg1 + 8) + 8)
        void* rbx_1 = *(arg1 + 8)
        int64_t rdi_5 = sx.q(*(rbx_1 + 0x50))
        int32_t rax_6 = (rdi_5 + 1).d
        *(rbx_1 + 0x50) = rax_6
        
        if (rax_6 s> *(rbx_1 + 0x54))
            sub_140a05e50(rbx_1 + 0x48)
        
        int64_t rsi_2 = rdi_5 * 0xb0
        int64_t* rsi_3 = rsi_2 + *(rbx_1 + 0x48)
        
        if (rsi_2 == neg.q(*(rbx_1 + 0x48)))
            rsi_3 = nullptr
        else
            void* rax_7 = *(arg1 + 0x10)
            int32_t rbx_2
            
            if (rax_7 == 0)
                rbx_2 = -1
            else
                rbx_2 = *(rax_7 + 0x18)
            
            rdi_5 = *(arg1 + 8)
            sub_140819f30(rsi_3, r14_2)
            rsi_3[0x14] = rdi_5
            rsi_3[0x15] = -1
            rsi_3[0x12].d = rbx_2
        
        int32_t rbx_3 = *(*(*(arg1 + 8) + 0xf0) + 8)
        int32_t zmm6_1 = sub_1422ef530(rsi_3, rbp_2, rbx_3)
        
        if (sub_1422aea60(rsi_3, rbx_3) == 0 || (*(rbp_2 + 0x39) & 0x20) != 0)
            rdi_5.b = 0
        else
            rdi_5.b = 1
        
        int64_t* rcx_11 = *(r14_2 + 0x80)
        arg_10 = 0
        int64_t* rax_11 = (*(*rcx_11 + 0x40))(rcx_11, zx.q(rbx_3), &arg_10)
        int64_t rdx_10 = *rax_11
        char rax_12 = (*(rdx_10 + 0x290))(rax_11, rdx_10)
        int64_t* rcx_13 = *(r14_2 + 0x80)
        result_1 = 0
        int64_t r9_2 = *rcx_13
        int64_t* rax_13 = (*(r9_2 + 0x40))(rcx_13, zx.q(rbx_3), &result_1, r9_2)
        int64_t r8_5 = *rax_13
        int16_t* rax_14 = (*(r8_5 + 0x1e8))(rax_13, &arg_10, r8_5)
        void* r14_3 = *(arg1 + 8)
        int64_t rbp_3 = sx.q(*(r14_3 + 0x40))
        uint16_t r15_2
        r15_2.b = (*rax_14 u>> 0xa).b & 1
        int32_t rax_15 = (rbp_3 + 1).d
        *(r14_3 + 0x40) = rax_15
        
        if (rax_15 s> *(r14_3 + 0x44))
            sub_1405c4d20(r14_3 + 0x38)
        
        result = *(r14_3 + 0x38)
        int32_t* rcx_18 = result + rbp_3 * 0x14
        
        if (rcx_18 == 0)
            break
        
        int32_t var_58_1 = rbx_3
        return sub_141386130(rcx_18, rsi_3, zmm6_1, rdi_5.b, rax_12, r15_2.b)

return result

// 函数: sub_142a5a740
// 地址: 0x142a5a740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Format::VTable** arg_8 = arg1
int64_t var_48 = -2
struct icu_64::NumberFormat::icu_64::DecimalFormat::VTable** result = arg1
sub_142a57ec0(arg1, arg2)
*result = &icu_64::DecimalFormat::`vftable'{for `icu_64::NumberFormat'}
result[0x2e] = 0

if (*(arg2 + 0x170) != 0)
    int32_t* rax_1 = j_sub_142a7dd00(0x8a0)
    int32_t* arg_18 = rax_1
    void* const rax_2
    
    if (rax_1 == 0)
        rax_2 = nullptr
    else
        memset(rax_1, 0, 0x8a0)
        rax_2 = sub_142a5ace0(rax_1)
    
    result[0x2e] = rax_2
    
    if (rax_2 != 0)
        int32_t arg_10 = 0
        int32_t* rax_3 = j_sub_142a7dd00(0x1d8)
        int32_t* rdi_2 = rax_3
        arg_18 = rax_3
        
        if (rax_3 == 0)
            rdi_2 = nullptr
        else
            memset(rax_3, 0, 0x1d8)
            sub_142a5b060(rdi_2)
            *(rdi_2 + 0x1c8) = 0
            *(rdi_2 + 0x1d0) = 0
        
        void* rsi_1 = result[0x2e]
        
        if (arg_10 s<= 0)
            void* rbp_1 = *(rsi_1 + 0x10)
            
            if (rbp_1 != 0)
                sub_142ab72b0(rbp_1)
                sub_142a47920(rbp_1)
            
            *(rsi_1 + 0x10) = rdi_2
            
            if (rdi_2 == 0)
                arg_10 = 7
        else if (rdi_2 != 0)
            sub_142ab72b0(rdi_2)
            sub_142a47920(rdi_2)
        
        int32_t* rax_4 = j_sub_142a7dd00(0x2f8)
        arg_18 = rax_4
        int64_t* rdi_3
        
        if (rax_4 == 0)
            rdi_3 = nullptr
        else
            rdi_3 = sub_142a5ad40(rax_4, **(arg2 + 0x170))
        
        int64_t** r14_1 = result[0x2e]
        
        if (arg_10 s<= 0)
            int64_t* rsi_2 = *r14_1
            
            if (rsi_2 != 0)
                sub_142a5b3d0(rsi_2)
                sub_142a47920(rsi_2)
            
            *r14_1 = rdi_3
            
            if (rdi_3 == 0)
                arg_10 = 7
        else if (rdi_3 != 0)
            sub_142a5b3d0(rdi_3)
            sub_142a47920(rdi_3)
        
        int32_t* rax_6 = j_sub_142a7dd00(0xb00)
        arg_18 = rax_6
        struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rdi_4
        
        if (rax_6 == 0)
            rdi_4 = nullptr
        else
            rdi_4 = sub_142aabc60(rax_6, *(*(arg2 + 0x170) + 8))
        
        void* rsi_3 = result[0x2e]
        
        if (arg_10 s<= 0)
            int64_t* rcx_16 = *(rsi_3 + 8)
            
            if (rcx_16 != 0)
                (**rcx_16)(rcx_16, 1)
            
            *(rsi_3 + 8) = rdi_4
            
            if (rdi_4 == 0)
                arg_10 = 7
        else if (rdi_4 != 0)
            (*rdi_4)->__offset(0x0).q(rdi_4, 1)
        
        int32_t* rax_10 = j_sub_142a7dd00(0x2f8)
        arg_18 = rax_10
        char* rdi_5
        
        if (rax_10 == 0)
            rdi_5 = nullptr
        else
            rdi_5 = sub_142aba890(rax_10)
        
        void* rsi_4 = result[0x2e]
        
        if (arg_10 s<= 0)
            void* rbp_2 = *(rsi_4 + 0x888)
            
            if (rbp_2 != 0)
                sub_142a5b3d0(rbp_2)
                sub_142a47920(rbp_2)
            
            *(rsi_4 + 0x888) = rdi_5
            
            if (rdi_5 == 0)
                arg_10 = 7
        else if (rdi_5 != 0)
            sub_142a5b3d0(rdi_5)
            sub_142a47920(rdi_5)
        
        int64_t* rdi_6 = result[0x2e]
        
        if (rdi_6[2] == 0 || *rdi_6 == 0 || rdi_6[0x111] == 0 || rdi_6[1] == 0)
            if (rdi_6 != 0)
                sub_142a5b340(rdi_6)
                sub_142a47920(rdi_6)
            
            result[0x2e] = 0
        else
            sub_142a5f4f0(result, &arg_10)

return result

// 函数: sub_1413ae000
// 地址: 0x1413ae000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98

if ((*(arg1 + 0x120) & 8) != 0)
    sub_14150ec40(__iob_func(), arg1)
    *(arg1 + 0x120) &= 0xf7

int64_t* rcx_1 = *(arg1 + 8)
int32_t var_24 = 8
void* var_30 = nullptr
int32_t var_28 = 0
void var_70
(*(*rcx_1 + 0x140))(rcx_1, &var_70)
int32_t rdi = 0
void* rcx_2 = var_30

if (var_28 s> 0)
    int64_t rsi_1 = 0
    
    do
        void* rax_4 = &var_70
        
        if (rcx_2 != 0)
            rax_4 = rcx_2
        
        void* rbp_1 = *(rax_4 + rsi_1)
        
        if (rbp_1 != 0)
            sub_1422e1520(rbp_1, *(*(arg1 + 0xf0) + 8))
            void* rax_6 = *(arg1 + 0xf0)
            int32_t var_78 = 0
            
            if (sub_1422e5e60(rbp_1, *(rax_6 + 8), &var_78) != 0)
                sub_1414fe5b0(__iob_func(), &var_78, sub_1413a0820, arg1)
                *(arg1 + 0x120) |= 8
            
            rcx_2 = var_30
        
        rdi += 1
        rsi_1 += 8
    while (rdi s< var_28)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

__security_check_cookie(rax_1 ^ &var_98)
return zx.q(var_28)

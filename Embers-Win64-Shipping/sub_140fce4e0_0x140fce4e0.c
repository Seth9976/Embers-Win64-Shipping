// 函数: sub_140fce4e0
// 地址: 0x140fce4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t rdi = sx.q(*(arg1 + 0x40ec))

if (rdi.d s>= 0)
    void* rsi_1 = (rdi << 3) + 0x1420
    int32_t temp0_1
    
    do
        if (*(arg1 + rsi_1 + 0x27b0) != 0)
            *(arg1 + rsi_1 + 0x27b0) = 0
            int32_t rax_2 = *(arg1 + 0x40ec)
            
            if (rax_2 == rdi.d)
                do
                    int32_t temp1_1 = rax_2
                    rax_2 -= 1
                    *(arg1 + 0x40ec) = rax_2
                    
                    if (temp1_1 - 1 s< 0)
                        break
                while (*(arg1 + (sx.q(rax_2) << 3) + 0x3bd0) == 0)
            
            int64_t* rcx_1 = *(rsi_1 + arg1 + 0x170)
            int64_t var_98 = 0
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x10))(rcx_1)
                *(rsi_1 + arg1 + 0x170) = var_98
                int64_t* rcx_2 = *(arg1 + 0x188)
                (*(*rcx_2 + 0x218))(rcx_2, zx.q(rdi.d), 1, &var_98)
        
        rsi_1 -= 8
        temp0_1 = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (temp0_1 - 1 s>= 0)

memset(arg1 + 0x2520, 0, 0xe0)
void var_88
memset(&var_88, 0, 0x70)
int64_t* rcx_5 = *(arg1 + 0x188)
int64_t result = (*(*rcx_5 + 0x238))(rcx_5, 0, 0xe, &var_88)
__security_check_cookie(rax_1 ^ &var_b8)
return result

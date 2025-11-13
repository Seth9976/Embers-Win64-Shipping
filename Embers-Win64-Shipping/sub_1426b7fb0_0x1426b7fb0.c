// 函数: sub_1426b7fb0
// 地址: 0x1426b7fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg3)
int64_t* rdi_2 = r12 * 0x30 + arg1[0xb]
void* rax = rdi_2[1]

if (rax == 0)
    int64_t* rcx_3 = *rdi_2
    
    if (rcx_3 != 0)
        sub_1426b86b0(rcx_3, arg2)
else
    int32_t i = 0
    
    if (*(rax + 0x60) s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            char var_35 = var_35 & 0xfe
            int64_t var_40_1 = 0
            char var_36_1 = 2
            void* rax_2 = *arg2
            int64_t var_48 = *(rsi_1 + *(rax + 0x58))
            int16_t var_38_1 = *(rax_2 + 0x260)
            sub_1426a96e0(arg2, &var_48)
            rax = rdi_2[1]
            rsi_1 = &rsi_1[1]
            i += 1
        while (i s< *(rax + 0x60))

if ((arg1[0x11].b & 0x20) != 0)
    char result = (*(*arg1 + 0x2e0))(arg1, arg2, zx.q(r12.d), arg4)
    
    if (result == 0)
        return result

return sub_1426b7930(arg1, arg2, r12.d, arg4)

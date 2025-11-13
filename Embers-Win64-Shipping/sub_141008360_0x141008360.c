// 函数: sub_141008360
// 地址: 0x141008360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* r14 = arg1
int32_t r11 = arg4
uint64_t rsi = 0
int32_t r10 = *arg5
*arg5 = r10 + r11
void* rdx = arg1[0xa]
int32_t rax_3 = *(arg3 + 0x624)
void* rbp_1 = r14[3] + 0x1c0
int64_t var_f0 = zx.q(*(rdx + 0x38) * r10) + *(rdx + 0x40)
int64_t rbx_2 = zx.q(*(rdx + 0x38) * r10) + *(rdx + 0x48)
int64_t var_c8[0x10]

if (r11 != 0)
    do
        void* rcx_3
        
        if (rsi.d u>= rax_3)
            rcx_3 = *(arg3 + (rsi << 3) + 0x290)
        
        if (rsi.d u< rax_3 || rcx_3 == 0)
            var_c8[rsi] = *(r14[6] + 8)
        else
            var_c8[rsi] = *(rcx_3 + 0x28)
            void* rdi_1 = *(*(rcx_3 + 0x40) + 0x10)
            int32_t rax_6 = *(rcx_3 + 0x64)
            
            if (rax_6 == 1)
                sub_14105c1a0(rdi_1, rbp_1)
                void* rax_10 = sub_141023fa0(rbp_1, rdi_1)
                int32_t rax_11 = sub_1410626f0(rax_10, 0)
                
                if (rax_11 == 0xffffffff)
                    void* rdi_2 = *(rbp_1 + 8)
                    int64_t var_d8_1 = 8
                    int64_t r14_1 = sx.q(*(rdi_2 + 0xc0))
                    int32_t rax_12 = (r14_1 + 1).d
                    *(rdi_2 + 0xc0) = rax_12
                    
                    if (rax_12 s> *(rdi_2 + 0xc4))
                        sub_1405a4f90(rdi_2 + 0xb8)
                    
                    *(*(rdi_2 + 0xb8) + r14_1 * 0x10) = rdi_1.o
                    sub_141069360(rax_10, 0, 8)
                    r14 = arg1
                else if (rax_11 != 8)
                    sub_1410129f0(rbp_1, rdi_1, rax_11, 8, 0)
                    sub_141069360(rax_10, 0, 8)
            else if (rax_6 == 4)
                sub_141037220(rbp_1, rdi_1, 8, *(rcx_3 + 0x68))
            else if (rax_6 == 5 || rax_6 == 8)
                sub_141036f20(rbp_1, rdi_1, 8, rcx_3 + 0x50)
            
            void* rdx_7 = *(arg3 + (rsi << 3) + 0x590)
            
            if (data_1439b4ad4 != 0 && rdx_7 != 0 && *(rdx_7 + 8) != 0)
                sub_141026da0(*(*(rbp_1 + 8) + 0x118), rdx_7)
        
        rsi = zx.q(rsi.d + 1)
    while (rsi.d u< arg4)

int32_t r11_1 = arg4
int32_t var_110 = 0
int64_t var_118 = 0
int64_t (* var_120)[0x10] = &var_c8
*(arg3 + 0xa) &= 0xffff << r11_1.b
int64_t* rcx_20 = *(*(*r14 + 0x20) + 0x18)
(*(*rcx_20 + 0xb8))(rcx_20, 1, &var_f0, &arg4, r11_1, var_120, var_118, var_110)
int64_t* rcx_21 = *(*(rbp_1 + 8) + 0x30)
int64_t result = (*(*rcx_21 + 0xf8))(rcx_21, zx.q(*(arg2 + 0x28)), rbx_2)
*(arg3 + 0xa) |= 0xffff << arg4.b
__security_check_cookie(rax_1 ^ &var_148)
return result

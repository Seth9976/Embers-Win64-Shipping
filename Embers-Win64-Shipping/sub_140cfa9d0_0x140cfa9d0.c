// 函数: sub_140cfa9d0
// 地址: 0x140cfa9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int128_t zmm0 = *(arg1 + 0x80)
int32_t r12 = *(arg1 + 0x90)
int128_t var_50 = zmm0
var_50 = zmm0
int64_t* var_60 = *(arg1 + 0x78)
int32_t i = *(arg3 + 8) - *(arg3 + 0x34)
void* result = sub_140cfba20(&var_60, i)

if (i != 0)
    int32_t rbx_1 = 0
    int32_t rbp_1 = 0
    int32_t rdi_1 = 1
    
    do
        if (rbx_1 s>= 0 && rbx_1 s< *(arg3 + 0x28))
            void* rax_3 = *(arg3 + 0x20)
            void* rdx_1 = arg3 + 0x10
            
            if (rax_3 != 0)
                rdx_1 = rax_3
            
            int32_t rax_4 = rbx_1
            
            if (rbx_1 s< 0)
                rax_4 = rbx_1 + 0x1f
            
            if ((*(rdx_1 + (sx.q(rax_4 s>> 5) << 2)) & rdi_1) != 0)
                int32_t rax_6 = sub_140cf1c20(arg2, &var_50:0xc)
                int64_t* r9_1 = var_60
                int64_t r11_1 = r9_1[8]
                int64_t r10_2 = sx.q(r12 * rax_6) + *arg2
                uint8_t r8_1 = (r11_1 u>> 9).b & 1
                
                if (r8_1 != 0)
                    memset(r10_2, 0, sx.q(var_50:8.d))
                else if (not(test_bit(r11_1, 9)))
                    (*(*r9_1 + 0xf0))(r9_1, sx.q(*(r9_1 + 0x4c)) + r10_2, r8_1)
                else
                    memset(sx.q(*(r9_1 + 0x4c)) + r10_2, 0, sx.q(*(r9_1 + 0x3c) * r9_1[7].d))
                
                int64_t* rcx_9 = *(arg1 + 0x78)
                int64_t r8_4 = sx.q(*(rcx_9 + 0x4c))
                int64_t rdx_8 = sx.q(rbp_1) + r8_4 + *arg3
                int64_t r10_5 = sx.q(r12 * rax_6) + *arg2 + r8_4
                
                if (r10_5 != rdx_8)
                    if (not(test_bit(zx.q(rcx_9[8].d), 0x1e)))
                        (*(*rcx_9 + 0xb0))(rcx_9, r10_5, rdx_8, zx.q(rcx_9[7].d))
                    else
                        memcpy(r10_5, rdx_8, *(rcx_9 + 0x3c) * rcx_9[7].d)
                
                i -= 1
        
        rbx_1 += 1
        rdi_1 = rol.d(rdi_1, 1)
        rbp_1 += r12
    while (i != 0)
    
    int64_t** var_78 = &var_60
    int64_t*** var_68_1 = &var_78
    int64_t (* var_70)(int64_t* arg1, int64_t* arg2) = sub_140cf2f70
    result = sub_140d0c0d0(arg2, &var_50, &var_70)

__security_check_cookie(rax_1 ^ &var_98)
return result

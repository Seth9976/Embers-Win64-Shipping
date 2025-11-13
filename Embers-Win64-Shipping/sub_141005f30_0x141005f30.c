// 函数: sub_141005f30
// 地址: 0x141005f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int32_t r8 = arg4
void* rdi_1 = arg1[3] + 0x1c0
uint64_t rbx = 0
int32_t r15 = *arg5
*arg5 = r15 + r8
void* rdx = arg1[0xa]
int64_t var_258 = zx.q(*(rdx + 0x38) * r15) + *(rdx + 0x40)
int64_t var_248[0x40]

if (r8 != 0)
    do
        void* rax_3 = *(arg3 + (rbx << 3) + 0x430)
        
        if (rax_3 == 0)
            var_248[rbx] = *(arg1[4] + 8)
        else
            var_248[rbx] = *(rax_3 + 0x28)
            void* rdx_1
            
            if (*(rax_3 + 0xa0) != 0 || *(rax_3 + 0xa1) != 0)
                rdx_1 = *(*(rax_3 + 0x40) + 0x10)
                
                if (rdx_1 != 0 && *(rdx_1 + 0xfc) != 0
                        && (*(rax_3 + 0x64) != 1 || *(rdx_1 + 0x100) == 1))
                    sub_141036f20(rdi_1, rdx_1, 0xe0, rax_3 + 0x50)
            else if (*(rax_3 + 0xa2) == 0)
                rdx_1 = *(*(rax_3 + 0x40) + 0x10)
                
                if (rdx_1 != 0 && *(rdx_1 + 0xfc) != 0
                        && (*(rax_3 + 0x64) != 1 || *(rdx_1 + 0x100) == 1))
                    sub_141036f20(rdi_1, rdx_1, 0xc0, rax_3 + 0x50)
            else
                rdx_1 = *(*(rax_3 + 0x40) + 0x10)
                
                if (rdx_1 != 0 && *(rdx_1 + 0xfc) != 0
                        && (*(rax_3 + 0x64) != 1 || *(rdx_1 + 0x100) == 1))
                    sub_141036f20(rdi_1, rdx_1, *(arg1[3] + 0x3b7c), rax_3 + 0x50)
            void* rdx_2 = *(arg3 + (rbx << 3) + 0x1030)
            
            if (data_1439b4ad4 != 0 && rdx_2 != 0 && *(rdx_2 + 8) != 0)
                sub_141026da0(*(*(rdi_1 + 8) + 0x118), rdx_2)
        
        rbx = zx.q(rbx.d + 1)
    while (rbx.d u< arg4)

int32_t r8_2 = arg4
int32_t var_260 = 0
int64_t var_268 = 0
int64_t (* var_270)[0x40] = &var_248
*(arg3 + 0x10) &= not.q((1 << r8_2.b) - 1)
int64_t* rcx_14 = *(*(*arg1 + 0x20) + 0x18)
(*(*rcx_14 + 0xb8))(rcx_14, 1, &var_258, &arg4, r8_2, var_270, var_268, var_260)
void* rcx_15 = arg1[0xa]
int64_t* rcx_16 = *(*(rdi_1 + 8) + 0x30)
int64_t result = (*(*rcx_16 + 0x100))(rcx_16, zx.q(*(arg2 + 0x20)), 
    zx.q(*(rcx_15 + 0x38) * r15) + *(rcx_15 + 0x48))
*(arg3 + 0x10) |= not.q((1 << arg4.b) - 1)
__security_check_cookie(rax_1 ^ &var_298)
return result

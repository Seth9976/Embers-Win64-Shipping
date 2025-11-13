// 函数: sub_1403edd80
// 地址: 0x1403edd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

void var_98
void* var_38_1 = __security_cookie ^ &var_98
int64_t rdi_1 = 0
int32_t* rbx_1 = arg2
uint64_t i_1 = zx.q(arg3)
uint64_t i

do
    void var_78
    
    if (rdi_1 s> 0)
        memcpy(&var_78, arg1, (rdi_1 << 2).d)
    
    int64_t rcx_1 = 0
    int128_t zmm0
    
    if (rdi_1 s>= 4)
        void* rax = arg1 + 8
        void* rdx_2 = &var_78 - arg2 - 8 + rbx_1
        int64_t j_1 = ((rdi_1 - 4) u>> 2) + 1
        rcx_1 = j_1 << 2
        int64_t j
        
        do
            zmm0 = *(rdx_2 + 4)
            float zmm1 = *rdx_2
            rax += 0x10
            rdx_2 -= 0x10
            zmm0.d = zmm0.d f* *rbx_1
            zmm0.d = zmm0.d f+ *(rax - 0x18)
            *(rax - 0x18) = zmm0.d
            zmm0 = *(rdx_2 + 0xc)
            *(rax - 0x14) = zmm1 f* *rbx_1 f+ *(rax - 0x14)
            zmm1 = *(rdx_2 + 8)
            zmm0.d = zmm0.d f* *rbx_1
            zmm0.d = zmm0.d f+ *(rax - 0x10)
            *(rax - 0x10) = zmm0.d
            *(rax - 0xc) = zmm1 f* *rbx_1 f+ *(rax - 0xc)
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    if (rcx_1 s< rdi_1)
        void* rdx_3 = &var_98 + ((rdi_1 - rcx_1) << 2) + 0x1c
        
        do
            zmm0 = *rdx_3
            rcx_1 += 1
            rdx_3 -= 4
            zmm0.d = zmm0.d f* *rbx_1
            zmm0.d = zmm0.d f+ *(arg1 + (rcx_1 << 2) - 4)
            *(arg1 + (rcx_1 << 2) - 4) = zmm0.d
        while (rcx_1 s< rdi_1)
    
    zmm0 = *rbx_1
    rbx_1 = &rbx_1[1]
    rdi_1 += 1
    *(arg1 - arg2 + rbx_1 - 4) = (zmm0 ^ 0x80000000).d
    i = i_1
    i_1 -= 1
while (i != 1)
__security_check_cookie(var_38_1 ^ &var_98)

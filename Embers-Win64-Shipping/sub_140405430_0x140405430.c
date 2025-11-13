// 函数: sub_140405430
// 地址: 0x140405430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x20)
int64_t r12 = sx.q(arg6)
int64_t r10 = sx.q(arg5)
uint64_t r13 = 0
int64_t rsi = arg2
void* rbp = arg1
int32_t rcx = arg8
int64_t r15 = arg4
int64_t rbx = arg3
uint64_t var_78 = 0
int64_t r9 = 0
int32_t r11_1 = sx.d(*(rax + (r10 << 1))) * rcx
int32_t rdx_1 = *(arg1 + 0x30) * rcx
int32_t rdi_1 = sx.d(*(rax + (r12 << 1))) * rcx
arg6 = rdi_1
int32_t var_88 = rdx_1
int64_t var_70 = 0
int32_t var_80 = r11_1
int64_t r14 = sx.q(r11_1)
int32_t r8 = 0
int32_t var_84 = 0
int64_t result

do
    int64_t rax_1 = sx.q(r8)
    void* rbx_1 = rbx + (rax_1 << 2)
    result = rax_1 + r14
    void* rsi_1 = rsi + (result << 2)
    
    if (r11_1 s> 0)
        void* rdi_2 = rbx_1
        result = 0
        rbx_1 += zx.q(r11_1) << 2
        rdx_1 = var_88
        __builtin_memset(rdi_2, 0, zx.q(r11_1) << 2)
        rcx = arg8
        rdi_1 = arg6
    
    int64_t r14_1 = r10
    
    if (r10 s< r12)
        int32_t* r15_1 = r15 + ((sx.q(*(rbp + 8)) * r9 + r10) << 2)
        
        do
            int32_t rdi_4 = sx.d(*(rax + (r14_1 << 1))) * rcx
            int32_t rbp_2 = sx.d(*(rax + (r14_1 << 1) + 2)) * rcx
            double zmm0
            zmm0.d = (*(&data_143700670 + (r14_1 << 2))).d f+ *r15_1
            zmm0, result = exp(_mm_cvtps_pd(zmm0) f* 0x3fe62e42fefa39ef)
            int64_t zmm1
            zmm1.d = fconvert.s(zmm0)
            
            do
                rdi_4 += 1
                rbx_1 += 4
                rsi_1 += 4
                zmm0.d = zmm1.d f* *(rsi_1 - 4)
                *(rbx_1 - 4) = zmm0.d
            while (rdi_4 s< rbp_2)
            
            rcx = arg8
            r14_1 += 1
            r15_1 = &r15_1[1]
        while (r14_1 s< r12)
        
        r13 = var_78
        rdx_1 = var_88
        r8 = var_84
        r9 = var_70
        r10 = sx.q(arg5)
        rdi_1 = arg6
        r11_1 = var_80
        rbp = arg1
        r15 = arg4
    
    if (rdi_1 s< rdx_1)
        result = 0
        __builtin_memset(rbx_1, 0, zx.q(rdx_1 - rdi_1) << 2)
        rdi_1 = arg6
    
    rcx = arg8
    rbx = arg3
    rsi = arg2
    r13 = zx.q(r13.d + 1)
    r8 += rdx_1
    r9 += 1
    var_78 = r13
    var_84 = r8
    var_70 = r9
    r14 = sx.q(r11_1)
while (r13.d s< arg7)

return result

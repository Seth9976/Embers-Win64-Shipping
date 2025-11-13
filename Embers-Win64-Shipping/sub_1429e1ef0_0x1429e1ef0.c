// 函数: sub_1429e1ef0
// 地址: 0x1429e1ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4.d
int32_t r10 = arg3
void* r8 = arg1
void* rsi = arg2
char* rcx = **(arg2 + 0x1a8)
int64_t rax_2 = (&data_143cc7150)[zx.q(rcx[7])]
char rax_3 = *rcx
void* const r12

if (*(r8 + 0x4818) == 0)
    r12 = nullptr
else
    r12 = *(r8 + 0x4828)

void* const var_90 = r12
void* rdx = &rcx[8]
void* rdi = -0xffffffffffffffae
void* var_60 = rdx
int32_t rax_4
rax_4.b = rcx[9] s> 0
void* var_88 = -0xffffffffffffffae
int32_t i = 0
void* var_78 = &rcx[0xc]
void* result_1 = rsi + 0x1e8
void* result

do
    void* rbx_3 = sx.q(sx.d(*rdx) - 1) * 0x70 + 0x450 + r8
    void* r14_2 = *(r8 + 0x47e8) + sx.q(*rbx_3) * 0xd0 + 0x40
    
    if (*(rbx_3 + 0x10) == 0xffffffff || *(rbx_3 + 0x14) == 0xffffffff)
        sub_1429da010(*(rsi + 0x260), 5, "Reference frame has invalid dimensions", arg4)
        arg4 = zx.q(arg_20)
        r10 = arg3
    
    int32_t rax_12 = *(rbx_3 + 0x10)
    int32_t rcx_4
    
    if (rax_12 != 0xffffffff)
        rcx_4 = *(rbx_3 + 0x14)
    
    int32_t rbp_1
    
    if (rax_12 == 0xffffffff || rcx_4 == 0xffffffff || (rax_12 == 0x4000 && rcx_4 == rax_12))
        rbp_1 = 0
    else
        rbp_1 = 1
    
    void* rax_13 = nullptr
    
    if (rbp_1 != 0)
        rax_13 = rbx_3 + 0x10
    
    sub_142a28b70(rsi, i, *(rbx_3 + 8), zx.q(r10), arg4.d, rax_13)
    result = result_1
    *result = rbx_3
    void* var_120_1
    uint32_t k_1
    
    if (rax_3 u>= 3)
        void* rbx_5 = rsi + 0x72
        int32_t j = 0
        k_1 = *var_78
        
        do
            uint32_t rdx_14 = zx.d(*rbx_5) << 2
            uint32_t r9_4 = zx.d(*(rbx_5 - 2)) << 2
            var_120_1.d = 0
            result = sub_1429e1930(r12, rsi, j, r9_4, rdx_14, 0, 0, r9_4, rdx_14, arg_20 << 3, 
                arg3 << 3, rax_2, rbx_3 + 0x10, var_88 + rbx_5, rbx_5 - 0x62, &k_1, r14_2, rbp_1, i)
            j += 1
            rbx_5 -= -0x80
        while (j s< 3)
    else
        int32_t j_1 = 0
        void* r14_3 = rsi + 0x70
        
        do
            uint32_t k = zx.d(*(r14_3 + 2))
            int32_t rsi_1 = 0
            uint64_t rbp_2 = zx.q(*r14_3)
            uint64_t rdi_1 = 0
            k_1 = k
            
            if (k != 0)
                do
                    uint64_t rbx_4 = 0
                    
                    if (rbp_2.d != 0)
                        do
                            int32_t rax_14 = sub_142a287d0(r14_3 - 0x70, rcx, i, rsi_1)
                            rsi_1 += 1
                            int32_t var_9c = rax_14
                            var_120_1.d = (rbx_4 << 2).d
                            result = sub_1429e1930(var_90, arg2, j_1, (rbp_2 << 2).d, k_1 << 2, 
                                var_120_1.d, (rdi_1 << 2).d, 4, 4, arg_20 << 3, arg3 << 3, rax_2, 
                                rbx_3 + 0x10, rdi + 2 + r14_3, r14_3 - 0x60, &var_9c, r14_2, rbp_1, 
                                i)
                            rbx_4 = zx.q(rbx_4.d + 1)
                        while (rbx_4.d s< rbp_2.d)
                        
                        k = k_1
                    
                    rdi_1 = zx.q(rdi_1.d + 1)
                while (rdi_1.d s< k)
            
            j_1 += 1
            r14_3 -= -0x80
        while (j_1 s< 3)
        
        rsi = arg2
        r12 = var_90
    i += 1
    rdi = var_88 + 0x10
    result_1 += 8
    rdx = var_60 + 1
    var_78 += 4
    r8 = arg1
    arg4 = zx.q(arg_20)
    r10 = arg3
    var_88 = rdi
    var_60 = rdx
while (i s< rax_4 + 1)

return result

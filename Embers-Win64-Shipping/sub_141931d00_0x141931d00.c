// 函数: sub_141931d00
// 地址: 0x141931d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

int64_t arg_20 = arg4
void* r14_1 = arg2
void* rdx = arg1
int64_t rbp_1 = 0
int64_t r12_1 = sx.q(arg5)
int64_t rsi_1 = sx.q(arg3)
int64_t var_58_1 = rsi_1
int32_t* rdi_2 = r14_1 + ((r12_1 + 0xb0) << 2)

do
    void* rax = *(arg4 + (rbp_1 << 3))
    int32_t rcx = 0x10000
    int32_t arg_18 = 0x10000
    uint64_t var_68
    int32_t rbx_1
    
    if (rax == 0)
        if (*(rdx + 0x300) == 0)
            int64_t rax_1 = sub_140a82f30(0x10000, 0)
            memset(rax_1, 0, 0x10000)
            int64_t rcx_2 = sx.q(data_1439c74cc)
            int32_t r15_2
            
            if (0x400 - rcx_2.d s<= 1)
                memcpy(rdx + 0x300, &data_143efcd00 + (rcx_2 << 2), (0x400 - rcx_2.d) << 2)
                data_143effcf0(0x400, &data_143efcd00)
                r15_2 = 1 - (0x400 - rcx_2.d)
                memcpy(&(rdx + 0x300)[sx.q(0x400 - rcx_2.d)], &data_143efcd00, r15_2 << 2)
            else
                *(rdx + 0x300) = *(&data_143efcd00 + (rcx_2 << 2))
                r15_2 = data_1439c74cc + 1
            
            r14_1 = arg2
            data_1439c74cc = r15_2
            int32_t rbx_3 = *(rdx + 0x300)
            
            if (*(r14_1 + 0x42c) != rbx_3)
                data_143effcd8(0x8a11, zx.q(rbx_3))
                *(r14_1 + 0x42c) = rbx_3
            
            data_143effd00(0x8a11, 0x10000, rax_1, 0x88e4, var_68)
            sub_140a74f90(rax_1)
            rcx = 0x10000
        
        rbx_1 = *(rdx + 0x300)
        rsi_1 = var_58_1
    else
        rbx_1 = *(rax + 0x28)
        rcx = *(rax + 0x20)
    
    if (arg6 != 0)
    label_141931ec5:
        var_68 = zx.q(rcx)
        data_143f00208(0x8a11, zx.q(r12_1.d), zx.q(rbx_1), 0, var_68)
        rdi_2[-0x48] = rbx_1
        *rdi_2 = 0
        *(r14_1 + 0x42c) = rbx_1
    else if (rbx_1 == 0)
        if (*rdi_2 != 0)
            goto label_141931ec5
    else if (rdi_2[-0x48] != rbx_1 || *rdi_2 != 0)
        goto label_141931ec5
    
    arg4 = arg_20
    r12_1 = zx.q(r12_1.d + 1)
    rdx = arg1
    rbp_1 += 1
    rdi_2 = &rdi_2[1]
while (rbp_1 s< rsi_1)

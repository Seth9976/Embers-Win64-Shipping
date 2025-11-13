// 函数: sub_140de69e0
// 地址: 0x140de69e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
void* rbx = *arg2

if (*(rbx + 0x18) s> 0)
    void* rax = *(rbx + 8)
    int64_t r9_1
    
    if (rax == 0)
        r9_1 = 0
    else
        r9_1 = *(rax + 0x10)
    
    char rcx = *(arg2 + 0x4d)
    char rax_1 = *(arg2 + 0x4f)
    int32_t rdx = arg2[6].d
    int128_t var_28
    __builtin_memset(&var_28, 0, 0x20)
    int128_t* rax_2 = sub_140e0db30(arg1, rdx, &var_28, r9_1, 2, 5, rcx, rax_1, arg2)
    *(rax_2 + 0x7d) &= 0xfe
    int64_t* rdi_1 = rax_2[4].q
    rax_2[7].d = *(rbx + 0x3c)
    *(rax_2 + 0x74) = *(rbx + 0x38)
    *(rax_2 + 0x38) = *(rbx + 0x30)
    int64_t rbp_1 = sx.q(*(rbx + 0x18))
    
    if (rbp_1.d != 0)
        int32_t rcx_5 = rdi_1[1].d
        int32_t rdx_1 = rcx_5 + rbp_1.d
        
        if (rdx_1 s> *(rdi_1 + 0xc))
            sub_1405c5660(rdi_1, rdx_1)
            rcx_5 = rdi_1[1].d
        
        memcpy(*rdi_1 + sx.q(rcx_5) * 0x28, *(rbx + 0x10), (rbp_1 * 0x28).d)
        rdi_1[1].d += rbp_1.d
    
    *(rax_2 + 0x64) += *(rbx + 0x18)
    int64_t rbp_2 = sx.q(*(rbx + 0x28))
    uint64_t* rdi_2 = *(rax_2 + 0x48)
    
    if (rbp_2.d != 0)
        int32_t rax_6 = rdi_2[1].d
        int32_t rdx_3 = rax_6 + rbp_2.d
        
        if (rdx_3 s> *(rdi_2 + 0xc))
            sub_1405dadb0(rdi_2, rdx_3)
            rax_6 = rdi_2[1].d
        
        memcpy(*rdi_2 + (sx.q(rax_6) << 2), *(rbx + 0x20), (rbp_2 << 2).d)
        rdi_2[1].d += rbp_2.d
    
    result = *(rbx + 0x28)
    *(rax_2 + 0x68) += result

return result

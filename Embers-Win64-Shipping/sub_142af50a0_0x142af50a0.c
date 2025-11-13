// 函数: sub_142af50a0
// 地址: 0x142af50a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a7db20(0x11, sub_142af52a0)
int32_t* var_10 = arg1
void* rax = sub_142a7f8c0(nullptr, "icu", "cnvalias", sub_142af5260, nullptr)

if (*arg1 s<= 0)
    int32_t* rax_1 = sub_142a95f50(rax)
    int32_t* rdx_1 = rax_1
    uint64_t r8_1 = zx.q(*rax_1)
    
    if (r8_1.d u< 8)
        *arg1 = 3
        return sub_142a95ec0(rax) __tailcall
    
    int32_t r11_2 = rax_1[1]
    data_1440168e8.d = r11_2
    data_144016910 = rax
    int32_t rbx_1 = rax_1[2]
    data_1440168ec = rbx_1
    int32_t rdi_1 = rax_1[3]
    data_1440168f0 = rdi_1
    int32_t rsi_1 = rax_1[4]
    data_1440168f4 = rsi_1
    int32_t rbp_1 = rax_1[5]
    data_1440168f8 = rbp_1
    int32_t r14_1 = rax_1[6]
    data_1440168fc = r14_1
    int32_t r9_2 = rax_1[7]
    data_144016900 = r9_2
    int32_t r10_2 = rax_1[8]
    data_144016904 = r10_2
    
    if (r8_1.d u> 8)
        rax_1 = zx.q(rax_1[9])
        data_144016908 = rax_1.d
    
    uint64_t r8_3 = zx.q(((r8_1 << 1) + 2).d)
    uint64_t r8_4 = zx.q(r8_3.d + r11_2)
    data_1440168a0 = rdx_1 + (r8_3 << 1)
    uint64_t r8_5 = zx.q(r8_4.d + rbx_1)
    data_1440168a8 = rdx_1 + (r8_4 << 1)
    uint64_t r8_6 = zx.q(r8_5.d + rdi_1)
    data_1440168b0 = rdx_1 + (r8_5 << 1)
    uint64_t r8_7 = zx.q(r8_6.d + rsi_1)
    data_1440168b8 = rdx_1 + (r8_6 << 1)
    uint64_t r8_8 = zx.q(r8_7.d + rbp_1)
    data_1440168c0 = rdx_1 + (r8_7 << 1)
    uint64_t r8_9 = zx.q(r8_8.d + r14_1)
    data_1440168c8 = rdx_1 + (r8_8 << 1)
    void* rcx_9
    
    if (r9_2 != 0)
        rcx_9 = rdx_1 + (r8_9 << 1)
    
    if (r9_2 == 0 || *(rdx_1 + (r8_9 << 1)) u>= 2)
        rcx_9 = &data_14365d1e0
    
    uint64_t r8_10 = zx.q(r8_9.d + r9_2)
    data_1440168d0 = rcx_9
    void* r9_3 = rdx_1 + (r8_10 << 1)
    data_1440168d8 = r9_3
    
    if (*rcx_9 == 0)
        data_1440168e0 = r9_3
        return rax_1
    
    rax = rdx_1 + (zx.q(r10_2 + r8_10.d) << 1)
    data_1440168e0 = rax

return rax

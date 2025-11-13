// 函数: sub_1425ccc20
// 地址: 0x1425ccc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg1[1].d)
int32_t i_1 = arg2
int32_t rax = r14.d + arg2
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_140dbc660(arg1)

void* rdi_2 = r14 * 0x90 + *arg1

if (i_1 != 0)
    void* rbx_1 = rdi_2 + 0x20
    int32_t i
    
    do
        sub_140b214c0(rdi_2)
        *(rbx_1 - 0x10) = 0
        *(rbx_1 - 8) = 0
        *rbx_1 = 0
        sub_1405947f0(rbx_1 - 8, 0xc)
        int32_t rax_1 = *rbx_1 + 0xc
        *rbx_1 = rax_1
        
        if (rax_1 s> *(rbx_1 + 4))
            sub_140594770(rbx_1 - 8)
        
        sub_1405a7220(*(rbx_1 - 8), 0xc, "Test String", 0xc, 0x3f)
        int64_t var_28 = 0
        int32_t var_20_1 = 0
        sub_1405947f0(&var_28, 0xa)
        int32_t rax_2 = var_20_1 + 0xa
        var_20_1 = rax_2
        
        if (rax_2 s> 0)
            sub_140594770(&var_28)
        
        sub_1405a7220(var_28, 0xa, "Test Text", 0xa, 0x3f)
        sub_140aae2f0(rbx_1 + 8, &var_28)
        int64_t rcx_8 = var_28
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        *(rbx_1 + 0x20) = 0x3f800000
        rdi_2 += 0x90
        *(rbx_1 + 0x24) = 0x40000000
        *(rbx_1 + 0x28) = 0x40400000
        __builtin_memcpy(rbx_1 + 0x30, 
            "\x00\x00\x80\x40\x00\x00\xa0\x40\x00\x00\xc0\x40\x00\x00\xe0\x40\x00\x00\x80\x45\x00\x00\x"
        "00\x46\x00\x00\x80\x46", 
            0x1c)
        __builtin_memcpy(rbx_1 + 0x50, 
            "\x00\x00\x80\x3f\x00\x00\x00\x40\x00\x00\x40\x40\x1f\x85\xeb\x3e\x3c\xff\x03\xff", 
            0x14)
        rbx_1 += 0x90
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(r14.d)

// 函数: sub_142c59970
// 地址: 0x142c59970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0

if (sub_142c71730(arg1[0xd0]) != 0)
    void* rbx_1 = arg1[0xd0]
    int32_t rax_1
    rax_1, arg3 = sub_142c6a110(arg1, *(rbx_1 + 0x34), *(rbx_1 + 0x38), arg3)
    *(rbx_1 + 0x38) = 0
    rsi = rax_1

arg1[0xcf].b = 1

if (arg2 != 0)
    *arg2 = arg1[0xce]

if (arg1[0xce] == 0)
    char rbx_2 = *(arg1 + 0x3f6)
    arg1[0xcc]
    char const* const r8_2 = "proxy"
    
    if (rbx_2 == 0)
        r8_2 = "host"
    
    int32_t rax_3 = sub_142c64760(*arg1, "Could not resolve %s: %s", r8_2, arg3)
    rsi = sbb.d(rax_3, rax_3, rbx_2 != 0) + 6

sub_142c59a50(&arg1[0xcc])

if (arg1[0xce] == 0)
    sub_142c65340(arg1, 1)

return zx.q(rsi)

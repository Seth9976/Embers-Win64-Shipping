// 函数: sub_140afa9b0
// 地址: 0x140afa9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar32 const (* rax)[0x3]
int64_t r8
rax, r8 = sub_140aed2b0(arg3)
int64_t* rcx_1 = data_143db18d0

if (rcx_1 == 0)
    sub_140a53c40()
    rcx_1 = data_143db18d0

int64_t r9 = *rcx_1
r8.b = 1
int64_t* rax_1 = (*(r9 + 0xb0))(rcx_1, arg2, r8, r9)

if (rax_1 == 0)
    int64_t* rcx_6 = data_143db18d0
    
    if (rcx_6 == 0)
        sub_140a53c40()
        rcx_6 = data_143db18d0
    
    return (*(*rcx_6 + 8))(rcx_6, arg2, rax, u"IAmNoRealVariable", arg4 | 0x18)

int64_t rdx_1 = *rax_1
uint8_t result = (*(rdx_1 + 0x18))(rax_1, rdx_1)
uint8_t rdi_1 = result & 1

if (arg4 != 0x1000000)
label_140afaa3c:
    
    if (rdi_1 == 0 || arg5 != 0)
        return (*(*rax_1 + 0x80))(rax_1, rax, zx.q(arg4))
else
    int64_t rdx_2 = *rax_1
    result = ((*(rdx_2 + 0x18))(rax_1, rdx_2) u>> 6).b
    
    if ((result & 1) != 0)
        goto label_140afaa3c
    
    result = ((*(*rax_1 + 0x18))(rax_1) u>> 7).b
    
    if ((result & 1) != 0)
        goto label_140afaa3c

return result

// 函数: sub_140f4adb0
// 地址: 0x140f4adb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x5b].d
int32_t rbp_2 = *(arg2 + 0x60) + 1 + *(arg2 + 0x64)

if (rbp_2 s> rax)
    int32_t rbp_3 = rbp_2 - rax
    int64_t r14_1 = sx.q(rax)
    int32_t rax_1 = r14_1.d + rbp_3
    arg1[0x5b].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x2dc))
        sub_1406105e0(&arg1[0x5a])
    
    memset(arg1[0x5a] + (r14_1 << 2), 0, sx.q(rbp_3) << 2)

int32_t rax_3 = arg1[0x5d].d
int32_t rdi_3 = *(arg2 + 0x68) + 1 + *(arg2 + 0x6c)

if (rdi_3 s> rax_3)
    int32_t rdi_4 = rdi_3 - rax_3
    int64_t r14_2 = sx.q(rax_3)
    int32_t rax_4 = r14_2.d + rdi_4
    arg1[0x5d].d = rax_4
    
    if (rax_4 s> *(arg1 + 0x2ec))
        sub_1406105e0(&arg1[0x5c])
    
    memset(arg1[0x5c] + (r14_2 << 2), 0, sx.q(rdi_4) << 2)

if (arg3 != 0)
    char arg_18 = 0
    sub_140f1c240(arg1[0x57], arg1[0x58].d)
    int64_t* rcx_6 = arg1[0x56]
    
    if (rcx_6 != 0)
        arg2.b = 8
        sub_140e19ef0(rcx_6, arg2.b)

arg2.b = 1
return sub_140e19ef0(arg1, arg2.b) __tailcall

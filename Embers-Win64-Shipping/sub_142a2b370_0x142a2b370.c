// 函数: sub_142a2b370
// 地址: 0x142a2b370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = **(arg2 + 0x1a8)
char rax_3 = sub_142a2b5e0(arg1 + 0x270, arg2, arg3, arg4, arg5, arg6, arg7)
rdi[4] = rax_3
char rax_4 = sub_142a2ca10(arg1 + 0x270, arg2, sx.d(rax_3), arg5)
int32_t r8_1 = sx.d(rdi[4])
rdi[3] = rax_4
int32_t rax_5 = sub_142a2be90(arg1 + 0x270, arg2, r8_1, arg5)
int32_t r8_2

if (rdi[3] == 0 || rax_5 == 0)
    r8_2 = 1
else
    r8_2 = 0

int64_t r9_2 = sx.q(*(arg1 + 0x5dc))
uint64_t r10 = zx.q(***(arg2 + 0x1a8))
char rdx_2 = *(r10 + 0x1436046d0)
char rcx_5

if (r8_2 == 0 || r9_2.d != 4 || r10.b u< 3)
    rcx_5 = *(r9_2 + 0x1436046e0)
    
    if (rdx_2 u< rcx_5)
        rcx_5 = rdx_2
else
    rcx_5 = sub_142a2c730(arg1 + 0x270, arg2, rdx_2, arg5)

rdi[2] = rcx_5

if (rax_5 == 0)
    return sub_142a2b810(arg1 + 0x270, arg2, rdi, arg5)

int32_t var_40
var_40.q = arg5
int64_t* var_48
var_48.d = arg4
return sub_142a2a960(arg1, arg2, rdi, arg3, var_48.d, var_40)

// 函数: sub_141f17ca0
// 地址: 0x141f17ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx_3

if (arg3 != 4)
    rcx_3 = zx.d(arg3)
    
    if (arg3 != 0)
        goto label_141f17cef
    
    int32_t rax_5 = *(arg1 + 0xd8)
    *arg2 = *(arg1 + 0xd0)
    arg2[1].d = rax_5
    return arg2

int64_t* rax_1 = sub_142565030()
void* rax_2 = rax_1[0x23]

if (rax_2 == 0)
    int64_t r8 = *rax_1
    (*(r8 + 0x390))(rax_1, arg4, r8)
    rax_2 = rax_1[0x23]

rcx_3 = zx.d(*(rax_2 + 0x8d))

if (rcx_3 != 0)
label_141f17cef:
    
    if (rcx_3 == 1)
        *arg2 = 0x3f800000
        arg2[1].d = 0
        return arg2
    
    if (rcx_3 == 2)
        *(arg2 + 4) = 0x3f800000
        *arg2 = 0
        return arg2
    
    if (rcx_3 == 3)
        arg2[1].d = 0x3f800000
        *arg2 = 0
        return arg2

int32_t rax_3 = data_143dbb200
*arg2 = data_143dbb1f8.q
arg2[1].d = rax_3
return arg2

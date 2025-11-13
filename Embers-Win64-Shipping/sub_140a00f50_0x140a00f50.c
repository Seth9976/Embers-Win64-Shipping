// 函数: sub_140a00f50
// 地址: 0x140a00f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
int32_t rcx = 0
arg4[1].d = 0
int32_t arg_20 = 0

if (*(arg4 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg4, 0)
    arg3 = arg_18
    rcx = 0

if (arg1 s< 2 || arg2 s< 2 || arg1 - 1 s<= 0)
    return 

int32_t rax = arg1 - 1
int32_t r12_1 = 1

do
    if (arg2 - 1 s> 0)
        if (arg3 == 0)
            int32_t rbx_2 = r12_1
            int64_t i_2 = sx.q(arg2 - 1)
            int64_t i
            
            do
                sub_140a000c0(arg4, rbx_2 - 1, rbx_2, rbx_2 + arg2, rbx_2 + arg2 - 1)
                rbx_2 += 1
                i = i_2
                i_2 -= 1
            while (i != 1)
        else
            uint64_t i_3 = zx.q(arg2 - 1)
            int32_t rdi_2 = neg.d(arg2)
            int32_t rbx_1 = r12_1 + arg2
            uint64_t i_1
            
            do
                sub_140a000c0(arg4, rbx_1 + rdi_2 - 1, rbx_1 - 1, rbx_1, rdi_2 + rbx_1)
                rbx_1 += 1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        rax = arg1 - 1
        rcx = arg_20
    
    arg3 = arg_18
    rcx += 1
    r12_1 += arg2
    arg_20 = rcx
while (rcx s< rax)

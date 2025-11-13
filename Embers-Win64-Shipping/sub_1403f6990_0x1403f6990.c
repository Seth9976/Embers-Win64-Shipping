// 函数: sub_1403f6990
// 地址: 0x1403f6990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg2
int32_t rdx = *(arg1 + 4)
void** r14 = arg4
int64_t r9 = arg3
int32_t arg_8 = rdx
int32_t rax
int32_t r8

if (i_2 == 0)
    r8 = *(arg1 + 0x30) << arg6.b
    i_2 = 1
    rax = *(arg1 + 0x28) - arg6
else
    r8 = *(arg1 + 0x30)
    rax = *(arg1 + 0x28)

int32_t r13 = 0
int32_t result = 0
int32_t var_48 = r8
int32_t var_44 = 0
int32_t rcx_2 = r8 * i_2
int32_t var_3c = rcx_2
int32_t result_1 = 0

do
    if (i_2 s> 0)
        int64_t rdi_1 = 0
        void* rcx_3 = arg1 + 0x50
        uint64_t i_1 = zx.q(i_2)
        int128_t* rbx_1 = r9 + (sx.q(result) << 2)
        uint64_t i
        
        do
            sub_140401ea0(rcx_3, rbx_1, *r14 + rdi_1, *(arg1 + 0x48), rdx, rax, i_2)
            rdx = arg_8
            rdi_1 += sx.q(r8) << 2
            rbx_1 += 4
            rcx_3 = arg1 + 0x50
            i = i_1
            i_1 -= 1
        while (i != 1)
        r13 = var_44
        result = result_1
        r8 = var_48
        rcx_2 = var_3c
        r9 = arg3
    
    r13 += 1
    result += rcx_2
    r14 = &r14[1]
    var_44 = r13
    result_1 = result
while (r13 s< arg5)

return result

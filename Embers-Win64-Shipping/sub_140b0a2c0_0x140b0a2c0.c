// 函数: sub_140b0a2c0
// 地址: 0x140b0a2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg8)
int64_t r14 = sx.q(arg7)
int64_t r15 = sx.q(arg6)
int64_t r12 = sx.q(arg5)
int64_t rdi = sx.q(arg3)
int32_t rax_2

if (arg2 - 1 u<= 0x270e && (rdi - 1).d u<= 0xb && arg4 s>= 1)
    rax_2 = sub_140b12d60(arg2, rdi.d)

if (arg2 - 1 u> 0x270e || (rdi - 1).d u> 0xb || arg4 s< 1 || arg4 s> rax_2 || r12.d u> 0x17
        || r15.d u> 0x3b || r14.d u> 0x3b || rbp.d u> 0x3e7)
    int32_t var_30_1 = rbp.d
    int32_t var_38_1 = r14.d
    int32_t var_40_1 = r15.d
    int32_t var_48_1 = r12.d
    int32_t var_50_1 = arg4
    int32_t var_58_1 = rdi.d
    sub_140af98a0("Unknown", 0x19, Invalid Date values. Y:%d, M:%d, D:%d, H:%d, M:%d, S:%d, Ms:%d", 
        zx.q(arg2))
    sub_140afbb40()

int32_t r10 = 0

if (rdi.d s> 2)
    int32_t rax_4 = arg2 & 0x80000003
    
    if (rax_4 s< 0)
        rax_4 = ((rax_4 - 1) | 0xfffffffc) + 1
    
    if (rax_4 == 0)
        int32_t rdx_5
        
        if (arg2 == arg2 s/ 0x64 * 0x64)
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = muls.dp.d(0x51eb851f, arg2)
            rdx_5 = temp8_1 s>> 7
        
        if (arg2 != arg2 s/ 0x64 * 0x64 || arg2 == (rdx_5 + (rdx_5 u>> 0x1f)) * 0x190)
            r10 = 1

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(arg2 - 1)
int32_t rax_16 = ((temp5 + (temp4 & 3)) s>> 2) + r10 + *((rdi << 2) + 0x142e74724)
    + (arg2 - 1) s/ 0x190 + (arg2 - 1) * 0x16d - (arg2 - 1) s/ 0x64
*arg1 =
    ((((r12 + sx.q(rax_16 + arg4 - 1) * 0x18) * 0x3c + r15) * 0x3c + r14) * 0x3e8 + rbp) * 0x2710
return arg1

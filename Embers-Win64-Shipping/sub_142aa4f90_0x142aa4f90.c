// 函数: sub_142aa4f90
// 地址: 0x142aa4f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(arg1[0x2e].d)

if (rcx.d s< arg1[3].d)
    arg1[0x2e].d = (rcx + 1).d
    return *(arg1[4] + (rcx << 3))

if (arg1[3].d s>= 0x28 && sub_142b22f80(&arg1[3], 1, arg2) == 0)
    return 0x101000100

arg1[3].d += 1
int32_t arg_8
uint32_t rax_7 = (*(*arg1 + 0x38))(arg1, &arg_8, arg2)
uint32_t r8_3 = zx.d(rax_7.b)
uint32_t r9 = rax_7

if (r8_3 u< 0xc0)
    int64_t rdx_1 = sx.q(arg1[0x2e].d)
    arg1[0x2e].d = (rdx_1 + 1).d
    int64_t rax_13 =
        zx.q(((r9 & 0xffffff00) << 8 | r8_3) << 8) | (zx.q(r9) & 0xffffffffffff0000) << 0x20
    *(arg1[4] + (rdx_1 << 3)) = rax_13
    return rax_13

int32_t rdi = arg_8
int64_t rax_16
int64_t* rsi_1

if (r8_3 != 0xc0)
    rsi_1 = arg1[2]
label_142aa511e:
    
    if (r8_3 != 0xc1)
        return sub_142b23da0(arg1, rsi_1, rdi, r9, arg2)
    
    int64_t rcx_14 = sx.q(arg1[0x2e].d)
    arg1[0x2e].d = (rcx_14 + 1).d
    rax_16 = zx.q(r9 - 0xc1) << 0x20 | 0x5000500
    *(arg1[4] + (rcx_14 << 3)) = rax_16
else
    if (rdi s< 0)
        int64_t rcx_8 = sx.q(arg1[0x2e].d)
        arg1[0x2e].d = (rcx_8 + 1).d
        *(arg1[4] + (rcx_8 << 3)) = 0x101000100
        return 0x101000100
    
    rsi_1 = *(arg1[2] + 0x20)
    uint32_t rax_18 = sub_142aa3ce0(rsi_1, rdi)
    r8_3 = zx.d(rax_18.b)
    r9 = rax_18
    
    if (r8_3 u>= 0xc0)
        goto label_142aa511e
    
    int64_t rdx_4 = sx.q(arg1[0x2e].d)
    arg1[0x2e].d = (rdx_4 + 1).d
    rax_16 = zx.q(((r9 & 0xffffff00) << 8 | r8_3) << 8) | (zx.q(r9) & 0xffffffffffff0000) << 0x20
    *(arg1[4] + (rdx_4 << 3)) = rax_16
return rax_16

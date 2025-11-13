// 函数: sub_142c79fe0
// 地址: 0x142c79fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx
int64_t arg_10 = rdx
int64_t entry_r8
int64_t arg_18 = entry_r8
int64_t r9
int64_t arg_20 = r9
int32_t rdi_2 = (*(arg1 + 0x734) + 1) s% 0x3e8
*(arg1 + 0x734) = rdi_2
int32_t var_28 = rdi_2
int64_t rax_7
int512_t entry_zmm2
int512_t zmm2_1
rax_7, zmm2_1 = sub_142c563e0("%s %s", arg1 + 0x738, 
    sub_142c564b0(arg1 + 0x738, 5, "%c%03d", zx.q(sub_142c56200(*(arg1 + 0x64) s% 0x1a) + 0x41), 
        entry_zmm2))

if (rax_7 == 0)
    return zx.q((rax_7 + 0x1b).d)

int32_t rax_9 = sub_142c8f2b0(arg1 + 0x698, rax_7, &arg_18, zmm2_1)
data_143ccb8a0(rax_7)
return zx.q(rax_9)

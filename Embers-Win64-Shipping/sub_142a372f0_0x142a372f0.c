// 函数: sub_142a372f0
// 地址: 0x142a372f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x3c))
struct mkvparser::BlockEntry::mkvparser::SimpleBlock::VTable*** rsi = *(arg1 + 0x30) + (rbx << 3)
struct mkvparser::BlockEntry::mkvparser::SimpleBlock::VTable** rax_1 = j_sub_140a82f30(0x50)
struct mkvparser::BlockEntry::mkvparser::SimpleBlock::VTable** arg_8 = rax_1

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[2].d = rbx.d
    *rax_1 = &mkvparser::SimpleBlock::`vftable'{for `mkvparser::BlockEntry'}
    rax_1[1] = arg1
    rax_1[3] = arg2
    rax_1[4] = arg3
    rax_1[5] = 0
    rax_1[6].w = 0xffff
    *(rax_1 + 0x32) = 0
    rax_1[7] = 0
    rax_1[8].d = 0xffffffff
    rax_1[9] = 0

*rsi = rax_1

if (rax_1 == 0)
    return -1

int32_t result = sub_142a395c0(&rax_1[3], rax_1[1], arg4)

if (result == 0)
    *(arg1 + 0x3c) += 1
    return result

struct mkvparser::BlockEntry::mkvparser::SimpleBlock::VTable** rcx_1 = *rsi

if (rcx_1 != 0)
    (*rcx_1)->__offset(0x0).q(rcx_1, 1)

*rsi = nullptr
return result

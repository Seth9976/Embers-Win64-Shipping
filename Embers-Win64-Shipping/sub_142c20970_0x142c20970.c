// 函数: sub_142c20970
// 地址: 0x142c20970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rbp = &data_14369a5d0
int32_t* rcx_1 = *sub_142c1f860(arg3 + 0xc0)
int128_t* const rax_1 = &data_14369a5d0

if (rcx_1 != 0)
    rax_1 = rcx_1

uint64_t rbx = zx.q(*(rax_1 + 0x18))
int32_t* rcx_3 = *sub_142c1f7b0(arg3 + 0xc8)

if (rcx_3 != 0)
    rbp = rcx_3

uint64_t rcx_8 = (zx.q(*(arg2 + 0x18)) << 0x18 | rbx) << 0x18 | zx.q(*(rbp + 0x18))
int64_t result

if (rcx_8 == 0x3c4005d1c00eaa8 || rcx_8 == 0x1ba000b3a00a436 || rcx_8 == 0xc0003192001c56
        || rcx_8 == 0xb40032fe001c56 || rcx_8 == 0xbc0000f8000f0c || rcx_8 == 0xbc000108000d62
        || rcx_8 == 0xc000315e001c56 || rcx_8 == 0x1ae000b3a0099ce || rcx_8 == 0x1ae000b3a009ed6
        || rcx_8 == 0x1ba000b3a0098cc || rcx_8 == 0x38200310a00b586 || rcx_8 == 0x1de000be600a3ae
        || rcx_8 == 0x1ea000be600a2a6 || rcx_8 == 0x340001c9c00b83a || rcx_8 == 0x34c001c8600b1a2
        || rcx_8 == 0x38e00311600ba74 || rcx_8 == 0x3a0005b0200e7c4 || rcx_8 == 0x3ac005b0e00ed3c
        || rcx_8 == 0x41600b7b6003138 || rcx_8 == 0x3ee00600000efa2 || rcx_8 == 0x3d0005d1800f010
        || rcx_8 == 0x3e2005f9a00ebb0 || rcx_8 == 0x3ec00e6d40039f4 || rcx_8 == 0x3ee005f9600f12c
        || rcx_8 == 0x3ee00600000efa8 || rcx_8 == 0x3fa005ffc00f56c || rcx_8 == 0x3fa005ffc00f572
        || rcx_8 == 0x42201187200446a || rcx_8 == 0x41601186c0042d8 || rcx_8 == 0x41601186e0045c6
        || rcx_8 == 0x42200b7b8002e2a || rcx_8 == 0x422011874004182 || rcx_8 == 0x53201ad5000e252
        || rcx_8 == 0x53201ad5000e65c)
    result.b = 1
else
    result.b = 0

return result

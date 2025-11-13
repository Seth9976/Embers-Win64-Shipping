// 函数: sub_141c79fb0
// 地址: 0x141c79fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint32_t r8_4 = (zx.d(*(arg3 + 0x3d)) << 8 | zx.d(*(arg3 + 0x3e))) << 8 | zx.d(*(arg3 + 0x3f))
int64_t rcx_5 =
    ((zx.q(*(arg3 + 0x3a)) << 8 | zx.q(*(arg3 + 0x3b))) << 8 | zx.q(*(arg3 + 0x3c))) + arg2
int128_t var_e0
__builtin_memset(&var_e0, 0, 0x24)

if (r8_4 != 0)
    var_e0.q = rcx_5
    int64_t var_d0_1 = zx.q(r8_4) + rcx_5
    var_e0:8.q = rcx_5
    int64_t var_c8
    var_c8.d = r8_4

int32_t var_b8 = 0
int64_t var_b0
__builtin_memset(&var_b0, 0, 0x11)
void* var_98 = nullptr
sub_141c7af20(&var_e0, &var_b8)
sub_141c7bfa0(arg1 + 0x120, ((zx.q(zx.d(*(arg3 + 0x40)) << 8) | zx.q(*(arg3 + 0x41))) * 3).d)
int32_t r15 = 5
char var_88[0x29]

do
    uint64_t r8_5 = zx.q(r15 - 5)
    char r14_1 = *((zx.q(r8_5.d) & 7) + &data_14320e958)
    uint64_t rdx_2 = zx.q(r15 - 4)
    var_88[r8_5] = *((zx.q(r8_5.d) u>> 3) + &data_14320e958) << 3 | r14_1
    char rsi_1 = *((zx.q(r15 - 4) & 7) + &data_14320e958)
    var_88[rdx_2] = *((zx.q(rdx_2.d) u>> 3) + &data_14320e958) << 3 | rsi_1
    uint64_t rdx_3 = zx.q(r15 - 3)
    char rdi_1 = *((zx.q(r15 - 3) & 7) + &data_14320e958)
    var_88[rdx_3] = *((zx.q(rdx_3.d) u>> 3) + &data_14320e958) << 3 | rdi_1
    uint64_t rdx_4 = zx.q(r15 - 2)
    char rbx_1 = *((zx.q(r15 - 2) & 7) + &data_14320e958)
    var_88[rdx_4] = *((zx.q(rdx_4.d) u>> 3) + &data_14320e958) << 3 | rbx_1
    uint64_t rdx_5 = zx.q(r15 - 1)
    char r11_1 = *((zx.q((r8_5 - 4).d) & 7) + &data_14320e958)
    var_88[rdx_5] = *((zx.q(rdx_5.d) u>> 3) + &data_14320e958) << 3 | r11_1
    char r10_1 = *((zx.q((r8_5 - 3).d) & 7) + &data_14320e958)
    var_88[zx.q(r15)] = *((zx.q(r15) u>> 3) + &data_14320e958) << 3 | r10_1
    uint64_t rdx_7 = zx.q(r15 + 1)
    char r9_1 = *((zx.q((r8_5 - 2).d) & 7) + &data_14320e958)
    var_88[rdx_7] = *((zx.q(rdx_7.d) u>> 3) + &data_14320e958) << 3 | r9_1
    uint64_t rdx_8 = zx.q(r15 + 2)
    char r8_6 = *((zx.q((r8_5 - 1).d) & 7) + &data_14320e958)
    uint64_t rax_41 = zx.q(r15 + 3)
    var_88[rdx_8] = *((zx.q(rdx_8.d) u>> 3) + &data_14320e958) << 3 | r8_6
    uint64_t rax_43 = zx.q(r15 + 4)
    var_88[zx.q(rax_41.d)] = *((rax_41 u>> 3) + &data_14320e958) << 3 | r14_1
    uint64_t rax_45 = zx.q(r15 + 5)
    var_88[zx.q(rax_43.d)] = *((rax_43 u>> 3) + &data_14320e958) << 3 | rsi_1
    uint64_t rax_47 = zx.q(r15 + 6)
    var_88[zx.q(rax_45.d)] = *((rax_45 u>> 3) + &data_14320e958) << 3 | rdi_1
    uint64_t rax_49 = zx.q(r15 + 7)
    var_88[zx.q(rax_47.d)] = *((rax_47 u>> 3) + &data_14320e958) << 3 | rbx_1
    uint64_t rax_51 = zx.q(r15 + 8)
    var_88[zx.q(rax_49.d)] = *((rax_49 u>> 3) + &data_14320e958) << 3 | r11_1
    uint64_t rax_53 = zx.q(r15 + 9)
    var_88[zx.q(rax_51.d)] = *((rax_51 u>> 3) + &data_14320e958) << 3 | r10_1
    uint64_t rax_55 = zx.q(r15 + 0xa)
    var_88[zx.q(rax_53.d)] = *((rax_53 u>> 3) + &data_14320e958) << 3 | r9_1
    uint64_t rax_57 = zx.q(r15 + 0xb)
    var_88[zx.q(rax_55.d)] = *((rax_55 u>> 3) + &data_14320e958) << 3 | r8_6
    uint64_t rax_59 = zx.q(r15 + 0xc)
    var_88[zx.q(rax_57.d)] = *((rax_57 u>> 3) + &data_14320e958) << 3 | r14_1
    uint64_t rax_61 = zx.q(r15 + 0xd)
    var_88[zx.q(rax_59.d)] = *((rax_59 u>> 3) + &data_14320e958) << 3 | rsi_1
    uint64_t rax_63 = zx.q(r15 + 0xe)
    var_88[zx.q(rax_61.d)] = *((rax_61 u>> 3) + &data_14320e958) << 3 | rdi_1
    uint64_t rax_65 = zx.q(r15 + 0xf)
    var_88[zx.q(rax_63.d)] = *((rax_63 u>> 3) + &data_14320e958) << 3 | rbx_1
    uint64_t rax_67 = zx.q(r15 + 0x10)
    var_88[zx.q(rax_65.d)] = *((rax_65 u>> 3) + &data_14320e958) << 3 | r11_1
    uint64_t rax_69 = zx.q(r15 + 0x11)
    var_88[zx.q(rax_67.d)] = *((rax_67 u>> 3) + &data_14320e958) << 3 | r10_1
    uint64_t rax_71 = zx.q(r15 + 0x12)
    var_88[zx.q(rax_69.d)] = *((rax_69 u>> 3) + &data_14320e958) << 3 | r9_1
    uint64_t rax_73 = zx.q(r15 + 0x13)
    var_88[zx.q(rax_71.d)] = *((rax_71 u>> 3) + &data_14320e958) << 3 | r8_6
    uint64_t rax_75 = zx.q(r15 + 0x14)
    var_88[zx.q(rax_73.d)] = *((rax_73 u>> 3) + &data_14320e958) << 3 | r14_1
    uint64_t rax_77 = zx.q(r15 + 0x15)
    var_88[zx.q(rax_75.d)] = *((rax_75 u>> 3) + &data_14320e958) << 3 | rsi_1
    uint64_t rax_79 = zx.q(r15 + 0x16)
    var_88[zx.q(rax_77.d)] = *((rax_77 u>> 3) + &data_14320e958) << 3 | rdi_1
    uint64_t rax_81 = zx.q(r15 + 0x17)
    var_88[zx.q(rax_79.d)] = *((rax_79 u>> 3) + &data_14320e958) << 3 | rbx_1
    uint64_t rax_83 = zx.q(r15 + 0x18)
    var_88[zx.q(rax_81.d)] = *((rax_81 u>> 3) + &data_14320e958) << 3 | r11_1
    uint64_t rax_85 = zx.q(r15 + 0x19)
    var_88[zx.q(rax_83.d)] = *((rax_83 u>> 3) + &data_14320e958) << 3 | r10_1
    uint64_t rax_87 = zx.q(r15 + 0x1a)
    var_88[zx.q(rax_85.d)] = *((rax_85 u>> 3) + &data_14320e958) << 3 | r9_1
    r15 += 0x20
    var_88[zx.q(rax_87.d)] = *((rax_87 u>> 3) + &data_14320e958) << 3 | r8_6
while (r15 - 5 u< 0x40)

int32_t r15_1 = 0
int32_t r12 = 0
uint64_t r13 = 0

if (*(arg1 + 0x128) u> 0)
    do
        int32_t rdi_2 = 0
        int32_t r14_2 = 0
        int32_t i = 0
        int64_t rsi_2 = 0
        
        do
            char rcx_45 = rsi_2.b
            r15_1 ^= sub_141c79cd0(&var_e0, &var_b8) << i.b
            rsi_2 += 6
            char rcx_46 = i.b
            i += 6
            rdi_2 |= zx.d(*(&var_88 + (zx.q((zx.q(r15_1) u>> rcx_45).d) & 0x3f))) << rcx_46
        while (i u< 0x18)
        
        int64_t rsi_3 = 0
        
        for (int32_t i_1 = 0; i_1 u< 0x18; )
            char rcx_49 = rsi_3.b
            r12 ^= sub_141c79cd0(&var_e0, &var_b8) << i_1.b
            rsi_3 += 6
            char rcx_50 = i_1.b
            i_1 += 6
            r14_2 |= zx.d(*(&var_88 + (zx.q((zx.q(r12) u>> rcx_49).d) & 0x3f))) << rcx_50
        
        *(*(arg1 + 0x120) + (r13 << 1)) = rdi_2.w
        uint64_t r13_1 = zx.q(r13.d + 1)
        *(*(arg1 + 0x120) + (r13_1 << 1)) = (rdi_2 u>> 0x10).w | r14_2.w << 8
        uint64_t r13_2 = zx.q(r13_1.d + 1)
        *(*(arg1 + 0x120) + (r13_2 << 1)) = (r14_2 u>> 8).w
        r13 = zx.q(r13_2.d + 1)
    while (r13.d u< *(arg1 + 0x128))

if (var_98 != 0)
    int64_t rcx_51 = *(var_98 + 0xa8)
    
    if (rcx_51 != 0)
        sub_141c799d0(rcx_51 - 8)
    
    int64_t rcx_53 = *(var_98 + 0xb8)
    
    if (rcx_53 != 0)
        sub_141c799d0(rcx_53 - 8)
    
    sub_141c799d0(var_98)

int64_t rcx_56 = var_b0

if (rcx_56 != 0)
    sub_141c799d0(rcx_56)

void* result
result.b = 1
__security_check_cookie(rax_1 ^ &var_108)
return result

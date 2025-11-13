// 函数: sub_1418c6e90
// 地址: 0x1418c6e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t i = 0
int64_t rsi = 0

do
    int64_t* r8_2 = arg1 + 0xc30 + rsi
    *r8_2 = 0
    r8_2[1].d = 0
    data_143efb6b0(*(arg1 + 0x7c0), zx.q(i))
    i += 1
    rsi += 0xc
while (i u< 0xb9)

void* rdx_2 = &data_143efaf70
char* i_1 = &data_1439c8600
void* rax_2 = arg1 + 0x1598

do
    *(i_1 - 4) = 0
    rax_2 += 0x10
    *i_1 = 0
    i_1 = &i_1[0x28]
    *rdx_2 = 0
    rdx_2 += 4
    *(rax_2 - 0x18) = 3
    *(rax_2 - 0x14) = 4
    *(rax_2 - 0x10) = 5
    *(rax_2 - 0xc) = 6
while (i_1 s< &data_1439c9118)

if (*(arg1 + 0xe40) != 0 || *(arg1 + 0xe44) != 0)
    i_1.b = 1
else
    i_1.b = 0

int32_t r9 = *(arg1 + 0xe48)
int32_t rdx_4 = sbb.d(rdx_2.d, rdx_2.d, i_1.b != 0) & 0x2c
int32_t r8_4 = sbb.d(0x439c9118, 0x439c9118, r9 != 0) & 0x2c
char rax_5

if (i_1.b != 0 || r9 != 0)
    rax_5 = 1
else
    rax_5 = 0

data_1439c8650 = rax_5
data_1439c864c = rdx_4
data_143efaf78 = r8_4
__builtin_memcpy(arg1 + 0x15b0, 
    "\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x06\x00\x00\x00\x03\x00\x00\x00\x01\x00\x00\x00\x"
"01\x00\x00\x00\x02\x00\x00\x00", 
    0x20)

if (*(arg1 + 0xc9c) != 0 || *(arg1 + 0xca0) != 0)
    i_1.b = 1
else
    i_1.b = 0

int32_t r9_1 = *(arg1 + 0xca4)
int32_t rdx_6 = sbb.d(rdx_4, rdx_4, i_1.b != 0) & 9
int32_t r8_6 = sbb.d(r8_4, r8_4, r9_1 != 0) & 9
char rax_8

if (i_1.b != 0 || r9_1 != 0)
    rax_8 = 1
else
    rax_8 = 0

data_1439c8678 = rax_8
data_1439c8674 = rdx_6
data_143efaf7c = r8_6
int32_t var_38 = 0x4c

if (*(arg1 + 0xf78) != 0 || *(arg1 + 0xf7c) != 0)
    i_1.b = 1
else
    i_1.b = 0

int32_t r9_2 = *(arg1 + 0xf80)
int32_t rdx_8 = sbb.d(rdx_6, rdx_6, i_1.b != 0) & 0x46
int32_t r8_8 = sbb.d(r8_6, r8_6, r9_2 != 0) & 0x46
char rax_11

if (i_1.b != 0 || r9_2 != 0)
    rax_11 = 1
else
    rax_11 = 0

data_1439c86a0 = rax_11
data_1439c869c = rdx_8
data_143efaf80 = r8_8

if (i_1.b == 0)
    int32_t* rdi = &var_38
    int64_t i_5 = 1
    int64_t i_2
    
    do
        int32_t rsi_1 = *rdi
        char rax_12
        rax_12, i_1, rdx_8, r8_8 = sub_1418c2480(arg1, rsi_1)
        
        if (rax_12 != 0)
            data_1439c869c = rsi_1
            data_1439c86a0 = 1
        
        rdi = &rdi[1]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

*(arg1 + 0x15d0) = 3
*(arg1 + 0x15d4) = 1
*(arg1 + 0x15d8) = 1
*(arg1 + 0x15dc) = 2

if (*(arg1 + 0x11e8) != 0 || *(arg1 + 0x11ec) != 0)
    i_1.b = 1
else
    i_1.b = 0

int32_t r9_3 = *(arg1 + 0x11f0)
char rax_15

if (i_1.b != 0 || r9_3 != 0)
    rax_15 = 1
else
    rax_15 = 0

data_1439c8764 = sbb.d(rdx_8, rdx_8, i_1.b != 0) & 0x7a
data_143efaf94 = sbb.d(r8_8, r8_8, r9_3 != 0) & 0x7a
data_1439c8768 = rax_15
var_38.q = 0
int32_t var_30 = 0
int128_t zmm0 = var_38.o
*(arg1 + 0x1620) = 3
*(arg1 + 0x1624) = 4
*(arg1 + 0x1628) = 5
*(arg1 + 0x162c) = 2
int128_t var_48 = zmm0
sub_1418c2b40(arg1, 0xa, 0x61, &var_48)
data_1439c8784 = 8
*(arg1 + 0x1630) = 3
*(arg1 + 0x1634) = 4
*(arg1 + 0x1638) = 5
*(arg1 + 0x163c) = 6
int64_t rdi_1 = data_143efb150
int64_t rcx_3

if (data_143de5480 == 0)
    rcx_3 = 0
else
    rcx_3.b = GetCurrentThreadId() != data_143de5470

bool cond:1 = *(rdi_1 + (rcx_3 << 2)) == 0
var_48.q = &var_38
var_48:8.d = 2
var_48 = var_48
int32_t var_34 = 0x80
int32_t r8_11

if (cond:1)
    var_38 = 0x81
    r8_11 = 0x82
else
    var_38 = 0x82
    r8_11 = 0x81

sub_1418c2b40(arg1, 0xb, r8_11, &var_48)
var_48.q = 0
var_48:8.d = 0
int128_t zmm0_2 = var_48
*(arg1 + 0x1640) = 3
*(arg1 + 0x1648) = 0
var_48 = zmm0_2
sub_1418c2b40(arg1, 0xc, 0x7c, &var_48)
var_48.q = 0
var_48:8.d = 0
int128_t zmm0_3 = var_48
*(arg1 + 0x1650) = 3
*(arg1 + 0x1658) = 0
var_48 = zmm0_3
sub_1418c2b40(arg1, 0x11, 0x67, &var_48)
data_1439c889c = 8
var_48.q = 0
var_48:8.d = 0
int128_t zmm0_4 = var_48
*(arg1 + 0x16a0) = 3
*(arg1 + 0x16a4) = 4
*(arg1 + 0x16a8) = 1
*(arg1 + 0x16ac) = 2
var_48 = zmm0_4
sub_1418c2b40(arg1, 1, 0x6d, &var_48)
data_1439c861c = 0x10
var_48.q = &var_38
var_48:8.d = 1
int128_t zmm0_5 = var_48
*(arg1 + 0x15a0) = 3
*(arg1 + 0x15a4) = 4
*(arg1 + 0x15a8) = 5
*(arg1 + 0x15ac) = 6
var_38 = 0x53
var_48 = zmm0_5
sub_1418c2b40(arg1, 0xe, 0x4d, &var_48)
var_48.q = 0
var_48:8.d = 0
int128_t zmm0_6 = var_48
*(arg1 + 0x1670) = 3
*(arg1 + 0x1674) = 4
*(arg1 + 0x1678) = 1
*(arg1 + 0x167c) = 2
var_48 = zmm0_6
sub_1418c2b40(arg1, 0xf, 0x53, &var_48)
var_48.q = 0
var_48:8.d = 0
int128_t zmm0_7 = var_48
*(arg1 + 0x1680) = 3
*(arg1 + 0x1684) = 4
*(arg1 + 0x1688) = 1
*(arg1 + 0x168c) = 2
var_48 = zmm0_7
sub_1418c2b40(arg1, 0x10, 0x53, &var_48)
*(arg1 + 0x1690) = 3
*(arg1 + 0x1694) = 4
var_48.q = 0
var_48:8.d = 0
int128_t zmm0_8 = var_48
*(arg1 + 0x1698) = 1
*(arg1 + 0x169c) = 2
var_48 = zmm0_8
sub_1418c2b40(arg1, 0x20, 0x4a, &var_48)
var_48.q = 0
var_48:8.d = 0
int128_t zmm0_9 = var_48
*(arg1 + 0x1790) = 3
*(arg1 + 0x1794) = 1
*(arg1 + 0x1798) = 1
*(arg1 + 0x179c) = 2
var_48 = zmm0_9
sub_1418c2b40(arg1, 0x21, 0x4b, &var_48)
var_48.q = 0
var_48:8.d = 0
int128_t zmm0_10 = var_48
*(arg1 + 0x17a0) = 3
*(arg1 + 0x17a4) = 1
*(arg1 + 0x17a8) = 1
*(arg1 + 0x17ac) = 2
var_48 = zmm0_10
sub_1418c2b40(arg1, 0x1c, 0x62, &var_48)
var_48.q = 0
var_48:8.d = 0
int128_t zmm0_11 = var_48
*(arg1 + 0x1750) = 3
*(arg1 + 0x1754) = 1
*(arg1 + 0x1758) = 1
*(arg1 + 0x175c) = 2
var_48 = zmm0_11
sub_1418c2b40(arg1, 0x1d, 0x63, &var_48)
var_48.q = 0
var_48:8.d = 0
int128_t zmm0_12 = var_48
*(arg1 + 0x1760) = 3
*(arg1 + 0x1764) = 1
*(arg1 + 0x1768) = 1
*(arg1 + 0x176c) = 2
var_48 = zmm0_12
sub_1418c2b40(arg1, 0x39, 0xd, &var_48)
var_48.q = &var_38
var_48:8.d = 4
int64_t i_4 = 0x14
var_38.o = data_142fed3a0
var_48 = var_48
*(arg1 + 0x1920) = 3
*(arg1 + 0x1924) = 1
*(arg1 + 0x1928) = 1
*(arg1 + 0x192c) = 2
sub_1418c2b40(arg1, 0x14, 0x7d, &var_48)
*(arg1 + 0x16d0) = 3
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x16d4) = 1
*(arg1 + 0x16d8) = 1
*(arg1 + 0x16dc) = 1
sub_1418c2b40(arg1, 0x15, 0x4c, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x16e0) = 3
*(arg1 + 0x16e4) = 1
*(arg1 + 0x16e8) = 1
*(arg1 + 0x16ec) = 2
sub_1418c2b40(arg1, 0x16, 0x4c, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x16f0) = 3
*(arg1 + 0x16f4) = 1
*(arg1 + 0x16f8) = 1
*(arg1 + 0x16fc) = 2
sub_1418c2b40(arg1, 0x1a, 0x7a, &var_48)
data_1439c8a04 = 4
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x1730) = 3
*(arg1 + 0x1734) = 4
*(arg1 + 0x1738) = 5
*(arg1 + 0x173c) = 2
sub_1418c2b40(arg1, 0x12, 0x40, &var_48)
data_1439c88c4 = 4
var_48.q = &var_38
var_48:8.d = 1
var_48 = var_48
*(arg1 + 0x16b0) = 3
*(arg1 + 0x16b4) = 4
*(arg1 + 0x16b8) = 5
*(arg1 + 0x16bc) = 6
var_38 = 0x61
sub_1418c2b40(arg1, 0x13, 0x5b, &var_48)
data_1439c88ec = 8
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x16c0) = 3
*(arg1 + 0x16c4) = 4
*(arg1 + 0x16c8) = 5
*(arg1 + 0x16cc) = 6
sub_1418c2b40(arg1, 0x1b, 9, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x1740) = 1
*(arg1 + 0x1744) = 1
*(arg1 + 0x1748) = 1
*(arg1 + 0x174c) = 3
sub_1418c2b40(arg1, 0x24, 4, &var_48)
var_48.q = 0
var_48:8.d = 0
int128_t zmm0_21 = var_48
*(arg1 + 0x17d0) = 3
*(arg1 + 0x17d4) = 4
*(arg1 + 0x17d8) = 5
*(arg1 + 0x17dc) = 6
var_48 = zmm0_21
sub_1418c2b40(arg1, 0x25, 0x25, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x17e0) = 3
*(arg1 + 0x17e4) = 4
*(arg1 + 0x17e8) = 5
*(arg1 + 0x17ec) = 6
sub_1418c2b40(arg1, 0x3c, 0x29, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x1950) = 3
*(arg1 + 0x1954) = 4
*(arg1 + 0x1958) = 5
*(arg1 + 0x195c) = 6
sub_1418c2b40(arg1, 0x3d, 0x26, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x1960) = 3
*(arg1 + 0x1964) = 4
*(arg1 + 0x1968) = 5
*(arg1 + 0x196c) = 6
sub_1418c2b40(arg1, 0x31, 0x51, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x18a0) = 3
*(arg1 + 0x18a4) = 4
*(arg1 + 0x18a8) = 1
*(arg1 + 0x18ac) = 2
sub_1418c2b40(arg1, 0x22, 0x5f, &var_48)
*(arg1 + 0x17b0) = 3
*(arg1 + 0x17b4) = 4
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x17b8) = 5
*(arg1 + 0x17bc) = 6
sub_1418c2b40(arg1, 0x23, 0x60, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x17c0) = 3
*(arg1 + 0x17c4) = 4
*(arg1 + 0x17c8) = 5
*(arg1 + 0x17cc) = 6
sub_1418c2b40(arg1, 0x44, 0x65, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x19d0) = 3
*(arg1 + 0x19d4) = 4
*(arg1 + 0x19d8) = 1
*(arg1 + 0x19dc) = 2
sub_1418c2b40(arg1, 0x30, 0x6b, &var_48)
var_48:8.d = 1
var_48.q = &var_38
var_48 = var_48
*(arg1 + 0x1890) = 3
*(arg1 + 0x1894) = 4
*(arg1 + 0x1898) = 5
*(arg1 + 0x189c) = 6
var_38 = 0x61
sub_1418c2b40(arg1, 0x3f, 0x5c, &var_48)
var_48:8.d = 1
var_48.q = &var_38
var_48 = var_48
*(arg1 + 0x1980) = 3
*(arg1 + 0x1984) = 4
*(arg1 + 0x1988) = 5
*(arg1 + 0x198c) = 6
var_38 = 0x61
sub_1418c2b40(arg1, 0x3e, 0x5b, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x1970) = 3
*(arg1 + 0x1974) = 4
*(arg1 + 0x1978) = 5
*(arg1 + 0x197c) = 6
sub_1418c2b40(arg1, 0x28, 0x10, &var_48)
*(arg1 + 0x1810) = 3
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x1814) = 4
*(arg1 + 0x1818) = 1
*(arg1 + 0x181c) = 2
sub_1418c2b40(arg1, 0x18, 0x10, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x1710) = 3
*(arg1 + 0x1714) = 4
*(arg1 + 0x1718) = 1
*(arg1 + 0x171c) = 2
sub_1418c2b40(arg1, 0xd, 0x64, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x1660) = 3
*(arg1 + 0x1664) = 1
*(arg1 + 0x1668) = 1
*(arg1 + 0x166c) = 2
sub_1418c2b40(arg1, 5, 0x83, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x15e0) = 3
*(arg1 + 0x15e4) = 4
*(arg1 + 0x15e8) = 5
*(arg1 + 0x15ec) = 2
sub_1418c2b40(arg1, 6, 0x87, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x15f0) = 3
*(arg1 + 0x15f4) = 4
*(arg1 + 0x15f8) = 5
*(arg1 + 0x15fc) = 6
sub_1418c2b40(arg1, 7, 0x89, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x1600) = 3
*(arg1 + 0x1604) = 4
*(arg1 + 0x1608) = 5
*(arg1 + 0x160c) = 6
sub_1418c2b40(arg1, 0x27, 0x8b, &var_48)
*(arg1 + 0x1800) = 3
*(arg1 + 0x1804) = 4
*(arg1 + 0x1808) = 5
*(arg1 + 0x180c) = 6
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
sub_1418c2b40(arg1, 0x17, 0x8d, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x1700) = 3
*(arg1 + 0x1704) = 4
*(arg1 + 0x1708) = 5
*(arg1 + 0x170c) = 6
sub_1418c2b40(arg1, 0x37, 0x8f, &var_48)
var_48.q = 0
var_48:8.d = 0
var_48 = var_48
*(arg1 + 0x1900) = 3
*(arg1 + 0x1904) = 4
*(arg1 + 0x1908) = 5
*(arg1 + 0x190c) = 6
sub_1418c2b40(arg1, 0x38, 0x91, &var_48)
*(arg1 + 0x1910) = 3
*(arg1 + 0x1914) = 4
int32_t rdi_2 = 0
*(arg1 + 0x1918) = 5
*(arg1 + 0x191c) = 6
int64_t result
int64_t i_3

do
    int32_t rdx_12
    
    if (rdi_2 u> 0x13)
        rdx_12 = 0
    else
        switch (rdi_2)
            case 0
                rdx_12 = 0x64
            case 1
                rdx_12 = 0x67
            case 2
                rdx_12 = 0x6a
            case 3
                rdx_12 = 0x6d
            case 4
                rdx_12 = 0x26
            case 5
                rdx_12 = 0x29
            case 6
                rdx_12 = 0x25
            case 7
                rdx_12 = 0x2c
            case 8
                rdx_12 = 0x52
            case 9
                rdx_12 = 0x60
            case 0xa
                rdx_12 = 0x4e
            case 0xb
                rdx_12 = 0x53
            case 0xc
                rdx_12 = 0x61
            case 0xd
                rdx_12 = 0x5c
            case 0xe
                rdx_12 = 0x51
            case 0xf
                rdx_12 = 0x5f
            case 0x10
                rdx_12 = 0x4d
            case 0x11
                rdx_12 = 0x5b
            case 0x12
                rdx_12 = 0x40
            case 0x13
                rdx_12 = 0x62
    
    result = sub_1418c2380(arg1, rdx_12)
    rdi_2 += 1
    i_3 = i_4
    i_4 -= 1
while (i_3 != 1)
__security_check_cookie(rax_1 ^ &var_68)
return result

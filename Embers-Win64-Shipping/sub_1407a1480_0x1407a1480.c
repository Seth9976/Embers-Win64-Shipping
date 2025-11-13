// 函数: sub_1407a1480
// 地址: 0x1407a1480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1d90)
void var_1db8
int64_t rax_1 = __security_cookie ^ &var_1db8
int64_t* var_810 = nullptr
int64_t var_808 = 1
int64_t var_818 = data_143ce0570
int64_t var_800 = 0
int32_t var_7f8 = 0
int64_t var_7f0 = 0
int64_t var_7e0
__builtin_memset(&var_7e0, 0, 0x2c)
int32_t var_7b4 = 0x80
int32_t var_7b0 = 0xffffffff
int32_t var_7ac = 0
int64_t var_7a0 = 0
int32_t var_798 = 0
int64_t var_1d50
sub_140b58260(&var_1d50, u"Particle Reader", 1)
int64_t var_19b0 = var_1d50
int64_t var_19a8 = *(arg1 + 0x10)
int32_t var_19a0 = 0xffff0001
int16_t var_199c = 0xffff
int64_t var_1998 = 0
int64_t var_1990 = 0
sub_1405c4ec0(&var_810)
sub_140745220(var_810, &var_19b0)

if (var_1998 != 0)
    sub_140a74f90(var_1998)

int64_t var_1d48
sub_140b58260(&var_1d48, u"Num Spawned", 1)
int64_t rdi = sx.q(var_7f8)
int64_t var_1988 = var_1d48
int64_t var_1980 = data_14396f0a8
int16_t var_1978 = data_14396f0b0
int32_t rax_11 = (rdi + 1).d
int32_t var_1976 = 0xffffffff
int64_t var_1970 = 0
int64_t var_1968 = 0
var_7f8 = rax_11

if (rax_11 s> 0)
    sub_1405c4ec0(&var_800)

sub_140745220(var_800 + rdi * 0x28, &var_1988)

if (var_1970 != 0)
    sub_140a74f90(var_1970)

int64_t rdi_1 = sx.q(arg2[1].d)
int32_t var_7e8
int32_t var_7e8_2 = (((var_7e8 & 0xffffffd8) | 0x18) & 0xfffffffe) | 6
int32_t rax_16 = (rdi_1 + 1).d
arg2[1].d = rax_16

if (rax_16 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_1 * 0x88 + *arg2, &var_818)
sub_1405ae080(&var_7e0)
sub_140745ac0(&var_800)
sub_140745ac0(&var_810)
int64_t* var_930 = nullptr
int32_t var_928 = 1
int64_t var_938 = data_143ce0578
int64_t var_920
__builtin_memset(&var_920, 0, 0x18)
int64_t var_900
__builtin_memset(&var_900, 0, 0x2c)
int32_t var_8d4 = 0x80
int32_t var_8d0 = 0xffffffff
int32_t var_8cc = 0
int64_t var_8c0 = 0
int32_t var_8b8 = 0
int64_t var_1d40
sub_140b58260(&var_1d40, u"Particle Reader", 1)
int64_t var_1960 = var_1d40
int64_t var_1958 = *(arg1 + 0x10)
int32_t var_1950 = 0xffff0001
int16_t var_194c = 0xffff
int64_t var_1948 = 0
int64_t var_1940 = 0
sub_1405c4ec0(&var_930)
int64_t* rsi = var_930
sub_140745220(rsi, &var_1960)

if (var_1948 != 0)
    sub_140a74f90(var_1948)

int64_t var_1d38
sub_140b58260(&var_1d38, u"Spawn Index", 1)
int64_t rdi_2 = sx.q(var_928)
int64_t var_1938 = var_1d38
int64_t var_1930 = data_14396f0a8
int16_t var_1928 = data_14396f0b0
int32_t rax_26 = (rdi_2 + 1).d
int32_t var_1926 = 0xffffffff
int64_t var_1920 = 0
int64_t var_1918 = 0
var_928 = rax_26

if (rax_26 s> 0)
    sub_1405c4ec0(&var_930)
    rsi = var_930

sub_140745220(&rsi[rdi_2 * 5], &var_1938)

if (var_1920 != 0)
    sub_140a74f90(var_1920)

int64_t var_1d30
sub_140b58260(&var_1d30, u"Valid", 1)
int64_t var_918
int64_t rsi_1 = sx.q(var_918.d)
int32_t r14 = var_918:4.d
int64_t var_1910 = var_1d30
int32_t rdi_3 = (rsi_1 + 1).d
int64_t var_1908 = data_14396f098
int16_t var_1900 = data_14396f0a0
int32_t var_18fe = 0xffffffff
int64_t var_18f8 = 0
int64_t var_18f0 = 0
var_918.d = rdi_3

if (rdi_3 s> r14)
    sub_1405c4ec0(&var_920)
    r14 = var_918:4.d
    rdi_3 = var_918.d

int64_t rsi_2 = var_920
sub_140745220(rsi_2 + rsi_1 * 0x28, &var_1910)

if (var_18f8 != 0)
    sub_140a74f90(var_18f8)

int64_t var_1d28
sub_140b58260(&var_1d28, &data_142db68c4, 1)
int64_t var_18e8 = var_1d28
int64_t var_18e0 = data_14396f138
int16_t var_18d8 = data_14396f140
int32_t var_18d6 = 0xffffffff
int64_t var_18d0 = 0
int64_t var_18c8 = 0
var_918.d = rdi_3 + 1

if (rdi_3 + 1 s> r14)
    sub_1405c4ec0(&var_920)
    rsi_2 = var_920

sub_140745220(rsi_2 + sx.q(rdi_3) * 0x28, &var_18e8)

if (var_18d0 != 0)
    sub_140a74f90(var_18d0)

int64_t rdi_4 = sx.q(arg2[1].d)
int32_t var_908
int32_t var_908_2 = (((var_908 & 0xffffffd8) | 0x18) & 0xfffffffe) | 6
int32_t rax_38 = (rdi_4 + 1).d
arg2[1].d = rax_38

if (rax_38 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_4 * 0x88 + *arg2, &var_938)
sub_1405ae080(&var_900)
sub_140745ac0(&var_920)
sub_140745ac0(&var_930)
int64_t* var_780 = nullptr
int64_t var_778 = 1
int64_t var_788 = data_143ce0580
int64_t var_770 = 0
int32_t var_768 = 0
int64_t var_760 = 0
int64_t var_750
__builtin_memset(&var_750, 0, 0x2c)
int32_t var_724 = 0x80
int32_t var_720 = 0xffffffff
int32_t var_71c = 0
int64_t var_710 = 0
int32_t var_708 = 0
int64_t var_1d20
sub_140b58260(&var_1d20, u"Particle Reader", 1)
int64_t var_18c0 = var_1d20
int64_t var_18b8 = *(arg1 + 0x10)
int32_t var_18b0 = 0xffff0001
int16_t var_18ac = 0xffff
int64_t var_18a8 = 0
int64_t var_18a0 = 0
sub_1405c4ec0(&var_780)
sub_140745220(var_780, &var_18c0)

if (var_18a8 != 0)
    sub_140a74f90(var_18a8)

int64_t var_1d18
sub_140b58260(&var_1d18, u"Num Particles", 1)
int64_t rdi_5 = sx.q(var_768)
int64_t var_1898 = var_1d18
int64_t var_1890 = data_14396f0a8
int16_t var_1888 = data_14396f0b0
int32_t rax_48 = (rdi_5 + 1).d
int32_t var_1886 = 0xffffffff
int64_t var_1880 = 0
int64_t var_1878 = 0
var_768 = rax_48

if (rax_48 s> 0)
    sub_1405c4ec0(&var_770)

sub_140745220(var_770 + rdi_5 * 0x28, &var_1898)

if (var_1880 != 0)
    sub_140a74f90(var_1880)

int64_t rdi_6 = sx.q(arg2[1].d)
int32_t var_758
int32_t var_758_2 = (((var_758 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2
int32_t rax_53 = (rdi_6 + 1).d
arg2[1].d = rax_53

if (rax_53 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_6 * 0x88 + *arg2, &var_788)
sub_1405ae080(&var_750)
sub_140745ac0(&var_770)
sub_140745ac0(&var_780)
int64_t* var_8a0 = nullptr
int32_t var_898 = 1
int64_t var_8a8 = data_143ce0588
int64_t var_890 = 0
int32_t var_888 = 0
int64_t var_880 = 0
int64_t var_870
__builtin_memset(&var_870, 0, 0x2c)
int32_t var_844 = 0x80
int32_t var_840 = 0xffffffff
int32_t var_83c = 0
int64_t var_830 = 0
int32_t var_828 = 0
int64_t var_1d10
sub_140b58260(&var_1d10, u"Particle Reader", 1)
int64_t var_1870 = var_1d10
int64_t var_1868 = *(arg1 + 0x10)
int32_t var_1860 = 0xffff0001
int16_t var_185c = 0xffff
int64_t var_1858 = 0
int64_t var_1850 = 0
sub_1405c4ec0(&var_8a0)
int64_t* rsi_3 = var_8a0
sub_140745220(rsi_3, &var_1870)

if (var_1858 != 0)
    sub_140a74f90(var_1858)

int64_t var_1d08
sub_140b58260(&var_1d08, u"Particle ID", 1)
int64_t rdi_7 = sx.q(var_898)
int64_t var_1848 = var_1d08
int64_t var_1840 = data_14396f138
int16_t var_1838 = data_14396f140
int32_t rax_63 = (rdi_7 + 1).d
int32_t var_1836 = 0xffffffff
int64_t var_1830 = 0
int64_t var_1828 = 0
var_898 = rax_63

if (rax_63 s> 0)
    sub_1405c4ec0(&var_8a0)
    rsi_3 = var_8a0

sub_140745220(&rsi_3[rdi_7 * 5], &var_1848)

if (var_1830 != 0)
    sub_140a74f90(var_1830)

int64_t var_1d00
sub_140b58260(&var_1d00, u"Index", 1)
int64_t rdi_8 = sx.q(var_888)
int64_t var_1820 = var_1d00
int64_t var_1818 = data_14396f0a8
int16_t var_1810 = data_14396f0b0
int32_t rax_67 = (rdi_8 + 1).d
int32_t var_180e = 0xffffffff
int64_t var_1808 = 0
int64_t var_1800 = 0
var_888 = rax_67

if (rax_67 s> 0)
    sub_1405c4ec0(&var_890)

sub_140745220(var_890 + rdi_8 * 0x28, &var_1820)

if (var_1808 != 0)
    sub_140a74f90(var_1808)

int64_t rdi_9 = sx.q(arg2[1].d)
int32_t var_878
int32_t var_878_2 = (((var_878 & 0xffffffd8) | 0x18) & 0xfffffffe) | 6
int32_t rax_72 = (rdi_9 + 1).d
arg2[1].d = rax_72

if (rax_72 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_9 * 0x88 + *arg2, &var_8a8)
sub_1405ae080(&var_870)
sub_140745ac0(&var_890)
sub_140745ac0(&var_8a0)
int64_t var_c90 = 0
int32_t var_c88 = 0
int64_t var_c98 = data_143ce0590
int64_t var_c80 = 0
int32_t var_c78 = 0
int64_t var_c70 = 0
int64_t var_c60
__builtin_memset(&var_c60, 0, 0x2c)
int32_t var_c34 = 0x80
int32_t var_c30 = 0xffffffff
int32_t var_c2c = 0
int64_t var_c20 = 0
int32_t var_c18 = 0
int64_t var_1cf8
sub_140b58260(&var_1cf8, u"Particle Reader", 1)
int64_t rdi_10 = sx.q(var_c88)
int64_t var_17f8 = var_1cf8
int64_t var_17f0 = *(arg1 + 0x10)
int32_t rax_79 = (rdi_10 + 1).d
int32_t var_17e8 = 0xffff0001
int16_t var_17e4 = 0xffff
int64_t var_17e0 = 0
int64_t var_17d8 = 0

if (rax_79 s> 0)
    sub_1405c4ec0(&var_c90)

sub_140745220(var_c90 + rdi_10 * 0x28, &var_17f8)

if (var_17e0 != 0)
    sub_140a74f90(var_17e0)

int64_t var_1cf0
sub_140b58260(&var_1cf0, u"Particle ID", 1)
int64_t rdi_11 = sx.q(rax_79)
int64_t var_17d0 = var_1cf0
int64_t var_17c8 = data_14396f138
int16_t var_17c0 = data_14396f140
int32_t rax_84 = (rdi_11 + 1).d
int32_t var_17be = 0xffffffff
int64_t var_17b8 = 0
int64_t var_17b0 = 0
var_c88 = rax_84

if (rax_84 s> 0)
    sub_1405c4ec0(&var_c90)

sub_140745220(var_c90 + rdi_11 * 0x28, &var_17d0)

if (var_17b8 != 0)
    sub_140a74f90(var_17b8)

int64_t var_1ce8
sub_140b58260(&var_1ce8, u"Valid", 1)
int64_t rdi_12 = sx.q(var_c78)
int64_t var_17a8 = var_1ce8
int64_t var_17a0 = data_14396f098
int16_t var_1798 = data_14396f0a0
int32_t rax_89 = (rdi_12 + 1).d
int32_t var_1796 = 0xffffffff
int64_t var_1790 = 0
int64_t var_1788 = 0

if (rax_89 s> 0)
    sub_1405c4ec0(&var_c80)

sub_140745220(var_c80 + rdi_12 * 0x28, &var_17a8)

if (var_1790 != 0)
    sub_140a74f90(var_1790)

int64_t var_1ce0
sub_140b58260(&var_1ce0, u"Value", 1)
int64_t rdi_13 = sx.q(rax_89)
int64_t var_19d8 = var_1ce0
int64_t var_19d0 = data_14396f0a8
int16_t var_19c8 = data_14396f0b0
int32_t rax_94 = (rdi_13 + 1).d
int32_t var_19c6 = 0xffffffff
int64_t var_19c0 = 0
int64_t var_19b8 = 0
var_c78 = rax_94

if (rax_94 s> 0)
    sub_1405c4ec0(&var_c80)

sub_140745220(var_c80 + rdi_13 * 0x28, &var_19d8)

if (var_19c0 != 0)
    sub_140a74f90(var_19c0)

void var_d30
int64_t* var_1cd8 = sub_140b58170(&var_d30, "Attribute", 1)
void var_1d98
sub_14077a930(&var_c60, &var_1d98, &var_1cd8, nullptr)
int64_t rdi_14 = sx.q(arg2[1].d)
int32_t var_c68
int32_t var_c68_2 = (((var_c68 & 0xffffffd8) | 0x18) & 0xfffffffe) | 6
int32_t rax_100 = (rdi_14 + 1).d
arg2[1].d = rax_100

if (rax_100 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_14 * 0x88 + *arg2, &var_c98)
sub_1405ae080(&var_c60)
sub_140745ac0(&var_c80)
sub_140745ac0(&var_c90)
int64_t var_c00 = 0
int32_t var_bf8 = 0
int64_t var_c08 = data_143ce0598
int64_t var_bf0 = 0
int32_t var_be8 = 0
int64_t var_be0 = 0
int64_t var_bd0
__builtin_memset(&var_bd0, 0, 0x2c)
int32_t var_ba4 = 0x80
int32_t var_ba0 = 0xffffffff
int32_t var_b9c = 0
int64_t var_b90 = 0
int32_t var_b88 = 0
int64_t var_1cd0
sub_140b58260(&var_1cd0, u"Particle Reader", 1)
int64_t rdi_15 = sx.q(var_bf8)
int64_t var_1780 = var_1cd0
int64_t var_1778 = *(arg1 + 0x10)
int32_t rax_107 = (rdi_15 + 1).d
int32_t var_1770 = 0xffff0001
int16_t var_176c = 0xffff
int64_t var_1768 = 0
int64_t var_1760 = 0

if (rax_107 s> 0)
    sub_1405c4ec0(&var_c00)

sub_140745220(var_c00 + rdi_15 * 0x28, &var_1780)

if (var_1768 != 0)
    sub_140a74f90(var_1768)

int64_t var_1cc8
sub_140b58260(&var_1cc8, u"Particle ID", 1)
int64_t rdi_16 = sx.q(rax_107)
int64_t var_1758 = var_1cc8
int64_t var_1750 = data_14396f138
int16_t var_1748 = data_14396f140
int32_t rax_112 = (rdi_16 + 1).d
int32_t var_1746 = 0xffffffff
int64_t var_1740 = 0
int64_t var_1738 = 0
var_bf8 = rax_112

if (rax_112 s> 0)
    sub_1405c4ec0(&var_c00)

sub_140745220(var_c00 + rdi_16 * 0x28, &var_1758)

if (var_1740 != 0)
    sub_140a74f90(var_1740)

int64_t var_1cc0
sub_140b58260(&var_1cc0, u"Valid", 1)
int64_t rdi_17 = sx.q(var_be8)
int64_t var_1730 = var_1cc0
int64_t var_1728 = data_14396f098
int16_t var_1720 = data_14396f0a0
int32_t rax_117 = (rdi_17 + 1).d
int32_t var_171e = 0xffffffff
int64_t var_1718 = 0
int64_t var_1710 = 0

if (rax_117 s> 0)
    sub_1405c4ec0(&var_bf0)

sub_140745220(var_bf0 + rdi_17 * 0x28, &var_1730)

if (var_1718 != 0)
    sub_140a74f90(var_1718)

int64_t var_1cb8
sub_140b58260(&var_1cb8, u"Value", 1)
int64_t rdi_18 = sx.q(rax_117)
int64_t var_1708 = var_1cb8
int64_t var_1700 = data_14396f098
int16_t var_16f8 = data_14396f0a0
int32_t rax_122 = (rdi_18 + 1).d
int32_t var_16f6 = 0xffffffff
int64_t var_16f0 = 0
int64_t var_16e8 = 0
var_be8 = rax_122

if (rax_122 s> 0)
    sub_1405c4ec0(&var_bf0)

sub_140745220(var_bf0 + rdi_18 * 0x28, &var_1708)

if (var_16f0 != 0)
    sub_140a74f90(var_16f0)

void var_d28
int64_t* var_1cb0 = sub_140b58170(&var_d28, "Attribute", 1)
void var_1d94
sub_14077a930(&var_bd0, &var_1d94, &var_1cb0, nullptr)
int64_t rdi_19 = sx.q(arg2[1].d)
int32_t var_bd8
int32_t var_bd8_2 = (((var_bd8 & 0xffffffd8) | 0x18) & 0xfffffffe) | 6
int32_t rax_128 = (rdi_19 + 1).d
arg2[1].d = rax_128

if (rax_128 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_19 * 0x88 + *arg2, &var_c08)
sub_1405ae080(&var_bd0)
sub_140745ac0(&var_bf0)
sub_140745ac0(&var_c00)
int64_t var_b70 = 0
int32_t var_b68 = 0
int64_t var_b78 = data_143ce05a0
int64_t var_b60 = 0
int32_t var_b58 = 0
int64_t var_b50 = 0
int64_t var_b40
__builtin_memset(&var_b40, 0, 0x2c)
int32_t var_b14 = 0x80
int32_t var_b10 = 0xffffffff
int32_t var_b0c = 0
int64_t var_b00 = 0
int32_t var_af8 = 0
int64_t var_1ca8
sub_140b58260(&var_1ca8, u"Particle Reader", 1)
int64_t rdi_20 = sx.q(var_b68)
int64_t var_16e0 = var_1ca8
int64_t var_16d8 = *(arg1 + 0x10)
int32_t rax_135 = (rdi_20 + 1).d
int32_t var_16d0 = 0xffff0001
int16_t var_16cc = 0xffff
int64_t var_16c8 = 0
int64_t var_16c0 = 0

if (rax_135 s> 0)
    sub_1405c4ec0(&var_b70)

sub_140745220(var_b70 + rdi_20 * 0x28, &var_16e0)

if (var_16c8 != 0)
    sub_140a74f90(var_16c8)

int64_t var_1ca0
sub_140b58260(&var_1ca0, u"Particle ID", 1)
int64_t rdi_21 = sx.q(rax_135)
int64_t var_16b8 = var_1ca0
int64_t var_16b0 = data_14396f138
int16_t var_16a8 = data_14396f140
int32_t rax_140 = (rdi_21 + 1).d
int32_t var_16a6 = 0xffffffff
int64_t var_16a0 = 0
int64_t var_1698 = 0
var_b68 = rax_140

if (rax_140 s> 0)
    sub_1405c4ec0(&var_b70)

sub_140745220(var_b70 + rdi_21 * 0x28, &var_16b8)

if (var_16a0 != 0)
    sub_140a74f90(var_16a0)

int64_t var_1c98
sub_140b58260(&var_1c98, u"Valid", 1)
int64_t rdi_22 = sx.q(var_b58)
int64_t var_1690 = var_1c98
int64_t var_1688 = data_14396f098
int16_t var_1680 = data_14396f0a0
int32_t rax_145 = (rdi_22 + 1).d
int32_t var_167e = 0xffffffff
int64_t var_1678 = 0
int64_t var_1670 = 0

if (rax_145 s> 0)
    sub_1405c4ec0(&var_b60)

sub_140745220(var_b60 + rdi_22 * 0x28, &var_1690)

if (var_1678 != 0)
    sub_140a74f90(var_1678)

int64_t var_1c90
sub_140b58260(&var_1c90, u"Value", 1)
int64_t rdi_23 = sx.q(rax_145)
int64_t var_1668 = var_1c90
int64_t var_1660 = data_14396f088
int16_t var_1658 = data_14396f090
int32_t rax_150 = (rdi_23 + 1).d
int32_t var_1656 = 0xffffffff
int64_t var_1650 = 0
int64_t var_1648 = 0
var_b58 = rax_150

if (rax_150 s> 0)
    sub_1405c4ec0(&var_b60)

sub_140745220(var_b60 + rdi_23 * 0x28, &var_1668)

if (var_1650 != 0)
    sub_140a74f90(var_1650)

void var_cc8
int64_t* var_1c88 = sub_140b58170(&var_cc8, "Attribute", 1)
void var_1d90
sub_14077a930(&var_b40, &var_1d90, &var_1c88, nullptr)
int64_t rdi_24 = sx.q(arg2[1].d)
int32_t var_b48
int32_t var_b48_2 = (((var_b48 & 0xffffffd8) | 0x18) & 0xfffffffe) | 6
int32_t rax_156 = (rdi_24 + 1).d
arg2[1].d = rax_156

if (rax_156 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_24 * 0x88 + *arg2, &var_b78)
sub_1405ae080(&var_b40)
sub_140745ac0(&var_b60)
sub_140745ac0(&var_b70)
int64_t var_ae0 = 0
int32_t var_ad8 = 0
int64_t var_ae8 = data_143ce05a8
int64_t var_ad0 = 0
int32_t var_ac8 = 0
int64_t var_ac0 = 0
int64_t var_ab0
__builtin_memset(&var_ab0, 0, 0x2c)
int32_t var_a84 = 0x80
int32_t var_a80 = 0xffffffff
int32_t var_a7c = 0
int64_t var_a70 = 0
int32_t var_a68 = 0
int64_t var_1c80
sub_140b58260(&var_1c80, u"Particle Reader", 1)
int64_t rdi_25 = sx.q(var_ad8)
int64_t var_1640 = var_1c80
int64_t var_1638 = *(arg1 + 0x10)
int32_t rax_163 = (rdi_25 + 1).d
int32_t var_1630 = 0xffff0001
int16_t var_162c = 0xffff
int64_t var_1628 = 0
int64_t var_1620 = 0

if (rax_163 s> 0)
    sub_1405c4ec0(&var_ae0)

sub_140745220(var_ae0 + rdi_25 * 0x28, &var_1640)

if (var_1628 != 0)
    sub_140a74f90(var_1628)

int64_t var_1c78
sub_140b58260(&var_1c78, u"Particle ID", 1)
int64_t rdi_26 = sx.q(rax_163)
int64_t var_1618 = var_1c78
int64_t var_1610 = data_14396f138
int16_t var_1608 = data_14396f140
int32_t rax_168 = (rdi_26 + 1).d
int32_t var_1606 = 0xffffffff
int64_t var_1600 = 0
int64_t var_15f8 = 0
var_ad8 = rax_168

if (rax_168 s> 0)
    sub_1405c4ec0(&var_ae0)

sub_140745220(var_ae0 + rdi_26 * 0x28, &var_1618)

if (var_1600 != 0)
    sub_140a74f90(var_1600)

int64_t var_1c70
sub_140b58260(&var_1c70, u"Valid", 1)
int64_t rdi_27 = sx.q(var_ac8)
int64_t var_15f0 = var_1c70
int64_t var_15e8 = data_14396f098
int16_t var_15e0 = data_14396f0a0
int32_t rax_173 = (rdi_27 + 1).d
int32_t var_15de = 0xffffffff
int64_t var_15d8 = 0
int64_t var_15d0 = 0

if (rax_173 s> 0)
    sub_1405c4ec0(&var_ad0)

sub_140745220(var_ad0 + rdi_27 * 0x28, &var_15f0)

if (var_15d8 != 0)
    sub_140a74f90(var_15d8)

int64_t var_1c68
sub_140b58260(&var_1c68, u"Value", 1)
int64_t rdi_28 = sx.q(rax_173)
int64_t var_15c8 = var_1c68
int64_t var_15c0 = data_14396f0b8
int16_t var_15b8 = data_14396f0c0
int32_t rax_178 = (rdi_28 + 1).d
int32_t var_15b6 = 0xffffffff
int64_t var_15b0 = 0
int64_t var_15a8 = 0
var_ac8 = rax_178

if (rax_178 s> 0)
    sub_1405c4ec0(&var_ad0)

sub_140745220(var_ad0 + rdi_28 * 0x28, &var_15c8)

if (var_15b0 != 0)
    sub_140a74f90(var_15b0)

void var_cb8
int64_t* var_1c60 = sub_140b58170(&var_cb8, "Attribute", 1)
void var_1d8c
sub_14077a930(&var_ab0, &var_1d8c, &var_1c60, nullptr)
int64_t rdi_29 = sx.q(arg2[1].d)
int32_t var_ab8
int32_t var_ab8_2 = (((var_ab8 & 0xffffffd8) | 0x18) & 0xfffffffe) | 6
int32_t rax_184 = (rdi_29 + 1).d
arg2[1].d = rax_184

if (rax_184 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_29 * 0x88 + *arg2, &var_ae8)
sub_1405ae080(&var_ab0)
sub_140745ac0(&var_ad0)
sub_140745ac0(&var_ae0)
int64_t var_a50 = 0
int32_t var_a48 = 0
int64_t var_a58 = data_143ce05b0
int64_t var_a40 = 0
int32_t var_a38 = 0
int64_t var_a30 = 0
int64_t var_a20
__builtin_memset(&var_a20, 0, 0x2c)
int32_t var_9f4 = 0x80
int32_t var_9f0 = 0xffffffff
int32_t var_9ec = 0
int64_t var_9e0 = 0
int32_t var_9d8 = 0
int64_t var_1c58
sub_140b58260(&var_1c58, u"Particle Reader", 1)
int64_t rdi_30 = sx.q(var_a48)
int64_t var_15a0 = var_1c58
int64_t var_1598 = *(arg1 + 0x10)
int32_t rax_191 = (rdi_30 + 1).d
int32_t var_1590 = 0xffff0001
int16_t var_158c = 0xffff
int64_t var_1588 = 0
int64_t var_1580 = 0

if (rax_191 s> 0)
    sub_1405c4ec0(&var_a50)

sub_140745220(var_a50 + rdi_30 * 0x28, &var_15a0)

if (var_1588 != 0)
    sub_140a74f90(var_1588)

int64_t var_1c50
sub_140b58260(&var_1c50, u"Particle ID", 1)
int64_t rdi_31 = sx.q(rax_191)
int64_t var_1578 = var_1c50
int64_t var_1570 = data_14396f138
int16_t var_1568 = data_14396f140
int32_t rax_196 = (rdi_31 + 1).d
int32_t var_1566 = 0xffffffff
int64_t var_1560 = 0
int64_t var_1558 = 0
var_a48 = rax_196

if (rax_196 s> 0)
    sub_1405c4ec0(&var_a50)

sub_140745220(var_a50 + rdi_31 * 0x28, &var_1578)

if (var_1560 != 0)
    sub_140a74f90(var_1560)

int64_t var_1c48
sub_140b58260(&var_1c48, u"Valid", 1)
int64_t rdi_32 = sx.q(var_a38)
int64_t var_1550 = var_1c48
int64_t var_1548 = data_14396f098
int16_t var_1540 = data_14396f0a0
int32_t rax_201 = (rdi_32 + 1).d
int32_t var_153e = 0xffffffff
int64_t var_1538 = 0
int64_t var_1530 = 0

if (rax_201 s> 0)
    sub_1405c4ec0(&var_a40)

sub_140745220(var_a40 + rdi_32 * 0x28, &var_1550)

if (var_1538 != 0)
    sub_140a74f90(var_1538)

int64_t var_1c40
sub_140b58260(&var_1c40, u"Value", 1)
int64_t rdi_33 = sx.q(rax_201)
int64_t var_1528 = var_1c40
int64_t var_1520 = data_14396f0c8
int16_t var_1518 = data_14396f0d0
int32_t rax_206 = (rdi_33 + 1).d
int32_t var_1516 = 0xffffffff
int64_t var_1510 = 0
int64_t var_1508 = 0
var_a38 = rax_206

if (rax_206 s> 0)
    sub_1405c4ec0(&var_a40)

sub_140745220(var_a40 + rdi_33 * 0x28, &var_1528)

if (var_1510 != 0)
    sub_140a74f90(var_1510)

void var_cb0
int64_t* var_1c38 = sub_140b58170(&var_cb0, "Attribute", 1)
void var_1d88
sub_14077a930(&var_a20, &var_1d88, &var_1c38, nullptr)
int64_t rdi_34 = sx.q(arg2[1].d)
int32_t var_a28
int32_t var_a28_2 = (((var_a28 & 0xffffffd8) | 0x18) & 0xfffffffe) | 6
int32_t rax_212 = (rdi_34 + 1).d
arg2[1].d = rax_212

if (rax_212 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_34 * 0x88 + *arg2, &var_a58)
sub_1405ae080(&var_a20)
sub_140745ac0(&var_a40)
sub_140745ac0(&var_a50)
int64_t var_9c0 = 0
int32_t var_9b8 = 0
int64_t var_9c8 = data_143ce05b8
int64_t var_9b0 = 0
int32_t var_9a8 = 0
int64_t var_9a0 = 0
int64_t var_990
__builtin_memset(&var_990, 0, 0x2c)
int32_t var_964 = 0x80
int32_t var_960 = 0xffffffff
int32_t var_95c = 0
int64_t var_950 = 0
int32_t var_948 = 0
int64_t var_1c30
sub_140b58260(&var_1c30, u"Particle Reader", 1)
int64_t rdi_35 = sx.q(var_9b8)
int64_t var_1500 = var_1c30
int64_t var_14f8 = *(arg1 + 0x10)
int32_t rax_219 = (rdi_35 + 1).d
int32_t var_14f0 = 0xffff0001
int16_t var_14ec = 0xffff
int64_t var_14e8 = 0
int64_t var_14e0 = 0

if (rax_219 s> 0)
    sub_1405c4ec0(&var_9c0)

sub_140745220(var_9c0 + rdi_35 * 0x28, &var_1500)

if (var_14e8 != 0)
    sub_140a74f90(var_14e8)

int64_t var_1c28
sub_140b58260(&var_1c28, u"Particle ID", 1)
int64_t rdi_36 = sx.q(rax_219)
int64_t var_14d8 = var_1c28
int64_t var_14d0 = data_14396f138
int16_t var_14c8 = data_14396f140
int32_t rax_224 = (rdi_36 + 1).d
int32_t var_14c6 = 0xffffffff
int64_t var_14c0 = 0
int64_t var_14b8 = 0
var_9b8 = rax_224

if (rax_224 s> 0)
    sub_1405c4ec0(&var_9c0)

sub_140745220(var_9c0 + rdi_36 * 0x28, &var_14d8)

if (var_14c0 != 0)
    sub_140a74f90(var_14c0)

int64_t var_1c20
sub_140b58260(&var_1c20, u"Valid", 1)
int64_t rdi_37 = sx.q(var_9a8)
int64_t var_14b0 = var_1c20
int64_t var_14a8 = data_14396f098
int16_t var_14a0 = data_14396f0a0
int32_t rax_229 = (rdi_37 + 1).d
int32_t var_149e = 0xffffffff
int64_t var_1498 = 0
int64_t var_1490 = 0

if (rax_229 s> 0)
    sub_1405c4ec0(&var_9b0)

sub_140745220(var_9b0 + rdi_37 * 0x28, &var_14b0)

if (var_1498 != 0)
    sub_140a74f90(var_1498)

int64_t var_1c18
sub_140b58260(&var_1c18, u"Value", 1)
int64_t rdi_38 = sx.q(rax_229)
int64_t var_1488 = var_1c18
int64_t var_1480 = data_14396f0d8
int16_t var_1478 = data_14396f0e0
int32_t rax_234 = (rdi_38 + 1).d
int32_t var_1476 = 0xffffffff
int64_t var_1470 = 0
int64_t var_1468 = 0
var_9a8 = rax_234

if (rax_234 s> 0)
    sub_1405c4ec0(&var_9b0)

sub_140745220(var_9b0 + rdi_38 * 0x28, &var_1488)

if (var_1470 != 0)
    sub_140a74f90(var_1470)

void var_ca8
int64_t* var_1c10 = sub_140b58170(&var_ca8, "Attribute", 1)
void var_1d84
sub_14077a930(&var_990, &var_1d84, &var_1c10, nullptr)
int64_t rdi_39 = sx.q(arg2[1].d)
int32_t var_998
int32_t var_998_2 = (((var_998 & 0xffffffd8) | 0x18) & 0xfffffffe) | 6
int32_t rax_240 = (rdi_39 + 1).d
arg2[1].d = rax_240

if (rax_240 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_39 * 0x88 + *arg2, &var_9c8)
sub_1405ae080(&var_990)
sub_140745ac0(&var_9b0)
sub_140745ac0(&var_9c0)
int64_t var_6f8
sub_140745040(&var_6f8)
var_6f8 = data_143ce05c0
int64_t var_1c08
sub_140b58260(&var_1c08, u"Particle Reader", 1)
int32_t var_6e8
int64_t rdi_40 = sx.q(var_6e8)
int64_t var_1460 = var_1c08
int64_t var_1458 = *(arg1 + 0x10)
int32_t rax_244 = (rdi_40 + 1).d
int32_t var_1450 = 0xffff0001
int16_t var_144c = 0xffff
int64_t var_1448 = 0
int64_t var_1440 = 0
int64_t var_6f0
int32_t var_6e4

if (rax_244 s> var_6e4)
    sub_1405c4ec0(&var_6f0)

sub_140745220(var_6f0 + rdi_40 * 0x28, &var_1460)

if (var_1448 != 0)
    sub_140a74f90(var_1448)

int64_t var_1c00
sub_140b58260(&var_1c00, u"Particle ID", 1)
int64_t rdi_41 = sx.q(rax_244)
int64_t var_1438 = var_1c00
int64_t var_1430 = data_14396f138
int16_t var_1428 = data_14396f140
int32_t rax_249 = (rdi_41 + 1).d
int32_t var_1426 = 0xffffffff
int64_t var_1420 = 0
int64_t var_1418 = 0
int32_t var_6e8_2 = rax_249

if (rax_249 s> var_6e4)
    sub_1405c4ec0(&var_6f0)

sub_140745220(var_6f0 + rdi_41 * 0x28, &var_1438)

if (var_1420 != 0)
    sub_140a74f90(var_1420)

int64_t var_1bf8
sub_140b58260(&var_1bf8, u"Valid", 1)
int32_t var_6d8
int64_t rdi_42 = sx.q(var_6d8)
int64_t var_1410 = var_1bf8
int64_t var_1408 = data_14396f098
int16_t var_1400 = data_14396f0a0
int32_t rax_254 = (rdi_42 + 1).d
int32_t var_13fe = 0xffffffff
int64_t var_13f8 = 0
int64_t var_13f0 = 0
int64_t var_6e0
int32_t var_6d4

if (rax_254 s> var_6d4)
    sub_1405c4ec0(&var_6e0)

sub_140745220(var_6e0 + rdi_42 * 0x28, &var_1410)

if (var_13f8 != 0)
    sub_140a74f90(var_13f8)

int64_t var_1bf0
sub_140b58260(&var_1bf0, u"Value", 1)
int64_t rdi_43 = sx.q(rax_254)
int64_t var_13e8 = var_1bf0
int64_t var_13e0 = data_14396f0e8
int16_t var_13d8 = data_14396f0f0
int32_t rax_259 = (rdi_43 + 1).d
int32_t var_13d6 = 0xffffffff
int64_t var_13d0 = 0
int64_t var_13c8 = 0
int32_t var_6d8_2 = rax_259

if (rax_259 s> var_6d4)
    sub_1405c4ec0(&var_6e0)

sub_140745220(var_6e0 + rdi_43 * 0x28, &var_13e8)

if (var_13d0 != 0)
    sub_140a74f90(var_13d0)

void var_d20
int64_t* var_1be8 = sub_140b58170(&var_d20, "Attribute", 1)
void var_1d80
void var_6c0
sub_14077a930(&var_6c0, &var_1d80, &var_1be8, nullptr)
int64_t rdi_44 = sx.q(arg2[1].d)
int32_t var_6c8
int32_t var_6c8_1 = (var_6c8 & 0xfffffffe) | 6
int32_t rax_265 = (rdi_44 + 1).d
arg2[1].d = rax_265

if (rax_265 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_44 * 0x88 + *arg2, &var_6f8)
sub_1405ae080(&var_6c0)
sub_140745ac0(&var_6e0)
sub_140745ac0(&var_6f0)
int64_t var_668
sub_140745040(&var_668)
var_668 = data_143ce05c8
int64_t var_1be0
sub_140b58260(&var_1be0, u"Particle Reader", 1)
int32_t var_658
int64_t rdi_45 = sx.q(var_658)
int64_t var_13c0 = var_1be0
int64_t var_13b8 = *(arg1 + 0x10)
int32_t rax_269 = (rdi_45 + 1).d
int32_t var_13b0 = 0xffff0001
int16_t var_13ac = 0xffff
int64_t var_13a8 = 0
int64_t var_13a0 = 0
int64_t var_660
int32_t var_654

if (rax_269 s> var_654)
    sub_1405c4ec0(&var_660)

sub_140745220(var_660 + rdi_45 * 0x28, &var_13c0)

if (var_13a8 != 0)
    sub_140a74f90(var_13a8)

int64_t var_1bd8
sub_140b58260(&var_1bd8, u"Particle ID", 1)
int64_t rdi_46 = sx.q(rax_269)
int64_t var_1398 = var_1bd8
int64_t var_1390 = data_14396f138
int16_t var_1388 = data_14396f140
int32_t rax_274 = (rdi_46 + 1).d
int32_t var_1386 = 0xffffffff
int64_t var_1380 = 0
int64_t var_1378 = 0
int32_t var_658_2 = rax_274

if (rax_274 s> var_654)
    sub_1405c4ec0(&var_660)

sub_140745220(var_660 + rdi_46 * 0x28, &var_1398)

if (var_1380 != 0)
    sub_140a74f90(var_1380)

int64_t var_1bd0
sub_140b58260(&var_1bd0, u"Valid", 1)
int32_t var_648
int64_t rdi_47 = sx.q(var_648)
int64_t var_1370 = var_1bd0
int64_t var_1368 = data_14396f098
int16_t var_1360 = data_14396f0a0
int32_t rax_279 = (rdi_47 + 1).d
int32_t var_135e = 0xffffffff
int64_t var_1358 = 0
int64_t var_1350 = 0
int64_t var_650
int32_t var_644

if (rax_279 s> var_644)
    sub_1405c4ec0(&var_650)

sub_140745220(var_650 + rdi_47 * 0x28, &var_1370)

if (var_1358 != 0)
    sub_140a74f90(var_1358)

int64_t var_1bc8
sub_140b58260(&var_1bc8, u"Value", 1)
int64_t rdi_48 = sx.q(rax_279)
int64_t var_1348 = var_1bc8
int64_t var_1340 = data_14396f0f8
int16_t var_1338 = data_14396f100
int32_t rax_284 = (rdi_48 + 1).d
int32_t var_1336 = 0xffffffff
int64_t var_1330 = 0
int64_t var_1328 = 0
int32_t var_648_2 = rax_284

if (rax_284 s> var_644)
    sub_1405c4ec0(&var_650)

sub_140745220(var_650 + rdi_48 * 0x28, &var_1348)

if (var_1330 != 0)
    sub_140a74f90(var_1330)

void var_d18
int64_t* var_1bc0 = sub_140b58170(&var_d18, "Attribute", 1)
void var_1d7c
void var_630
sub_14077a930(&var_630, &var_1d7c, &var_1bc0, nullptr)
int64_t rdi_49 = sx.q(arg2[1].d)
int32_t var_638
int32_t var_638_1 = (var_638 & 0xfffffffe) | 6
int32_t rax_290 = (rdi_49 + 1).d
arg2[1].d = rax_290

if (rax_290 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_49 * 0x88 + *arg2, &var_668)
sub_1405ae080(&var_630)
sub_140745ac0(&var_650)
sub_140745ac0(&var_660)
int64_t var_5d8
sub_140745040(&var_5d8)
var_5d8 = data_143ce05d0
int64_t var_1bb8
sub_140b58260(&var_1bb8, u"Particle Reader", 1)
int32_t var_5c8
int64_t rdi_50 = sx.q(var_5c8)
int64_t var_1320 = var_1bb8
int64_t var_1318 = *(arg1 + 0x10)
int32_t rax_294 = (rdi_50 + 1).d
int32_t var_1310 = 0xffff0001
int16_t var_130c = 0xffff
int64_t var_1308 = 0
int64_t var_1300 = 0
int64_t var_5d0
int32_t var_5c4

if (rax_294 s> var_5c4)
    sub_1405c4ec0(&var_5d0)

sub_140745220(var_5d0 + rdi_50 * 0x28, &var_1320)

if (var_1308 != 0)
    sub_140a74f90(var_1308)

int64_t var_1bb0
sub_140b58260(&var_1bb0, u"Particle ID", 1)
int64_t rdi_51 = sx.q(rax_294)
int64_t var_12f8 = var_1bb0
int64_t var_12f0 = data_14396f138
int16_t var_12e8 = data_14396f140
int32_t rax_299 = (rdi_51 + 1).d
int32_t var_12e6 = 0xffffffff
int64_t var_12e0 = 0
int64_t var_12d8 = 0
int32_t var_5c8_2 = rax_299

if (rax_299 s> var_5c4)
    sub_1405c4ec0(&var_5d0)

sub_140745220(var_5d0 + rdi_51 * 0x28, &var_12f8)

if (var_12e0 != 0)
    sub_140a74f90(var_12e0)

int64_t var_1ba8
sub_140b58260(&var_1ba8, u"Valid", 1)
int32_t var_5b8
int64_t rdi_52 = sx.q(var_5b8)
int64_t var_12d0 = var_1ba8
int64_t var_12c8 = data_14396f098
int16_t var_12c0 = data_14396f0a0
int32_t rax_304 = (rdi_52 + 1).d
int32_t var_12be = 0xffffffff
int64_t var_12b8 = 0
int64_t var_12b0 = 0
int64_t var_5c0
int32_t var_5b4

if (rax_304 s> var_5b4)
    sub_1405c4ec0(&var_5c0)

sub_140745220(var_5c0 + rdi_52 * 0x28, &var_12d0)

if (var_12b8 != 0)
    sub_140a74f90(var_12b8)

int64_t var_1ba0
sub_140b58260(&var_1ba0, u"Value", 1)
int64_t rdi_53 = sx.q(rax_304)
int64_t var_12a8 = var_1ba0
int64_t var_12a0 = data_14396f138
int16_t var_1298 = data_14396f140
int32_t rax_309 = (rdi_53 + 1).d
int32_t var_1296 = 0xffffffff
int64_t var_1290 = 0
int64_t var_1288 = 0
int32_t var_5b8_2 = rax_309

if (rax_309 s> var_5b4)
    sub_1405c4ec0(&var_5c0)

sub_140745220(var_5c0 + rdi_53 * 0x28, &var_12a8)

if (var_1290 != 0)
    sub_140a74f90(var_1290)

void var_d10
int64_t* var_1b98 = sub_140b58170(&var_d10, "Attribute", 1)
void var_1d78
void var_5a0
sub_14077a930(&var_5a0, &var_1d78, &var_1b98, nullptr)
int64_t rdi_54 = sx.q(arg2[1].d)
int32_t var_5a8
int32_t var_5a8_1 = (var_5a8 & 0xfffffffe) | 6
int32_t rax_315 = (rdi_54 + 1).d
arg2[1].d = rax_315

if (rax_315 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_54 * 0x88 + *arg2, &var_5d8)
sub_1405ae080(&var_5a0)
sub_140745ac0(&var_5c0)
sub_140745ac0(&var_5d0)
int64_t var_548
sub_140745040(&var_548)
var_548 = data_143ce05d8
int64_t var_1b90
sub_140b58260(&var_1b90, u"Particle Reader", 1)
int32_t var_538
int64_t rdi_55 = sx.q(var_538)
int64_t var_1280 = var_1b90
int64_t var_1278 = *(arg1 + 0x10)
int32_t rax_319 = (rdi_55 + 1).d
int32_t var_1270 = 0xffff0001
int16_t var_126c = 0xffff
int64_t var_1268 = 0
int64_t var_1260 = 0
int64_t var_540
int32_t var_534

if (rax_319 s> var_534)
    sub_1405c4ec0(&var_540)

sub_140745220(var_540 + rdi_55 * 0x28, &var_1280)

if (var_1268 != 0)
    sub_140a74f90(var_1268)

int64_t var_1b88
sub_140b58260(&var_1b88, u"Particle Index", 1)
int64_t rdi_56 = sx.q(rax_319)
int64_t var_1258 = var_1b88
int64_t var_1250 = data_14396f0a8
int16_t var_1248 = data_14396f0b0
int32_t rax_324 = (rdi_56 + 1).d
int32_t var_1246 = 0xffffffff
int64_t var_1240 = 0
int64_t var_1238 = 0
int32_t var_538_2 = rax_324

if (rax_324 s> var_534)
    sub_1405c4ec0(&var_540)

sub_140745220(var_540 + rdi_56 * 0x28, &var_1258)

if (var_1240 != 0)
    sub_140a74f90(var_1240)

int64_t var_1b80
sub_140b58260(&var_1b80, u"Valid", 1)
int32_t var_528
int64_t rdi_57 = sx.q(var_528)
int64_t var_1230 = var_1b80
int64_t var_1228 = data_14396f098
int16_t var_1220 = data_14396f0a0
int32_t rax_329 = (rdi_57 + 1).d
int32_t var_121e = 0xffffffff
int64_t var_1218 = 0
int64_t var_1210 = 0
int64_t var_530
int32_t var_524

if (rax_329 s> var_524)
    sub_1405c4ec0(&var_530)

sub_140745220(var_530 + rdi_57 * 0x28, &var_1230)

if (var_1218 != 0)
    sub_140a74f90(var_1218)

int64_t var_1b78
sub_140b58260(&var_1b78, u"Value", 1)
int64_t rdi_58 = sx.q(rax_329)
int64_t var_1208 = var_1b78
int64_t var_1200 = data_14396f0a8
int16_t var_11f8 = data_14396f0b0
int32_t rax_334 = (rdi_58 + 1).d
int32_t var_11f6 = 0xffffffff
int64_t var_11f0 = 0
int64_t var_11e8 = 0
int32_t var_528_2 = rax_334

if (rax_334 s> var_524)
    sub_1405c4ec0(&var_530)

sub_140745220(var_530 + rdi_58 * 0x28, &var_1208)

if (var_11f0 != 0)
    sub_140a74f90(var_11f0)

void var_d08
int64_t* var_1b70 = sub_140b58170(&var_d08, "Attribute", 1)
void var_1d74
void var_510
sub_14077a930(&var_510, &var_1d74, &var_1b70, nullptr)
int64_t rdi_59 = sx.q(arg2[1].d)
int32_t var_518
int32_t var_518_1 = (var_518 & 0xfffffffe) | 6
int32_t rax_340 = (rdi_59 + 1).d
arg2[1].d = rax_340

if (rax_340 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_59 * 0x88 + *arg2, &var_548)
sub_1405ae080(&var_510)
sub_140745ac0(&var_530)
sub_140745ac0(&var_540)
int64_t var_4b8
sub_140745040(&var_4b8)
var_4b8 = data_143ce05e0
int64_t var_1b68
sub_140b58260(&var_1b68, u"Particle Reader", 1)
int32_t var_4a8
int64_t rdi_60 = sx.q(var_4a8)
int64_t var_11e0 = var_1b68
int64_t var_11d8 = *(arg1 + 0x10)
int32_t rax_344 = (rdi_60 + 1).d
int32_t var_11d0 = 0xffff0001
int16_t var_11cc = 0xffff
int64_t var_11c8 = 0
int64_t var_11c0 = 0
int64_t var_4b0
int32_t var_4a4

if (rax_344 s> var_4a4)
    sub_1405c4ec0(&var_4b0)

sub_140745220(var_4b0 + rdi_60 * 0x28, &var_11e0)

if (var_11c8 != 0)
    sub_140a74f90(var_11c8)

int64_t var_1b60
sub_140b58260(&var_1b60, u"Particle Index", 1)
int64_t rdi_61 = sx.q(rax_344)
int64_t var_11b8 = var_1b60
int64_t var_11b0 = data_14396f0a8
int16_t var_11a8 = data_14396f0b0
int32_t rax_349 = (rdi_61 + 1).d
int32_t var_11a6 = 0xffffffff
int64_t var_11a0 = 0
int64_t var_1198 = 0
int32_t var_4a8_2 = rax_349

if (rax_349 s> var_4a4)
    sub_1405c4ec0(&var_4b0)

sub_140745220(var_4b0 + rdi_61 * 0x28, &var_11b8)

if (var_11a0 != 0)
    sub_140a74f90(var_11a0)

int64_t var_1b58
sub_140b58260(&var_1b58, u"Valid", 1)
int32_t var_498
int64_t rdi_62 = sx.q(var_498)
int64_t var_1190 = var_1b58
int64_t var_1188 = data_14396f098
int16_t var_1180 = data_14396f0a0
int32_t rax_354 = (rdi_62 + 1).d
int32_t var_117e = 0xffffffff
int64_t var_1178 = 0
int64_t var_1170 = 0
int64_t var_4a0
int32_t var_494

if (rax_354 s> var_494)
    sub_1405c4ec0(&var_4a0)

sub_140745220(var_4a0 + rdi_62 * 0x28, &var_1190)

if (var_1178 != 0)
    sub_140a74f90(var_1178)

int64_t var_1b50
sub_140b58260(&var_1b50, u"Value", 1)
int64_t rdi_63 = sx.q(rax_354)
int64_t var_1168 = var_1b50
int64_t var_1160 = data_14396f098
int16_t var_1158 = data_14396f0a0
int32_t rax_359 = (rdi_63 + 1).d
int32_t var_1156 = 0xffffffff
int64_t var_1150 = 0
int64_t var_1148 = 0
int32_t var_498_2 = rax_359

if (rax_359 s> var_494)
    sub_1405c4ec0(&var_4a0)

sub_140745220(var_4a0 + rdi_63 * 0x28, &var_1168)

if (var_1150 != 0)
    sub_140a74f90(var_1150)

void var_d00
int64_t* var_1b48 = sub_140b58170(&var_d00, "Attribute", 1)
void var_1d70
void var_480
sub_14077a930(&var_480, &var_1d70, &var_1b48, nullptr)
int64_t rdi_64 = sx.q(arg2[1].d)
int32_t var_488
int32_t var_488_1 = (var_488 & 0xfffffffe) | 6
int32_t rax_365 = (rdi_64 + 1).d
arg2[1].d = rax_365

if (rax_365 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_64 * 0x88 + *arg2, &var_4b8)
sub_1405ae080(&var_480)
sub_140745ac0(&var_4a0)
sub_140745ac0(&var_4b0)
int64_t var_428
sub_140745040(&var_428)
var_428 = data_143ce05e8
int64_t var_1b40
sub_140b58260(&var_1b40, u"Particle Reader", 1)
int32_t var_418
int64_t rdi_65 = sx.q(var_418)
int64_t var_1140 = var_1b40
int64_t var_1138 = *(arg1 + 0x10)
int32_t rax_369 = (rdi_65 + 1).d
int32_t var_1130 = 0xffff0001
int16_t var_112c = 0xffff
int64_t var_1128 = 0
int64_t var_1120 = 0
int64_t var_420
int32_t var_414

if (rax_369 s> var_414)
    sub_1405c4ec0(&var_420)

sub_140745220(var_420 + rdi_65 * 0x28, &var_1140)

if (var_1128 != 0)
    sub_140a74f90(var_1128)

int64_t var_1b38
sub_140b58260(&var_1b38, u"Particle Index", 1)
int64_t rdi_66 = sx.q(rax_369)
int64_t var_1118 = var_1b38
int64_t var_1110 = data_14396f0a8
int16_t var_1108 = data_14396f0b0
int32_t rax_374 = (rdi_66 + 1).d
int32_t var_1106 = 0xffffffff
int64_t var_1100 = 0
int64_t var_10f8 = 0
int32_t var_418_2 = rax_374

if (rax_374 s> var_414)
    sub_1405c4ec0(&var_420)

sub_140745220(var_420 + rdi_66 * 0x28, &var_1118)

if (var_1100 != 0)
    sub_140a74f90(var_1100)

int64_t var_1b30
sub_140b58260(&var_1b30, u"Valid", 1)
int32_t var_408
int64_t rdi_67 = sx.q(var_408)
int64_t var_10f0 = var_1b30
int64_t var_10e8 = data_14396f098
int16_t var_10e0 = data_14396f0a0
int32_t rax_379 = (rdi_67 + 1).d
int32_t var_10de = 0xffffffff
int64_t var_10d8 = 0
int64_t var_10d0 = 0
int64_t var_410
int32_t var_404

if (rax_379 s> var_404)
    sub_1405c4ec0(&var_410)

sub_140745220(var_410 + rdi_67 * 0x28, &var_10f0)

if (var_10d8 != 0)
    sub_140a74f90(var_10d8)

int64_t var_1b28
sub_140b58260(&var_1b28, u"Value", 1)
int64_t rdi_68 = sx.q(rax_379)
int64_t var_10c8 = var_1b28
int64_t var_10c0 = data_14396f088
int16_t var_10b8 = data_14396f090
int32_t rax_384 = (rdi_68 + 1).d
int32_t var_10b6 = 0xffffffff
int64_t var_10b0 = 0
int64_t var_10a8 = 0
int32_t var_408_2 = rax_384

if (rax_384 s> var_404)
    sub_1405c4ec0(&var_410)

sub_140745220(var_410 + rdi_68 * 0x28, &var_10c8)

if (var_10b0 != 0)
    sub_140a74f90(var_10b0)

void var_cf8
int64_t* var_1b20 = sub_140b58170(&var_cf8, "Attribute", 1)
void var_1d6c
void var_3f0
sub_14077a930(&var_3f0, &var_1d6c, &var_1b20, nullptr)
int64_t rdi_69 = sx.q(arg2[1].d)
int32_t var_3f8
int32_t var_3f8_1 = (var_3f8 & 0xfffffffe) | 6
int32_t rax_390 = (rdi_69 + 1).d
arg2[1].d = rax_390

if (rax_390 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_69 * 0x88 + *arg2, &var_428)
sub_1405ae080(&var_3f0)
sub_140745ac0(&var_410)
sub_140745ac0(&var_420)
int64_t var_398
sub_140745040(&var_398)
var_398 = data_143ce05f0
int64_t var_1b18
sub_140b58260(&var_1b18, u"Particle Reader", 1)
int32_t var_388
int64_t rdi_70 = sx.q(var_388)
int64_t var_10a0 = var_1b18
int64_t var_1098 = *(arg1 + 0x10)
int32_t rax_394 = (rdi_70 + 1).d
int32_t var_1090 = 0xffff0001
int16_t var_108c = 0xffff
int64_t var_1088 = 0
int64_t var_1080 = 0
int64_t var_390
int32_t var_384

if (rax_394 s> var_384)
    sub_1405c4ec0(&var_390)

sub_140745220(var_390 + rdi_70 * 0x28, &var_10a0)

if (var_1088 != 0)
    sub_140a74f90(var_1088)

int64_t var_1b10
sub_140b58260(&var_1b10, u"Particle Index", 1)
int64_t rdi_71 = sx.q(rax_394)
int64_t var_1078 = var_1b10
int64_t var_1070 = data_14396f0a8
int16_t var_1068 = data_14396f0b0
int32_t rax_399 = (rdi_71 + 1).d
int32_t var_1066 = 0xffffffff
int64_t var_1060 = 0
int64_t var_1058 = 0
int32_t var_388_2 = rax_399

if (rax_399 s> var_384)
    sub_1405c4ec0(&var_390)

sub_140745220(var_390 + rdi_71 * 0x28, &var_1078)

if (var_1060 != 0)
    sub_140a74f90(var_1060)

int64_t var_1b08
sub_140b58260(&var_1b08, u"Valid", 1)
int32_t var_378
int64_t rdi_72 = sx.q(var_378)
int64_t var_1050 = var_1b08
int64_t var_1048 = data_14396f098
int16_t var_1040 = data_14396f0a0
int32_t rax_404 = (rdi_72 + 1).d
int32_t var_103e = 0xffffffff
int64_t var_1038 = 0
int64_t var_1030 = 0
int64_t var_380
int32_t var_374

if (rax_404 s> var_374)
    sub_1405c4ec0(&var_380)

sub_140745220(var_380 + rdi_72 * 0x28, &var_1050)

if (var_1038 != 0)
    sub_140a74f90(var_1038)

int64_t var_1b00
sub_140b58260(&var_1b00, u"Value", 1)
int64_t rdi_73 = sx.q(rax_404)
int64_t var_1028 = var_1b00
int64_t var_1020 = data_14396f0b8
int16_t var_1018 = data_14396f0c0
int32_t rax_409 = (rdi_73 + 1).d
int32_t var_1016 = 0xffffffff
int64_t var_1010 = 0
int64_t var_1008 = 0
int32_t var_378_2 = rax_409

if (rax_409 s> var_374)
    sub_1405c4ec0(&var_380)

sub_140745220(var_380 + rdi_73 * 0x28, &var_1028)

if (var_1010 != 0)
    sub_140a74f90(var_1010)

void var_cf0
int64_t* var_1af8 = sub_140b58170(&var_cf0, "Attribute", 1)
void var_1d68
void var_360
sub_14077a930(&var_360, &var_1d68, &var_1af8, nullptr)
int64_t rdi_74 = sx.q(arg2[1].d)
int32_t var_368
int32_t var_368_1 = (var_368 & 0xfffffffe) | 6
int32_t rax_415 = (rdi_74 + 1).d
arg2[1].d = rax_415

if (rax_415 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_74 * 0x88 + *arg2, &var_398)
sub_1405ae080(&var_360)
sub_140745ac0(&var_380)
sub_140745ac0(&var_390)
int64_t var_308
sub_140745040(&var_308)
var_308 = data_143ce05f8
int64_t var_1af0
sub_140b58260(&var_1af0, u"Particle Reader", 1)
int32_t var_2f8
int64_t rdi_75 = sx.q(var_2f8)
int64_t var_1000 = var_1af0
int64_t var_ff8 = *(arg1 + 0x10)
int32_t rax_419 = (rdi_75 + 1).d
int32_t var_ff0 = 0xffff0001
int16_t var_fec = 0xffff
int64_t var_fe8 = 0
int64_t var_fe0 = 0
int64_t var_300
int32_t var_2f4

if (rax_419 s> var_2f4)
    sub_1405c4ec0(&var_300)

sub_140745220(var_300 + rdi_75 * 0x28, &var_1000)

if (var_fe8 != 0)
    sub_140a74f90(var_fe8)

int64_t var_1ae8
sub_140b58260(&var_1ae8, u"Particle Index", 1)
int64_t rdi_76 = sx.q(rax_419)
int64_t var_fd8 = var_1ae8
int64_t var_fd0 = data_14396f0a8
int16_t var_fc8 = data_14396f0b0
int32_t rax_424 = (rdi_76 + 1).d
int32_t var_fc6 = 0xffffffff
int64_t var_fc0 = 0
int64_t var_fb8 = 0
int32_t var_2f8_2 = rax_424

if (rax_424 s> var_2f4)
    sub_1405c4ec0(&var_300)

sub_140745220(var_300 + rdi_76 * 0x28, &var_fd8)

if (var_fc0 != 0)
    sub_140a74f90(var_fc0)

int64_t var_1ae0
sub_140b58260(&var_1ae0, u"Valid", 1)
int32_t var_2e8
int64_t rdi_77 = sx.q(var_2e8)
int64_t var_fb0 = var_1ae0
int64_t var_fa8 = data_14396f098
int16_t var_fa0 = data_14396f0a0
int32_t rax_429 = (rdi_77 + 1).d
int32_t var_f9e = 0xffffffff
int64_t var_f98 = 0
int64_t var_f90 = 0
int64_t var_2f0
int32_t var_2e4

if (rax_429 s> var_2e4)
    sub_1405c4ec0(&var_2f0)

sub_140745220(var_2f0 + rdi_77 * 0x28, &var_fb0)

if (var_f98 != 0)
    sub_140a74f90(var_f98)

int64_t var_1ad8
sub_140b58260(&var_1ad8, u"Value", 1)
int64_t rdi_78 = sx.q(rax_429)
int64_t var_f88 = var_1ad8
int64_t var_f80 = data_14396f0c8
int16_t var_f78 = data_14396f0d0
int32_t rax_434 = (rdi_78 + 1).d
int32_t var_f76 = 0xffffffff
int64_t var_f70 = 0
int64_t var_f68 = 0
int32_t var_2e8_2 = rax_434

if (rax_434 s> var_2e4)
    sub_1405c4ec0(&var_2f0)

sub_140745220(var_2f0 + rdi_78 * 0x28, &var_f88)

if (var_f70 != 0)
    sub_140a74f90(var_f70)

void var_ce8
int64_t* var_1ad0 = sub_140b58170(&var_ce8, "Attribute", 1)
void var_1d64
void var_2d0
sub_14077a930(&var_2d0, &var_1d64, &var_1ad0, nullptr)
int64_t rdi_79 = sx.q(arg2[1].d)
int32_t var_2d8
int32_t var_2d8_1 = (var_2d8 & 0xfffffffe) | 6
int32_t rax_440 = (rdi_79 + 1).d
arg2[1].d = rax_440

if (rax_440 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_79 * 0x88 + *arg2, &var_308)
sub_1405ae080(&var_2d0)
sub_140745ac0(&var_2f0)
sub_140745ac0(&var_300)
int64_t var_278
sub_140745040(&var_278)
var_278 = data_143ce0600
int64_t var_1ac8
sub_140b58260(&var_1ac8, u"Particle Reader", 1)
int32_t var_268
int64_t rdi_80 = sx.q(var_268)
int64_t var_f60 = var_1ac8
int64_t var_f58 = *(arg1 + 0x10)
int32_t rax_444 = (rdi_80 + 1).d
int32_t var_f50 = 0xffff0001
int16_t var_f4c = 0xffff
int64_t var_f48 = 0
int64_t var_f40 = 0
int64_t var_270
int32_t var_264

if (rax_444 s> var_264)
    sub_1405c4ec0(&var_270)

sub_140745220(var_270 + rdi_80 * 0x28, &var_f60)

if (var_f48 != 0)
    sub_140a74f90(var_f48)

int64_t var_1ac0
sub_140b58260(&var_1ac0, u"Particle Index", 1)
int64_t rdi_81 = sx.q(rax_444)
int64_t var_f38 = var_1ac0
int64_t var_f30 = data_14396f0a8
int16_t var_f28 = data_14396f0b0
int32_t rax_449 = (rdi_81 + 1).d
int32_t var_f26 = 0xffffffff
int64_t var_f20 = 0
int64_t var_f18 = 0
int32_t var_268_2 = rax_449

if (rax_449 s> var_264)
    sub_1405c4ec0(&var_270)

sub_140745220(var_270 + rdi_81 * 0x28, &var_f38)

if (var_f20 != 0)
    sub_140a74f90(var_f20)

int64_t var_1ab8
sub_140b58260(&var_1ab8, u"Valid", 1)
int32_t var_258
int64_t rdi_82 = sx.q(var_258)
int64_t var_f10 = var_1ab8
int64_t var_f08 = data_14396f098
int16_t var_f00 = data_14396f0a0
int32_t rax_454 = (rdi_82 + 1).d
int32_t var_efe = 0xffffffff
int64_t var_ef8 = 0
int64_t var_ef0 = 0
int64_t var_260
int32_t var_254

if (rax_454 s> var_254)
    sub_1405c4ec0(&var_260)

sub_140745220(var_260 + rdi_82 * 0x28, &var_f10)

if (var_ef8 != 0)
    sub_140a74f90(var_ef8)

int64_t var_1ab0
sub_140b58260(&var_1ab0, u"Value", 1)
int64_t rdi_83 = sx.q(rax_454)
int64_t var_ee8 = var_1ab0
int64_t var_ee0 = data_14396f0d8
int16_t var_ed8 = data_14396f0e0
int32_t rax_459 = (rdi_83 + 1).d
int32_t var_ed6 = 0xffffffff
int64_t var_ed0 = 0
int64_t var_ec8 = 0
int32_t var_258_2 = rax_459

if (rax_459 s> var_254)
    sub_1405c4ec0(&var_260)

sub_140745220(var_260 + rdi_83 * 0x28, &var_ee8)

if (var_ed0 != 0)
    sub_140a74f90(var_ed0)

void var_ce0
int64_t* var_1aa8 = sub_140b58170(&var_ce0, "Attribute", 1)
void var_1d60
void var_240
sub_14077a930(&var_240, &var_1d60, &var_1aa8, nullptr)
int64_t rdi_84 = sx.q(arg2[1].d)
int32_t var_248
int32_t var_248_1 = (var_248 & 0xfffffffe) | 6
int32_t rax_465 = (rdi_84 + 1).d
arg2[1].d = rax_465

if (rax_465 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_84 * 0x88 + *arg2, &var_278)
sub_1405ae080(&var_240)
sub_140745ac0(&var_260)
sub_140745ac0(&var_270)
int64_t var_1e8
sub_140745040(&var_1e8)
var_1e8 = data_143ce0608
int64_t var_1aa0
sub_140b58260(&var_1aa0, u"Particle Reader", 1)
int32_t var_1d8
int64_t rdi_85 = sx.q(var_1d8)
int64_t var_ec0 = var_1aa0
int64_t var_eb8 = *(arg1 + 0x10)
int32_t rax_469 = (rdi_85 + 1).d
int32_t var_eb0 = 0xffff0001
int16_t var_eac = 0xffff
int64_t var_ea8 = 0
int64_t var_ea0 = 0
int64_t var_1e0
int32_t var_1d4

if (rax_469 s> var_1d4)
    sub_1405c4ec0(&var_1e0)

sub_140745220(var_1e0 + rdi_85 * 0x28, &var_ec0)

if (var_ea8 != 0)
    sub_140a74f90(var_ea8)

int64_t var_1a98
sub_140b58260(&var_1a98, u"Particle Index", 1)
int64_t rdi_86 = sx.q(rax_469)
int64_t var_e98 = var_1a98
int64_t var_e90 = data_14396f0a8
int16_t var_e88 = data_14396f0b0
int32_t rax_474 = (rdi_86 + 1).d
int32_t var_e86 = 0xffffffff
int64_t var_e80 = 0
int64_t var_e78 = 0
int32_t var_1d8_2 = rax_474

if (rax_474 s> var_1d4)
    sub_1405c4ec0(&var_1e0)

sub_140745220(var_1e0 + rdi_86 * 0x28, &var_e98)

if (var_e80 != 0)
    sub_140a74f90(var_e80)

int64_t var_1a90
sub_140b58260(&var_1a90, u"Valid", 1)
int32_t var_1c8
int64_t rdi_87 = sx.q(var_1c8)
int64_t var_e70 = var_1a90
int64_t var_e68 = data_14396f098
int16_t var_e60 = data_14396f0a0
int32_t rax_479 = (rdi_87 + 1).d
int32_t var_e5e = 0xffffffff
int64_t var_e58 = 0
int64_t var_e50 = 0
int64_t var_1d0
int32_t var_1c4

if (rax_479 s> var_1c4)
    sub_1405c4ec0(&var_1d0)

sub_140745220(var_1d0 + rdi_87 * 0x28, &var_e70)

if (var_e58 != 0)
    sub_140a74f90(var_e58)

int64_t var_1a88
sub_140b58260(&var_1a88, u"Value", 1)
int64_t rdi_88 = sx.q(rax_479)
int64_t var_e48 = var_1a88
int64_t var_e40 = data_14396f0e8
int16_t var_e38 = data_14396f0f0
int32_t rax_484 = (rdi_88 + 1).d
int32_t var_e36 = 0xffffffff
int64_t var_e30 = 0
int64_t var_e28 = 0
int32_t var_1c8_2 = rax_484

if (rax_484 s> var_1c4)
    sub_1405c4ec0(&var_1d0)

sub_140745220(var_1d0 + rdi_88 * 0x28, &var_e48)

if (var_e30 != 0)
    sub_140a74f90(var_e30)

void var_cd8
int64_t* var_1a80 = sub_140b58170(&var_cd8, "Attribute", 1)
void var_1d5c
void var_1b0
sub_14077a930(&var_1b0, &var_1d5c, &var_1a80, nullptr)
int64_t rdi_89 = sx.q(arg2[1].d)
int32_t var_1b8
int32_t var_1b8_1 = (var_1b8 & 0xfffffffe) | 6
int32_t rax_490 = (rdi_89 + 1).d
arg2[1].d = rax_490

if (rax_490 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_89 * 0x88 + *arg2, &var_1e8)
sub_1405ae080(&var_1b0)
sub_140745ac0(&var_1d0)
sub_140745ac0(&var_1e0)
int64_t var_158
sub_140745040(&var_158)
var_158 = data_143ce0610
int64_t var_1a78
sub_140b58260(&var_1a78, u"Particle Reader", 1)
int32_t var_148
int64_t rdi_90 = sx.q(var_148)
int64_t var_e20 = var_1a78
int64_t var_e18 = *(arg1 + 0x10)
int32_t rax_494 = (rdi_90 + 1).d
int32_t var_e10 = 0xffff0001
int16_t var_e0c = 0xffff
int64_t var_e08 = 0
int64_t var_e00 = 0
int64_t var_150
int32_t var_144

if (rax_494 s> var_144)
    sub_1405c4ec0(&var_150)

sub_140745220(var_150 + rdi_90 * 0x28, &var_e20)

if (var_e08 != 0)
    sub_140a74f90(var_e08)

int64_t var_1a70
sub_140b58260(&var_1a70, u"Particle Index", 1)
int64_t rdi_91 = sx.q(rax_494)
int64_t var_df8 = var_1a70
int64_t var_df0 = data_14396f0a8
int16_t var_de8 = data_14396f0b0
int32_t rax_499 = (rdi_91 + 1).d
int32_t var_de6 = 0xffffffff
int64_t var_de0 = 0
int64_t var_dd8 = 0
int32_t var_148_2 = rax_499

if (rax_499 s> var_144)
    sub_1405c4ec0(&var_150)

sub_140745220(var_150 + rdi_91 * 0x28, &var_df8)

if (var_de0 != 0)
    sub_140a74f90(var_de0)

int64_t var_1a68
sub_140b58260(&var_1a68, u"Valid", 1)
int32_t var_138
int64_t rdi_92 = sx.q(var_138)
int64_t var_dd0 = var_1a68
int64_t var_dc8 = data_14396f098
int16_t var_dc0 = data_14396f0a0
int32_t rax_504 = (rdi_92 + 1).d
int32_t var_dbe = 0xffffffff
int64_t var_db8 = 0
int64_t var_db0 = 0
int64_t var_140
int32_t var_134

if (rax_504 s> var_134)
    sub_1405c4ec0(&var_140)

sub_140745220(var_140 + rdi_92 * 0x28, &var_dd0)

if (var_db8 != 0)
    sub_140a74f90(var_db8)

int64_t var_1a60
sub_140b58260(&var_1a60, u"Value", 1)
int64_t rdi_93 = sx.q(rax_504)
int64_t var_da8 = var_1a60
int64_t var_da0 = data_14396f0f8
int16_t var_d98 = data_14396f100
int32_t rax_509 = (rdi_93 + 1).d
int32_t var_d96 = 0xffffffff
int64_t var_d90 = 0
int64_t var_d88 = 0
int32_t var_138_2 = rax_509

if (rax_509 s> var_134)
    sub_1405c4ec0(&var_140)

sub_140745220(var_140 + rdi_93 * 0x28, &var_da8)

if (var_d90 != 0)
    sub_140a74f90(var_d90)

void var_cd0
int64_t* var_1a58 = sub_140b58170(&var_cd0, "Attribute", 1)
void var_1d58
void var_120
sub_14077a930(&var_120, &var_1d58, &var_1a58, nullptr)
int64_t rdi_94 = sx.q(arg2[1].d)
int32_t var_128
int32_t var_128_1 = (var_128 & 0xfffffffe) | 6
int32_t rax_515 = (rdi_94 + 1).d
arg2[1].d = rax_515

if (rax_515 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_94 * 0x88 + *arg2, &var_158)
sub_1405ae080(&var_120)
sub_140745ac0(&var_140)
sub_140745ac0(&var_150)
int64_t var_c8
sub_140745040(&var_c8)
var_c8 = data_143ce0618
int64_t var_1a50
sub_140b58260(&var_1a50, u"Particle Reader", 1)
int32_t var_b8
int64_t rdi_95 = sx.q(var_b8)
int64_t var_d80 = var_1a50
int64_t var_d78 = *(arg1 + 0x10)
int32_t rax_519 = (rdi_95 + 1).d
int32_t var_d70 = 0xffff0001
int16_t var_d6c = 0xffff
int64_t var_d68 = 0
int64_t var_d60 = 0
int64_t var_c0
int32_t var_b4

if (rax_519 s> var_b4)
    sub_1405c4ec0(&var_c0)

sub_140745220(var_c0 + rdi_95 * 0x28, &var_d80)

if (var_d68 != 0)
    sub_140a74f90(var_d68)

int64_t var_1a48
sub_140b58260(&var_1a48, u"Particle Index", 1)
int64_t rdi_96 = sx.q(rax_519)
int64_t var_d58 = var_1a48
int64_t var_d50 = data_14396f0a8
int16_t var_d48 = data_14396f0b0
int32_t rax_524 = (rdi_96 + 1).d
int32_t var_d46 = 0xffffffff
int64_t var_d40 = 0
int64_t var_d38 = 0
int32_t var_b8_2 = rax_524

if (rax_524 s> var_b4)
    sub_1405c4ec0(&var_c0)

sub_140745220(var_c0 + rdi_96 * 0x28, &var_d58)

if (var_d40 != 0)
    sub_140a74f90(var_d40)

int64_t var_1a40
sub_140b58260(&var_1a40, u"Valid", 1)
int32_t var_a8
int64_t rdi_97 = sx.q(var_a8)
int64_t var_1a28 = var_1a40
int64_t var_1a20 = data_14396f098
int16_t var_1a18 = data_14396f0a0
int32_t rax_529 = (rdi_97 + 1).d
int32_t var_1a16 = 0xffffffff
int64_t var_1a10 = 0
int64_t var_1a08 = 0
int64_t var_b0
int32_t var_a4

if (rax_529 s> var_a4)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_97 * 0x28, &var_1a28)

if (var_1a10 != 0)
    sub_140a74f90(var_1a10)

int64_t var_1a38
sub_140b58260(&var_1a38, u"Value", 1)
int64_t rdi_98 = sx.q(rax_529)
int64_t var_1a00 = var_1a38
int64_t var_19f8 = data_14396f138
int16_t var_19f0 = data_14396f140
int32_t rax_534 = (rdi_98 + 1).d
int32_t var_19ee = 0xffffffff
int64_t var_19e8 = 0
int64_t var_19e0 = 0
int32_t var_a8_2 = rax_534

if (rax_534 s> var_a4)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_98 * 0x28, &var_1a00)

if (var_19e8 != 0)
    sub_140a74f90(var_19e8)

void var_cc0
int64_t* var_1a30 = sub_140b58170(&var_cc0, "Attribute", 1)
void var_1d54
void var_90
sub_14077a930(&var_90, &var_1d54, &var_1a30, nullptr)
int64_t rdi_99 = sx.q(arg2[1].d)
int32_t var_98
int32_t var_98_1 = (var_98 & 0xfffffffe) | 6
int32_t rax_540 = (rdi_99 + 1).d
arg2[1].d = rax_540

if (rax_540 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_99 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
int64_t result = sub_140745ac0(&var_c0)
__security_check_cookie(rax_1 ^ &var_1db8)
return result

// 函数: sub_140cb0c00
// 地址: 0x140cb0c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_14399fa4c != 0)
    return &__return_addr

void* rbx
void* arg_8 = rbx
sub_140b44040(0, u"GC", arg3)
sub_140b33630("GarbageCollection")
void* r8 = data_143e1adf0
char rsi_1 = 0
*(r8 + 8)
*(r8 + 8) = 0
bool cond:1_1 = data_143e1b1f0 == 0
data_143e1b390 = 0

if (not(cond:1_1))
    data_14399fa10()
    rbx = data_143e1adf0
    int64_t* rcx = *(rbx + 0x38)
    (*(*rcx + 0x10))(rcx)
    *(rbx + 4) -= 1
    sub_140bc7700(0xffffffff)
    sub_140cbaa10(data_143e1adf0)

sub_140d21fd0()
sub_140599090(&data_1439aad30)
data_143de5460 = data_143de5458
bool z_1

if (0 == data_143e1adfc)
    data_143e1adfc = 0
    z_1 = true
else
    data_143e1adfc
    z_1 = false

int64_t rbp
rbp.b = not(z_1)
sub_140d3e210()
data_143e1adfc
data_143e1adfc = 1

if (data_143e1add8 != 0 || data_143e1b328 != 0)
    sub_140cc11b0(0, 0x3b03126f)
    int64_t rcx_2
    rcx_2.b = 1
    sub_140a8f090(rcx_2)

if (data_1439aa890 == 0 && data_143e1d698 != 0)
    sub_140d1e8c0(&data_143e1d678, 1)

if (sub_140b011d0() == 0)
    rbx.b = 1
else if (sub_140a54810() == 0)
    rbx.b = 1
else if (sub_140b70ca0() s< 2 || data_1439a9d7c == 0)
    rbx.b = 1
else
    rbx.b = 0

if (data_1439aa890 != 0 && data_143e1d698 != 0)
    rsi_1 = 1

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
void** const var_68 = &data_142ea0218
int64_t (* var_60_1)(int64_t arg1, int64_t* arg2) = sub_140cac540
int64_t (* var_58_1)(int64_t arg1, int64_t* arg2) = sub_140cabbc0
int64_t (* (* var_50_1)(int64_t arg1, int64_t* arg2))(void** arg1, int32_t* arg2) = sub_140cabd70
int64_t (* (* var_48_1)(int64_t arg1, int64_t* arg2))(void** arg1, int32_t* arg2) = sub_140cab3f0
int64_t (* var_40_1)(int64_t arg1, int128_t* arg2) = sub_140cac9f0
int64_t (* var_38_1)(int64_t arg1, int64_t* arg2) = sub_140cac7e0
int64_t (* var_30_1)(int64_t arg1, int128_t* arg2) = sub_140cac8d0
int64_t (* var_28_1)(int64_t arg1, int64_t* arg2) = sub_140cac6f0
sub_140cc39f0(&var_68, arg1, rbx.b, rsi_1)

if (data_143e1d69c != 0)
    void performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    sub_140d1e8c0(&data_143e1d678, 0)

sub_140599090(&data_1439aa9b8)
void* rax_8 = data_143e1b318

if (rax_8 == 0)
    rax_8 = sub_140cbc430()
    data_143e1b318 = rax_8

sub_140cb0990(rax_8, arg2)
sub_140cbaac0(rbx.b)

if (arg2 != 0 || data_1439a9d74 == 0)
    sub_140cd06d0(0, zx.o(0))

data_143e1b328 = 1

if (arg2 != 0)
    sub_140cc11b0(0, 0x3b03126f)
    sub_140d3f390()

sub_140cd9290(sub_140cdbb20())
int64_t rcx_9
rcx_9.b = 1
sub_140a8f090(rcx_9)
data_143e1adfc
data_143e1adfc = zx.d(rbp.b)
sub_140d40c40()
sub_140d21f60()
sub_140599090(&data_1439aad48)
return sub_140b37f60("GarbageCollection")

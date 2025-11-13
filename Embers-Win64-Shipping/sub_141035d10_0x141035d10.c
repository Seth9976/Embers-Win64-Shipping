// 函数: sub_141035d10
// 地址: 0x141035d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t rsi
rsi.b = 0
int64_t* rdi = *(*(arg1 + 0x20) + 0x18)
int64_t* var_48
GUID lpiid

if (IIDFromString(u"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}", &lpiid) s>= 0)
    int64_t rax_4 = *rdi
    var_48 = nullptr
    int32_t rax_5 = (*rax_4)(rdi, &lpiid, &var_48)
    int64_t* rcx_1 = var_48
    rsi = 0
    
    if (rax_5 s>= 0)
        rsi = 1
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)

int64_t rax_7 = *rdi
var_48 = nullptr
int32_t rax_8 = (*rax_7)(rdi, &data_142eff3d8, &var_48)
int64_t* rcx_3 = var_48
char rsi_1 = rsi.b

if (rax_8 s>= 0)
    rsi_1 = 1

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)

int64_t* rcx_5

if (data_143e2c338 == 0)
    if (rsi_1 != 0)
        rcx_5 = data_143f0f180
        (*(*rcx_5 + 0x688))(rcx_5, 1)
else if (*(*(*(arg1 + 0x20) + 0x10) + 0x38) != 0 || rsi_1 != 0)
    rcx_5 = data_143f0f180
    (*(*rcx_5 + 0x688))(rcx_5, 1)
uint64_t rdx_2 = zx.q(*(arg1 + 0xbc))
*(arg1 + 0xd0) = rdi
*(arg1 + 0xcc) = (*(*rdi + 0x78))(rdi, rdx_2)
uint64_t rdx_3 = zx.q(*(arg1 + 0x13c))
*(arg1 + 0x150) = rdi
*(arg1 + 0x14c) = (*(*rdi + 0x78))(rdi, rdx_3)
uint64_t rdx_4 = zx.q(*(arg1 + 0x1bc))
*(arg1 + 0x1d0) = rdi
*(arg1 + 0x1cc) = (*(*rdi + 0x78))(rdi, rdx_4)
uint64_t rdx_5 = zx.q(*(arg1 + 0x23c))
*(arg1 + 0x250) = rdi
*(arg1 + 0x24c) = (*(*rdi + 0x78))(rdi, rdx_5)
uint64_t rdx_6 = zx.q(*(arg1 + 0x2bc))
*(arg1 + 0x2d0) = rdi
*(arg1 + 0x2cc) = (*(*rdi + 0x78))(rdi, rdx_6)
sub_141025130(arg1 + 0x330, 0x800, 1)
sub_141025130(arg1 + 0x428, data_1439b4af0, 0)
sub_14101a3f0(arg1 + 0x520)
sub_14101a3f0(arg1 + 0x5e8)
sub_140a2e390(&var_48, u"3D Queue %d", zx.q(*(arg1 + 0x18)))
int64_t* rdi_1 = &data_142d40450
int64_t* rdx_8 = &data_142d40450
int32_t var_40

if (var_40 != 0)
    rdx_8 = var_48

sub_141018ca0(*(arg1 + 0x38), rdx_8, 0)
int64_t* rcx_17 = var_48

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

data_143e2c1d0 = *(*(arg1 + 0x38) + 0x28)
sub_140a2e390(&var_48, u"Copy Queue %d", zx.q(*(arg1 + 0x18)))
int64_t* rdx_9 = &data_142d40450

if (var_40 != 0)
    rdx_9 = var_48

sub_141018ca0(*(arg1 + 0x40), rdx_9, 0)
int64_t* rcx_21 = var_48

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

sub_140a2e390(&var_48, u"Compute Queue %d", zx.q(*(arg1 + 0x18)))

if (var_40 != 0)
    rdi_1 = var_48

sub_141018ca0(*(arg1 + 0x48), rdi_1, 0)
int64_t* rcx_24 = var_48

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

__builtin_memcpy(&lpiid, "\x02\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00", 0x10)
int128_t zmm0
zmm0.d = lpiid.Data1
zmm0:4.w = lpiid.Data2
zmm0:6.w = lpiid.Data3
zmm0:8.b = lpiid.Data4[0]
zmm0:9.b = lpiid.Data4[1]
zmm0:0xa.b = lpiid.Data4[2]
zmm0:0xb.b = lpiid.Data4[3]
zmm0:0xc.b = lpiid.Data4[4]
zmm0:0xd.b = lpiid.Data4[5]
zmm0:0xe.b = lpiid.Data4[6]
zmm0:0xf.b = lpiid.Data4[7]
*(arg1 + 0x7a8) = zmm0
*(arg1 + 0x7b8) = 1
int64_t result = sub_141019bf0(arg1)
*(arg1 + 0x784) = -1
*(arg1 + 0x78c) = 0
*(arg1 + 0x790) = 0xffffffff
*(arg1 + 0x794) = 0
*(arg1 + 0x798) = -1
*(arg1 + 0x7a0) = 0xffffffff
*(arg1 + 0x7a4) = 0
__security_check_cookie(rax_1 ^ &var_68)
return result

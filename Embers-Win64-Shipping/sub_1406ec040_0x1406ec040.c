// 函数: sub_1406ec040
// 地址: 0x1406ec040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
void var_1b8
memset(&var_1b8, 0, 0x198)
int64_t r8 = *(*(arg1 + 8) + 0x20)
(*r8)(r8, &var_1b8, r8)
int64_t i_3 = 3
void var_358
void* rcx_2 = &var_358
int64_t i_2 = 3
void* rax_3 = &var_1b8
int64_t i

do
    rcx_2 += 0x80
    int128_t zmm0_1 = *rax_3
    int128_t zmm1 = *(rax_3 + 0x10)
    rax_3 += 0x80
    *(rcx_2 - 0x80) = zmm0_1
    zmm0_1 = *(rax_3 - 0x60)
    *(rcx_2 - 0x70) = zmm1
    zmm1 = *(rax_3 - 0x50)
    *(rcx_2 - 0x60) = zmm0_1
    zmm0_1 = *(rax_3 - 0x40)
    *(rcx_2 - 0x50) = zmm1
    zmm1 = *(rax_3 - 0x30)
    *(rcx_2 - 0x40) = zmm0_1
    zmm0_1 = *(rax_3 - 0x20)
    *(rcx_2 - 0x30) = zmm1
    zmm1 = *(rax_3 - 0x10)
    *(rcx_2 - 0x20) = zmm0_1
    *(rcx_2 - 0x10) = zmm1
    i = i_2
    i_2 -= 1
while (i != 1)
int64_t rax_4 = *(rax_3 + 0x10)
*rcx_2 = *rax_3
*(rcx_2 + 0x10) = rax_4
int64_t var_398
sub_1406eaca0(&data_143cdf618, sub_1406e9820(&var_398, &var_358))
void* rdx_3 = &var_358
void* rax_6 = &var_1b8
int64_t i_1

do
    rdx_3 += 0x80
    int128_t zmm0_2 = *rax_6
    int128_t zmm1_1 = *(rax_6 + 0x10)
    rax_6 += 0x80
    *(rdx_3 - 0x80) = zmm0_2
    zmm0_2 = *(rax_6 - 0x60)
    *(rdx_3 - 0x70) = zmm1_1
    zmm1_1 = *(rax_6 - 0x50)
    *(rdx_3 - 0x60) = zmm0_2
    zmm0_2 = *(rax_6 - 0x40)
    *(rdx_3 - 0x50) = zmm1_1
    zmm1_1 = *(rax_6 - 0x30)
    *(rdx_3 - 0x40) = zmm0_2
    zmm0_2 = *(rax_6 - 0x20)
    *(rdx_3 - 0x30) = zmm1_1
    zmm1_1 = *(rax_6 - 0x10)
    *(rdx_3 - 0x20) = zmm0_2
    *(rdx_3 - 0x10) = zmm1_1
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
int64_t rcx_4 = *(rax_6 + 0x10)
*rdx_3 = *rax_6
*(rdx_3 + 0x10) = rcx_4
sub_1406e9820(&var_398, &var_358)
int64_t rcx_6 = data_143cdf638

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = data_143cdf648
data_143cdf638 = var_398
int32_t var_390
data_143cdf640 = var_390
int32_t var_38c
data_143cdf644 = var_38c

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = data_143cdf658
int64_t var_388
data_143cdf648 = var_388
int32_t var_380
data_143cdf650 = var_380
int32_t var_37c
data_143cdf654 = var_37c

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t var_378
data_143cdf658 = var_378
int32_t var_370
data_143cdf660 = var_370
int32_t var_36c
data_143cdf664 = var_36c
char result
data_143cdf668 = result
__security_check_cookie(rax_1 ^ &var_3b8)
return result

// 函数: sub_1427dd380
// 地址: 0x1427dd380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
physx::PxArticulationLinkGeneratedInfo::PxArticulationLinkGeneratedInfo(&var_338)
int64_t rbx = *arg1
int64_t rdi = arg1[1]
int64_t rsi = arg1[5]
int64_t r14 = arg1[7]
int64_t r15 = arg1[8]
uint128_t zmm6 = zx.o(arg1[4])
int128_t var_398 = *(arg1 + 0x10)
char arg_8 = 0
int64_t var_3a8 = rbx
int64_t var_3a0 = rdi
uint64_t var_388 = zmm6.q
int64_t var_380 = rsi
int64_t rdx
int64_t var_378 = rdx
int64_t var_370 = r14
int64_t var_368 = r15
char var_360 = 1
char* var_358 = &arg_8
int128_t var_350 = zx.o(0)
int64_t zmm6_1
int128_t zmm7_1
zmm6_1, zmm7_1 = sub_1427debe0(&var_338, &var_3a8, 0)
var_3a8 = rbx
char* var_358_1 = &arg_8
int64_t var_3a0_1 = rdi
int64_t var_388_1 = zmm6_1
int128_t var_350_1 = zx.o(0)
int64_t var_380_1 = rsi
int128_t var_398_1 = zmm7_1
int64_t var_378_1 = rdx
int64_t var_370_1 = r14
int64_t var_368_1 = r15
char var_360_1 = 1
void var_98
char* result = sub_1427e5870(&var_3a8, &var_98)

if (arg_8 != 0)
    result = arg1[0xa]
    *result = 1

return result

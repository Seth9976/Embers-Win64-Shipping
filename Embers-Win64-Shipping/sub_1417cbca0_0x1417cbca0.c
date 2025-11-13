// 函数: sub_1417cbca0
// 地址: 0x1417cbca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int16_t* rdx

if (arg1[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg1

void var_b8
sub_1408f2b40(&var_b8, rdx)
char* var_30
class physx::PxPvdTransport* rax_2 = physx::PxDefaultPvdSocketTransportCreate(var_30, 0x1531, 0x64)
int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

int64_t* rcx_3 = data_143ef8550
int64_t rdx_1 = *rcx_3
(*(rdx_1 + 0x20))(rcx_3, rdx_1)
int64_t* rcx_4 = data_143ef8550
char var_c8 = arg2 + 6
int64_t result = (*(*rcx_4 + 0x18))(rcx_4, rax_2, &var_c8)
int64_t rcx_5 = *arg1

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

__security_check_cookie(rax_1 ^ &var_e8)
return result

// 函数: sub_142260c80
// 地址: 0x142260c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_bd8
int64_t rax_1 = __security_cookie ^ &var_bd8
float* rbx = arg2
sub_141dba950(arg1, arg2, arg3)
float var_5e8
(*(*arg1 + 0x660))(arg1, &var_5e8)
float var_5e4
float zmm1 = var_5e4 + rbx[1]
int64_t rax_3 = *arg1
var_5e8 = var_5e8 + *rbx
float var_5e4_1 = zmm1
float var_5e0
float var_5e0_1 = var_5e0 + rbx[2]
(*(rax_3 + 0x650))(arg1, &var_5e8)
float var_bb8
(*(*arg1 + 0x668))(arg1, &var_bb8)
float var_bb4
zmm1 = var_bb4 + rbx[1]
int64_t rax_5 = *arg1
var_bb8 = var_bb8 + *rbx
float var_bb4_1 = zmm1
float var_bb0
float var_bb0_1 = var_bb0 + rbx[2]
int64_t result = (*(rax_5 + 0x658))(arg1, &var_bb8)
char var_5f8 = 0
arg1[0x1cc].d = arg1[0x1cc].d f+ *rbx
*(arg1 + 0xe64) = rbx[1] f+ *(arg1 + 0xe64)
arg1[0x1cd].d = rbx[2] f+ arg1[0x1cd].d
arg1[0x28a].d = arg1[0x28a].d f+ *rbx
*(arg1 + 0x1454) = rbx[1] f+ *(arg1 + 0x1454)
arg1[0x28b].d = rbx[2] f+ arg1[0x28b].d
int64_t var_648

if (var_648 != 0)
    result = sub_140a74f90(var_648)

char var_28 = 0
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_bd8)
return result

// 函数: sub_1418ed470
// 地址: 0x1418ed470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax
int32_t rdx
rax, rdx = sub_140b257f0()
bool c = rax[1].d != 0
int64_t var_18 = 0
int32_t rbx = rax[1].d
int64_t rdi = *rax
int32_t var_10 = rbx
sub_1405a4c70(&var_18, sbb.d(rdx, rdx, c) + 0x11 + rbx, 0)
memcpy(var_18, rdi, rbx * 2)
sub_140a2cf70(&var_18, u"VulkanPSO.cache", 0xf)
int64_t result = sub_1418ece60(*(*(data_143efbb58 + 0x58) + 0x1b00), &var_18, 0)
int64_t rcx_6 = var_18

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)

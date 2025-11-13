// 函数: sub_141cc7290
// 地址: 0x141cc7290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141cc79c0()
void* rbx = rax[0x23]

if (rbx == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rbx = rax[0x23]

void* rcx_2 = data_143ddb400
char result_1 = 0

if (sub_140af2fd0(rcx_2, u"GameplayTags", u"ImportTagsFromConfig", &result_1, &data_143de5780) == 0)
    return *(rbx + 0x48)

char result = result_1

if (result == 0)
    return result

*(rbx + 0x48) = result
return zx.q(result_1)

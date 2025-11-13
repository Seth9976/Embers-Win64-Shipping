// 函数: sub_14229d120
// 地址: 0x14229d120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
sub_142427eb0(&var_38)
int32_t var_c
int32_t var_c_1 = var_c | 0x40
int64_t var_20 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1)
char var_10 = 1
void* result = sub_1420efae0((*(*arg1 + 0x150))(arg1), arg1[2], nullptr, nullptr, &var_38)

if (result == 0)
    return result

int64_t r8_1 = *arg1
(*(r8_1 + 0x6e0))(arg1, result, r8_1)
sub_142577850(arg1, result)
return result

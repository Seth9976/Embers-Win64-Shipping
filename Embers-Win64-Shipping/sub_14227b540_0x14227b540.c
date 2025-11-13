// 函数: sub_14227b540
// 地址: 0x14227b540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[0x53]

if (rbx == 0)
    return 

void* rax_1 = sub_142531230()
void* rdx_1 = *(rbx + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

void var_38
sub_142427eb0(&var_38)
int64_t* var_28_1 = arg1
int32_t var_c
int32_t var_c_1 = var_c | 0x40
int64_t var_20_1 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1)
arg1[0x56] =
    sub_1420efae0((*(*arg1 + 0x150))(arg1, rdx_1), sub_1424c3640(), nullptr, nullptr, &var_38)

// 函数: sub_142263c80
// 地址: 0x142263c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
int64_t* rcx = arg1[0x56]

if (rcx != 0)
    sub_141dbe590(rcx, 0, 1)
    arg1[0x56] = 0

void var_38
sub_142427eb0(&var_38)
int64_t* var_28 = arg1
int32_t var_c
int32_t var_c_1 = var_c | 0x40
int64_t var_20 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1)

if (rdi == 0)
    rdi = nullptr
else
    void* rax_1 = sub_1424c3640()
    
    if (rax_1 == 0)
        rdi = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> rdi[7].d || *(rdi[6] + (rax_2 << 3)) != rax_1 + 0x30)
            rdi = nullptr

void* result = sub_1420efae0((*(*arg1 + 0x150))(arg1), rdi, nullptr, nullptr, &var_38)
arg1[0x56] = result
return result

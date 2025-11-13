// 函数: sub_14221e3f0
// 地址: 0x14221e3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd2730(arg1)

if (Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1) == 0)
    sub_141dd84d0(arg1, arg1)

if (arg1[0x46].b != 0 && sub_141dcdc50(arg1) != 3)
    uint32_t rdi_1 = zx.d(arg1[0x46].b)
    int64_t* rax_2 = sub_14202a680(arg1, rdi_1 - 1)
    
    if (rax_2 == 0)
        sub_1420eb500(*((*(*arg1 + 0x150))(arg1) + 0x30), arg1, rdi_1 - 1)
    else
        sub_141f8fd20(rax_2, arg1)

jump(*(*arg1 + 0x688))

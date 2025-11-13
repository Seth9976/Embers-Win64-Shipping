// 函数: sub_1429534e0
// 地址: 0x1429534e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rdi = arg3
int32_t r15 = -1
int64_t* r14 = nullptr

if (sub_1428bf8a0(arg1, arg2) != 0)
    return 1

void* rax_2 = *arg1
int64_t r13 = *(rax_2 + 0x108)
int64_t rax_3 = *(rax_2 + 0x110)

if (arg2[5].d != 0)
    if (rdi != 0)
    label_142953569:
        sub_1428d8e50(rdi)
        int64_t* rax_5 = sub_1428d8ba0(rdi)
        int64_t* rax_6 = sub_1428d8ba0(rdi)
        
        if (rax_6 != 0 && sub_142972660(rax_6, arg2[2], arg1[0xc]) != 0
                && r13(arg1, rax_6, rax_6, arg2[2], rdi) != 0
                && sub_142972660(rax_6, rax_6, arg2[3]) != 0
                && r13(arg1, rax_6, rax_6, arg2[2], rdi) != 0
                && sub_142972660(rax_6, rax_6, arg1[0xd]) != 0
                && rax_3(arg1, rax_5, arg2[3], rdi) != 0
                && sub_142972660(rax_6, rax_6, rax_5) != 0)
            r15 = sub_142890300(rax_6)
        
        sub_1428d8a60(rdi)
        sub_1428d8ae0(r14)
    else
        int64_t* rax_4 = sub_1428d8d60()
        r14 = rax_4
        rdi = rax_4
        
        if (rax_4 != 0)
            goto label_142953569

return zx.q(r15)

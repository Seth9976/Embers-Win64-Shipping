// 函数: sub_1428c00d0
// 地址: 0x1428c00d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rdi = arg4
int64_t r10 = *(*arg1 + 0x180)

if (r10 != 0)
    jump(r10)

int32_t rbx = 0
int64_t* rsi = nullptr

if (arg1[0x12] != 0)
    int64_t* rax_1
    
    if (arg4 == 0)
        rax_1 = sub_1428d8dd0()
        rsi = rax_1
        rdi = rax_1
    
    if (arg4 != 0 || rax_1 != 0)
        sub_1428d8e50(rdi)
        int64_t* rax_2 = sub_1428d8ba0(rdi)
        
        if (rax_2 != 0 && sub_142890900(rax_2, 2) != 0 && sub_1428d9010(rax_2, arg1[2], rax_2) != 0
                && sub_1429060f0(arg2, arg3, rax_2, arg1[2], rdi, arg1[0x12]) != 0)
            rbx = 1
        
        if (rdi != 0)
            sub_1428d8a60(rdi)
        
        sub_1428d8ae0(rsi)

return zx.q(rbx)

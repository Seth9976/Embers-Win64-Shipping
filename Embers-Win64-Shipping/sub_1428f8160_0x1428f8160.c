// 函数: sub_1428f8160
// 地址: 0x1428f8160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbx = *arg2
int32_t rdi = 0
int64_t arg_20 = 0

if (rbx == 0 || *arg3 u< 0x20)
    int64_t rax_1 = sub_1428a6730(0x20)
    rbx = rax_1
    
    if (rax_1 != 0)
        goto label_1428f81c0
else
label_1428f81c0:
    int32_t rax_2 = sub_1428a29f0(arg1, &arg_20)
    void arg_10
    
    if (rax_2 s> 0
            && sub_142891710(arg_20, sx.q(rax_2), rbx, &arg_10, &data_1434e91b0, nullptr) != 0)
        int64_t rcx_2 = *arg2
        
        if (rbx != rcx_2)
            sub_1428a6780(rcx_2)
            *arg2 = rbx
            *arg3 = 0x20
        
        rbx = 0
        rdi = 1

sub_1428a6780(rbx)
sub_1428a6780(arg_20)
return zx.q(rdi)

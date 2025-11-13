// 函数: sub_1428e0980
// 地址: 0x1428e0980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = sub_1428e3030(arg1, data_143b85e30)
sub_1428df6c0(rax, "Calling capi_ctx_free with %lx\n", rax)

if (rax != 0)
    sub_1428a6780(*(rax + 0x18))
    sub_1428a6780(*(rax + 8))
    sub_1428a6780(*(rax + 0x28))
    sub_1428a6780(*(rax + 0x30))
    sub_1428a6780(rax)

sub_1428e3150(arg1, data_143b85e30, 0)
return 1

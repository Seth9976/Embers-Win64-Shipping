// 函数: sub_14059c620
// 地址: 0x14059c620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x18)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_140596a40(rax)

int64_t* rcx_2 = data_143cd5ac0
data_143cd5ac0 = rbx

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)
    rbx = data_143cd5ac0

sub_140b19e60()
return sub_140b0e310(&data_1439a8bd0, rbx) __tailcall

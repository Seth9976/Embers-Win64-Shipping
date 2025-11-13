// 函数: sub_1419139b0
// 地址: 0x1419139b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439c74e8 == 0)
    sub_140af98a0("Unknown", 0xc93, 
        Platform doesn't support SM5 for OpenGL but set feature level to SM5", arg4)
    return sub_140afbb40() __tailcall

void* rbp = *(arg1 + 0x560)
void* const rdi

if (rbp == 0)
    rdi = nullptr
else
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    rdi = *(rbp + 0x40)

bool cond:1 = *(rdi + 0xe8) != 0
void* const arg_20 = rdi

if (not(cond:1))
    *(rdi + 0xe8) = sub_14193c660(arg1 - 0x18, rbp)

void* rbp_1

if (*(arg1 + 0x15b38) != 1)
    rbp_1 = arg1 + 0x152a0
    
    if (sub_141957ff0(*(arg1 + 0x15ba0)) != 1)
        rbp_1 = arg1 + 0x14a08
else
    rbp_1 = arg1 + 0x152a0

if (*(arg1 + 0x15be8) != 0)
    void* rax_3 = *(arg1 + 0x15c00)
    
    if (rax_3 != 0)
        *(rax_3 + 0x1c) += 1
        void* rax_4 = *(arg1 + 0x15c00)
        *(rax_4 + 0x20) = 1
        *(rax_4 + 0x24) = 1
        *(rax_4 + 0x28) = 1

sub_141931150(arg1 - 0x18, rbp_1, rdi)
sub_141905400(arg1 - 0x18, rbp_1, &arg_20, data_1439c74d8)
arg_20.d = 0
sub_141916c10(arg1 - 0x18, rbp_1, sub_14193de40(rdi, &arg_20), arg_20.d, data_1439c74e0)
sub_14190b110(arg1 - 0x18, rdi)
data_143f00298(0xffffffff)
data_143effcd8(0x90ee, zx.q(*(arg2 + 0x28)))
data_143f00288(zx.q(arg3))
data_143effcd8(0x90ee, 0)
jump(data_143f00298)

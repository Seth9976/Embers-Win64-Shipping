// 函数: sub_140587700
// 地址: 0x140587700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16** rbx = arg2

if (arg2[3] u>= 0x10)
    arg2 = *arg2

void* var_128
sub_14058a100(&var_128, arg2)
int64_t var_90

if (var_90 != 0)
    void var_118
    arg1[0xd].b = sub_1405877e0(arg1, &var_118)
    void var_110
    
    if (sub_14058aa90(&var_110) == 0)
        std::ios::setstate(sx.q(*(var_128 + 4)) + &var_128, 2, 0)
    
    rbx = zx.q(arg1[0xd].b)
else
    void** rax = sub_14058b120(std::cerr, "Error: could not write: ")
    wchar16* rdx = rbx
    
    if (rbx[3] u>= 0x10)
        rdx = *rbx
    
    std::ostream::operator<<(sub_14058bab0(rax, rdx, rbx[2]), sub_14058b4b0)
    rbx.b = 0

sub_1405875d0(&var_128)
return zx.q(rbx.b)

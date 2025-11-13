// 函数: sub_1426e2880
// 地址: 0x1426e2880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_1 = sub_1427249f0()
    void* rcx = arg1[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        return arg1[0x5b]

int64_t rax_5 = sub_14273f770()
int64_t r8_2 = *arg1
void* rax_6 = (*(r8_2 + 0x610))(arg1, rax_5, r8_2)

if (rax_6 != 0)
    return rax_6

sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* rax_8 = sub_140d2dfc0(sub_14273f770(), arg1, 0, 0, 0, 0, 0, 0, 0)
int64_t rdx_4 = *arg1
sub_141ef14c0(rax_8, (*(rdx_4 + 0x150))(arg1, rdx_4), 0)
int64_t rdx_6 = *rax_8
(*(rdx_6 + 0x3e8))(rax_8, rdx_6)
return rax_8

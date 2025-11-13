// 函数: sub_140b26d80
// 地址: 0x140b26d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140599090(sub_140b195d0(arg1))
sub_14093d4c0(sub_140b195d0(arg1))
int32_t rdx = data_1439a4a64
void* rsi = &data_1439a4a40
int64_t rbx

if (rdx == 0)
    rbx = zx.q(data_1439a4a38)
    int32_t rax_3 = (rbx + 1).d
    bool cond:0_1 = rax_3 s<= data_1439a4a3c
    data_1439a4a38 = rax_3
    
    if (not(cond:0_1))
        sub_140638a00(&data_1439a4a30)
    
    sub_1405b2ba0(&data_1439a4a40, 0)
else
    rbx = sx.q(data_1439a4a60)
    int64_t r8_1 = data_1439a4a30
    int64_t rax_2 = sx.q(*(r8_1 + rbx * 0xc + 4))
    data_1439a4a60 = rax_2.d
    data_1439a4a64 = rdx - 1
    
    if (rdx != 1)
        *(r8_1 + rax_2 * 0xc) = 0xffffffff

void* rax_4 = data_1439a4a50

if (rax_4 != 0)
    rsi = rax_4

int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(rbx.d)
void* r8_2 = rsi + (sx.q((temp2 + (temp1 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rbx.b & 0x1f)
char* r9 = data_1439a4a30 + sx.q(rbx.d) * 0xc
*r9 = arg1
*(r9 + 4) = 0xffffffff
void arg_10
return sub_140b134a0(&data_1439a4a30, &arg_10, zx.d(*r9), r9, rbx.d, nullptr)

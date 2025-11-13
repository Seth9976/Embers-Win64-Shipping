// 函数: sub_14228d190
// 地址: 0x14228d190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx_1 = arg1[1]
int64_t* r8 = *arg1
void* r9 = arg1[2]
*r8 = rdx_1

if (rdx_1 == 0)
    return 

int32_t i = 0
*(rdx_1 + 0xc) = (*(r9 + 8)).b
*(*r8 + 0x70) = 0
void* rdx = *r8
*(rdx + 0xb8) = 0
void* rax = rdx + 0x128

do
    *(rax - 0x38) = 0
    i += 6
    *rax = 0
    *(rax + 0x38) = 0
    *(rax + 0x70) = 0
    *(rax + 0xa8) = 0
    *(rax + 0xe0) = 0
    rax += 0x150
while (i u< 6)

*(rdx + 0x240) = 0
*(rdx + 0x278) = 0

if (*(r9 + 8) s>= 3)
    jump(*(**r8 + 0x28))

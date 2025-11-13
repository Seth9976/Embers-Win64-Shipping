// 函数: sub_140588c80
// 地址: 0x140588c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = arg2

if (arg2 u>= 0x10000000)
    std::ostream::operator<<(sub_14058b120(std::cerr, "Error: number too large to convert to VLV"), 
        sub_14058b4b0)
    r8 = 0xfffffff

uint8_t arg_10 = (r8 u>> 0x15).b & 0x7f
uint8_t arg_11 = (r8 u>> 0xe).b & 0x7f
uint8_t rax_7 = (r8 u>> 7).b
r8.b &= 0x7f
char arg_13 = r8.b
int32_t i_1 = 0
uint8_t arg_12 = rax_7 & 0x7f
void* result = nullptr

while (*(&arg_10 + result) == 0)
    i_1 += 1
    result += 1
    
    if (result s>= 4)
        break

int64_t i = sx.q(i_1)
char* rdx_1

if (i s>= 3)
    rdx_1 = arg3[1]
else
    do
        char* rdx = arg3[1]
        void* r8_1 = &(&arg_10)[i]
        result.b = *r8_1 | 0x80
        *r8_1 = result.b
        
        if (rdx == arg3[2])
            result = sub_14058b5e0(arg3, rdx, r8_1)
        else
            *rdx = result.b
            arg3[1] += 1
        
        rdx_1 = arg3[1]
        i += 1
    while (i s< 3)
    
    r8 = zx.d(arg_13)

if (rdx_1 == arg3[2])
    return sub_14058b5e0(arg3, rdx_1, &arg_13)

*rdx_1 = r8.b
arg3[1] += 1
return result

// 函数: sub_1426dadd0
// 地址: 0x1426dadd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

void* rax = sub_14255d000()
void* rdx = arg1[2]
int64_t rax_1 = sx.q(*(rax + 0x38))

if (rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax + 0x30)
    int64_t* rdi_1 = arg1[0x4b]
    
    if (rdi_1 != 0)
        int64_t rax_3 = sub_14272e4a0()
        int64_t r8_1 = *rdi_1
        int64_t result = (*(r8_1 + 0x610))(rdi_1, rax_3, r8_1)
        
        if (result != 0)
            return result

int64_t rax_4 = sub_14272e4a0()
int64_t r8_2 = *arg1
return (*(r8_2 + 0x610))(arg1, rax_4, r8_2)

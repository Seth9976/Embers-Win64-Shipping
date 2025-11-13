// 函数: sub_141f12a30
// 地址: 0x141f12a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xe0)
void* r8_2 = (sx.q(*(arg1 + 0xe8)) << 6) + i
int128_t zmm6 = zx.o(0)

for (; i != r8_2; i += 0x40)
    if (*(i + 8) == *arg2)
        zmm6 = *(i + 4)
        break

int64_t* rbx = arg2[2]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int512_t result
result.o = zmm6
return result

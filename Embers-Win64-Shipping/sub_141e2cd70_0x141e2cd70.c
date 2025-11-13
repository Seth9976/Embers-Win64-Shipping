// 函数: sub_141e2cd70
// 地址: 0x141e2cd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_1 = 0
int32_t var_20 = 0
sub_141f3bc80(arg2, 0, &i_1)
uint64_t i = i_1

for (int64_t rbp = i + (sx.q(var_20) << 3); i != rbp; i += 8)
    int64_t* rbx_1 = *i
    
    if (rbx_1 != 0)
        void* rax_1
        float zmm0_1
        rax_1, zmm0_1 = sub_14255cbc0()
        void* rdx = rbx_1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && rbx_1[0x19] == arg1[7] && rbx_1[0x81] == arg1[6] && (rbx_1[0x86].b & 0x10) == 0)
            if (arg1[0xb].b == 0)
                sub_14218b3c0(rbx_1, zmm0_1)
            else
                (*(*rbx_1 + 0x3a0))(rbx_1, 0)
            
            break

int64_t result = sub_14246c310(arg1, arg2)
uint64_t i_2 = i_1

if (i_2 == 0)
    return result

return sub_140a74f90(i_2)

// 函数: sub_14174c320
// 地址: 0x14174c320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* i_3 = arg2[0x70].q
int128_t* i = arg2

if (i_3 != 0)
    i = i_3

for (void* rdi_1 = sx.q(arg2[0x71].d) * 0xe0 + i; i != rdi_1; i = &i[0xe])
    int64_t* rax_1 = j_sub_140a82f30(0xf0)
    
    if (rax_1 != 0)
        *rax_1 = 0
        *(rax_1 + 0x10) = *i
        *(rax_1 + 0x20) = i[1]
        *(rax_1 + 0x30) = i[2]
        *(rax_1 + 0x40) = i[3]
        *(rax_1 + 0x50) = i[4]
        *(rax_1 + 0x60) = i[5]
        *(rax_1 + 0x70) = i[6]
        *(rax_1 + 0x80) = i[7]
        *(rax_1 + 0x90) = i[8]
        *(rax_1 + 0xa0) = i[9]
        *(rax_1 + 0xb0) = i[0xa]
        *(rax_1 + 0xc0) = i[0xb]
        *(rax_1 + 0xd0) = i[0xc]
        *(rax_1 + 0xe0) = i[0xd]
        int64_t* temp0_1 = *arg1
        *arg1 = rax_1
        *temp0_1
        *temp0_1 = rax_1

void* i_4 = arg2[0xe2].q
void* i_1 = &arg2[0x72]

if (i_4 != 0)
    i_1 = i_4

for (void* rdi_3 = sx.q(arg2[0xe3].d) * 0xe0 + i_1; i_1 != rdi_3; i_1 += 0xe0)
    int64_t* rax_4 = j_sub_140a82f30(0xf0)
    
    if (rax_4 != 0)
        *rax_4 = 0
        *(rax_4 + 0x10) = *i_1
        *(rax_4 + 0x20) = *(i_1 + 0x10)
        *(rax_4 + 0x30) = *(i_1 + 0x20)
        *(rax_4 + 0x40) = *(i_1 + 0x30)
        *(rax_4 + 0x50) = *(i_1 + 0x40)
        *(rax_4 + 0x60) = *(i_1 + 0x50)
        *(rax_4 + 0x70) = *(i_1 + 0x60)
        *(rax_4 + 0x80) = *(i_1 + 0x70)
        *(rax_4 + 0x90) = *(i_1 + 0x80)
        *(rax_4 + 0xa0) = *(i_1 + 0x90)
        *(rax_4 + 0xb0) = *(i_1 + 0xa0)
        *(rax_4 + 0xc0) = *(i_1 + 0xb0)
        *(rax_4 + 0xd0) = *(i_1 + 0xc0)
        *(rax_4 + 0xe0) = *(i_1 + 0xd0)
        int64_t** temp0_3 = arg1[2]
        arg1[2] = rax_4
        *temp0_3
        *temp0_3 = rax_4

void* i_5 = arg2[0x184].q
void* i_2 = &arg2[0xe4]

if (i_5 != 0)
    i_2 = i_5

int64_t result = sx.q(arg2[0x185].d)

for (void* rsi_3 = result * 0x140 + i_2; i_2 != rsi_3; i_2 += 0x140)
    result = j_sub_140a82f30(0x150)
    int64_t result_1 = result
    
    if (result != 0)
        *result = 0
        sub_1417042c0(result + 0x10, i_2)
        int64_t result_2 = arg1[4]
        arg1[4] = result_1
        result = result_2
        *result
        *result = result_1

return result

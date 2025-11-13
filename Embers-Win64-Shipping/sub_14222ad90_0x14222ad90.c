// 函数: sub_14222ad90
// 地址: 0x14222ad90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rcx = arg1[8]
int32_t i_4 = arg1[9].d

if (i_4 != 0)
    int32_t i
    
    do
        *rcx = &data_142e3e610
        rcx = &rcx[0xb]
        i = i_4
        i_4 -= 1
    while (i != 1)
    rcx = arg1[8]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_14222ac70(&arg1[6])
int32_t i_5 = arg1[5].d
void*** rcx_2 = arg1[4]

if (i_5 != 0)
    int32_t i_1
    
    do
        *rcx_2 = &data_142e3e610
        rcx_2 = &rcx_2[0xa]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    rcx_2 = arg1[4]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t i_6 = arg1[3].d
void*** rcx_3 = arg1[2]

if (i_6 != 0)
    int32_t i_2
    
    do
        *rcx_3 = &data_142e3e610
        rcx_3 = &rcx_3[0xb]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)
    rcx_3 = arg1[2]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int32_t result = arg1[1].d
void*** rcx_4 = *arg1

if (result != 0)
    int32_t i_3
    
    do
        *rcx_4 = &data_142e3e610
        rcx_4 = &rcx_4[8]
        i_3 = result
        result -= 1
    while (i_3 != 1)
    rcx_4 = *arg1

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)

// 函数: sub_1425aff70
// 地址: 0x1425aff70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int128_t* r12 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x48
    int32_t i
    
    do
        int128_t* rcx = r12
        r12 += 0x68
        *rcx = *(rbx_1 - 0x48)
        rcx[1] = *(rbx_1 - 0x38)
        rcx[2].d = rbx_1[-5].d
        sub_140780c40(rcx + 0x28, &rbx_1[-4])
        sub_140780c40(rcx + 0x38, &rbx_1[-2])
        
        if (rcx + 0x48 != rbx_1)
            uint32_t count = rbx_1[1].d
            int64_t r15_1 = *rbx_1
            int32_t r8 = *(rcx + 0x54)
            rcx[5].d = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(rcx + 0x48, count, r8)
                memcpy(*(rcx + 0x48), r15_1, count)
            else
                *(rcx + 0x54) = 0
        
        sub_140597df0(rcx + 0x58, &rbx_1[2])
        rbx_1 = &rbx_1[0xd]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result

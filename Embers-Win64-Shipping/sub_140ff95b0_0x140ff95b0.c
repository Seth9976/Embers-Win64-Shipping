// 函数: sub_140ff95b0
// 地址: 0x140ff95b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *(arg4 + 0x18)
uint32_t r9 = zx.d(*(arg2 + 0x2c))
uint64_t r11 = zx.q(arg3)
int64_t arg_10

if (r9 == 0)
    arg_10 = r10
    
    if (*(arg1 + (r11 << 3) + 0x1da8) != r10)
        *(arg1 + (r11 << 3) + 0x1da8) = r10
        int64_t* rcx_4 = *(arg1 + 0x170)
        (*(*rcx_4 + 0xd0))(rcx_4, zx.q(r11.d), 1, &arg_10)
else if (r9 == 1)
    arg_10 = r10
    
    if (*(arg1 + (r11 << 3) + 0x1e28) != r10)
        *(arg1 + (r11 << 3) + 0x1e28) = r10
        int64_t* rcx_3 = *(arg1 + 0x170)
        (*(*rcx_3 + 0x1e8))(rcx_3, zx.q(r11.d), 1, &arg_10)
else if (r9 == 2)
    arg_10 = r10
    
    if (*(arg1 + (r11 << 3) + 0x1ea8) != r10)
        *(arg1 + (r11 << 3) + 0x1ea8) = r10
        int64_t* rcx_2 = *(arg1 + 0x170)
        (*(*rcx_2 + 0x208))(rcx_2, zx.q(r11.d), 1, &arg_10)
else if (r9 == 3)
    arg_10 = r10
    
    if (*(arg1 + (r11 << 3) + 0x1f28) != r10)
        *(arg1 + (r11 << 3) + 0x1f28) = r10
        int64_t* rcx_1 = *(arg1 + 0x170)
        (*(*rcx_1 + 0x50))(rcx_1, zx.q(r11.d), 1, &arg_10)
else if (r9 == 4)
    arg_10 = r10
    
    if (*(arg1 + (r11 << 3) + 0x1fa8) != r10)
        *(arg1 + (r11 << 3) + 0x1fa8) = r10
        int64_t* rcx = *(arg1 + 0x170)
        (*(*rcx + 0x100))(rcx, zx.q(r11.d), 1, &arg_10)

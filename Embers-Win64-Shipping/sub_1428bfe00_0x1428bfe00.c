// 函数: sub_1428bfe00
// 地址: 0x1428bfe00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rbx = *arg1
int64_t rsi = *(rbx + 0xe8)

if (rsi == 0)
    sub_1428a5670(0x10, 0x88, 0x42, "crypto\ec\ec_lib.c", 0x37f)
    return 0

int64_t rax_1 = 0

if (arg2 != 0)
    do
        int64_t* rcx = *(arg3 + (rax_1 << 3))
        
        if (rbx != *rcx)
            sub_1428a5670(0x10, 0x88, 0x65, "crypto\ec\ec_lib.c", 0x384)
            return 0
        
        int32_t rdx = arg1[4].d
        
        if (rdx != 0)
            int32_t r8 = rcx[1].d
            
            if (r8 != 0 && rdx != r8)
                sub_1428a5670(0x10, 0x88, 0x65, "crypto\ec\ec_lib.c", 0x384)
                return 0
        
        rax_1 += 1
    while (rax_1 u< arg2)

jump(rsi)

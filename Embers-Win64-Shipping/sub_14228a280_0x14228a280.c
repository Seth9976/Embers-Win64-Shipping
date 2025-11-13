// 函数: sub_14228a280
// 地址: 0x14228a280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t r8_1 = *(arg1 + 0xc)
    void* rbp_1 = *arg2
    int32_t i_1 = arg2[1].d
    arg1[1].d = i_1
    
    if (i_1 != 0 || r8_1 != 0)
        sub_140a05d20(arg1, i_1, r8_1)
        void* r8_2 = *arg1
        
        if (i_1 != 0)
            void* rdx_1 = rbp_1 + 0x10
            void* rcx = r8_2 + 0x70
            int32_t i
            
            do
                r8_2 += 0xb0
                __builtin_memset(rcx - 0x60, 0, 0x60)
                rdx_1 += 0xb0
                __builtin_memset(rcx, 0, 0x30)
                rcx += 0xb0
                *(r8_2 - 0xb0) = *(rdx_1 - 0xc0)
                *(r8_2 - 0xa8) = *(rdx_1 - 0xb8)
                *(rcx - 0x114) = *(rdx_1 - 0xb4)
                *(rcx - 0x110) = *(rdx_1 - 0xb0)
                *(rcx - 0x100) = *(rdx_1 - 0xa0)
                *(rcx - 0xf0) = *(rdx_1 - 0x90)
                *(rcx - 0xe0) = *(rdx_1 - 0x80)
                *(rcx - 0xd0) = *(rdx_1 - 0x70)
                *(rcx - 0xc0) = *(rdx_1 - 0x60)
                *(rcx - 0xb0) = *(rdx_1 - 0x50)
                *(rcx - 0xa0) = *(rdx_1 - 0x40)
                *(rcx - 0x90) = *(rdx_1 - 0x30)
                *(rcx - 0x80) = *(rdx_1 - 0x20)
                *(rcx - 0x7c) = *(rdx_1 - 0x1c)
                i = i_1
                i_1 -= 1
            while (i != 1)
    else
        *(arg1 + 0xc) = i_1

arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb].d ^= (arg1[0xb].d ^ arg2[0xb].d) & 0x7fffffff
arg1[0xb].d = ((arg1[0xb].d ^ arg2[0xb].d) & 0x7fffffff) ^ arg2[0xb].d
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x80) = *(arg2 + 0x80)
arg1[0x12].d = arg2[0x12].d
arg1[0x13] = arg2[0x13]
return arg1

// 函数: sub_14087f390
// 地址: 0x14087f390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int128_t* r12 = arg2

if (arg4 != 0)
    void** rbx_1 = arg3 + 0x48
    int32_t i
    
    do
        int128_t* rbp_1 = r12
        r12 += 0xe8
        sub_14065da90(rbp_1, &rbx_1[-9])
        sub_14065da90(rbp_1 + 0x18, &rbx_1[-6])
        rbp_1[3].b = rbx_1[-3].b
        *(rbp_1 + 0x34) = *(rbx_1 - 0x14)
        *(rbp_1 + 0x38) = rbx_1[-2].b
        rbp_1[4].q = rbx_1[-1]
        sub_140597970(rbp_1 + 0x48, rbx_1)
        *(rbp_1 + 0x58) = rbx_1[2]
        sub_140597970(&rbp_1[6], &rbx_1[3])
        
        if (&rbp_1[7] != &rbx_1[5])
            int64_t rsi_1 = sx.q(rbx_1[0xe].d)
            void* rdi_1 = rbp_1 + 0xa8
            sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
            void* rax_6 = rbx_1[0xd]
            void* rdx_4 = &rbx_1[0xc]
            void* r9 = *(rdi_1 + 8)
            
            if (rax_6 != 0)
                rdx_4 = rax_6
            
            if (r9 != 0)
                rdi_1 = r9
            
            memcpy(rdi_1, rdx_4, (rsi_1 << 2).d)
            *(rbp_1 + 0xb8) = rsi_1.d
            sub_1407474e0(&rbp_1[7], &rbx_1[5])
        
        rbp_1[0xc].q = rbx_1[0xf]
        *(rbp_1 + 0xc8) = rbx_1[0x10].d
        *(rbp_1 + 0xcc) = *(rbx_1 + 0x84)
        rbp_1[0xd].d = rbx_1[0x11].d
        *(rbp_1 + 0xd4) = *(rbx_1 + 0x8c)
        *(rbp_1 + 0xd5) = *(rbx_1 + 0x8d)
        *(rbp_1 + 0xd8) = rbx_1[0x12]
        rbp_1[0xe].b = rbx_1[0x13].b
        char rax = *(rbx_1 + 0x99)
        rbx_1 = &rbx_1[0x1d]
        *(rbp_1 + 0xe1) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1

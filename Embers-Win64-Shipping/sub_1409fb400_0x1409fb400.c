// 函数: sub_1409fb400
// 地址: 0x1409fb400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e4b498
int64_t rbp = 0
void*** rbx = arg1
int64_t* rsi = arg1[0x2a]
uint64_t r12_1 = sx.q(arg1[0x2b].d) << 3 u>> 3

if (rsi u> &rsi[arg1[0x2b]])
    r12_1 = 0

if (r12_1 != 0)
    do
        void* rbx_1 = *rsi
        
        if (rbx_1 != 0)
            (*(*(rbx_1 + 0x90) + 0x30))(rbx_1 + 0x90)
            (*(*(rbx_1 + 8) + 0x30))(rbx_1 + 8)
            (*(*(rbx_1 + 0xd0) + 0x30))(rbx_1 + 0xd0)
            (*(*(rbx_1 + 0x110) + 0x30))(rbx_1 + 0x110)
            (*(*(rbx_1 + 0x138) + 0x30))(rbx_1 + 0x138)
            
            if (data_143f0f21f != 0)
                uint64_t rdx_1 = zx.q(data_143f0f1a0)
                
                if (((*(&data_143f025fc + sx.q(rdx_1.d) * 0x14) u>> 0x13).b & 1) != 0
                        && test_bit(data_143f13cd8, rdx_1))
                    (*(*(rbx_1 + 0x350) + 0x30))(rbx_1 + 0x350)
            
            *(rbx_1 + 0x350) = &data_142dd5bb0
            sub_14081d280(rbx_1 + 0x388)
            sub_14081c9d0(rbx_1 + 0x380)
            sub_140a1d5c0(rbx_1 + 0x368)
            *(rbx_1 + 0x360) = &data_142da7708
            sub_1419948a0(rbx_1 + 0x350)
            sub_1405d1550(rbx_1 + 0x338)
            sub_14081d2f0(rbx_1 + 0x138)
            int64_t rcx_13 = *(rbx_1 + 0x128)
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            *(rbx_1 + 0x110) = &data_142e0ef98
            sub_14081c9d0(rbx_1 + 0x120)
            sub_1419948a0(rbx_1 + 0x110)
            sub_142289b70(rbx_1 + 0xd0)
            sub_142289c80(rbx_1 + 0x90)
            sub_1422b5620(rbx_1 + 8)
            j_sub_140a74f90(rbx_1)
        
        rsi = &rsi[1]
        rbp += 1
    while (rbp != r12_1)
    
    rbx = arg1
    rsi = rbx[0x2a]

if (rsi != 0)
    sub_140a74f90(rsi)

return sub_142289fd0(rbx) __tailcall

// 函数: sub_1417ce7c0
// 地址: 0x1417ce7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdi = arg1
*arg1 = &data_142fcc260
int64_t r13 = 0
int64_t* rbx = arg1[0x2a]
uint64_t rcx_1 = sx.q(arg1[0x2b].d) << 3 u>> 3

if (rbx u> &rbx[arg1[0x2b]])
    rcx_1 = 0

uint64_t arg_18 = rcx_1

if (rcx_1 != 0)
    do
        void* rdi_1 = *rbx
        
        if (rdi_1 != 0)
            (*(*(rdi_1 + 8) + 0x30))(rdi_1 + 8)
            (*(*(rdi_1 + 0x28) + 0x30))(rdi_1 + 0x28)
            (*(*(rdi_1 + 0x48) + 0x30))(rdi_1 + 0x48)
            (*(*(rdi_1 + 0x68) + 0x30))(rdi_1 + 0x68)
            (*(*(rdi_1 + 0x88) + 0x30))(rdi_1 + 0x88)
            (*(*(rdi_1 + 0xa8) + 0x30))(rdi_1 + 0xa8)
            sub_1405ec8a0(rdi_1 + 0x2f0)
            sub_1405ec8a0(rdi_1 + 0x2e8)
            sub_1405ec8a0(rdi_1 + 0x2e0)
            sub_1405ec8a0(rdi_1 + 0x2d8)
            sub_1405d1550(rdi_1 + 0x2a8)
            sub_14081d2f0(rdi_1 + 0xa8)
            *(rdi_1 + 0x88) = &data_142e0ef98
            sub_14081c9d0(rdi_1 + 0x98)
            sub_1419948a0(rdi_1 + 0x88)
            *(rdi_1 + 0x68) = &data_142dda848
            sub_1405d1550(rdi_1 + 0x78)
            sub_1419948a0(rdi_1 + 0x68)
            *(rdi_1 + 0x48) = &data_142dda848
            sub_1405d1550(rdi_1 + 0x58)
            sub_1419948a0(rdi_1 + 0x48)
            *(rdi_1 + 0x28) = &data_142dda848
            sub_1405d1550(rdi_1 + 0x38)
            sub_1419948a0(rdi_1 + 0x28)
            *(rdi_1 + 8) = &data_142dda848
            sub_1405d1550(rdi_1 + 0x18)
            sub_1419948a0(rdi_1 + 8)
            j_sub_140a74f90(rdi_1)
            rcx_1 = arg_18
        
        rbx = &rbx[1]
        r13 += 1
    while (r13 != rcx_1)
    
    rdi = arg1

sub_140d94f50(&rdi[0x2e])
int64_t rcx_26 = rdi[0x2a]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

return sub_142289fd0(rdi) __tailcall

// 函数: sub_140618940
// 地址: 0x140618940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

void* rbx = &arg1[7]
int64_t rdi = sx.q(arg2[9].d)
sub_1405a4aa0(rbx, 0, rdi.d, 4)
void* rax = arg2[8]
void* rdx = &arg2[7]
void* r9 = *(rbx + 8)

if (rax != 0)
    rdx = rax

if (r9 != 0)
    rbx = r9

memcpy(rbx, rdx, (rdi << 2).d)
arg1[9].d = rdi.d
int64_t i_2 = sx.q(arg2[1].d)
sub_140619f90(arg1, i_2.d)
int32_t rax_1 = arg1[1].d + i_2.d
arg1[1].d = rax_1

if (rax_1 s> *(arg1 + 0xc))
    sub_1405c4f50(arg1)

void* rbx_1 = &arg1[2]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)

if (rbx_1 != &arg2[2])
    sub_14059a8e0(rbx_1, arg2[5].d)
    int32_t rax_4 = arg2[5].d
    *(rbx_1 + 0x18) = rax_4
    
    if (rax_4 != 0)
        void* r9_1 = arg2[4]
        void* r10_1 = *(rbx_1 + 0x10)
        void* rdx_4 = &arg2[2]
        
        if (r9_1 != 0)
            rdx_4 = r9_1
        
        if (r10_1 != 0)
            rbx_1 = r10_1
        
        memcpy(rbx_1, rdx_4, (zx.q(rax_4 + 0x1f) u>> 5 << 2).d)

int64_t i_1 = i_2
void* rax_5 = *arg1
int32_t rsi_1 = 0

if (i_2.d s> 0)
    int32_t rdi_1 = 1
    void* r12_1 = *arg2 - rax_5
    void* rbx_2 = rax_5 + 8
    int64_t i
    
    do
        void* rax_6 = arg2[4]
        void* rdx_5 = &arg2[2]
        
        if (rax_6 != 0)
            rdx_5 = rax_6
        
        int32_t rax_7 = rsi_1
        
        if (rsi_1 s< 0)
            rax_7 = rsi_1 + 0x1f
        
        bool cond:0_1 = (rdi_1 & *(rdx_5 + (sx.q(rax_7 s>> 5) << 2))) == 0
        *(rbx_2 - 8) = *(r12_1 + rbx_2 - 8)
        
        if (cond:0_1)
            *(rbx_2 - 4) = *(r12_1 + rbx_2 - 4)
        else
            sub_140618490(rbx_2, r12_1 + rbx_2)
            *(rbx_2 + 0x20) = *(r12_1 + rbx_2 + 0x20)
            *(rbx_2 + 0x24) = *(r12_1 + rbx_2 + 0x24)
        
        rsi_1 += 1
        rdi_1 = rol.d(rdi_1, 1)
        rbx_2 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1

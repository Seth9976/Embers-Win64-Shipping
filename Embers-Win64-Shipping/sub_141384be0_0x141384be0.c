// 函数: sub_141384be0
// 地址: 0x141384be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[4].d)
int32_t rdx = *(arg2 + 0x20)
int64_t* rax

if (rdx s> rdi.d)
    arg1[4].d = rdx
    int32_t rbx_2 = rdx - rdi.d
    
    if (rdx s> *(arg1 + 0x24))
        sub_1413a87c0(arg1, rdi.d)
    
    rax = arg1[3]
    int64_t* rcx = arg1
    
    if (rax != 0)
        rcx = rax
    
    if (rbx_2 != 0)
        __builtin_memset(&rcx[rdi], 0, zx.q(rbx_2) << 3)
else if (rdx s< rdi.d)
    sub_1413a3550(arg1, rdx, rdi.d - rdx, 1)

int32_t i = 0

if (*(arg2 + 0x20) s<= 0)
    return 

int64_t rsi_1 = 0

do
    void* rax_1 = *(arg2 + 0x18)
    void* rcx_2 = arg2
    int64_t* rbx_3 = arg1[3]
    
    if (rax_1 != 0)
        rcx_2 = rax_1
    
    rax = sub_1419a5030(&data_1439c9260, rcx_2 + (sx.q(i) << 3))
    int64_t* rdx_3 = arg1
    
    if (rbx_3 != 0)
        rdx_3 = rbx_3
    
    int64_t* rbx_4 = *(rdx_3 + rsi_1)
    *(rdx_3 + rsi_1) = rax
    
    if (rax != 0)
        int64_t rdx_4 = *rax
        (*(rdx_4 + 0x30))(rax, rdx_4)
    
    if (rbx_4 != 0)
        (*(*rbx_4 + 0x38))(rbx_4)
    
    i += 1
    rsi_1 += 8
while (i s< *(arg2 + 0x20))

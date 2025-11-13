// 函数: sub_141d242b0
// 地址: 0x141d242b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rbx = 0
int64_t rdi = sx.q(rax_1)
int32_t var_30 = rdi.d
int32_t* rsi = nullptr
int32_t* var_38 = nullptr
int32_t var_2c = 0

if (rax_1 s> 0)
    sub_14090a6a0(&var_38)
    rsi = var_38

int32_t i_1 = rdi.d
int32_t* r8 = rsi

if (rdi.d != 0)
    int64_t* rdx_1 = &rsi[0xa]
    int32_t i
    
    do
        *r8 = 0xffffffff
        int64_t* rcx_1 = &rdx_1[-2]
        *(rdx_1 - 0x24) = 0xffffffff
        r8 = &r8[0x18]
        rdx_1[-4] = 0
        rdx_1[-3] = 0
        *rdx_1 = 0
        rdx_1[1].d = 0
        *(rdx_1 + 0xc) = 0x80
        int64_t* rax_2 = *rdx_1
        rdx_1 = &rdx_1[0xc]
        
        if (rax_2 != 0)
            rcx_1 = rax_2
        
        *rcx_1 = 0
        rcx_1[1] = 0
        rdx_1[-0xa].d = 0xffffffff
        *(rdx_1 - 0x4c) = 0
        rdx_1[-8] = 0
        rdx_1[-7].d = 0
        rdx_1[-6].d = 1
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rdi.d s> 0)
    void* rsi_1 = &rsi[2]
    
    do
        int32_t* rdi_3 = sx.q(*(*arg2 + (rbx << 2))) * 0x60 + arg1[1]
        *(rsi_1 - 8) = *rdi_3
        *(rsi_1 - 4) = rdi_3[1]
        sub_140780cc0(rsi_1, &rdi_3[2])
        rbx += 1
        *(rsi_1 + 0x50) = rdi_3[0x16]
        rsi_1 += 0x60
    while (rbx s< rdi)

if (&arg1[1] != &var_38)
    var_38.o = *(arg1 + 8)
    *(arg1 + 8) = var_38.o

return sub_141d185f0(&var_38)

// 函数: sub_141d24d00
// 地址: 0x141d24d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rbx = sx.q(rax_1)
int32_t var_40 = rbx.d
int64_t* rdi = nullptr
int64_t* var_48 = nullptr
int32_t var_3c = 0

if (rax_1 s> 0)
    sub_1405c5060(&var_48)
    rdi = var_48

int32_t i_1 = rbx.d
int64_t* r8 = rdi

if (rbx.d != 0)
    int64_t* rdx_1 = &rdi[4]
    int32_t i
    
    do
        *r8 = 0
        int64_t* rcx_1 = &rdx_1[-2]
        rdx_1[-3] = 0
        r8 = &r8[0xa]
        *rdx_1 = 0
        rdx_1[1].d = 0
        *(rdx_1 + 0xc) = 0x80
        int64_t* rax_2 = *rdx_1
        rdx_1 = &rdx_1[0xa]
        
        if (rax_2 != 0)
            rcx_1 = rax_2
        
        *rcx_1 = 0
        rcx_1[1] = 0
        rdx_1[-8].d = 0xffffffff
        *(rdx_1 - 0x3c) = 0
        rdx_1[-6] = 0
        rdx_1[-5].d = 0
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbx.d s> 0)
    int64_t* rdi_1 = &rdi[8]
    int64_t rsi_1 = 0
    
    do
        int64_t* rbx_3 = sx.q(*(*arg2 + (rsi_1 << 2))) * 0x50 + arg1[1]
        
        if (&rdi_1[-8] != rbx_3)
            sub_140780e10(&rdi_1[-8], rbx_3)
            
            if (rbx_3[8] == 0)
                memmove(&rdi_1[-1], &rbx_3[7], 4)
            
            int64_t rcx_5 = *rdi_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            *rdi_1 = rbx_3[8]
            rbx_3[8] = 0
            rdi_1[1].d = rbx_3[9].d
            rbx_3[9].d = 0
        
        rsi_1 += 1
        rdi_1 = &rdi_1[0xa]
    while (rsi_1 s< rbx)

if (&arg1[1] != &var_48)
    var_48.o = *(arg1 + 8)
    *(arg1 + 8) = var_48.o

return sub_14100df10(&var_48)

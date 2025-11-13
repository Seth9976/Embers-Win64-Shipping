// 函数: sub_1426aa900
// 地址: 0x1426aa900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x300) == 0)
    return 

int64_t* rbp_1 = nullptr
int64_t* rdi_1

if (arg2 == 0)
    rdi_1 = nullptr
else
    void* rax_1 = sub_14263d1a0()
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> arg2[7].d)
            rdi_1 = nullptr
        else
            rdi_1 = arg2
            
            if (*(arg2[6] + (rax_2 << 3)) != rax_1 + 0x30)
                rdi_1 = nullptr

void* rax_5 = rdi_1[0x23]

if (rax_5 == 0)
    (*(*rdi_1 + 0x390))(rdi_1)
    rax_5 = rdi_1[0x23]

char rcx_2

if ((*(rax_5 + 0x30) & 1) != 0 || *(rax_5 + 0x28) != 0xffffffff)
    rcx_2 = *(rax_5 + 0x28)
else
    rcx_2 = *(rax_5 + 0x2c)

void* rax = zx.q(*(arg1 + 0x2b8))
uint32_t rdx_1 = zx.d(rcx_2)

if (test_bit(rax.d, rdx_1))
    return 

*(arg1 + 0x2b8) = rax.w | (1 << (rdx_1 u% 0x20)).w

if (arg2 != 0)
    void* rax_7 = sub_14263d1a0()
    
    if (rax_7 != 0)
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s<= arg2[7].d && *(arg2[6] + (rax_8 << 3)) == rax_7 + 0x30)
            rbp_1 = arg2

if (sub_142639e30(arg1 + 0x2a0, arg2, 0xc0, rbp_1[3]) != 0)
    sub_142639c00(*(arg1 + 0x300))

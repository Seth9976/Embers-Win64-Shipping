// 函数: sub_1418cc980
// 地址: 0x1418cc980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg3

if (*(arg1 + 0x78) == 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t* rbx = arg1 + 0x1e8
uint64_t rdi = 0
void* r13 = *(arg2 + 0x158)
void* rdx = *(*(r13 + 8) + 0x20)
int64_t r12_1 = zx.q(*(rdx + 0x14)) + *(*(*(rdx + 0x20) + 0x18) + 0x18)
int64_t r10 = *(*(arg1 + 8) + 0xa30)
int64_t arg_8 = r10
int64_t* r14_1 = *(*(arg1 + 0xc8) + 0x80) + 0x30
int64_t var_40
uint64_t var_38
void* var_30
uint64_t rax_4

do
    uint64_t rdx_1 = *rbx
    
    if (rdx_1 != 0)
        var_30 = r15
        var_38 = rdx_1
        var_40 = r12_1
        rax_4, arg3 = sub_1418cd8d0(r10.d, *r14_1, arg1 + 0xd0 + rdi * 0x30, 
            zx.q(r14_1[2].w) * 0x58 + *(arg1 + 0x98), r13, var_40, var_38, var_30)
        *(arg1 + 0x90) |= rax_4.b
        *(arg1 + 0xc0) |= rax_4.b
        r10 = arg_8
        *rbx = 0
    
    rdi = zx.q(rdi.d + 1)
    rbx = &rbx[1]
    r14_1 = &r14_1[7]
while (rdi.d s< 5)

if (data_1439c7a08 s> 1)
    arg3.b = *(arg1 + 0x90) != 0
    
    if (sub_1418babd0(r15, *(arg1 + 0x60), arg3.b, *(arg1 + 0x68)).b != 0)
        uint32_t i_1 = *(arg1 + 0x78)
        int32_t r11_1 = 0
        
        if (i_1 != 0)
            uint32_t i
            
            do
                i = i_1
                
                if ((i_1.b & 1) != 0)
                    int64_t rcx_7 = sx.q(r11_1)
                    int64_t r10_1 = *(*(arg1 + 0x68) + (rcx_7 << 3))
                    int32_t j = 0
                    int64_t* r8_4 = rcx_7 * 0x58 + *(arg1 + 0x98)
                    
                    if (r8_4[3].d u> 0)
                        do
                            uint64_t j_1 = zx.q(j)
                            j += 1
                            *((j_1 << 6) + *r8_4 + 0x10) = r10_1
                        while (j u< r8_4[3].d)
                
                r11_1 += 1
                i_1 u>>= 1
            while (i u>= 2)
        
        data_143efb8e8(*(*(arg1 + 8) + 8), zx.q(*(arg1 + 0x48)), *(arg1 + 0x40), 0, 0, var_40, 
            var_38, var_30)
        *(arg1 + 0x90) = 0
else if (*(arg1 + 0x90) != 0)
    sub_1418e1b30(*(*(arg1 + 8) + 0x460), sub_1418e1aa0(arg1), *(arg1 + 0x60), arg1 + 0x98, 
        *(arg1 + 0x68))
    *(arg1 + 0x90) = 0

rax_4.b = 1
return rax_4

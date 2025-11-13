// 函数: sub_142865c40
// 地址: 0x142865c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
sub_1428a6780(*(*(arg1 + 0x488) + 0x1b8))
int64_t i_1 = 0
int32_t* i_2 = 0x310
int32_t* i = 0x310
*(*(arg1 + 0x488) + 0x1b8) = 0
*(*(arg1 + 0x488) + 0x1c0) = 0

do
    *(i + *(arg1 + 0xa8)) = 0
    i = &i[1]
while (i u< 0x334)

void* rsi = *(arg1 + 0xa8)

if (*(rsi + 0x2f0) != 0 || *(rsi + 0x2e8) != 0)
    void* r14 = *(arg1 + 0x488)
    int32_t var_20_1
    int32_t rdx_3
    int32_t r9_1
    
    if (sub_142865ee0(arg1) == 0)
        rdx_3 = 0x50
        var_20_1 = 0x4b7
        r9_1 = 0x44
    else
        __builtin_memset(rsi + 0x310, 0, 0x24)
        
        if (*(r14 + 0x1c0) u> 0)
            do
                int32_t* rcx_6 = *(arg1 + 8)
                void* rdx_2 = *(*(r14 + 0x1b8) + (i_1 << 3))
                int32_t rax_12
                
                if ((*(*(rcx_6 + 0xc0) + 0x60) & 8) == 0)
                    rax_12 = *rcx_6
                
                if ((*(*(rcx_6 + 0xc0) + 0x60) & 8) != 0 || rax_12 s< 0x304 || rax_12 == 0x10000
                        || *(rdx_2 + 0x14) != 6)
                    int64_t rdi_2 = sx.q(*(rdx_2 + 0x18))
                    
                    if (*(rsi + (rdi_2 << 2) + 0x310) == 0 && sub_1428590d0(rdi_2) == 0)
                        *(rsi + (rdi_2 << 2) + 0x310) = 0x102
                
                i_1 += 1
            while (i_1 u< *(r14 + 0x1c0))
        
        if (*(*(arg1 + 0x488) + 0x1b8) != 0)
            return 1
        
        var_20_1 = 0x4bf
        rdx_3 = 0x28
        r9_1 = 0x178
    
    sub_142856580(arg1, rdx_3, 0x14f, r9_1, "ssl\t1_lib.c", var_20_1)
    return 0

void* rsi_1 = *(arg1 + 0x488)
int32_t rax_4 = *(rsi_1 + 0x1c) & 0x30000
int64_t rsi_2
void* const rdi_1

if (rax_4 == 0x10000)
    rsi_2 = 1
    rdi_1 = &data_1434dc724
else if (rax_4 == 0x20000)
    rdi_1 = &data_1434dc726
    rsi_2 = 1
else if (rax_4 == 0x30000)
    rsi_2 = 2
    rdi_1 = &data_1434dc724
else
    if (*(arg1 + 0x38) == 1)
        rdi_1 = *(rsi_1 + 0x1a8)
    
    if (*(arg1 + 0x38) != 1 || rdi_1 == 0)
        rdi_1 = *(rsi_1 + 0x198)
        
        if (rdi_1 == 0)
            rdi_1 = &data_1434dc6f0
            rsi_2 = 0x1a
        else
            rsi_2 = *(rsi_1 + 0x1a0)
    else
        rsi_2 = *(rsi_1 + 0x1b0)

int64_t r15_1 = 0

do
    char const (** rax_5)[0x17] = sub_1428652a0(arg1, r15_1.d)
    
    if (rax_5 != 0)
        int64_t rax_6 = 0
        
        if (rsi_2 != 0)
            do
                if (rax_5[1].w == *(rdi_1 + (rax_6 << 1)))
                    *(i_2 + *(arg1 + 0xa8)) = 2
                    break
                
                rax_6 += 1
            while (rax_6 u< rsi_2)
    
    r15_1 += 1
    i_2 = &i_2[1]
while (i_2 u< 0x334)

return 1

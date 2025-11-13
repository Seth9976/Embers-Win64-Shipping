// 函数: sub_1418a7f40
// 地址: 0x1418a7f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14189e850(arg1 + 0x18, arg2)
int64_t* r12 = arg1 + 0x28
sub_14189e850(r12, &arg2[2])
sub_1418aa9b0(arg1 + 0x38)
sub_1418aaa90(arg1 + 0x88)
int64_t* rbx_1 = *(arg1 + 0x18)
void* r14_1 = sx.q(*(arg1 + 0x20)) * 0x38 + rbx_1

if (rbx_1 != r14_1)
    void* rsi_1 = &rbx_1[2]
    
    do
        int64_t* rax_2 = sub_14189c450(arg1 + 0x38, sub_140a6b260(rsi_1, 0x10), rsi_1)
        int64_t rbp_1 = sx.q(rax_2[1].d)
        int32_t rcx_6 = (rbp_1 + 1).d
        rax_2[1].d = rcx_6
        
        if (rcx_6 s> *(rax_2 + 0xc))
            sub_1405a4d70(rax_2)
        
        *(*rax_2 + (rbp_1 << 3)) = rbx_1
        int32_t rax_4 = *(rsi_1 - 8)
        int16_t* rdx_3
        
        if (rax_4 == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *rbx_1
        
        int32_t rcx_8 = rax_4 - 1
        
        if (rax_4 == 0)
            rcx_8 = 0
        
        int64_t* rax_6 = sub_14189c4d0(arg1 + 0x88, sub_1405969c0(rcx_8, rdx_3), rbx_1)
        int64_t rbp_2 = sx.q(rax_6[1].d)
        int32_t rcx_10 = (rbp_2 + 1).d
        rax_6[1].d = rcx_10
        
        if (rcx_10 s> *(rax_6 + 0xc))
            sub_1405a4d70(rax_6)
        
        rsi_1 += 0x38
        *(*rax_6 + (rbp_2 << 3)) = rbx_1
        rbx_1 = &rbx_1[7]
    while (rbx_1 != r14_1)

void* i = *r12
int64_t result = sx.q(r12[1].d)

for (void* rbp_4 = result * 0x38 + i; i != rbp_4; i += 0x38)
    int32_t rax_8 = *(i + 8)
    int16_t* rdx_6
    
    if (rax_8 == 0)
        rdx_6 = &data_142d40450
    else
        rdx_6 = *i
    
    int32_t rcx_12 = rax_8 - 1
    
    if (rax_8 == 0)
        rcx_12 = 0
    
    int64_t* rax_10 = sub_14189c4d0(arg1 + 0x88, sub_1405969c0(rcx_12, rdx_6), i)
    int64_t rsi_2 = sx.q(rax_10[1].d)
    int32_t rcx_14 = (rsi_2 + 1).d
    rax_10[1].d = rcx_14
    
    if (rcx_14 s> *(rax_10 + 0xc))
        sub_1405a4d70(rax_10)
    
    result = *rax_10
    *(result + (rsi_2 << 3)) = i

return result

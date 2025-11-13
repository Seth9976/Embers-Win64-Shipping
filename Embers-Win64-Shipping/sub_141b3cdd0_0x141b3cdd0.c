// 函数: sub_141b3cdd0
// 地址: 0x141b3cdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t i_3 = arg1[1].d

if (i_3 != 0)
    int64_t* rbx_1 = *arg1 + 0x18
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1 = &rbx_1[5]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_2 = arg2[1].d
void* rbx_2 = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_2

if (i_2 == 0 && r8 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_1407751d0(arg1, i_2, r8)
int64_t* r15_1 = *arg1

if (i_2 == 0)
    return arg1

int64_t* rbx_3 = rbx_2 + 8
void* rsi_1 = &r15_1[4]
int32_t i_1

do
    *r15_1 = rbx_3[-1]
    *(rsi_1 - 0x18) = 0
    *(rsi_1 - 0x10) = 0xffffffff
    *(rsi_1 - 0xc) = 0
    *(rsi_1 - 8) = 0
    *rsi_1 = 0
    sub_140cea340()
    void* rax_4
    bool rcx_2
    
    if (*rbx_3 == 0)
        rcx_2 = true
        rax_4 = nullptr
    else
        bool cond:0_1 = sub_140d3e110(&rbx_3[1]) == 0
        rax_4 = *rbx_3
        rcx_2 = cond:0_1
    
    if (rcx_2 != 0 && rbx_3[3].d != 0)
        rax_4 = sub_140cd0630(rbx_3, nullptr, 0)
        
        if (rax_4 == 0 || (data_143e1b828 & *(*(rax_4 + 8) + 0x10)) == 0)
            rax_4 = *rbx_3
            
            if (rax_4 != 0)
                rbx_3[1].d = 0xffffffff
                rax_4 = nullptr
                *(rbx_3 + 0xc) = 0
                *rbx_3 = 0
        else
            *rbx_3 = rax_4
    
    *(rsi_1 - 0x18) = rax_4
    *(rsi_1 - 0x10) = rbx_3[1]
    sub_140780c40(rsi_1 - 8, &rbx_3[2])
    r15_1 = &r15_1[5]
    rsi_1 += 0x28
    rbx_3 = &rbx_3[5]
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return arg1

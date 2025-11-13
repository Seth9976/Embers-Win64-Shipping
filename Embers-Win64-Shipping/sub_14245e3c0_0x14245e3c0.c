// 函数: sub_14245e3c0
// 地址: 0x14245e3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t i_3 = arg1[1].d

if (i_3 != 0)
    int64_t* rbx_1 = *arg1 + 0x10
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1 = &rbx_1[4]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_2 = arg2[1].d
int64_t* rbx_2 = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_2

if (i_2 == 0 && r8 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_14083a1f0(arg1, i_2, r8)
int64_t* r15_1 = *arg1

if (i_2 == 0)
    return arg1

void* rsi_1 = &r15_1[3]
int32_t i_1

do
    *r15_1 = 0
    *(rsi_1 - 0x10) = 0xffffffff
    *(rsi_1 - 0xc) = 0
    *(rsi_1 - 8) = 0
    *rsi_1 = 0
    sub_140cea340()
    void* rax_3
    bool rcx_2
    
    if (*rbx_2 == 0)
        rcx_2 = true
        rax_3 = nullptr
    else
        bool cond:0_1 = sub_140d3e110(&rbx_2[1]) == 0
        rax_3 = *rbx_2
        rcx_2 = cond:0_1
    
    if (rcx_2 != 0 && rbx_2[3].d != 0)
        rax_3 = sub_140cd0630(rbx_2, nullptr, 0)
        
        if (rax_3 == 0 || (data_143e1b828 & *(*(rax_3 + 8) + 0x10)) == 0)
            rax_3 = *rbx_2
            
            if (rax_3 != 0)
                rbx_2[1].d = 0xffffffff
                rax_3 = nullptr
                *(rbx_2 + 0xc) = 0
                *rbx_2 = 0
        else
            *rbx_2 = rax_3
    
    *r15_1 = rax_3
    *(rsi_1 - 0x10) = rbx_2[1]
    sub_140780c40(rsi_1 - 8, &rbx_2[2])
    r15_1 = &r15_1[4]
    rsi_1 += 0x20
    rbx_2 = &rbx_2[4]
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return arg1

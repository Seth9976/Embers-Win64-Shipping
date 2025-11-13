// 函数: sub_14102a150
// 地址: 0x14102a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void**** result = arg2
void*** rax = j_sub_140a82f30(0x90)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_14100b620(rax)

void* rax_2 = *arg3
int32_t rcx_1

if (rax_2 == 0)
    rcx_1 = 0
else
    rcx_1 = *(rax_2 + 0x18)

*(rbx + 0x1c) = rcx_1
rbx[4].d = arg3[1].d
*(rbx + 0x24) = arg3[2].d
int32_t rcx_2 = *(arg3 + 0xc)

if (rcx_2 == 0)
    rbx[5].d = 0
else if (rcx_2 == 1)
    rbx[5].d = rcx_2

int32_t rax_5 = 8

if (arg3[6].b == 0)
    rax_5 = 4

rbx[8].d = rax_5

if (*(arg3 + 0x31) != 0)
    rbx[8].d |= 1
    rax_5 = rbx[8].d

int32_t rcx_3 = data_143e2c1c0

if (rcx_3 == 1)
    rbx[8].d = (rbx[8].d & 0xfffffffb) | 8
else if (rcx_3 == 2)
    rbx[8].d = (rax_5 & 0xfffffff7) | 4

void* rsi = arg3[3]
int32_t i_5 = arg3[4].d

if ((rsi.b & 1) != 0)
    rsi = (rsi s>> 1) + &arg3[3]

int64_t* rbp = nullptr
uint64_t var_48 = 0
int32_t i_7 = i_5
int32_t r13

if (i_5 != 0)
    sub_14083a1f0(&var_48, i_5, 0)
    uint64_t rax_11 = var_48
    void* rsi_2 = rsi - rax_11
    int32_t* rcx_5 = rax_11 + 0xc
    int32_t i
    
    do
        void* rax_12 = *(rcx_5 + rsi_2 - 0xc)
        *(rcx_5 - 0xc) = rax_12
        
        if (rax_12 != 0)
            *(rax_12 + 8) += 1
        
        rcx_5[-1] = *(rcx_5 + rsi_2 - 4)
        *rcx_5 = *(rcx_5 + rsi_2)
        rcx_5[1] = *(rcx_5 + rsi_2 + 4)
        rcx_5[2] = *(rcx_5 + rsi_2 + 8)
        rcx_5[3] = *(rcx_5 + rsi_2 + 0xc)
        rcx_5[4].b = *(rcx_5 + rsi_2 + 0x10)
        *(rcx_5 + 0x11) = *(rcx_5 + rsi_2 + 0x11)
        *(rcx_5 + 0x12) = *(rcx_5 + rsi_2 + 0x12)
        rcx_5 = &rcx_5[8]
        i = i_5
        i_5 -= 1
    while (i != 1)
    int32_t var_3c
    r13 = var_3c
    i_5 = i_7
    rbp = var_48
else
    r13 = 0
    int32_t var_3c_1 = 0

if (&rbx[6] != &var_48)
    int32_t i_6 = rbx[7].d
    int64_t* rsi_3 = rbx[6]
    
    if (i_6 != 0)
        int32_t i_1
        
        do
            sub_1405d1550(rsi_3)
            rsi_3 = &rsi_3[4]
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
        rsi_3 = rbx[6]
    
    if (rsi_3 != 0)
        sub_140a74f90(rsi_3)
    
    result = arg2
    rbx[6] = rbp
    rbp = nullptr
    rbx[7].d = i_5
    i_5 = 0
    int32_t var_40 = 0
    var_48 = 0
    *(rbx + 0x3c) = r13

int64_t* rsi_4 = rbp

if (i_5 != 0)
    int32_t i_2
    
    do
        sub_1405d1550(rsi_4)
        rsi_4 = &rsi_4[4]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

if (rbp != 0)
    sub_140a74f90(rbp)

sub_14081d930(&rbx[9], *arg3)
int32_t rdx_2 = 1 << (data_1439c7a34).b
int32_t i_4 = rdx_2 - 1

if (rdx_2 != 1)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_4)
    int32_t rcx_12 = temp0_1
    int32_t arg_18 = rcx_12
    int32_t i_3
    
    do
        *(zx.q(rcx_12) + rbx + 0x18) = 1
        i_3 = not.d(1 << rcx_12.b) & i_4
        i_4 = i_3
        
        if (i_3 != 0)
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_forward(i_3)
            rcx_12 = temp0_2
            int32_t arg_20 = rcx_12
        else
            rcx_12 = 0x20
    while (i_3 != 0)

*result = rbx
rbx[1].d += 1
return result

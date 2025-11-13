// 函数: sub_142280250
// 地址: 0x142280250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1

if (rbx == 0)
    return 

int512_t zmm1
zmm1.o = *(arg2 + 0x28)
(*(*rbx + 0x48))(rbx, zmm1)
zmm1.o = *(arg2 + 0x28)
(*(*rbx + 0x38))(rbx, zmm1)
zmm1.o = *(arg2 + 0x30)
(*(*rbx + 0x58))(rbx, zmm1)
char rcx_3

if (*(arg2 + 0x2d) == 0)
    int64_t* rax_4 = sub_142565030()
    void* rax_5 = rax_4[0x23]
    
    if (rax_5 == 0)
        int64_t rdx = *rax_4
        (*(rdx + 0x390))(rax_4, rdx)
        rax_5 = rax_4[0x23]
    
    rcx_3 = *(rax_5 + 0x94)
else
    rcx_3 = *(arg2 + 0x2c)

(*(*rbx + 0x80))(rbx, zx.q(rcx_3))
char rcx_6

if (*(arg2 + 0x35) == 0)
    int64_t* rax_7 = sub_142565030()
    void* rax_8 = rax_7[0x23]
    
    if (rax_8 == 0)
        int64_t rdx_2 = *rax_7
        (*(rdx_2 + 0x390))(rax_7, rdx_2)
        rax_8 = rax_7[0x23]
    
    rcx_6 = *(rax_8 + 0x95)
else
    rcx_6 = *(arg2 + 0x34)

(*(*rbx + 0x90))(rbx, zx.q(rcx_6))
int64_t rbp
rbp.b = 0
int32_t rdx_4 = data_143a2f318
int32_t rcx_10 = data_143a2f324 + 1
data_143a2f324 = rcx_10
int64_t rdi_3 = sx.q(rdx_4 - 1)

if (rdx_4 - 1 s>= 0)
    int64_t rbx_2 = rdi_3 << 4
    int64_t temp0_1
    
    do
        int64_t rcx_11 = data_143a2f310
        
        if (*(rbx_2 + rcx_11 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_12 = *(rbx_2 + rcx_11)
            
            if (rcx_12 == 0)
                rbp.b = 1
            else if ((*(*rcx_12 + 0x50))(rcx_12, arg2).b == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp0_1 = rdi_3
        rdi_3 -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_10 = data_143a2f324
    rdx_4 = data_143a2f318

data_143a2f324 = rcx_10 - 1

if (rbp.b == 0 || rcx_10 - 1 s> 0)
    return 

int32_t rbx_3 = 0
int32_t rsi_1 = rdx_4

if (rdx_4 s> 0)
    int64_t* rdi_4 = nullptr
    
    do
        int64_t rcx_14 = data_143a2f310
        
        if (*(rdi_4 + rcx_14 + 8) == 0)
            sub_1405a4880(&data_143a2f310, rbx_3, 1, 1)
        else
            int64_t* rcx_15 = *(rdi_4 + rcx_14)
            
            if (rcx_15 == 0)
                sub_1405a4880(&data_143a2f310, rbx_3, 1, 1)
            else if ((*(*rcx_15 + 0x20))(rcx_15) != 0)
                sub_1405a4880(&data_143a2f310, rbx_3, 1, 1)
            else
                rbx_3 += 1
                rdi_4 = &rdi_4[2]
        
        rdx_4 = data_143a2f318
    while (rbx_3 s< rdx_4)

int32_t rax = rdx_4 * 2

if (rax s<= 2)
    rax = 2

data_143a2f320 = rax

if (rsi_1 s> rax && data_143a2f31c != rdx_4)
    sub_1405a5410(&data_143a2f310, rdx_4)

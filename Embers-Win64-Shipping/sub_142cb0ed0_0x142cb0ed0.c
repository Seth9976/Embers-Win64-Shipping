// 函数: sub_142cb0ed0
// 地址: 0x142cb0ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t* rdi = data_14395f4b0
uint64_t r14_1 = sx.q(data_14395f4b8) << 3 u>> 3

if (rdi u> &rdi[sx.q(data_14395f4b8)])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            if (*rbx_1 != 0)
                sub_140b735a0(rbx_1, 0)
                sub_140b65ad0(rbx_1)
            
            sub_140596e10(&rbx_1[3])
            j_sub_140a74f90(rbx_1)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

bool cond:0 = data_14395f4bc == 0
data_14395f4b8 = 0

if (not(cond:0))
    sub_1405c5570(&data_14395f4b0, 0)

int64_t rcx_5 = data_14395f4b0

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = data_14395f4a0
data_14395f4a8 = 0

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_1405970f0(&data_14395f460)
int64_t rcx_7 = data_14395f450
data_14395f458 = 0

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_1405dee70(&data_14395f410)
return sub_140596e10(&data_14395f400) __tailcall

// 函数: sub_1429a6e80
// 地址: 0x1429a6e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_48 = -2
void* rbx = arg2
int64_t r9 = *arg1
int64_t rax_3
int64_t rdx_2
rdx_2:rax_3 = muls.dp.q(0x4924924924924925, arg1[1] - r9)
int64_t rdx_3 = rdx_2 s>> 4
int64_t rdx_4 = rdx_3 + (rdx_3 u>> 0x3f)

if (rdx_4 == 0x492492492492492)
    sub_14175ce00()
    noreturn

int64_t rax_6
int64_t rdx_5
rdx_5:rax_6 = muls.dp.q(0x4924924924924925, arg1[2] - r9)
int64_t rdx_6 = rdx_5 s>> 4
int64_t rdx_7 = rdx_6 + (rdx_6 u>> 0x3f)
uint64_t rax_10 = rdx_7 u>> 1
int64_t rsi

if (rdx_7 u<= 0x492492492492492 - rax_10)
    rsi = rax_10 + rdx_7
    
    if (rsi u< rdx_4 + 1)
        rsi = rdx_4 + 1
else
    rsi = rdx_4 + 1

int64_t arg_10 = rsi
void* rax_11 = sub_1429a8f90(arg1, rsi)
void* arg_20 = rax_11
int128_t* r12_3 = (arg2 - r9) s/ 0x38 * 0x38
*(r12_3 + rax_11) = *arg3
*(r12_3 + rax_11 + 0x10) = arg3[1]
*(r12_3 + rax_11 + 0x20) = arg3[2]
*(r12_3 + rax_11 + 0x30) = arg3[3].q
int64_t rcx_5 = arg1[1]
int128_t* rax_12 = *arg1

if (rbx != rcx_5)
    if (rax_12 != rbx)
        void* rcx_7 = rax_11 - rax_12
        
        do
            *(rax_12 + rcx_7) = *rax_12
            *(rax_12 + rcx_7 + 0x10) = rax_12[1]
            *(rax_12 + rcx_7 + 0x20) = rax_12[2]
            *(rax_12 + rcx_7 + 0x30) = rax_12[3].q
            rax_12 += 0x38
        while (rax_12 != rbx)
        
        rcx_5 = arg1[1]
    
    if (rbx != rcx_5)
        void* rax_15 = r12_3 + 0x38 + rax_11 - rbx
        
        do
            *(rbx + rax_15) = *rbx
            *(rbx + rax_15 + 0x10) = *(rbx + 0x10)
            *(rbx + rax_15 + 0x20) = *(rbx + 0x20)
            *(rbx + rax_15 + 0x30) = *(rbx + 0x30)
            rbx += 0x38
        while (rbx != rcx_5)
else if (rax_12 != rcx_5)
    void* rdx_10 = rax_11 - rax_12
    
    do
        *(rax_12 + rdx_10) = *rax_12
        *(rax_12 + rdx_10 + 0x10) = rax_12[1]
        *(rax_12 + rdx_10 + 0x20) = rax_12[2]
        *(rax_12 + rdx_10 + 0x30) = rax_12[3].q
        rax_12 += 0x38
    while (rax_12 != rcx_5)

void* r8_1 = *arg1

if (r8_1 != 0)
    int64_t rax_16
    int64_t rdx_11
    rdx_11:rax_16 = muls.dp.q(0x4924924924924925, arg1[2] - r8_1)
    int64_t rdx_12 = rdx_11 s>> 4
    
    if ((rdx_12 + (rdx_12 u>> 0x3f)) * 0x38 u>= 0x1000)
        void* rcx_10 = *(r8_1 - 8)
        
        if (r8_1 - rcx_10 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        r8_1 = rcx_10
    
    j_sub_140a74f90(r8_1)

*arg1 = rax_11
arg1[1] = (rdx_4 + 1) * 0x38 + rax_11
arg1[2] = rsi * 0x38 + rax_11
return *arg1 + r12_3

// 函数: sub_142985320
// 地址: 0x142985320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_48 = -2
int128_t* rbx = arg2
int64_t r9 = *arg1
int64_t rax_3
int64_t rdx_2
rdx_2:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - r9)
int64_t rdx_3 = rdx_2 s>> 3
int64_t rdx_4 = rdx_3 + (rdx_3 u>> 0x3f)

if (rdx_4 == 0x555555555555555)
    sub_14175ce00()
    noreturn

int64_t rax_6
int64_t rdx_5
rdx_5:rax_6 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r9)
int64_t rdx_6 = rdx_5 s>> 3
int64_t rdx_7 = rdx_6 + (rdx_6 u>> 0x3f)
uint64_t rax_10 = rdx_7 u>> 1
int64_t rsi

if (rdx_7 u<= 0x555555555555555 - rax_10)
    rsi = rax_10 + rdx_7
    
    if (rsi u< rdx_4 + 1)
        rsi = rdx_4 + 1
else
    rsi = rdx_4 + 1

int64_t arg_10 = rsi
int64_t rax_11 = public: struct `protected: int __cdecl GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo * __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo>::allocate(unsigned __int64)(
    arg1, rsi)
int64_t arg_20 = rax_11
int64_t r12_4 = (arg2 - r9) s/ 0x30 * 0x30
*(r12_4 + rax_11) = *arg3
*(r12_4 + rax_11 + 0x10) = arg3[1]
*(r12_4 + rax_11 + 0x20) = arg3[2]
int64_t rcx_5 = arg1[1]
int128_t* rax_12 = *arg1

if (rbx != rcx_5)
    if (rax_12 != rbx)
        void* rcx_7 = rax_11 - rax_12
        
        do
            *(rax_12 + rcx_7) = *rax_12
            *(rax_12 + rcx_7 + 0x10) = rax_12[1]
            *(rax_12 + rcx_7 + 0x20) = rax_12[2]
            rax_12 = &rax_12[3]
        while (rax_12 != rbx)
        
        rcx_5 = arg1[1]
    
    if (rbx != rcx_5)
        void* rax_15 = r12_4 + 0x30 + rax_11 - rbx
        
        do
            *(rbx + rax_15) = *rbx
            *(rbx + rax_15 + 0x10) = rbx[1]
            *(rbx + rax_15 + 0x20) = rbx[2]
            rbx = &rbx[3]
        while (rbx != rcx_5)
else if (rax_12 != rcx_5)
    void* rdx_10 = rax_11 - rax_12
    
    do
        *(rax_12 + rdx_10) = *rax_12
        *(rax_12 + rdx_10 + 0x10) = rax_12[1]
        *(rax_12 + rdx_10 + 0x20) = rax_12[2]
        rax_12 = &rax_12[3]
    while (rax_12 != rcx_5)

void* r8_1 = *arg1

if (r8_1 != 0)
    int64_t rax_16
    int64_t rdx_11
    rdx_11:rax_16 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r8_1)
    int64_t rdx_12 = rdx_11 s>> 3
    
    if ((rdx_12 + (rdx_12 u>> 0x3f)) * 0x30 u>= 0x1000)
        void* rcx_10 = *(r8_1 - 8)
        
        if (r8_1 - rcx_10 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        r8_1 = rcx_10
    
    j_sub_140a74f90(r8_1)

*arg1 = rax_11
arg1[1] = (rdx_4 + 1) * 0x30 + rax_11
arg1[2] = rsi * 0x30 + rax_11
return *arg1 + r12_4

// 函数: sub_14150b330
// 地址: 0x14150b330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
int32_t* r15 = nullptr
int32_t rsi = 0

if (arg1[0x6c] s<= 0)
    return 

EnterCriticalSection(&arg1[0x60])
void*** (* var_78)()
uint64_t rax

if (&var_78 == &arg1[0x6a])
    rax = zx.q(arg1[0x6d])
else
    r15 = *(arg1 + 0x1a8)
    rax = 0
    *(arg1 + 0x1a8) = 0
    rsi = arg1[0x6c]
    arg1[0x6d] = 0

arg1[0x6c] = 0

if (rax.d s<= 0xffffffff)
    sub_1405dadb0(&arg1[0x6a], 0)

if (arg1 != -0x180)
    LeaveCriticalSection(&arg1[0x60])

if (rsi s> 0)
    char arg_8
    char* var_70_1 = &arg_8
    var_78 = j_sub_140597fc0
    arg_8 = 0
    void* rax_1 = sub_140a756e0(&var_78, &data_143958018)
    int64_t* var_68 = rax_1 + 0x10
    int64_t rcx_4 = *(rax_1 + 0x10)
    int64_t rcx_5 = *(rax_1 + 0x20)
    char var_50_1 = 0
    uint64_t rcx_6 = *(rax_1 + 0x28)
    *(rax_1 + 0x28) = &var_68
    int64_t* rcx_7 = var_68
    rcx_7[4].d += 1
    char* rax_3 = sub_14081d830(0xa00c, rax_1 + 0x10, 1, 0)
    char* rbx_2 = rax_3
    
    if (rax_3 == 0)
        rbx_2 = nullptr
    else
        *rax_3 = 0
        *(rax_3 + 4) = 0
    
    if (*rbx_2 == 0)
        memset(&rbx_2[0xc], 0xff, 0x4000)
        *rbx_2 = 1
    
    int32_t* r14_1 = r15
    int64_t rsi_1 = 0
    void* rcx_9 = &r15[sx.q(rsi)]
    uint64_t rbp_4 = (rcx_9 - r15 + 3) u>> 2
    
    if (r15 u> rcx_9)
        rbp_4 = 0
    
    if (rbp_4 != 0)
        do
            sub_1414fd540(rbx_2, *r14_1, 0xffff)
            rsi_1 += 1
            r14_1 = &r14_1[1]
        while (rsi_1 != rbp_4)
    
    void* rax_5 = sub_14081d830(0xb038, rax_1 + 0x10, 1, 0)
    
    if (rax_5 != 0)
        rdi = sub_1414fa970(rax_5, rax_1)
    
    memset(rdi, 0xff, 0x800)
    memset(rdi + 0x2800, 0xff, 0x800)
    memset(rdi + 0x6e00, 0xff, 0x400)
    sub_141507bd0(arg1, rdi, rbx_2, *arg1, rax_1)
    void* rbx_3 = &arg1[2]
    int64_t i_1 = 0x10
    int64_t i
    
    do
        void* rcx_16 = *rbx_3
        
        if (rcx_16 != 0)
            arg5, arg4 = sub_1414fed20(rcx_16, arg2, arg5, arg4)
        
        rbx_3 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    sub_14151a4e0(arg1, arg2, arg3, rax_1, rdi, i_1.b)
    
    if (var_50_1 == i_1.b)
        int64_t* rax_7 = var_68
        char var_50_2 = 1
        rax_7[4].d -= 1
        int64_t* rcx_18 = var_68
        
        if (rcx_5 != rcx_18[2])
            sub_140b16b40(rcx_18, rcx_5)
            rcx_18 = var_68
        
        *rcx_18 = rcx_4
        var_68[3] = rcx_6

if (r15 != 0)
    sub_140a74f90(r15)

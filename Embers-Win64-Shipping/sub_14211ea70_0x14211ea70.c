// 函数: sub_14211ea70
// 地址: 0x14211ea70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t r14 = sx.q(arg3)
int32_t var_68

if ((arg1[4].b & 4) != 0)
    void* rbp_1 = arg1[1]
    void* const rsi_4
    
    if (rbp_1 != 0)
        EnterCriticalSection(&data_143f4ab20)
        sub_1421244c0(r14 * 0x50 + &data_143f4ab50, &var_68, rbp_1 + 0x40)
        int64_t rax_1 = sx.q(var_68)
        int64_t rax_2
        
        if (rax_1.d != 0xffffffff)
            rax_2 = rax_1 * 0x38
        
        if (rax_1.d == 0xffffffff || rax_2 == neg.q(*(r14 * 0x50 + &data_143f4ab50)))
            rsi_4 = nullptr
        else
            rsi_4 = *(rax_2 + *(r14 * 0x50 + &data_143f4ab50) + 0x28)
            
            if (rsi_4 != 0)
                EnterCriticalSection(&data_143f4ab20)
                *(rsi_4 + 0x74) += 1
                LeaveCriticalSection(&data_143f4ab20)
        
        LeaveCriticalSection(&data_143f4ab20)
    
    if (rbp_1 == 0 || rsi_4 == 0)
        void* rcx_3 = arg1[1]
        
        if (rcx_3 != 0)
            sub_14212f920(rcx_3, r14.d)
    else
        sub_142131920(arg1, rsi_4)
        sub_14212fcb0(rsi_4)

void* rax_5 = (*(*arg1 + 0x348))(arg1)
void* rax_6
int64_t rax_7
void* rdx_3

if (rax_5 != 0)
    rax_6 = sub_142543020()
    rdx_3 = *(rax_5 + 0x10)
    rax_7 = sx.q(*(rax_6 + 0x38))

char rax_10

if (rax_5 == 0 || rax_7.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
    rax_10 = (*(*arg1 + 0xc0))(arg1)

int64_t r15

if ((rax_5 != 0 && rax_7.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
        || rax_10 == 0)
    r14.b = 0
    r15.b = 1
else
    r14.b = 1
    r15.b = 0

void* rsi_6 = arg1[1]
int64_t* var_60
void* var_50

if (rsi_6 != 0)
    var_60 = arg1
    var_50 = rsi_6
    EnterCriticalSection(&data_143f4ab20)
    *(rsi_6 + 0x74) += 1
    LeaveCriticalSection(&data_143f4ab20)
    sub_1405e21c0(&data_143a2e820, &var_68, &var_50)
    int64_t rax_11 = sx.q(var_68)
    int64_t rcx_8
    int64_t* rbp_2
    
    if (rax_11.d != 0xffffffff)
        rcx_8 = rax_11 << 5
        rbp_2 = rcx_8 + data_143a2e820 + 8
    
    if (rax_11.d == 0xffffffff || rcx_8 == neg.q(data_143a2e820))
        rbp_2 = nullptr
    
    sub_14212fcb0(rsi_6)
    
    if (rbp_2 != 0)
        sub_1405a7050(rbp_2, &var_60)
        sub_142131920(arg1, nullptr)
        return 1
    
    int64_t* rsi_7 = arg1[1]
    
    if (rsi_7 != 0)
        if (r15.b != 0)
            return 1
        
        if (sub_14212d490(rsi_7, arg1) != 0)
            return 1

if (r14.b != 0)
    void* rax_14 = (*(*arg1 + 0x348))(arg1)
    int16_t* r14_1 = nullptr
    int16_t* rsi_8 = nullptr
    
    if (rax_14 != 0)
        int64_t* rax_15 = sub_140d21e10(rax_14, &var_60, 0)
        int32_t rbp_3 = 0
        
        if (&var_50 != rax_15)
            r14_1 = *rax_15
            *rax_15 = 0
            rsi_8 = r14_1
            rbp_3 = rax_15[1].d
            rax_15[1] = 0
            rdi = rbp_3
        
        int64_t* rcx_16 = var_60
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
            rdi = rbp_3
    
    int16_t* const rbp_4 = &data_142d40450
    int64_t r13_1 = arg1[1]
    int16_t* const r12_1 = &data_142d40450
    
    if (rdi != 0)
        r12_1 = rsi_8
    
    int64_t* rax_17 = (*(*arg1 + 0x298))(arg1, &var_60)
    int16_t* const r9_2
    
    if (rax_17[1].d == 0)
        r9_2 = &data_142d40450
    else
        r9_2 = *rax_17
    
    if (r15.b != 0)
        rbp_4 = u" assumes map complete"
    
    wchar16 const* const rcx_18 = u"null"
    int16_t* const var_70_1 = rbp_4
    
    if (r13_1 != 0)
        rcx_18 = &data_1432d7d70
    
    wchar16 const* const var_78_1 = rcx_18
    int32_t* const rax_19 = &data_142e5e440
    
    if ((arg1[4].b & 4) != 0)
        rax_19 = u"Contains"
    
    int32_t* const var_80_1 = rax_19
    int16_t* const var_88_1 = r12_1
    sub_140af98a0("Unknown", 0x713, 
        Failed to find shader map for default material %s(%s)! Please make sure cooking was successful ("
    " inline shaders, %s GTSM%s)", r9_2)
    int64_t* rcx_19 = var_60
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    sub_140afbb40()
    
    if (rsi_8 != 0)
        sub_140a74f90(r14_1)

sub_142131920(arg1, nullptr)
return 0

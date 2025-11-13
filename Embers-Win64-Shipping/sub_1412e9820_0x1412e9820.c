// 函数: sub_1412e9820
// 地址: 0x1412e9820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1412e9740(arg1)
int64_t* rcx = *(arg1 + 0x1b0)
*(arg1 + 0x1b0) = 0

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

int64_t* rcx_1 = *(arg1 + 0x30)

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 0)
    *(arg1 + 0x30) = 0

int64_t* rcx_2 = *(arg1 + 0x38)

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 0)
    *(arg1 + 0x38) = 0

if (arg1[0x73] s> 0)
    int32_t rdi_1 = *arg1
    int32_t rcx_3 = arg1[1]
    void* rbx_1 = *(arg1 + 8)
    
    if (arg1[0x72].b == 0)
        int32_t var_28 = rdi_1
        int32_t var_24_1 = rcx_3
        void* var_20_1 = rbx_1
        
        if (rbx_1 != 0)
            *(rbx_1 + 8) += 1
        
        sub_1412957f0(&data_1439b6580, &var_28)
    else
        int32_t var_48_1 = rdi_1
        int32_t rsi_1 = rcx_3
        void* const var_40 = rbx_1
        
        if (rbx_1 != 0)
            *(rbx_1 + 8) += 1
            rsi_1 = rcx_3
        
        if (data_143f02ba8 == 0)
            void*** rcx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_4 = &rcx_7[4]
            
            if (rax_4 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x28)
                rcx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_4 = &rcx_7[4]
            
            data_143f02bac += 1
            data_143f02bc8 = rax_4
            void**** rax_5 = data_143f02ba0
            var_40 = nullptr
            *rax_5 = rcx_7
            data_143f02ba0 = &rcx_7[1]
            rcx_7[1] = 0
            *rcx_7 = &data_142f52c70
            rcx_7[2].d = rdi_1
            *(rcx_7 + 0x14) = rsi_1
            rcx_7[3] = rbx_1
            sub_1405d1550(&var_40)
        else
            int32_t var_38 = rdi_1
            int32_t var_34_1 = rcx_3
            void* var_30_1 = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 8) += 1
            
            sub_1412957f0(&data_1439b6580, &var_38)
            sub_1405d1550(&var_40)

if (arg1[0x72].b == 0)
    sub_140a74f90(*(arg1 + 0x108))

arg1[0x72].b = 0
arg1[0x73] = 0
arg1[0x70] = 0

if (arg1[0x71] != 0)
    sub_1405947f0(&arg1[0x6e], 0)

*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
arg1[0x1a] = 0

if (arg1[0x1b] != 0)
    sub_141105150(&arg1[0x18], 0)

sub_141095f70(&arg1[0x28], 0)
arg1[0x2c] = 0
int32_t rbp = arg1[0x31]
int32_t rdi_2 = arg1[0x35]
int32_t rsi_2 = arg1[0x3d]
int32_t rbx_2 = arg1[0x39]
EnterCriticalSection(&data_143e8eab0)
data_143e8b088 += ((rbp << 5) + rbx_2 + rdi_2 + rsi_2) << 2
LeaveCriticalSection(&data_143e8eab0)
int32_t rdx_4 = 0
bool cond:0 = arg1[0x39] == 1
arg1[0x38] = 0

if (not(cond:0))
    sub_1405dadb0(&arg1[0x36], 1)
    rdx_4 = arg1[0x38]

arg1[0x38] = rdx_4 + 1

if (rdx_4 + 1 s> arg1[0x39])
    sub_1405a4cf0(&arg1[0x36])

bool cond:1 = arg1[0x3d] == 1
int32_t rsi_3 = 0
arg1[0x3c] = 0

if (not(cond:1))
    sub_1405dadb0(&arg1[0x3a], 1)
    rsi_3 = arg1[0x3c]

arg1[0x3c] = rsi_3 + 1

if (rsi_3 + 1 s> arg1[0x3d])
    sub_1405a4cf0(&arg1[0x3a])

*(*(arg1 + 0xe8) + (sx.q(rsi_3) << 2)) = 0x80000000
int64_t result = sub_1412687b0(&arg1[0x2e])
*(arg1 + 0xf8) = 0
arg1[0x1e] = 0

if (arg1[0x1f] != 0)
    result = sub_141105150(&arg1[0x1c], 0)

arg1[0x22] = 0

if (arg1[0x23] != 0)
    result = sub_1410b3aa0(&arg1[0x20], 0)

arg1[0x48] = 0

if (arg1[0x49] != 0)
    result = sub_141105150(&arg1[0x46], 0)

arg1[0x44] = 0
*(arg1 + 0x108) = 0
return result

// 函数: sub_14236f4a0
// 地址: 0x14236f4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int32_t rax_2 = *(arg4 + 0x668)
int64_t rsi = arg3
int64_t var_230 = arg3
void* const rcx_3

if (rax_2 == *(arg4 + 0x694))
label_14236f550:
    rcx_3 = nullptr
else
    void* r8 = *(arg4 + 0x6a0)
    void* r9 = arg4 + 0x698
    
    if (r8 != 0)
        r9 = r8
    
    int32_t rax_7 =
        *(r9 + ((sx.q((rsi u>> 0x20).d * 0x17 + rsi.d) & (sx.q(*(arg4 + 0x6a8)) - 1)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_14236f550_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg4 + 0x660)
        
        while (true)
            int64_t rdx_2 = sx.q(rax_7) * 3
            rcx_3 = r8_1 + (rdx_2 << 3)
            
            if (*(r8_1 + (rdx_2 << 3)) == rsi)
                break
            
            rax_7 = *(rcx_3 + 0x10)
            
            if (rax_7 == 0xffffffff)
                goto label_14236f550_2
        
        if (rax_7 == 0xffffffff)
        label_14236f550_2:
            rcx_3 = nullptr

void* rax_8 = rcx_3 + 8

if (rcx_3 == 0)
    rax_8 = nullptr

int32_t result
int32_t rcx_6
void* rdx_6
int32_t* r8_3

if (rax_8 != 0)
    int64_t rcx_7 = sx.q(*rax_8)
    r8_3 = *(arg4 + 0x6b0)
    result = (rcx_7 + 4).d
    rdx_6 = r8_3 + rcx_7
    rcx_6 = *(r8_3 + rcx_7)
else
    int64_t rsi_1 = sx.q(*(arg4 + 0x6b8))
    int32_t rax_9 = (rsi_1 + 8).d
    *(arg4 + 0x6b8) = rax_9
    
    if (rax_9 s> *(arg4 + 0x6bc))
        sub_1405daba0(arg4 + 0x6b0)
    
    int32_t var_238 = rsi_1.d
    *(rsi_1 + *(arg4 + 0x6b0)) = 0
    sub_141cf16a0(arg4 + 0x660, &var_230, &var_238)
    int64_t rax_12 = sx.q(var_238)
    rcx_6 = 1
    rsi = var_230
    rdx_6 = rax_12 + *(arg4 + 0x6b0)
    result = rax_12.d + 4
    *rdx_6 = 1
    r8_3 = *(arg4 + 0x6b0)

void* rbx_2 = sx.q(result) + r8_3

if (rcx_6 != 0)
    *rbx_2 = 0
    *rdx_6 = 0

if ((*(arg1 + 0x4c) & 1) != 0 || *(arg4 + 0x180) s>= 0)
    void var_228
    sub_14234f710(&var_228, arg5)
    sub_141e54560(&var_228, arg1)
    char var_64
    char var_64_1 = var_64 | 0x40
    sub_14236d8f0(arg1, arg2, rsi, arg4, &var_228, arg6)
    
    if ((*(arg4 + 0x180) & 0x10) != 0 && ((*(arg1 + 0x4c) & 1) != 0 || *rbx_2 s< arg1[9].d))
        sub_142373dd0(arg1, rsi, arg4)
        *(arg4 + 0x180) &= 0xef
    
    result = sub_142351ee0(&var_228)

__security_check_cookie(rax_1 ^ &var_268)
return result

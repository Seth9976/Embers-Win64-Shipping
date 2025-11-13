// 函数: sub_142ae6110
// 地址: 0x142ae6110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
uint32_t i
uint32_t rdx

if (*(arg1 + 0x148) != 0)
    int64_t* rbx_1 = *(arg1 + 0x148)
    int64_t rax_3 = (*(*arg2 + 0xb0))(arg2)
    char* rax_5 = (*(*rbx_1 + 0xb0))(rbx_1)
    void* rsi_2 = rax_3 - rax_5
    
    do
        rdx = zx.d(*rax_5)
        i = zx.d(*(rax_5 + rsi_2))
        
        if (rdx != i)
            break
        
        rax_5 = &rax_5[1]
    while (i != 0)

if (*(arg1 + 0x148) == 0 || rdx - i != 0)
    bool cond:1_1 = *(arg1 + 0x16c) == 0xffffffff
    int32_t var_78[0x4]
    var_78[0] = 0
    
    if (not(cond:1_1) && *(arg1 + 0x168) != 0xffffffff)
        int64_t* rcx_2 = *(arg1 + 0x160)
        
        if (rcx_2 != 0)
            (**rcx_2)(rcx_2, 1)
        
        *(arg1 + 0x160) = sub_142ae68f0(arg1, arg2, arg1 + 0x170, &var_78)

int64_t* rcx_4 = *(arg1 + 0x148)

if (rcx_4 != 0)
    (**rcx_4)(rcx_4, 1)

*(arg1 + 0x148) = arg2
void* rax_9 = Concurrency::details::UMSFreeThreadProxy::GetContext(arg2)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
sub_142a48050(arg1 + 0x250, sub_142ae6b60(arg1, &var_68, *(arg1 + 0x290), rax_9))
sub_142a47ff0(&var_68)
__security_check_cookie(rax_1 ^ &var_98)
return &icu_64::UObject::`vftable'

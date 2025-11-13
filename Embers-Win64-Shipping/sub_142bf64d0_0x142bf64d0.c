// 函数: sub_142bf64d0
// 地址: 0x142bf64d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t _Count_1 = arg4
EnterCriticalSection(arg2)
void* rbp = arg2->__offset(0x28).q
char* _Source = arg3
char var_b8[0x80]

if (_Count_1 s>= 0)
    if (_Count_1 s>= 0x7f)
        _Count_1 = 0x7f
    
    int64_t _Count = sx.q(_Count_1)
    strncpy(&var_b8, _Source, _Count)
    
    if (_Count u>= 0x80)
        __report_rangecheckfailure()
        noreturn
    
    var_b8[_Count] = 0
    _Source = &var_b8

int32_t rax_2 = sub_142b92380(rbp, _Source)
*arg5 = rax_2
bool cond:0 = rax_2 != 0

if (rax_2 != 0)
    goto label_142bf65fd

bool cond:1_1

if (sub_142b92050(rbp, 0, &var_b8, 0x80) != 0 || _Count_1 s>= 0)
    cond:1_1 = strncmp(&var_b8, arg3, sx.q(_Count_1)) == 0
else
    void* rax_4 = &var_b8
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*rax_4)
        i = zx.d(*(rax_4 + arg3 - &var_b8))
        
        if (rdx != i)
            break
        
        rax_4 += 1
    while (i != 0)
    
    cond:1_1 = rdx - i == 0

int32_t rcx_5
rcx_5.b = cond:1_1
uint64_t result

if (rcx_5 == 0)
    cond:0 = *arg5 != 0
label_142bf65fd:
    int32_t result_1
    result_1.b = cond:0
    LeaveCriticalSection(arg2)
    result = zx.q(result_1)
else
    LeaveCriticalSection(arg2)
    result = 1

__security_check_cookie(rax_1 ^ &var_d8)
return result

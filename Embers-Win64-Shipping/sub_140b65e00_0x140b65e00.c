// 函数: sub_140b65e00
// 地址: 0x140b65e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* lpParameter = arg1

if (data_143e19e28 == 0)
    data_143e19e28 = 1
    SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_ABOVE_NORMAL)

arg1.b = 1
lpParameter[5] = arg6
lpParameter[3] = arg2
lpParameter[4] = sub_140a491d0(arg1.b)
wchar16 const* const rsi_1 = u"Unnamed UE4"

if (arg3 != 0)
    rsi_1 = arg3

if (lpParameter[1] != rsi_1)
    int32_t rbx_2
    
    if (rsi_1 == 0 || *rsi_1 == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rsi_1[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    int32_t rdx = 0
    lpParameter[2].d = 0
    
    if (*(lpParameter + 0x14) != rbx_2)
        sub_1405947f0(&lpParameter[1], rbx_2)
        rdx = lpParameter[2].d
    
    int32_t rax_4 = rdx + rbx_2
    lpParameter[2].d = rax_4
    
    if (rax_4 s> *(lpParameter + 0x14))
        sub_140594770(&lpParameter[1])
    
    if (rbx_2 != 0)
        memcpy(lpParameter[1], rsi_1, rbx_2 * 2)

HANDLE rax_5 = CreateThread(nullptr, zx.q(arg4), j_sub_140b6d530, lpParameter, 
    THREAD_CREATE_SUSPENDED | STACK_SIZE_PARAM_IS_A_RESERVATION, lpParameter + 0x44)
lpParameter[9] = rax_5

if (rax_5 != 0)
    sub_140a755d0()
    sub_140a693d0(&data_143db7b50, *(lpParameter + 0x44), lpParameter)
    ResumeThread(lpParameter[9])
    int64_t* rcx_5 = lpParameter[4]
    (*(*rcx_5 + 0x20))(rcx_5, 0xffffffff, 0)
    (**lpParameter)(lpParameter, zx.q(arg5))
else
    lpParameter[3] = rax_5

sub_140a4fc50(lpParameter[4])
int64_t result
result.b = lpParameter[9] != 0
lpParameter[4] = 0
return result

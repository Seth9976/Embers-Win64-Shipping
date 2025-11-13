// 函数: sub_141c69e10
// 地址: 0x141c69e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi_1 = sx.q(arg3) * 2
int32_t r14_1 = *(arg1 + 0x74) << 0xd
uint64_t* rcx = *(*(arg1 + 0x28) + (rdi_1 << 3))
rcx[1].d = 0

if (*(rcx + 0xc) s<= 0xffffffff)
    sub_140775b10(rcx, 0)

int64_t* rbx = *(*(arg1 + 0x28) + (rdi_1 << 3))
int64_t r15 = sx.q(rbx[1].d)
int32_t rax_2 = r15.d + r14_1
rbx[1].d = rax_2

if (rax_2 s> *(rbx + 0xc))
    sub_140775270(rbx)

memset(*rbx + (r15 << 2), 0, sx.q(r14_1) << 2)
int32_t rbp = *(arg1 + 0xe0)

if ((rbp.b & 0x20) != 0)
    BOOL rax_4
    rax_4.b = TryEnterCriticalSection(arg1 + 0x90) != 0
    CRITICAL_SECTION* lpCriticalSection = nullptr
    
    if (rax_4.b != 0)
        lpCriticalSection = arg1 + 0x90
    
    int64_t rax_5
    
    if (lpCriticalSection != 0)
        rax_5 = *(arg1 + 0x58)
    
    void* rbx_1
    
    if (lpCriticalSection == 0 || rax_5 == 0)
        rbx_1.b = 1
    else
        int32_t var_40
        var_40.b = 0
        int64_t var_50_1 = **(*(arg1 + 0x28) + (rdi_1 << 3))
        int32_t var_44_1 = *(arg1 + 0x74)
        void*** rax_9 = j_sub_140a82f30(0x10)
        
        if (rax_9 == 0)
            *(arg1 + 0x60) = 0
            rbx_1.b = 0
        else
            rax_9[1] = 0
            *rax_9 = &data_143209f90
            void* rax_10 = j_sub_140a82f30(0x90)
            rbx_1 = rax_10
            
            if (rax_10 == 0)
                rbx_1 = nullptr
            else
                *rbx_1 = &data_143209f40
                __builtin_memset(rbx_1 + 8, 0, 0x20)
                *(rbx_1 + 0x28) = 4
                *(rbx_1 + 0x30) = 0
                *(rbx_1 + 0x38) = 0
                *(rbx_1 + 0x3a) = 0
                *(rbx_1 + 0x40) = 0
                *(rbx_1 + 0x48) = rax_5.o
                *(rbx_1 + 0x58) = r14_1.o
                *(rbx_1 + 0x68) = 0
                *(rbx_1 + 0x70) = 0
                *(rbx_1 + 0x78) = 0
                *(rbx_1 + 0x80) = 0
                *(rbx_1 + 0x88) = 0
            
            rax_9[1] = rbx_1
            
            if (data_143f34d94 != 0)
                *(rbx_1 + 0x78) += 1
                int64_t* rcx_6 = *(rbx_1 + 0x80)
                *(rbx_1 + 0x88) = 0
                sub_140a4fc50(rcx_6)
                *(rbx_1 + 0x80) = 0
                sub_141c5a860(rbx_1 + 8)
                *(rbx_1 + 0x78) -= 1
                rbx_1.b = 0
                *(arg1 + 0x60) = rax_9
            else
                sub_141c70450(rbx_1, data_143db7ac8)
                rbx_1.b = 0
                *(arg1 + 0x60) = rax_9
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    return zx.q(rbx_1.b)

int32_t rdx_2 = *(arg1 + 0x78)
int64_t rax_12 = *(arg1 + 0x28)

if (rdx_2 - 2 u> 1)
    return sub_141c5e3a0(arg1 + 0x10, *(rax_12 + (rdi_1 << 3)), r14_1)

bool cond:2_1 = *(arg1 + 0x70) != 0
int64_t var_50_2 = arg2
int64_t rax_13 = **(rax_12 + (rdi_1 << 3))
bool var_37_1 = arg4 == 1
int32_t var_44_2 = *(arg1 + 0x74)
uint8_t rbp_1 = (rbp u>> 7).b & 1
int32_t var_3c_1 = 0x2000
uint8_t var_36_1 = rbp_1
int32_t var_40_1 = *(arg1 + 0x7c)
EnterCriticalSection(arg1 + 0xb8)
uint64_t result = j_sub_140a82f30(0x10)
uint64_t result_1 = result

if (result == 0)
    result_1 = 0
else
    *(result + 8) = 0
    *result_1 = &data_143209fc8
    void*** rax_16 = j_sub_140a82f30(0x90)
    void*** rdi_4 = rax_16
    
    if (rax_16 == 0)
        rdi_4 = nullptr
    else
        *rdi_4 = &data_143209f40
        rdi_4[1] = 0
        rdi_4[2] = 0
        *(rdi_4 + 0x18) = rax_13.o
        *(rdi_4 + 0x28) = rdx_2.o
        rdi_4[7] = cond:2_1.q
        rdi_4[8].b = 0
        __builtin_memset(&rdi_4[9], 0, 0x19)
        rdi_4[0xd].d = 0
        *(rdi_4 + 0x6c) = 2
        rdi_4[0xe].d = 0
        rdi_4[0xf].d = 0
        rdi_4[0x10] = 0
        rdi_4[0x11] = 0
    
    *(result_1 + 8) = rdi_4
    
    if (data_143f34d94 != 0 || rbp_1 != 0)
        rdi_4[0xf].d += 1
        int64_t* rcx_13 = rdi_4[0x10]
        rdi_4[0x11] = 0
        sub_140a4fc50(rcx_13)
        rdi_4[0x10] = 0
        sub_141c5a860(&rdi_4[1])
        rdi_4[0xf].d -= 1
    else
        char rax_17 = sub_141e6c050()
        int64_t rdx_4 = data_143db7ac8
        
        if (rax_17 != 0)
            rdx_4 = data_143db7ad8
        
        sub_141c70450(*(result_1 + 8), rdx_4)

*(arg1 + 0x60) = result_1

if (arg1 != -0xb8)
    LeaveCriticalSection(arg1 + 0xb8)

result.b = 0
return result

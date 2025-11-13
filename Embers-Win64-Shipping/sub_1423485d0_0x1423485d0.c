// 函数: sub_1423485d0
// 地址: 0x1423485d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void*** rax_1 = j_sub_140a82f30(0xe0)
int32_t rsi_1 = 0
void*** rdi_2

if (rax_1 == 0)
    rdi_2 = nullptr
else
    rdi_2 = sub_142329640(rax_1, arg3, arg1[8], arg2, arg4, arg5)

void* rcx_1 = arg3[0x7d]
int32_t r14_3 = data_14399fa50 + 1

if (rcx_1 != 0)
    int64_t* rcx_2 = *(rcx_1 + 0x108)
    r14_3 = (*(*rcx_2 + 0x2c8))(rcx_2) + 1
    void* rax_5 = sub_140d3c6e0(&arg3[0x87])
    
    if (rax_5 == 0)
        rsi_1 = arg3[0x93].d
    else
        rsi_1 = *(rax_5 + 0x498)

int32_t var_48_1 = r14_3
int32_t var_44_1 = rsi_1
char rax_6
int64_t r8_1
rax_6, r8_1 = sub_140a80f40()

if (rax_6 != 0)
    int64_t* rcx_4 = arg1[0x10]
    
    if (rcx_4 != 0)
        (**rcx_4)(rcx_4, 1)
    
    int64_t rax_8 = *arg1
    r8_1.b = 1
    arg1[0x10] = rdi_2
    rdi_2[0xc].d
    jump(*(rax_8 + 0x38))

if (data_143f138f4 == 0)
    uint32_t rax_9
    
    if (data_143de5480 != 0)
        rax_9, r8_1 = GetCurrentThreadId()
        rax_9.b = rax_9 == data_143de5470
    
    if (data_143de5480 == 0 || rax_9.b != 0)
        int64_t* rcx_6 = arg1[0x10]
        
        if (rcx_6 != 0)
            (**rcx_6)(rcx_6, 1)
        
        int64_t rax_11 = *arg1
        r8_1.b = 1
        arg1[0x10] = rdi_2
        rdi_2[0xc].d
        jump(*(rax_11 + 0x38))

void var_38
void** rax_12 = sub_1423332a0(&var_38, nullptr, 0xff)
void* rcx_9 = *rax_12
*(rcx_9 + 0x10) = arg1.o
*(rcx_9 + 0x20) = rdi_2
void* rcx_10 = *rax_12
int32_t r8_2 = rax_12[2].d
int64_t* rdx_3 = rax_12[1]
int64_t* rbx_2 = *(rcx_10 + 0x30)
int64_t* var_58_1 = rbx_2
int32_t* rdi_3 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_3 += 1
    rbx_2 = var_58_1

sub_140778000(rcx_10, rdx_3, r8_2, 1)

if (rbx_2 == 0)
    return 

int32_t rax = *rdi_3
*rdi_3 -= 1

if (rax == 1)
    sub_140a2f6e0(var_58_1)

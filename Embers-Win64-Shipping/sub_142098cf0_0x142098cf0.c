// 函数: sub_142098cf0
// 地址: 0x142098cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1[5] + 8) s> 0)
    do
        void*** rax_1 = j_sub_140a82f30(0x360)
        void*** rbx_1 = rax_1
        
        if (rax_1 == 0)
            rbx_1 = nullptr
        else
            rbx_1[1].d = 0xffffffff
            *(rbx_1 + 0xc) = (arg1[6].d).b
            rbx_1[0x12] = 0
            rbx_1[0x13].d = 0
            *(rbx_1 + 0x9c) = 8
            rbx_1[0x14].d = 0xffff0101
            *(rbx_1 + 0xa4) = 0xff
            rbx_1[0x19] = 0
            rbx_1[0x1a].d = 0
            *(rbx_1 + 0xd4) = 2
            rbx_1[0x21] = 0
            rbx_1[0x22].d = 0
            *(rbx_1 + 0x114) = 3
            __builtin_memset(&rbx_1[0x23], 0, 0x48)
            rbx_1[0x34].d = 0
            *(rbx_1 + 0x1a4) = 4
            __builtin_memset(&rbx_1[0x35], 0, 0x40)
            rbx_1[0x3d] = -1
            rbx_1[0x3e].d = 0xffffffff
            __builtin_memset(rbx_1 + 0x1f4, 0, 0x14)
            rbx_1[0x41].d = 0xffffffff
            *rbx_1 = &data_1432afad0
            sub_142076980(&rbx_1[0x42])
            rbx_1[0x6b] = 0
        
        int64_t rbp_1 = sx.q(arg1[4].d)
        int32_t rax_3 = (rbp_1 + 1).d
        arg1[4].d = rax_3
        
        if (rax_3 s> *(arg1 + 0x24))
            sub_140638870(&arg1[3])
        
        i += 1
        *(arg1[3] + (rbp_1 << 3)) = rbx_1
    while (i s< *(arg1[5] + 8))

void* rax_6 = *arg1
int64_t* var_78 = arg1
int32_t var_70 = *(*(rax_6 + 0x440) + 0x80)

if (sub_140a80f40() != 0)
    return sub_14207a140(&var_78)

if (data_143f138f4 == 0)
    uint32_t rax_10
    
    if (data_143de5480 != 0)
        rax_10.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_10.b != 0)
        int128_t var_68 = var_78.o
        return sub_14207a140(&var_68)

void var_58
int64_t* rax_12 = sub_1420856e0(&var_58, nullptr, 0xff)
*(*rax_12 + 0x10) = var_78.o
void* rcx_7 = *rax_12
int32_t r8 = rax_12[2].d
int64_t* rdx_4 = rax_12[1]
int64_t* rbx_2 = *(rcx_7 + 0x28)
int64_t* arg_10 = rbx_2
int32_t* rdi = &rbx_2[9]

if (rbx_2 != 0)
    *rdi += 1
    rbx_2 = arg_10

int64_t* result = sub_1405e48c0(rcx_7, rdx_4, r8, 1)

if (rbx_2 != 0)
    int32_t rsi_1 = *rdi
    *rdi -= 1
    
    if (rsi_1 == 1)
        return sub_140a2f6e0(arg_10)

return result

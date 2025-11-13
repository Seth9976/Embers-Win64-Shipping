// 函数: sub_14228ed90
// 地址: 0x14228ed90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int128_t var_48 = *arg4
int64_t* rax = sub_1420fa3a0(arg3, &var_48)

if (rax == 0 || *rax == 0 || arg2 == 0)
    return 

arg1[1].b = 1
int64_t* var_30_1 = rax
char rax_1 = sub_140a80f40()

if (rax_1 != 0)
label_14228ee26:
    *arg1 = rax
    int64_t rdx_1 = 0xc0
    
    if (sub_1423d2320(arg2[1].d) != 0)
        rdx_1 = 0x20
    
    arg1[2] = *arg1 + rdx_1
else
    if (data_143f138f4 == rax_1)
        if (data_143de5480 == rax_1)
            goto label_14228ee26
        
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b != 0)
            goto label_14228ee26
    
    void var_20
    void** rax_5 = sub_142297130(&var_20, nullptr, 0xff)
    void* rcx_4 = *rax_5
    *(rcx_4 + 0x10) = arg1.o
    *(rcx_4 + 0x20) = arg2
    void* rcx_5 = *rax_5
    int32_t r8 = rax_5[2].d
    int64_t* rdx_2 = rax_5[1]
    int64_t* rbx_2 = *(rcx_5 + 0x30)
    int64_t* var_58_1 = rbx_2
    int32_t* rsi_1 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rsi_1 += 1
        rbx_2 = var_58_1
    
    sub_140778000(rcx_5, rdx_2, r8, 1)
    
    if (rbx_2 != 0)
        int32_t rax_6 = *rsi_1
        *rsi_1 -= 1
        
        if (rax_6 == 1)
            sub_140a2f6e0(var_58_1)

(*(*arg2 + 0x118))(arg2, arg1)

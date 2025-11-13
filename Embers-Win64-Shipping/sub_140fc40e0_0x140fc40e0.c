// 函数: sub_140fc40e0
// 地址: 0x140fc40e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10
sub_140b58260(&arg_10, u"WINDOWS", 1)
void*** rdi = data_143e2b840

if (rdi == 0)
    void*** rax_1 = j_sub_140a82f30(0x88)
    rdi = rax_1
    
    if (rax_1 == 0)
        rdi = nullptr
        data_143e2b840 = 0
    else
        *rdi = &data_142ef1ae8
        InitializeCriticalSection(&rdi[1])
        SetCriticalSectionSpinCount(&rdi[1], 0xfa0)
        rdi[6] = 0
        void* rcx_3 = &rdi[8]
        rdi[7] = 0
        *(rcx_3 + 0x10) = 0
        *(rcx_3 + 0x18) = 0
        *(rcx_3 + 0x1c) = 0x80
        void* rax_2 = *(rcx_3 + 0x10)
        
        if (rax_2 != 0)
            rcx_3 = rax_2
        
        *rcx_3 = 0
        *(rcx_3 + 8) = 0
        rdi[0xc].d = 0xffffffff
        *(rdi + 0x64) = 0
        rdi[0xe] = 0
        rdi[0xf].d = 0
        *rdi = &data_142ef26a0
        rdi[0x10].b = 0
        data_143e2b840 = rdi

int64_t var_28 = 0
int64_t var_20 = 0

if ((*rdi)[1](rdi, &var_28) != 0)
    int64_t result = (*(*arg1 + 0x50))(arg1, arg_10, rdi, 0)
    int64_t rcx_6 = var_28
    int64_t rbx = arg_10
    
    if (rcx_6 != 0)
        result = sub_140a74f90(rcx_6)
    
    arg1[1] = rbx
    return result

int64_t* rcx_7 = data_143e2b840

if (rcx_7 != 0)
    (*(*rcx_7 + 0x10))(rcx_7)
    int64_t* rcx_8 = data_143e2b840
    
    if (rcx_8 != 0)
        (**rcx_8)(rcx_8, 1)
    
    data_143e2b840 = 0

int64_t rcx_9 = var_28

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

arg1[1] = 0
return 0

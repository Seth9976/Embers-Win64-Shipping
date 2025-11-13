// 函数: sub_141d986c0
// 地址: 0x141d986c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int64_t* rcx_1 = *arg1 + 0x380
rcx_1[1].d = 0

if (*(rcx_1 + 0xc) != 0)
    sub_1405c5510(rcx_1, 0)

*(*arg1 + 0x390) = 0
int64_t* rcx_2 = *arg1

if ((*(*rcx_2 + 0x78))(rcx_2, 0, zx.q(rcx_2[0x2f].d)) == 0)
    int64_t* rcx_4 = *arg1 + 0x2d8
    rcx_4[1].d = 0
    
    if (*(rcx_4 + 0xc) != 0)
        sub_1405c5510(rcx_4, 0)
    
    *arg1
    int64_t arg_8 = 0
    __builtin_memset(*arg1 + 0x148, 0, 0x14)
    *arg1
    *(*arg1 + 0x160) = 0
    int64_t* rcx_6 = *arg1
    (*(*rcx_6 + 0x70))(rcx_6, 0, zx.q(rcx_6[0x2f].d))

*(*arg1 + 0x2e8) = 0
*(*arg1 + 0x2ec) = 0
void** const var_28 = &data_142fc8f88
void* result = *arg1
int64_t var_18 = *(result + 0x178)
int32_t var_20 = 0
int64_t var_10 = -1

if (arg1[2].d != 0)
    int64_t* rcx_8 = arg1[1]
    
    if (rcx_8 != 0)
        if ((*(*rcx_8 + 0x28))(rcx_8) != 0)
            if (arg1[2].d != 0)
                rdi = arg1[1]
            
            (*(*rdi + 0x50))(rdi, &var_28)
        
        result = *arg1

*(result + 0x178) = -1
return result

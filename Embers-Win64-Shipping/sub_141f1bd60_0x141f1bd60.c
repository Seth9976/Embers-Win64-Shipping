// 函数: sub_141f1bd60
// 地址: 0x141f1bd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t result_1 = 0
int32_t var_20 = 0
int64_t result = (*(rax + 0x680))(arg1, &result_1, 0)
int32_t rsi = 0
uint64_t var_38 = 0
int64_t var_30 = 0

if (var_20 s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        result = result_1
        
        if (*(rdi_1 + result) != 0)
            void* rbx_1 = arg1[0x15]
            
            if (rbx_1 == 0)
                rbx_1 = sub_141ee69e0(arg1)
            
            var_30.d = 0
            
            if (var_30:4.d s< 0)
                sub_1405c5570(&var_38, 0)
            
            uint32_t rdx_1
            
            if (rbx_1 == 0)
                rdx_1 = data_1439c7a08
            else
                rdx_1 = zx.d(*(rbx_1 + 0x118))
            
            int64_t* rcx_2 = *(rdi_1 + result_1)
            result = (*(*rcx_2 + 0x2a0))(rcx_2, &var_38, zx.q(arg3), 0, rdx_1, 0)
            int32_t i = 0
            
            if (var_30.d s> 0)
                do
                    result = sub_1405a7050(arg2, var_38 + (sx.q(i) << 3))
                    i += 1
                while (i s< var_30.d)
        
        rsi += 1
        rdi_1 = &rdi_1[1]
    while (rsi s< var_20)
    
    uint64_t rcx_5 = var_38
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)

int64_t result_2 = result_1

if (result_2 == 0)
    return result

return sub_140a74f90(result_2)
